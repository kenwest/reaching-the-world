<?php
/**
 * @file
 * reaching_the_world.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function reaching_the_world_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-reaching-city-footer-naviga.
  $menus['menu-reaching-city-footer-naviga'] = array(
    'menu_name' => 'menu-reaching-city-footer-naviga',
    'title' => 'reaching.city footer navigation',
    'description' => '',
  );
  // Exported menu: menu-reaching-city-main-menu.
  $menus['menu-reaching-city-main-menu'] = array(
    'menu_name' => 'menu-reaching-city-main-menu',
    'title' => 'reaching.city main menu',
    'description' => '',
  );
  // Exported menu: menu-reaching-city-other-sites.
  $menus['menu-reaching-city-other-sites'] = array(
    'menu_name' => 'menu-reaching-city-other-sites',
    'title' => 'reaching.city our websites',
    'description' => '',
  );
  // Exported menu: menu-reaching-city-secondary-men.
  $menus['menu-reaching-city-secondary-men'] = array(
    'menu_name' => 'menu-reaching-city-secondary-men',
    'title' => 'reaching.city secondary menu',
    'description' => '',
  );
  // Exported menu: menu-reaching-city-top-menu.
  $menus['menu-reaching-city-top-menu'] = array(
    'menu_name' => 'menu-reaching-city-top-menu',
    'title' => 'reaching.city top menu',
    'description' => 'Sits at the top of every page',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Management');
  t('Sits at the top of every page');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('reaching.city footer navigation');
  t('reaching.city main menu');
  t('reaching.city our websites');
  t('reaching.city secondary menu');
  t('reaching.city top menu');

  return $menus;
}
