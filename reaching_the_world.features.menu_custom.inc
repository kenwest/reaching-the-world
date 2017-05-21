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

  // Exported menu: menu-reaching-city-main-menu.
  $menus['menu-reaching-city-main-menu'] = array(
    'menu_name' => 'menu-reaching-city-main-menu',
    'title' => 'reaching.city main menu',
    'description' => '',
  );
  // Exported menu: menu-reaching-city-secondary-men.
  $menus['menu-reaching-city-secondary-men'] = array(
    'menu_name' => 'menu-reaching-city-secondary-men',
    'title' => 'reaching.city secondary menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('reaching.city main menu');
  t('reaching.city secondary menu');

  return $menus;
}
