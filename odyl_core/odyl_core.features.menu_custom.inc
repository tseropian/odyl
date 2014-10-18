<?php
/**
 * @file
 * odyl_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function odyl_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-footer-networking.
  $menus['menu-footer-networking'] = array(
    'menu_name' => 'menu-footer-networking',
    'title' => 'Networking',
    'description' => '',
  );
  // Exported menu: menu-odyl-likes.
  $menus['menu-odyl-likes'] = array(
    'menu_name' => 'menu-odyl-likes',
    'title' => 'Odyl likes',
    'description' => '',
  );
  // Exported menu: menu-powered-by.
  $menus['menu-powered-by'] = array(
    'menu_name' => 'menu-powered-by',
    'title' => 'Powered by',
    'description' => '',
  );
  // Exported menu: menu-sidebar.
  $menus['menu-sidebar'] = array(
    'menu_name' => 'menu-sidebar',
    'title' => 'Sidebar',
    'description' => '',
  );
  // Exported menu: menu-the-project.
  $menus['menu-the-project'] = array(
    'menu_name' => 'menu-the-project',
    'title' => 'The project',
    'description' => '',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Features');
  t('Main menu');
  t('Management');
  t('Menu items for any enabled features.');
  t('Navigation');
  t('Networking');
  t('Odyl likes');
  t('Powered by');
  t('Sidebar');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('The project');
  t('User menu');


  return $menus;
}
