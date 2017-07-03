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
  $view->name = 'reaching_city_civicrm_event_date_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'reaching.city CiviCRM Event date, location';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'amount' => 'amount',
    'label' => 'label',
  );
  /* Relationship: CiviCRM Address: Address */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'civicrm_address';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['label'] = 'Address';
  $handler->display->display_options['relationships']['id']['location_type'] = '0';
  $handler->display->display_options['relationships']['id']['location_op'] = '0';
  $handler->display->display_options['relationships']['id']['is_primary'] = 1;
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Address: Supplemental Street Address */
  $handler->display->display_options['fields']['supplemental_address_1']['id'] = 'supplemental_address_1';
  $handler->display->display_options['fields']['supplemental_address_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['supplemental_address_1']['field'] = 'supplemental_address_1';
  $handler->display->display_options['fields']['supplemental_address_1']['relationship'] = 'id';
  $handler->display->display_options['fields']['supplemental_address_1']['label'] = '';
  $handler->display->display_options['fields']['supplemental_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['supplemental_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['supplemental_address_1']['location_type'] = '0';
  $handler->display->display_options['fields']['supplemental_address_1']['location_op'] = '0';
  $handler->display->display_options['fields']['supplemental_address_1']['is_primary'] = 0;
  $handler->display->display_options['fields']['supplemental_address_1']['is_billing'] = 0;
  /* Field: CiviCRM Address: Full Street Address */
  $handler->display->display_options['fields']['street_address']['id'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['street_address']['field'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['relationship'] = 'id';
  $handler->display->display_options['fields']['street_address']['label'] = '';
  $handler->display->display_options['fields']['street_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['street_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street_address']['location_type'] = '0';
  $handler->display->display_options['fields']['street_address']['location_op'] = '0';
  $handler->display->display_options['fields']['street_address']['is_primary'] = 0;
  $handler->display->display_options['fields']['street_address']['is_billing'] = 0;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'id';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['exclude'] = TRUE;
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 0;
  $handler->display->display_options['fields']['city']['is_billing'] = 0;
  /* Field: CiviCRM Address: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['relationship'] = 'id';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['postal_code']['location_type'] = '0';
  $handler->display->display_options['fields']['postal_code']['location_op'] = '0';
  $handler->display->display_options['fields']['postal_code']['is_primary'] = 0;
  $handler->display->display_options['fields']['postal_code']['is_billing'] = 0;
  /* Field: Address details */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Address details';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[supplemental_address_1] [street_address]<br/>
[city] [postal_code]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['reaching_city_civicrm_event_date_location'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Address'),
    t('.'),
    t('[supplemental_address_1] [street_address]<br/>
[city] [postal_code]'),
    t('All'),
    t('Block'),
  );
  $export['reaching_city_civicrm_event_date_location'] = $view;

  $view = new view();
  $view->name = 'reaching_city_civicrm_event_gmap';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'reaching.city CiviCRM Event gMap';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'gmapextended';
  $handler->display->display_options['style_options']['fallback_values'] = array(
    'text' => '',
    'rmt' => '',
    'iwq' => '',
    'iwo' => '',
    'link' => '',
    'latitude' => '',
    'longitude' => '',
    'title' => '',
    'markername' => '',
    'offset' => '',
  );
  $handler->display->display_options['style_options']['field_purposes'] = array(
    'title' => '',
    'supplemental_address_1' => '',
    'street_address' => '',
    'city' => '',
    'postal_code' => '',
    'geo_code_1' => 'latitude',
    'geo_code_2' => 'longitude',
    'nothing' => 'title',
  );
  $handler->display->display_options['style_options']['datasource'] = 'fields';
  $handler->display->display_options['style_options']['markertype'] = '';
  $handler->display->display_options['style_options']['center_on_proximityfilter_rel'] = 'none';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'supplemental_address_1' => 'supplemental_address_1',
    'street_address' => 'street_address',
    'city' => 'city',
    'postal_code' => 'postal_code',
  );
  /* Relationship: Address */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'civicrm_address';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['ui_name'] = 'Address';
  $handler->display->display_options['relationships']['id']['label'] = 'Address';
  $handler->display->display_options['relationships']['id']['required'] = TRUE;
  $handler->display->display_options['relationships']['id']['location_type'] = '0';
  $handler->display->display_options['relationships']['id']['location_op'] = '0';
  $handler->display->display_options['relationships']['id']['is_primary'] = 0;
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_civicrm_event'] = 'registration';
  /* Field: CiviCRM Address: Supplemental Street Address */
  $handler->display->display_options['fields']['supplemental_address_1']['id'] = 'supplemental_address_1';
  $handler->display->display_options['fields']['supplemental_address_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['supplemental_address_1']['field'] = 'supplemental_address_1';
  $handler->display->display_options['fields']['supplemental_address_1']['relationship'] = 'id';
  $handler->display->display_options['fields']['supplemental_address_1']['label'] = '';
  $handler->display->display_options['fields']['supplemental_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['supplemental_address_1']['location_type'] = '0';
  $handler->display->display_options['fields']['supplemental_address_1']['location_op'] = '0';
  $handler->display->display_options['fields']['supplemental_address_1']['is_primary'] = 0;
  $handler->display->display_options['fields']['supplemental_address_1']['is_billing'] = 0;
  /* Field: CiviCRM Address: Full Street Address */
  $handler->display->display_options['fields']['street_address']['id'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['street_address']['field'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['relationship'] = 'id';
  $handler->display->display_options['fields']['street_address']['label'] = '';
  $handler->display->display_options['fields']['street_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street_address']['location_type'] = '0';
  $handler->display->display_options['fields']['street_address']['location_op'] = '0';
  $handler->display->display_options['fields']['street_address']['is_primary'] = 0;
  $handler->display->display_options['fields']['street_address']['is_billing'] = 0;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'id';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 0;
  $handler->display->display_options['fields']['city']['is_billing'] = 0;
  /* Field: CiviCRM Address: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['relationship'] = 'id';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['postal_code']['location_type'] = '0';
  $handler->display->display_options['fields']['postal_code']['location_op'] = '0';
  $handler->display->display_options['fields']['postal_code']['is_primary'] = 0;
  $handler->display->display_options['fields']['postal_code']['is_billing'] = 0;
  /* Field: Latitude */
  $handler->display->display_options['fields']['geo_code_1']['id'] = 'geo_code_1';
  $handler->display->display_options['fields']['geo_code_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['geo_code_1']['field'] = 'geo_code_1';
  $handler->display->display_options['fields']['geo_code_1']['relationship'] = 'id';
  $handler->display->display_options['fields']['geo_code_1']['ui_name'] = 'Latitude';
  $handler->display->display_options['fields']['geo_code_1']['label'] = '';
  $handler->display->display_options['fields']['geo_code_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['geo_code_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['geo_code_1']['location_type'] = '0';
  $handler->display->display_options['fields']['geo_code_1']['location_op'] = '0';
  $handler->display->display_options['fields']['geo_code_1']['is_primary'] = 0;
  $handler->display->display_options['fields']['geo_code_1']['is_billing'] = 0;
  /* Field: Longitude */
  $handler->display->display_options['fields']['geo_code_2']['id'] = 'geo_code_2';
  $handler->display->display_options['fields']['geo_code_2']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['geo_code_2']['field'] = 'geo_code_2';
  $handler->display->display_options['fields']['geo_code_2']['relationship'] = 'id';
  $handler->display->display_options['fields']['geo_code_2']['ui_name'] = 'Longitude';
  $handler->display->display_options['fields']['geo_code_2']['label'] = '';
  $handler->display->display_options['fields']['geo_code_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['geo_code_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['geo_code_2']['location_type'] = '0';
  $handler->display->display_options['fields']['geo_code_2']['location_op'] = '0';
  $handler->display->display_options['fields']['geo_code_2']['is_primary'] = 0;
  $handler->display->display_options['fields']['geo_code_2']['is_billing'] = 0;
  /* Field: Tooltip */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Tooltip';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CiviCRM Events: Location Block ID */
  $handler->display->display_options['filters']['loc_block_id']['id'] = 'loc_block_id';
  $handler->display->display_options['filters']['loc_block_id']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['loc_block_id']['field'] = 'loc_block_id';
  $handler->display->display_options['filters']['loc_block_id']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_address');
  $translatables['reaching_city_civicrm_event_gmap'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Address'),
    t('[title]'),
    t('All'),
    t('Block'),
  );
  $export['reaching_city_civicrm_event_gmap'] = $view;

  $view = new view();
  $view->name = 'reaching_city_civicrm_event_price';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'reaching.city CiviCRM Event price';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_date_text',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'label' => 'label',
    'label_1' => 'label_1',
    'amount' => 'amount',
  );
  /* Relationship: CiviCRM Price Set Entities: Price Set */
  $handler->display->display_options['relationships']['price_set']['id'] = 'price_set';
  $handler->display->display_options['relationships']['price_set']['table'] = 'civicrm_price_set_entity';
  $handler->display->display_options['relationships']['price_set']['field'] = 'price_set';
  /* Relationship: Price Field: Price Field */
  $handler->display->display_options['relationships']['civicrm_price_field']['id'] = 'civicrm_price_field';
  $handler->display->display_options['relationships']['civicrm_price_field']['table'] = 'civicrm_price_set';
  $handler->display->display_options['relationships']['civicrm_price_field']['field'] = 'civicrm_price_field';
  $handler->display->display_options['relationships']['civicrm_price_field']['relationship'] = 'price_set';
  /* Relationship: CiviCRM Price Fields: Price Field Value */
  $handler->display->display_options['relationships']['civicrm_price_field_value']['id'] = 'civicrm_price_field_value';
  $handler->display->display_options['relationships']['civicrm_price_field_value']['table'] = 'civicrm_price_field';
  $handler->display->display_options['relationships']['civicrm_price_field_value']['field'] = 'civicrm_price_field_value';
  $handler->display->display_options['relationships']['civicrm_price_field_value']['relationship'] = 'civicrm_price_field';
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: CiviCRM Price Field Values: Label */
  $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  $handler->display->display_options['fields']['label_1']['table'] = 'civicrm_price_field_value';
  $handler->display->display_options['fields']['label_1']['field'] = 'label';
  $handler->display->display_options['fields']['label_1']['relationship'] = 'civicrm_price_field_value';
  $handler->display->display_options['fields']['label_1']['label'] = '';
  $handler->display->display_options['fields']['label_1']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Price Field Values: Amount */
  $handler->display->display_options['fields']['amount']['id'] = 'amount';
  $handler->display->display_options['fields']['amount']['table'] = 'civicrm_price_field_value';
  $handler->display->display_options['fields']['amount']['field'] = 'amount';
  $handler->display->display_options['fields']['amount']['relationship'] = 'civicrm_price_field_value';
  $handler->display->display_options['fields']['amount']['label'] = '';
  $handler->display->display_options['fields']['amount']['element_label_colon'] = FALSE;
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    3 => 'OR',
    2 => 'OR',
  );
  /* Filter criterion: CiviCRM Price Fields: Visibility */
  $handler->display->display_options['filters']['visibility']['id'] = 'visibility';
  $handler->display->display_options['filters']['visibility']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['visibility']['field'] = 'visibility';
  $handler->display->display_options['filters']['visibility']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['visibility']['value'] = '1';
  $handler->display->display_options['filters']['visibility']['group'] = 1;
  $handler->display->display_options['filters']['visibility']['expose']['operator_id'] = 'visibility_op';
  $handler->display->display_options['filters']['visibility']['expose']['label'] = 'Visibility';
  $handler->display->display_options['filters']['visibility']['expose']['operator'] = 'visibility_op';
  $handler->display->display_options['filters']['visibility']['expose']['identifier'] = 'visibility';
  /* Filter criterion: CiviCRM Price Fields: Active On */
  $handler->display->display_options['filters']['active_on_1']['id'] = 'active_on_1';
  $handler->display->display_options['filters']['active_on_1']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['active_on_1']['field'] = 'active_on';
  $handler->display->display_options['filters']['active_on_1']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['active_on_1']['operator'] = '<=';
  $handler->display->display_options['filters']['active_on_1']['value']['value'] = 'now';
  $handler->display->display_options['filters']['active_on_1']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['active_on_1']['group'] = 2;
  /* Filter criterion: CiviCRM Price Fields: Active On */
  $handler->display->display_options['filters']['active_on']['id'] = 'active_on';
  $handler->display->display_options['filters']['active_on']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['active_on']['field'] = 'active_on';
  $handler->display->display_options['filters']['active_on']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['active_on']['operator'] = 'empty';
  $handler->display->display_options['filters']['active_on']['group'] = 2;
  /* Filter criterion: CiviCRM Price Fields: Expire On */
  $handler->display->display_options['filters']['expire_on_1']['id'] = 'expire_on_1';
  $handler->display->display_options['filters']['expire_on_1']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['expire_on_1']['field'] = 'expire_on';
  $handler->display->display_options['filters']['expire_on_1']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['expire_on_1']['operator'] = '>=';
  $handler->display->display_options['filters']['expire_on_1']['value']['value'] = 'now';
  $handler->display->display_options['filters']['expire_on_1']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['expire_on_1']['group'] = 3;
  /* Filter criterion: CiviCRM Price Fields: Expire On */
  $handler->display->display_options['filters']['expire_on']['id'] = 'expire_on';
  $handler->display->display_options['filters']['expire_on']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['expire_on']['field'] = 'expire_on';
  $handler->display->display_options['filters']['expire_on']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['expire_on']['operator'] = 'empty';
  $handler->display->display_options['filters']['expire_on']['group'] = 3;
  /* Filter criterion: CiviCRM Price Fields: Is Active */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['filters']['is_active']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['reaching_city_civicrm_event_price'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Price Set'),
    t('Price Field'),
    t('Price Field Value'),
    t('.'),
    t('All'),
    t('Visibility'),
    t('Block'),
  );
  $export['reaching_city_civicrm_event_price'] = $view;

  $view = new view();
  $view->name = 'reaching_city_civicrm_event_registration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'reaching.city CiviCRM Event registration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'amount' => 'amount',
    'label' => 'label',
  );
  /* Relationship: CiviCRM Address: Address */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'civicrm_address';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['label'] = 'Address';
  $handler->display->display_options['relationships']['id']['location_type'] = '0';
  $handler->display->display_options['relationships']['id']['location_op'] = '0';
  $handler->display->display_options['relationships']['id']['is_primary'] = 1;
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['text'] = '<a href="/civicrm/event/register?reset=1&id=[id]">Register now</a>';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Contextual filter: CiviCRM Events: Event ID */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    3 => 'OR',
    2 => 'OR',
  );
  /* Filter criterion: CiviCRM Events: Is Active */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = '1';
  $handler->display->display_options['filters']['is_active']['group'] = 1;
  /* Filter criterion: CiviCRM Events: Is Online Registration On */
  $handler->display->display_options['filters']['is_online_registration']['id'] = 'is_online_registration';
  $handler->display->display_options['filters']['is_online_registration']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_online_registration']['field'] = 'is_online_registration';
  $handler->display->display_options['filters']['is_online_registration']['value'] = '1';
  $handler->display->display_options['filters']['is_online_registration']['group'] = 1;
  /* Filter criterion: CiviCRM Events: Is Public */
  $handler->display->display_options['filters']['is_public']['id'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_public']['field'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['value'] = '1';
  $handler->display->display_options['filters']['is_public']['group'] = 1;
  /* Filter criterion: CiviCRM Events: Start Date */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['operator'] = '>=';
  $handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
  $handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['start_date']['group'] = 1;
  /* Filter criterion: CiviCRM Events: Registration End Date */
  $handler->display->display_options['filters']['registration_end_date']['id'] = 'registration_end_date';
  $handler->display->display_options['filters']['registration_end_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['registration_end_date']['field'] = 'registration_end_date';
  $handler->display->display_options['filters']['registration_end_date']['operator'] = '>';
  $handler->display->display_options['filters']['registration_end_date']['value']['value'] = 'now';
  $handler->display->display_options['filters']['registration_end_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['registration_end_date']['group'] = 3;
  /* Filter criterion: CiviCRM Events: Registration End Date */
  $handler->display->display_options['filters']['registration_end_date_1']['id'] = 'registration_end_date_1';
  $handler->display->display_options['filters']['registration_end_date_1']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['registration_end_date_1']['field'] = 'registration_end_date';
  $handler->display->display_options['filters']['registration_end_date_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['registration_end_date_1']['group'] = 3;
  /* Filter criterion: CiviCRM Events: Registration Start Date */
  $handler->display->display_options['filters']['registration_start_date']['id'] = 'registration_start_date';
  $handler->display->display_options['filters']['registration_start_date']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['registration_start_date']['field'] = 'registration_start_date';
  $handler->display->display_options['filters']['registration_start_date']['operator'] = '<';
  $handler->display->display_options['filters']['registration_start_date']['value']['value'] = 'now';
  $handler->display->display_options['filters']['registration_start_date']['value']['type'] = 'offset';
  $handler->display->display_options['filters']['registration_start_date']['group'] = 2;
  /* Filter criterion: CiviCRM Events: Registration Start Date */
  $handler->display->display_options['filters']['registration_start_date_1']['id'] = 'registration_start_date_1';
  $handler->display->display_options['filters']['registration_start_date_1']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['registration_start_date_1']['field'] = 'registration_start_date';
  $handler->display->display_options['filters']['registration_start_date_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['registration_start_date_1']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['reaching_city_civicrm_event_registration'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Address'),
    t('<a href="/civicrm/event/register?reset=1&id=[id]">Register now</a>'),
    t('.'),
    t('All'),
    t('Block'),
  );
  $export['reaching_city_civicrm_event_registration'] = $view;

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
  /* Field: Field: Highlight */
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
  /* Filter criterion: Field: Highlight dates -  start date (field_highlight_dates) */
  $handler->display->display_options['filters']['field_highlight_dates_value']['id'] = 'field_highlight_dates_value';
  $handler->display->display_options['filters']['field_highlight_dates_value']['table'] = 'field_data_field_highlight_dates';
  $handler->display->display_options['filters']['field_highlight_dates_value']['field'] = 'field_highlight_dates_value';
  $handler->display->display_options['filters']['field_highlight_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_highlight_dates_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_highlight_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_highlight_dates_value']['default_date'] = 'now';
  /* Filter criterion: Field: Highlight dates - end date (field_highlight_dates:value2) */
  $handler->display->display_options['filters']['field_highlight_dates_value2']['id'] = 'field_highlight_dates_value2';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['table'] = 'field_data_field_highlight_dates';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['field'] = 'field_highlight_dates_value2';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_highlight_dates_value2']['default_date'] = 'now';
  /* Filter criterion: Field: Highlight location (field_highlight_location) */
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
  /* Contextual filter: Field: Highlight location (field_highlight_location) */
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
  /* Filter criterion: Field: Highlight dates -  start date (field_highlight_dates) */
  $handler->display->display_options['filters']['field_highlight_dates_value']['id'] = 'field_highlight_dates_value';
  $handler->display->display_options['filters']['field_highlight_dates_value']['table'] = 'field_data_field_highlight_dates';
  $handler->display->display_options['filters']['field_highlight_dates_value']['field'] = 'field_highlight_dates_value';
  $handler->display->display_options['filters']['field_highlight_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_highlight_dates_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_highlight_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_highlight_dates_value']['default_date'] = 'now';
  /* Filter criterion: Field: Highlight dates - end date (field_highlight_dates:value2) */
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

  $view = new view();
  $view->name = 'reaching_city_team_gmap';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_contact';
  $view->human_name = 'reaching.city team gMap';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Team map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'gmapextended';
  $handler->display->display_options['style_options']['fallback_values'] = array(
    'text' => '',
    'rmt' => '',
    'iwq' => '',
    'iwo' => '',
    'link' => '',
    'latitude' => '',
    'longitude' => '',
    'title' => '',
    'markername' => '',
    'offset' => '',
  );
  $handler->display->display_options['style_options']['field_purposes'] = array(
    'id' => '',
    'display_name' => 'title',
    'street_address' => '',
    'city' => '',
    'state_province' => '',
    'postal_code' => '',
    'geo_code_1' => 'latitude',
    'geo_code_2' => 'longitude',
  );
  $handler->display->display_options['style_options']['macro'] = '[gmap behavior=+autozoom | height=400px]';
  $handler->display->display_options['style_options']['datasource'] = 'fields';
  $handler->display->display_options['style_options']['markertype'] = '';
  $handler->display->display_options['style_options']['center_on_proximityfilter_rel'] = 'none';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'street_address' => 'street_address',
    'city' => 'city',
    'state_province' => 'state_province',
    'postal_code' => 'postal_code',
  );
  /* Relationship: CiviCRM Address: Address */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'civicrm_address';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['label'] = 'Address';
  $handler->display->display_options['relationships']['id']['required'] = TRUE;
  $handler->display->display_options['relationships']['id']['location_type'] = '0';
  $handler->display->display_options['relationships']['id']['location_op'] = '0';
  $handler->display->display_options['relationships']['id']['is_primary'] = 1;
  /* Field: CiviCRM Contacts: Contact ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: CiviCRM Contacts: Display Name */
  $handler->display->display_options['fields']['display_name']['id'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
  $handler->display->display_options['fields']['display_name']['field'] = 'display_name';
  $handler->display->display_options['fields']['display_name']['label'] = '';
  $handler->display->display_options['fields']['display_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 0;
  /* Field: CiviCRM Address: Full Street Address */
  $handler->display->display_options['fields']['street_address']['id'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['street_address']['field'] = 'street_address';
  $handler->display->display_options['fields']['street_address']['relationship'] = 'id';
  $handler->display->display_options['fields']['street_address']['label'] = '';
  $handler->display->display_options['fields']['street_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street_address']['location_type'] = '0';
  $handler->display->display_options['fields']['street_address']['location_op'] = '0';
  $handler->display->display_options['fields']['street_address']['is_primary'] = 1;
  $handler->display->display_options['fields']['street_address']['is_billing'] = 0;
  /* Field: CiviCRM Address: City / Suburb */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'id';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['city']['location_type'] = '0';
  $handler->display->display_options['fields']['city']['location_op'] = '0';
  $handler->display->display_options['fields']['city']['is_primary'] = 1;
  $handler->display->display_options['fields']['city']['is_billing'] = 0;
  /* Field: CiviCRM Address: State/Province */
  $handler->display->display_options['fields']['state_province']['id'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['state_province']['field'] = 'state_province';
  $handler->display->display_options['fields']['state_province']['relationship'] = 'id';
  $handler->display->display_options['fields']['state_province']['label'] = '';
  $handler->display->display_options['fields']['state_province']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['state_province']['location_type'] = '0';
  $handler->display->display_options['fields']['state_province']['location_op'] = '0';
  $handler->display->display_options['fields']['state_province']['is_primary'] = 1;
  $handler->display->display_options['fields']['state_province']['is_billing'] = 0;
  $handler->display->display_options['fields']['state_province']['prov_display'] = '1';
  /* Field: CiviCRM Address: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['relationship'] = 'id';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['postal_code']['location_type'] = '0';
  $handler->display->display_options['fields']['postal_code']['location_op'] = '0';
  $handler->display->display_options['fields']['postal_code']['is_primary'] = 1;
  $handler->display->display_options['fields']['postal_code']['is_billing'] = 0;
  /* Field: CiviCRM Address: Latitude */
  $handler->display->display_options['fields']['geo_code_1']['id'] = 'geo_code_1';
  $handler->display->display_options['fields']['geo_code_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['geo_code_1']['field'] = 'geo_code_1';
  $handler->display->display_options['fields']['geo_code_1']['relationship'] = 'id';
  $handler->display->display_options['fields']['geo_code_1']['label'] = '';
  $handler->display->display_options['fields']['geo_code_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['geo_code_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['geo_code_1']['location_type'] = '0';
  $handler->display->display_options['fields']['geo_code_1']['location_op'] = '0';
  $handler->display->display_options['fields']['geo_code_1']['is_primary'] = 1;
  $handler->display->display_options['fields']['geo_code_1']['is_billing'] = 0;
  /* Field: CiviCRM Address: Longitude */
  $handler->display->display_options['fields']['geo_code_2']['id'] = 'geo_code_2';
  $handler->display->display_options['fields']['geo_code_2']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['geo_code_2']['field'] = 'geo_code_2';
  $handler->display->display_options['fields']['geo_code_2']['relationship'] = 'id';
  $handler->display->display_options['fields']['geo_code_2']['label'] = '';
  $handler->display->display_options['fields']['geo_code_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['geo_code_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['geo_code_2']['location_type'] = '0';
  $handler->display->display_options['fields']['geo_code_2']['location_op'] = '0';
  $handler->display->display_options['fields']['geo_code_2']['is_primary'] = 1;
  $handler->display->display_options['fields']['geo_code_2']['is_billing'] = 0;
  /* Filter criterion: CiviCRM Contacts: Contact Sub Type */
  $handler->display->display_options['filters']['contact_sub_type']['id'] = 'contact_sub_type';
  $handler->display->display_options['filters']['contact_sub_type']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['contact_sub_type']['field'] = 'contact_sub_type';
  $handler->display->display_options['filters']['contact_sub_type']['value'] = array(
    'Team' => 'Team',
  );
  /* Filter criterion: CiviCRM Contacts: Contact Type */
  $handler->display->display_options['filters']['contact_type']['id'] = 'contact_type';
  $handler->display->display_options['filters']['contact_type']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['contact_type']['field'] = 'contact_type';
  $handler->display->display_options['filters']['contact_type']['value'] = array(
    'Household' => 'Household',
  );
  /* Filter criterion: CiviCRM Contacts: Contact Sub Type */
  $handler->display->display_options['filters']['contact_sub_type_1']['id'] = 'contact_sub_type_1';
  $handler->display->display_options['filters']['contact_sub_type_1']['table'] = 'civicrm_contact';
  $handler->display->display_options['filters']['contact_sub_type_1']['field'] = 'contact_sub_type';
  $handler->display->display_options['filters']['contact_sub_type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['contact_sub_type_1']['value'] = array(
    'Archived_team' => 'Archived_team',
  );
  /* Filter criterion: CiviCRM Tags: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'civicrm_tag';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = array(
    19 => '19',
    7 => '7',
    33 => '33',
    54 => '54',
    17 => '17',
    8 => '8',
    9 => '9',
  );
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Tag';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['name']['expose']['reduce'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'team-map';
  $translatables['reaching_city_team_gmap'] = array(
    t('Master'),
    t('Team map'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Address'),
    t('.'),
    t('Tag'),
    t('Page'),
  );
  $export['reaching_city_team_gmap'] = $view;

  return $export;
}
