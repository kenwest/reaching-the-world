<?php
/**
 * @file
 * reaching_the_world.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function reaching_the_world_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-reaching_city_promotional_video'] = array(
    'cache' => -1,
    'css_class' => 'promotional-video',
    'custom' => 0,
    'machine_name' => 'reaching_city_promotional_video',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cbootf',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'logoslive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'logoslive',
        'weight' => 0,
      ),
      'reaching' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -64,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smith' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'smith',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu-menu-reaching-city-footer-naviga'] = array(
    'cache' => -1,
    'css_class' => 'footer-column',
    'custom' => 0,
    'delta' => 'menu-reaching-city-footer-naviga',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cbootf',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'logoslive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'logoslive',
        'weight' => 0,
      ),
      'reaching' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -68,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smith' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'smith',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-reaching-city-other-sites'] = array(
    'cache' => -1,
    'css_class' => 'footer-column',
    'custom' => 0,
    'delta' => 'menu-reaching-city-other-sites',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cbootf',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'logoslive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'logoslive',
        'weight' => 0,
      ),
      'reaching' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -67,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smith' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'smith',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-reaching-city-secondary-men'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-reaching-city-secondary-men',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cbootf',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'logoslive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'logoslive',
        'weight' => 0,
      ),
      'reaching' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -66,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smith' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'smith',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-reaching_city_highlights-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'reaching_city_highlights-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cbootf',
        'weight' => 0,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'logoslive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'logoslive',
        'weight' => 0,
      ),
      'reaching' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -65,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smith' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'smith',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
