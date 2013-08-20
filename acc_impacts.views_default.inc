<?php
/**
 * @file
 * acc_impacts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acc_impacts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acc_impacts';
  $view->description = '';
  $view->tag = 'Access';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Access Impact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'acc_impacts' => 'acc_impacts',
  );
  /* Filter criterion: Taxonomy term: Access Event (field_access_event) */
  $handler->display->display_options['filters']['field_access_event_tid']['id'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['table'] = 'field_data_field_access_event';
  $handler->display->display_options['filters']['field_access_event_tid']['field'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['value'] = array(
    673 => '673',
  );
  $handler->display->display_options['filters']['field_access_event_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_access_event_tid']['vocabulary'] = 'access_constraint_type';

  /* Display: Incident Impact */
  $handler = $view->new_display('entityreference', 'Incident Impact', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Incident Impact';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_acc_unit' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'acc_impacts' => 'acc_impacts',
  );
  /* Filter criterion: Taxonomy term: Access Event (field_access_event) */
  $handler->display->display_options['filters']['field_access_event_tid']['id'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['table'] = 'field_data_field_access_event';
  $handler->display->display_options['filters']['field_access_event_tid']['field'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['value'] = array(
    569 => '569',
  );
  $handler->display->display_options['filters']['field_access_event_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_access_event_tid']['vocabulary'] = 'access_constraint_type';

  /* Display: br req into country Impact */
  $handler = $view->new_display('entityreference', 'br req into country Impact', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'br req into country Impact';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_acc_unit' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'acc_impacts' => 'acc_impacts',
  );
  /* Filter criterion: Taxonomy term: Access Event (field_access_event) */
  $handler->display->display_options['filters']['field_access_event_tid']['id'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['table'] = 'field_data_field_access_event';
  $handler->display->display_options['filters']['field_access_event_tid']['field'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['value'] = array(
    567 => '567',
  );
  $handler->display->display_options['filters']['field_access_event_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_access_event_tid']['vocabulary'] = 'access_constraint_type';

  /* Display: br req within country Impact */
  $handler = $view->new_display('entityreference', 'br req within country Impact', 'entityreference_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'br req within country Impact';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_acc_unit' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'acc_impacts' => 'acc_impacts',
  );
  /* Filter criterion: Taxonomy term: Access Event (field_access_event) */
  $handler->display->display_options['filters']['field_access_event_tid']['id'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['table'] = 'field_data_field_access_event';
  $handler->display->display_options['filters']['field_access_event_tid']['field'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['value'] = array(
    568 => '568',
  );
  $handler->display->display_options['filters']['field_access_event_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_access_event_tid']['vocabulary'] = 'access_constraint_type';

  /* Display: policy Impact */
  $handler = $view->new_display('entityreference', 'policy Impact', 'entityreference_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'policy Impact';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_acc_unit' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'acc_impacts' => 'acc_impacts',
  );
  /* Filter criterion: Taxonomy term: Access Event (field_access_event) */
  $handler->display->display_options['filters']['field_access_event_tid']['id'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['table'] = 'field_data_field_access_event';
  $handler->display->display_options['filters']['field_access_event_tid']['field'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['value'] = array(
    570 => '570',
  );
  $handler->display->display_options['filters']['field_access_event_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_access_event_tid']['vocabulary'] = 'access_constraint_type';

  /* Display: Temporary Constraint Impact */
  $handler = $view->new_display('entityreference', 'Temporary Constraint Impact', 'entityreference_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Temporary Constraint Impact';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_acc_unit' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'acc_impacts' => 'acc_impacts',
  );
  /* Filter criterion: Taxonomy term: Access Event (field_access_event) */
  $handler->display->display_options['filters']['field_access_event_tid']['id'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['table'] = 'field_data_field_access_event';
  $handler->display->display_options['filters']['field_access_event_tid']['field'] = 'field_access_event_tid';
  $handler->display->display_options['filters']['field_access_event_tid']['value'] = array(
    571 => '571',
  );
  $handler->display->display_options['filters']['field_access_event_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_access_event_tid']['vocabulary'] = 'access_constraint_type';
  $translatables['acc_impacts'] = array(
    t('Master'),
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
    t('Incident Impact'),
    t('br req into country Impact'),
    t('br req within country Impact'),
    t('policy Impact'),
    t('Temporary Constraint Impact'),
  );
  $export['acc_impacts'] = $view;

  return $export;
}
