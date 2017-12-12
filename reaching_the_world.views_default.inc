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
  $view->name = 'activity_to_staff';
  $view->description = 'Lists the staff contacts for an Activity';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reaching.city Activity to Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-send-o"></i>Contact us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'For more information about this activity, contact';
  $handler->display->display_options['header']['area']['format'] = '2';
  /* Relationship: Field: Staff contact (field_staff_contact) */
  $handler->display->display_options['relationships']['field_staff_contact_contact_id']['id'] = 'field_staff_contact_contact_id';
  $handler->display->display_options['relationships']['field_staff_contact_contact_id']['table'] = 'field_data_field_staff_contact';
  $handler->display->display_options['relationships']['field_staff_contact_contact_id']['field'] = 'field_staff_contact_contact_id';
  $handler->display->display_options['relationships']['field_staff_contact_contact_id']['required'] = TRUE;
  /* Field: Field: Staff contact */
  $handler->display->display_options['fields']['field_staff_contact']['id'] = 'field_staff_contact';
  $handler->display->display_options['fields']['field_staff_contact']['table'] = 'field_data_field_staff_contact';
  $handler->display->display_options['fields']['field_staff_contact']['field'] = 'field_staff_contact';
  $handler->display->display_options['fields']['field_staff_contact']['label'] = '';
  $handler->display->display_options['fields']['field_staff_contact']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_staff_contact']['alter']['text'] = '<a class="staff-contact" href="/staff-contact?cid1=[field_staff_contact-contact_id]">[field_staff_contact]</a>';
  $handler->display->display_options['fields']['field_staff_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_contact']['type'] = 'civicrm_contact_ref_plain';
  $handler->display->display_options['fields']['field_staff_contact']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_staff_contact']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['activity_to_staff'] = array(
    t('Master'),
    t('<i class="fa fa-fw fa-send-o"></i>Contact us'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('For more information about this activity, contact'),
    t('field_staff_contact'),
    t('<a class="staff-contact" href="/staff-contact?cid1=[field_staff_contact-contact_id]">[field_staff_contact]</a>'),
    t('All'),
    t('Block'),
  );
  $export['activity_to_staff'] = $view;

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
  $view->name = 'reaching_city_activity_highlight_video';
  $view->description = 'Shows the most recent highlight video for this activity';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reaching.city Activity highlight video';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'no-thumbnail';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video']['multi_type'] = 'ul';
  /* Field: Content: Highlight video */
  $handler->display->display_options['fields']['field_highlight_video']['id'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['field'] = 'field_highlight_video';
  $handler->display->display_options['fields']['field_highlight_video']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_video']['empty'] = '[field_video]';
  $handler->display->display_options['fields']['field_highlight_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_video']['click_sort_column'] = 'url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Video (field_video:url) */
  $handler->display->display_options['filters']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['filters']['field_video_url']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['filters']['field_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_video_url']['group'] = 2;
  /* Filter criterion: Content: Highlight video (field_highlight_video:url) */
  $handler->display->display_options['filters']['field_highlight_video_url']['id'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['table'] = 'field_data_field_highlight_video';
  $handler->display->display_options['filters']['field_highlight_video_url']['field'] = 'field_highlight_video_url';
  $handler->display->display_options['filters']['field_highlight_video_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_video_url']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'latest/video/activity/%';
  $translatables['reaching_city_activity_highlight_video'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Activity'),
    t('[field_video]'),
    t('All'),
    t('Page'),
  );
  $export['reaching_city_activity_highlight_video'] = $view;

  $view = new view();
  $view->name = 'reaching_city_activity_to_civievent';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'reaching.city Activity to CiviEvent';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-calendar"></i>Upcoming events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Field: Thumbnail image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['link_to_civicrm_event'] = 'custom';
  $handler->display->display_options['fields']['title']['custom_link'] = 'civicrm-event/';
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Events: Summary */
  $handler->display->display_options['fields']['summary']['id'] = 'summary';
  $handler->display->display_options['fields']['summary']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['summary']['field'] = 'summary';
  $handler->display->display_options['fields']['summary']['label'] = '';
  $handler->display->display_options['fields']['summary']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Contextual filter: Field: Activity (field_in_activity) */
  $handler->display->display_options['arguments']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_in_activity_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';
  /* Filter criterion: CiviCRM Events: Is Public */
  $handler->display->display_options['filters']['is_public']['id'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_public']['field'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'civicrm-events/activity/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['reaching_city_activity_to_civievent'] = array(
    t('Master'),
    t('<i class="fa fa-fw fa-calendar"></i>Upcoming events'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('.'),
    t('[field_image]'),
    t('All'),
    t('Page'),
    t('Block'),
  );
  $export['reaching_city_activity_to_civievent'] = $view;

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
  $view->name = 'reaching_city_city_to_activity';
  $view->description = 'Check out the activities we run near you';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reaching.city City to Activity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<span>Reaching the world</span> <span>through the workplace</span> <span>with the good news</span> <span>about Jesus</span>';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = 'custom';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '86400';
  $handler->display->display_options['cache']['output_lifespan'] = 'custom';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '86400';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_subtitle_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'description',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    3 => array(
      'field' => 'description_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_3_tid']['label'] = 'Audience';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_3_tid']['required'] = TRUE;
  /* Relationship: Content: Activity category (field_activity_category) */
  $handler->display->display_options['relationships']['field_activity_category_tid']['id'] = 'field_activity_category_tid';
  $handler->display->display_options['relationships']['field_activity_category_tid']['table'] = 'field_data_field_activity_category';
  $handler->display->display_options['relationships']['field_activity_category_tid']['field'] = 'field_activity_category_tid';
  $handler->display->display_options['relationships']['field_activity_category_tid']['label'] = 'Activity category';
  $handler->display->display_options['relationships']['field_activity_category_tid']['required'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Field: Thumbnail image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['empty'] = '[body]';
  /* Field: reaching.city Title */
  $handler->display->display_options['fields']['field_subtitle_1']['id'] = 'field_subtitle_1';
  $handler->display->display_options['fields']['field_subtitle_1']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle_1']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle_1']['relationship'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['fields']['field_subtitle_1']['ui_name'] = 'reaching.city Title';
  $handler->display->display_options['fields']['field_subtitle_1']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['fields']['description_1']['relationship'] = 'field_activity_category_tid';
  $handler->display->display_options['fields']['description_1']['label'] = '';
  $handler->display->display_options['fields']['description_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description_1']['element_label_colon'] = FALSE;
  /* Field: Grouping field for Bootstrap column */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Grouping field for Bootstrap column';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field:  Grouping field for Bootstrap row */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_activity_category_tid';
  $handler->display->display_options['fields']['description']['ui_name'] = ' Grouping field for Bootstrap row';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight_1']['relationship'] = 'taxonomy_vocabulary_3_tid';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_activity_category_tid';
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  return \'Home page\';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block: Footer activities in this city */
  $handler = $view->new_display('block', 'Block: Footer activities in this city', 'block');

  /* Display: Block: Content activities in this city */
  $handler = $view->new_display('block', 'Block: Content activities in this city', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-group"></i>Our activities';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Field: Thumbnail image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['empty'] = '[body]';
  /* Field: reaching.city Title */
  $handler->display->display_options['fields']['field_subtitle_1']['id'] = 'field_subtitle_1';
  $handler->display->display_options['fields']['field_subtitle_1']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle_1']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle_1']['relationship'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['fields']['field_subtitle_1']['ui_name'] = 'reaching.city Title';
  $handler->display->display_options['fields']['field_subtitle_1']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description_1']['id'] = 'description_1';
  $handler->display->display_options['fields']['description_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_1']['field'] = 'description';
  $handler->display->display_options['fields']['description_1']['relationship'] = 'field_activity_category_tid';
  $handler->display->display_options['fields']['description_1']['label'] = '';
  $handler->display->display_options['fields']['description_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description_1']['element_label_colon'] = FALSE;
  /* Field: Grouping field for Bootstrap column */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Grouping field for Bootstrap column';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '&nbsp;';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field:  Grouping field for Bootstrap row */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_activity_category_tid';
  $handler->display->display_options['fields']['description']['ui_name'] = ' Grouping field for Bootstrap row';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $translatables['reaching_city_city_to_activity'] = array(
    t('Master'),
    t('<span>Reaching the world</span> <span>through the workplace</span> <span>with the good news</span> <span>about Jesus</span>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Audience'),
    t('Activity category'),
    t('[field_image]'),
    t('[body]'),
    t('&nbsp;'),
    t('All'),
    t('Block: Footer activities in this city'),
    t('Block: Content activities in this city'),
    t('<i class="fa fa-fw fa-group"></i>Our activities'),
  );
  $export['reaching_city_city_to_activity'] = $view;

  $view = new view();
  $view->name = 'reaching_city_city_to_event';
  $view->description = 'Check out upcoming events near you';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reaching.city City to Event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-calendar"></i>Coming up';
  $handler->display->display_options['css_class'] = 'cbf-merge-events';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['contextual_filters_or'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Field: Audience (taxonomy_vocabulary_3) */
  $handler->display->display_options['relationships']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_3_tid']['label'] = 'Audience';
  $handler->display->display_options['relationships']['taxonomy_vocabulary_3_tid']['required'] = TRUE;
  /* Field: Content: Event Image */
  $handler->display->display_options['fields']['field_series_image']['id'] = 'field_series_image';
  $handler->display->display_options['fields']['field_series_image']['table'] = 'field_data_field_series_image';
  $handler->display->display_options['fields']['field_series_image']['field'] = 'field_series_image';
  $handler->display->display_options['fields']['field_series_image']['label'] = '';
  $handler->display->display_options['fields']['field_series_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_series_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Field: Thumbnail image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_series_image]';
  $handler->display->display_options['fields']['field_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['empty'] = '[body]';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Field: Audience reaching.city title */
  $handler->display->display_options['fields']['field_subtitle_1']['id'] = 'field_subtitle_1';
  $handler->display->display_options['fields']['field_subtitle_1']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle_1']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle_1']['relationship'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['fields']['field_subtitle_1']['ui_name'] = 'Audience reaching.city title';
  $handler->display->display_options['fields']['field_subtitle_1']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'taxonomy_vocabulary_3_tid';
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Contextual filter: Field: Ministry Centre (taxonomy_vocabulary_1) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['id'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['table'] = 'field_data_taxonomy_vocabulary_1';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['field'] = 'taxonomy_vocabulary_1_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['default_argument_options']['code'] = 'return cbf_city_string();';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['validate_options']['vocabularies'] = array(
    'vocabulary_1' => 'vocabulary_1',
  );
  $handler->display->display_options['arguments']['taxonomy_vocabulary_1_tid']['validate_options']['type'] = 'convert';
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
  $handler->display->display_options['arguments']['field_highlight_location_tid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_highlight_location_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_highlight_location_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['validate_options']['vocabularies'] = array(
    'banner' => 'banner',
  );
  $handler->display->display_options['arguments']['field_highlight_location_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_highlight_location_tid']['validate']['fail'] = 'ignore';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Field: Date text (field_date_text) */
  $handler->display->display_options['filters']['field_date_text_value']['id'] = 'field_date_text_value';
  $handler->display->display_options['filters']['field_date_text_value']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['filters']['field_date_text_value']['field'] = 'field_date_text_value';
  $handler->display->display_options['filters']['field_date_text_value']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['field_date_text_value']['value'] = '0';
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';

  /* Display: Block: upcoming events in this city */
  $handler = $view->new_display('block', 'Block: upcoming events in this city', 'block');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['label'] = 'City activities';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'reaching_city_city_to_activity:block_1';
  $translatables['reaching_city_city_to_event'] = array(
    t('Master'),
    t('<i class="fa fa-fw fa-calendar"></i>Coming up'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Audience'),
    t('[field_series_image]'),
    t('[body]'),
    t('All'),
    t('Block: upcoming events in this city'),
    t('City activities'),
  );
  $export['reaching_city_city_to_event'] = $view;

  $view = new view();
  $view->name = 'reaching_city_civicrm_event_date_location';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'reaching.city CiviCRM Event location';
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
  /* Field: CiviCRM Address: Supplemental Street Address */
  $handler->display->display_options['fields']['supplemental_address_1']['id'] = 'supplemental_address_1';
  $handler->display->display_options['fields']['supplemental_address_1']['table'] = 'civicrm_address';
  $handler->display->display_options['fields']['supplemental_address_1']['field'] = 'supplemental_address_1';
  $handler->display->display_options['fields']['supplemental_address_1']['relationship'] = 'id';
  $handler->display->display_options['fields']['supplemental_address_1']['label'] = '';
  $handler->display->display_options['fields']['supplemental_address_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['supplemental_address_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['supplemental_address_1']['alter']['text'] = '[supplemental_address_1]<br/>';
  $handler->display->display_options['fields']['supplemental_address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['supplemental_address_1']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['street_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['street_address']['alter']['text'] = '[street_address]</br>';
  $handler->display->display_options['fields']['street_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['street_address']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[supplemental_address_1]
[street_address]
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
    t('[supplemental_address_1]<br/>'),
    t('[street_address]</br>'),
    t('[supplemental_address_1]
[street_address]
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
    'markername' => 'CBF',
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
  $handler->display->display_options['style_options']['markertype'] = 'CBF';
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
  $handler->display->display_options['fields']['title']['link_to_civicrm_event'] = 'custom';
  $handler->display->display_options['fields']['title']['custom_link'] = '/civicrm/event/register?reset=1&id=';
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
  /* Field: CiviCRM Price Fields: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'civicrm_price_field';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Price Fields: HTML Type */
  $handler->display->display_options['fields']['html_type']['id'] = 'html_type';
  $handler->display->display_options['fields']['html_type']['table'] = 'civicrm_price_field';
  $handler->display->display_options['fields']['html_type']['field'] = 'html_type';
  $handler->display->display_options['fields']['html_type']['relationship'] = 'civicrm_price_field';
  $handler->display->display_options['fields']['html_type']['label'] = '';
  $handler->display->display_options['fields']['html_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['html_type']['element_label_colon'] = FALSE;
  /* Field: Price field label */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Price field label';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="[html_type]">[label]</span>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['is_active']['group'] = 1;
  /* Filter criterion: CiviCRM Price Field Values: Is Active */
  $handler->display->display_options['filters']['is_active_1']['id'] = 'is_active_1';
  $handler->display->display_options['filters']['is_active_1']['table'] = 'civicrm_price_field_value';
  $handler->display->display_options['filters']['is_active_1']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active_1']['relationship'] = 'civicrm_price_field_value';
  $handler->display->display_options['filters']['is_active_1']['value'] = '1';
  $handler->display->display_options['filters']['is_active_1']['group'] = 1;

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
    t('<span class="[html_type]">[label]</span>'),
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
  /* Filter criterion: Field: Highlight (field_highlight:fid) */
  $handler->display->display_options['filters']['field_highlight_fid']['id'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['filters']['field_highlight_fid']['field'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['operator'] = 'not empty';

  /* Display: Home page highlights */
  $handler = $view->new_display('block', 'Home page highlights', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Highlight location (field_highlight_location) */
  $handler->display->display_options['filters']['field_highlight_location_tid']['id'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['table'] = 'field_data_field_highlight_location';
  $handler->display->display_options['filters']['field_highlight_location_tid']['field'] = 'field_highlight_location_tid';
  $handler->display->display_options['filters']['field_highlight_location_tid']['value'] = array(
    0 => '1040',
  );
  $handler->display->display_options['filters']['field_highlight_location_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_highlight_location_tid']['vocabulary'] = 'banner';
  /* Filter criterion: Field: Highlight (field_highlight:fid) */
  $handler->display->display_options['filters']['field_highlight_fid']['id'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['filters']['field_highlight_fid']['field'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_highlight_fid']['group'] = 1;
  /* Filter criterion: Content: Activity category (field_activity_category) */
  $handler->display->display_options['filters']['field_activity_category_tid']['id'] = 'field_activity_category_tid';
  $handler->display->display_options['filters']['field_activity_category_tid']['table'] = 'field_data_field_activity_category';
  $handler->display->display_options['filters']['field_activity_category_tid']['field'] = 'field_activity_category_tid';
  $handler->display->display_options['filters']['field_activity_category_tid']['value'] = array(
    1183 => '1183',
    1184 => '1184',
  );
  $handler->display->display_options['filters']['field_activity_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_activity_category_tid']['vocabulary'] = 'activity_category';

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
  /* Filter criterion: Field: Highlight (field_highlight:fid) */
  $handler->display->display_options['filters']['field_highlight_fid']['id'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['filters']['field_highlight_fid']['field'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['operator'] = 'not empty';

  /* Display: City page groups */
  $handler = $view->new_display('block', 'City page groups', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '[description]';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Activity category (field_activity_category) */
  $handler->display->display_options['relationships']['field_activity_category_tid']['id'] = 'field_activity_category_tid';
  $handler->display->display_options['relationships']['field_activity_category_tid']['table'] = 'field_data_field_activity_category';
  $handler->display->display_options['relationships']['field_activity_category_tid']['field'] = 'field_activity_category_tid';
  $handler->display->display_options['relationships']['field_activity_category_tid']['label'] = 'Activity category';
  $handler->display->display_options['relationships']['field_activity_category_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_activity_category_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Activity category (field_activity_category) */
  $handler->display->display_options['filters']['field_activity_category_tid']['id'] = 'field_activity_category_tid';
  $handler->display->display_options['filters']['field_activity_category_tid']['table'] = 'field_data_field_activity_category';
  $handler->display->display_options['filters']['field_activity_category_tid']['field'] = 'field_activity_category_tid';
  $handler->display->display_options['filters']['field_activity_category_tid']['value'] = array(
    1183 => '1183',
  );
  $handler->display->display_options['filters']['field_activity_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_activity_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_activity_category_tid']['vocabulary'] = 'activity_category';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'activity' => 'activity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Highlight (field_highlight:fid) */
  $handler->display->display_options['filters']['field_highlight_fid']['id'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['table'] = 'field_data_field_highlight';
  $handler->display->display_options['filters']['field_highlight_fid']['field'] = 'field_highlight_fid';
  $handler->display->display_options['filters']['field_highlight_fid']['operator'] = 'not empty';
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
    t('City page groups'),
    t('[description]'),
    t('Activity category'),
  );
  $export['reaching_city_highlights'] = $view;

  $view = new view();
  $view->name = 'reaching_city_national_blog';
  $view->description = 'Check out our blog for some interesting thoughts on the big questions';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reaching.city National Blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-comment-o"></i>Blog';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '86400';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '86400';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'description',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Field: Thumbnail image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_thumbnail_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_text']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['empty'] = '[body]';
  /* Sort criterion: Content: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: Block: recent blogs */
  $handler = $view->new_display('block', 'Block: recent blogs', 'block');

  /* Display: Block: popular blogs */
  $handler = $view->new_display('block', 'Block: popular blogs', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-comment-o"></i>Popular';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Sort criterion: Content: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );
  /* Filter criterion: Content: Date (field_episode_date) */
  $handler->display->display_options['filters']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['filters']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['filters']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['filters']['field_episode_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_episode_date_value']['default_date'] = 'now -3 month';
  $handler->display->display_options['filters']['field_episode_date_value']['year_range'] = '-1:+1';
  $translatables['reaching_city_national_blog'] = array(
    t('Master'),
    t('<i class="fa fa-fw fa-comment-o"></i>Blog'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('[field_image]'),
    t('[body]'),
    t('Block: recent blogs'),
    t('Block: popular blogs'),
    t('<i class="fa fa-fw fa-comment-o"></i>Popular'),
  );
  $export['reaching_city_national_blog'] = $view;

  $view = new view();
  $view->name = 'reaching_city_national_civievent';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'civicrm_event';
  $view->human_name = 'reaching.city Domain to CiviEvent via Activity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-calendar"></i>Upcoming events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  /* Field: CiviCRM Events: Event ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Field: Thumbnail image */
  $handler->display->display_options['fields']['field_thumbnail_image']['id'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['table'] = 'field_data_field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['field'] = 'field_thumbnail_image';
  $handler->display->display_options['fields']['field_thumbnail_image']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_thumbnail_image']['empty'] = '[field_image]';
  $handler->display->display_options['fields']['field_thumbnail_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_thumbnail_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: CiviCRM Events: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['link_to_civicrm_event'] = 'custom';
  $handler->display->display_options['fields']['title']['custom_link'] = 'civicrm-event/';
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  /* Field: CiviCRM Events: Summary */
  $handler->display->display_options['fields']['summary']['id'] = 'summary';
  $handler->display->display_options['fields']['summary']['table'] = 'civicrm_event';
  $handler->display->display_options['fields']['summary']['field'] = 'summary';
  $handler->display->display_options['fields']['summary']['label'] = '';
  $handler->display->display_options['fields']['summary']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Sort Order (field_sort_order) */
  $handler->display->display_options['sorts']['field_sort_order_value']['id'] = 'field_sort_order_value';
  $handler->display->display_options['sorts']['field_sort_order_value']['table'] = 'field_data_field_sort_order';
  $handler->display->display_options['sorts']['field_sort_order_value']['field'] = 'field_sort_order_value';
  /* Filter criterion: Field: Next action (field_next_action) */
  $handler->display->display_options['filters']['field_next_action_value']['id'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['table'] = 'field_data_field_next_action';
  $handler->display->display_options['filters']['field_next_action_value']['field'] = 'field_next_action_value';
  $handler->display->display_options['filters']['field_next_action_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_next_action_value']['value'] = '0';
  /* Filter criterion: CiviCRM Events: Is Public */
  $handler->display->display_options['filters']['is_public']['id'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['table'] = 'civicrm_event';
  $handler->display->display_options['filters']['is_public']['field'] = 'is_public';
  $handler->display->display_options['filters']['is_public']['value'] = '1';
  /* Filter criterion: Domain Access: Available on current domain */
  $handler->display->display_options['filters']['current_all']['id'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['table'] = 'domain_access';
  $handler->display->display_options['filters']['current_all']['field'] = 'current_all';
  $handler->display->display_options['filters']['current_all']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['filters']['current_all']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'domain/civicrm-events';
  $translatables['reaching_city_national_civievent'] = array(
    t('Master'),
    t('<i class="fa fa-fw fa-calendar"></i>Upcoming events'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Activity'),
    t('.'),
    t('[field_image]'),
    t('Block'),
    t('Page'),
  );
  $export['reaching_city_national_civievent'] = $view;

  $view = new view();
  $view->name = 'reaching_city_national_library';
  $view->description = 'Browse our public library for some challenging takes on the big questions';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reaching.city National Library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-university"></i>Library';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'description',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Is video */
  $handler->display->display_options['fields']['field_is_video']['id'] = 'field_is_video';
  $handler->display->display_options['fields']['field_is_video']['table'] = 'field_data_field_is_video';
  $handler->display->display_options['fields']['field_is_video']['field'] = 'field_is_video';
  $handler->display->display_options['fields']['field_is_video']['label'] = '';
  $handler->display->display_options['fields']['field_is_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_is_video']['alter']['text'] = '<i class="fa fa-fw fa-youtube-play"></i>';
  $handler->display->display_options['fields']['field_is_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_is_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_is_video']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_is_video']['type'] = 'computed_field_computed_value';
  /* Field: Content: Is audio */
  $handler->display->display_options['fields']['field_is_audio']['id'] = 'field_is_audio';
  $handler->display->display_options['fields']['field_is_audio']['table'] = 'field_data_field_is_audio';
  $handler->display->display_options['fields']['field_is_audio']['field'] = 'field_is_audio';
  $handler->display->display_options['fields']['field_is_audio']['label'] = '';
  $handler->display->display_options['fields']['field_is_audio']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_is_audio']['alter']['text'] = '<i class="fa fa-fw fa-microphone"></i>';
  $handler->display->display_options['fields']['field_is_audio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_is_audio']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_is_audio']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_is_audio']['type'] = 'computed_field_computed_value';
  /* Field: Content: Is text */
  $handler->display->display_options['fields']['field_is_text']['id'] = 'field_is_text';
  $handler->display->display_options['fields']['field_is_text']['table'] = 'field_data_field_is_text';
  $handler->display->display_options['fields']['field_is_text']['field'] = 'field_is_text';
  $handler->display->display_options['fields']['field_is_text']['label'] = '';
  $handler->display->display_options['fields']['field_is_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_is_text']['alter']['text'] = '<i class="fa fa-fw fa-file-pdf-o"></i>';
  $handler->display->display_options['fields']['field_is_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_is_text']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_is_text']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_is_text']['type'] = 'computed_field_computed_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Field: Activity */
  $handler->display->display_options['fields']['field_in_activity']['id'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['field'] = 'field_in_activity';
  $handler->display->display_options['fields']['field_in_activity']['label'] = '';
  $handler->display->display_options['fields']['field_in_activity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_in_activity']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_in_activity']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Speaker(s) */
  $handler->display->display_options['fields']['field_speakers']['id'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['table'] = 'field_data_field_speakers';
  $handler->display->display_options['fields']['field_speakers']['field'] = 'field_speakers';
  $handler->display->display_options['fields']['field_speakers']['label'] = '';
  $handler->display->display_options['fields']['field_speakers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_speakers']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_speakers']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_speakers']['delta_offset'] = '0';
  /* Field: Field: Date text */
  $handler->display->display_options['fields']['field_date_text']['id'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['table'] = 'field_data_field_date_text';
  $handler->display->display_options['fields']['field_date_text']['field'] = 'field_date_text';
  $handler->display->display_options['fields']['field_date_text']['label'] = '';
  $handler->display->display_options['fields']['field_date_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_text']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['empty'] = '[body]';
  /* Sort criterion: Content: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );

  /* Display: Block: recent library */
  $handler = $view->new_display('block', 'Block: recent library', 'block');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';

  /* Display: Block: popular library */
  $handler = $view->new_display('block', 'Block: popular library', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-university"></i>Popular';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Sort criterion: Content: Date (field_episode_date) */
  $handler->display->display_options['sorts']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['sorts']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['sorts']['field_episode_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'episode' => 'episode',
  );
  /* Filter criterion: Content: Date (field_episode_date) */
  $handler->display->display_options['filters']['field_episode_date_value']['id'] = 'field_episode_date_value';
  $handler->display->display_options['filters']['field_episode_date_value']['table'] = 'field_data_field_episode_date';
  $handler->display->display_options['filters']['field_episode_date_value']['field'] = 'field_episode_date_value';
  $handler->display->display_options['filters']['field_episode_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_episode_date_value']['default_date'] = 'now -1 year';
  $handler->display->display_options['filters']['field_episode_date_value']['year_range'] = '-1:+1';
  $translatables['reaching_city_national_library'] = array(
    t('Master'),
    t('<i class="fa fa-fw fa-university"></i>Library'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<i class="fa fa-fw fa-youtube-play"></i>'),
    t('<i class="fa fa-fw fa-microphone"></i>'),
    t('<i class="fa fa-fw fa-file-pdf-o"></i>'),
    t('[body]'),
    t('Block: recent library'),
    t('Block: popular library'),
    t('<i class="fa fa-fw fa-university"></i>Popular'),
  );
  $export['reaching_city_national_library'] = $view;

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
    'markername' => 'CBF',
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
  $handler->display->display_options['style_options']['markertype'] = 'CBF';
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

  $view = new view();
  $view->name = 'reaching_city_video_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'reaching.city video gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-youtube-play"></i>Video gallery';
  $handler->display->display_options['css_class'] = 'no-thumbnail';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_subtitle',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_in_activity_target_id']['id'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['table'] = 'field_data_field_in_activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['field'] = 'field_in_activity_target_id';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['label'] = 'Activity';
  $handler->display->display_options['relationships']['field_in_activity_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  $handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
  /* Field: Field: Subtitle */
  $handler->display->display_options['fields']['field_subtitle']['id'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['table'] = 'field_data_field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['field'] = 'field_subtitle';
  $handler->display->display_options['fields']['field_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subtitle']['empty'] = '[body]';
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video']['group_column'] = 'url';
  $handler->display->display_options['fields']['field_video']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_video']['multi_type'] = 'ul';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_in_activity_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Video (field_video:url) */
  $handler->display->display_options['filters']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['filters']['field_video_url']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['filters']['field_video_url']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'videos/activity/%';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<i class="fa fa-fw fa-youtube-play"></i>Latest videos';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $translatables['reaching_city_video_gallery'] = array(
    t('Master'),
    t('<i class="fa fa-fw fa-youtube-play"></i>Video gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Activity'),
    t('[body]'),
    t('All'),
    t('Page'),
    t('Block'),
    t('<i class="fa fa-fw fa-youtube-play"></i>Latest videos'),
  );
  $export['reaching_city_video_gallery'] = $view;

  return $export;
}
