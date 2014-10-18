<?php
/**
 * @file
 * odyl_core.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function odyl_core_default_rules_configuration() {
  $items = array();
  $items['rules_email_notification_when_new_users_register'] = entity_import('rules_config', '{ "rules_email_notification_when_new_users_register" : {
      "LABEL" : "Email notification when new users register",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "New user : [account:name]",
            "message" : "New user : [account:name]"
          }
        }
      ]
    }
  }');
  $items['rules_send_an_email_to_author_when_node_is_published'] = entity_import('rules_config', '{ "rules_send_an_email_to_author_when_node_is_published" : {
      "LABEL" : "Send an email to author when node is published",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "IF" : [
        { "node_is_published" : { "node" : [ "node" ] } },
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "one_day" : "one_day" } } } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "Your \\u0022One Day In Your Life\\u0022 [node:title] has been published :)",
            "message" : "Hello\\r\\n\\r\\nA quick email to let you know that your \\u0022One Day In Your Life\\u0022 has been published\\r\\n\\r\\nYou can find it at the following link : [node:url]\\r\\n\\r\\nEnjoy, ahd share the word!!\\r\\nBest",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_an_email_to_moderators_when_content_is_created'] = entity_import('rules_config', '{ "rules_send_an_email_to_moderators_when_content_is_created" : {
      "LABEL" : "Send an email to moderators when content is created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "one_day" : "one_day" } } } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "A new day \\u0022[node:title]\\u0022 has been created! Please moderate it!",
            "message" : "A New day has been created : \\r\\n\\r\\nTitle : [node:title]\\r\\nLink : [node:url]\\r\\nUser : [node:author]\\r\\n\\r\\nPlease moderate it : [node:edit-url]"
          }
        }
      ]
    }
  }');
  return $items;
}
