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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'weight' => -77,
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
        'weight' => 50,
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'weight' => -75,
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
        'weight' => 47,
      ),
    ),
    'title' => '<none>',
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'weight' => 17,
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
        'weight' => 48,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-reaching-city-other-sites'] = array(
    'cache' => -1,
    'css_class' => 'footer-column col-sm-offset-6',
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'weight' => -74,
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
        'weight' => 49,
      ),
    ),
    'title' => 'Our websites',
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'weight' => 51,
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
        'weight' => -51,
      ),
      'edge' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'edge',
        'weight' => -62,
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
        'weight' => -40,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-32cbc1b8e8665695f6f990ef5f1f21ac'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '32cbc1b8e8665695f6f990ef5f1f21ac',
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-3b234379a78f2c26c23c8eba0ecc1f46'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '3b234379a78f2c26c23c8eba0ecc1f46',
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'region' => 'content_second',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -78,
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

  $export['views-4b8a204015623578778937c8b62ab69a'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '4b8a204015623578778937c8b62ab69a',
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
    'title' => '',
    'visibility' => 0,
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'region' => 'banner_second',
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
        'weight' => 42,
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'cbootf',
        'weight' => -72,
      ),
      'edge' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'edge',
        'weight' => -72,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'logoslive' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'logoslive',
        'weight' => -57,
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'smith',
        'weight' => -78,
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'cbootf',
        'weight' => -71,
      ),
      'edge' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'edge',
        'weight' => -71,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'logoslive' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'logoslive',
        'weight' => -56,
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'smith',
        'weight' => -77,
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'cbootf',
        'weight' => -70,
      ),
      'edge' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'edge',
        'weight' => -70,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'logoslive' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'logoslive',
        'weight' => -55,
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'smith',
        'weight' => -76,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-7d9fd4366427da534abff2bd54dad1ec'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7d9fd4366427da534abff2bd54dad1ec',
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'weight' => -76,
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

  $export['views-91265aa40c06744963c1a1b3b7f4a3f8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '91265aa40c06744963c1a1b3b7f4a3f8',
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['views-92dbae79c70cb5f0b4d063d293638c17'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'weight' => 40,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-activity_to_staff-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'activity_to_staff-block',
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
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'cbootf',
        'weight' => -68,
      ),
      'edge' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'edge',
        'weight' => -68,
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
        'weight' => -71,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smith' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'smith',
        'weight' => -74,
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'weight' => 43,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-c2fd4ae95ded118dd09f0162770baa84'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'c2fd4ae95ded118dd09f0162770baa84',
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'weight' => -76,
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
        'weight' => -69,
      ),
      'edge' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'edge',
        'weight' => -69,
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'logoslive' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'logoslive',
        'weight' => -54,
      ),
      'reaching' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -53,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smith' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'smith',
        'weight' => -75,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-d0668354e2c9477b84ce436b821385e0'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'd0668354e2c9477b84ce436b821385e0',
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'region' => 'content_second',
        'status' => 1,
        'theme' => 'reaching',
        'weight' => -77,
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
      'edge' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'edge',
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
        'weight' => 44,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
