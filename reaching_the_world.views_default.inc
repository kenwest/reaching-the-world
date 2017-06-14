<?php
/**
 * @file
 * reaching_the_world.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function reaching_the_world_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'empty_home_page';
  $view->description = 'An empty home page';
  $view->tag = 'default';
  $view->base_table = 'domain';
  $view->human_name = 'Empty home page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = ' ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Domains: Domain ID */
  $handler->display->display_options['fields']['domain_id']['id'] = 'domain_id';
  $handler->display->display_options['fields']['domain_id']['table'] = 'domain';
  $handler->display->display_options['fields']['domain_id']['field'] = 'domain_id';
  $handler->display->display_options['fields']['domain_id']['label'] = '';
  $handler->display->display_options['fields']['domain_id']['element_label_colon'] = FALSE;
  /* Contextual filter: Domain Access: Domain ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'domain_access';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['gid']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Domains: Valid */
  $handler->display->display_options['filters']['valid']['id'] = 'valid';
  $handler->display->display_options['filters']['valid']['table'] = 'domain';
  $handler->display->display_options['filters']['valid']['field'] = 'valid';
  $handler->display->display_options['filters']['valid']['value'] = 1;
  $handler->display->display_options['filters']['valid']['group'] = 1;
  $handler->display->display_options['filters']['valid']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'home';
  $translatables['empty_home_page'] = array(
    t('Master'),
    t(' '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Page'),
  );
  $export['empty_home_page'] = $view;

  $view = new view();
  $view->name = 'reaching_city_city_page';
  $view->description = 'Avoids use of campus_homepage and handles \'all\' better';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'reaching.city city page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '%1';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&ensp;';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['code'] = 'return cbf_city_string();';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'vocabulary_1' => 'vocabulary_1',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'vocabulary_1' => 'vocabulary_1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'city/%';
  $translatables['reaching_city_city_page'] = array(
    t('Master'),
    t('%1'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('&ensp;'),
    t('All'),
    t('Page'),
  );
  $export['reaching_city_city_page'] = $view;

  $view = new view();
  $view->name = 'reaching_city_highlights';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reaching.city highlights';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'both';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['scroll'] = '1';
  $handler->display->display_options['style_options']['auto'] = '5';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Highlight */
  $handler->display->display_options['fields']['field_highlight']['id'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['fields']['field_highlight']['field'] = 'field_highlight';
  $handler->display->display_options['fields']['field_highlight']['label'] = '';
  $handler->display->display_options['fields']['field_highlight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight']['settings'] = array(
    'image_style' => 'highlight',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Highlight dates -  start date (field_highlight_dates) */
  $handler->display->display_options['filters']['field_highlight_dates_value']['id'] = 'field_highlight_dates_value';
  $handler->display->display_options['filters']['field_highlight_dates_value']['table'] = 'field_data_field_highlight_dates';
  $handler->display->display_options['filters']['field_highlight_dates_value']['field'] = 'field_highlight_dates_value';
  $handler->display->display_options['filters']['field_highlight_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_highlight_dates_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_highlight_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_highlight_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Highlight dates - end date (field_highlight_dates:value2) */
  $handler->display->display_options['filters']['field_highlight_dates_value2']['id'] = 'field_highlight_dates_value2';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['table'] = 'field_data_field_highlight_dates';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['field'] = 'field_highlight_dates_value2';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Content: Highlight location (field_highlight_location) */
  $handler->display->display_options['filters']['field_highlight_location_tid']['id'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['table'] = 'field_data_field_highlight_location';
  $handler->display->display_options['filters']['field_highlight_location_tid']['field'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['value'] = array(
    0 => '1040',
  );
  $handler->display->display_options['filters']['field_highlight_location_tid']['vocabulary'] = 'banner';

  /* Display: Home page highlights */
  $handler = $view->new_display('block', 'Home page highlights', 'block');

  /* Display: City page highlights */
  $handler = $view->new_display('block', 'City page highlights', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Highlight location (field_highlight_location) */
  $handler->display->display_options['arguments']['field_highlight_location_tid']['id'] = 'field_highlight_location_tid';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['table'] = 'field_data_field_highlight_location';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['field'] = 'field_highlight_location_tid';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['default_argument_options']['code'] = '$city = cbf_city_string();
if ($city !== false) {
  return ucwords($city) . \' city page\';
} else {
  return \'nil\';
}';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_highlight_location_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['validate_options']['vocabularies'] = array(
    'banner' => 'banner',
  );
  $handler->display->display_options['arguments']['field_highlight_location_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Highlight dates -  start date (field_highlight_dates) */
  $handler->display->display_options['filters']['field_highlight_dates_value']['id'] = 'field_highlight_dates_value';
  $handler->display->display_options['filters']['field_highlight_dates_value']['table'] = 'field_data_field_highlight_dates';
  $handler->display->display_options['filters']['field_highlight_dates_value']['field'] = 'field_highlight_dates_value';
  $handler->display->display_options['filters']['field_highlight_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_highlight_dates_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_highlight_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_highlight_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Highlight dates - end date (field_highlight_dates:value2) */
  $handler->display->display_options['filters']['field_highlight_dates_value2']['id'] = 'field_highlight_dates_value2';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['table'] = 'field_data_field_highlight_dates';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['field'] = 'field_highlight_dates_value2';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['default_date'] = 'now';
  $translatables['reaching_city_highlights'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Home page highlights'),
    t('City page highlights'),
    t('All'),
  );
  $export['reaching_city_highlights'] = $view;

  return $export;
}
