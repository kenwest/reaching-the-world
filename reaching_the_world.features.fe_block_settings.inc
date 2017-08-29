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
    'css_class' => 'unbounded',
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

  $export['menu-menu-reaching-city-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-reaching-city-main-menu',
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
        'region' => '',
        'status' => 0,
        'theme' => 'reaching',
        'weight' => 16,
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
        'weight' => -69,
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

  $export['views-2e7e463716029c0b8984e98e1cd69c36'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '2e7e463716029c0b8984e98e1cd69c36',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'team-map',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => 'sidebar_second',
        'status' => 1,
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -58,
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

  $export['views-5421e9d40abc723e92caa00a1dd228df'] = array(
    'cache' => -1,
    'css_class' => 'unbounded',
    'custom' => 0,
    'delta' => '5421e9d40abc723e92caa00a1dd228df',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'city/adelaide
city/brisbane
city/canberra
city/hobart
city/melbourne
city/perth
city/sydney',
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
        'weight' => -70,
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

  $export['views-58236067d431ce773f8c81e8470bb66a'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '58236067d431ce773f8c81e8470bb66a',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'civicrm-event/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => 'sidebar_second',
        'status' => 1,
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -57,
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

  $export['views-660e9523f915405c54f1024e71328913'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '660e9523f915405c54f1024e71328913',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'civicrm-event/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => 'sidebar_second',
        'status' => 1,
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -56,
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

  $export['views-7d078fcc4085a4be663d6abedc2431af'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7d078fcc4085a4be663d6abedc2431af',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'civicrm-event/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => 'sidebar_second',
        'status' => 1,
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -55,
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

  $export['views-92dbae79c70cb5f0b4d063d293638c17'] = array(
    'cache' => -1,
    'css_class' => '',
    'delta' => '92dbae79c70cb5f0b4d063d293638c17',
    'module' => 'views',
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
        'region' => '',
        'status' => 0,
        'theme' => 'reaching',
        'weight' => 0,
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
  );

  $export['views-activity_to_staff-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'activity_to_staff-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'city/activity/*
city/*/activity/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => 'sidebar_first',
        'status' => 1,
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => 0,
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

  $export['views-b43afb752ddf969d8154e0a8971b2bb5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'b43afb752ddf969d8154e0a8971b2bb5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'city/adelaide
city/brisbane
city/canberra
city/hobart
city/melbourne
city/perth
city/sydney',
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

  $export['views-cb6ba155a962fef6259a859bbffc6e37'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cb6ba155a962fef6259a859bbffc6e37',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'civicrm-event/*',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'cbootf' => array(
        'region' => 'sidebar_first',
        'status' => 1,
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -54,
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
        'region' => 'header',
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
    'visibility' => 1,
  );

  return $export;
}
