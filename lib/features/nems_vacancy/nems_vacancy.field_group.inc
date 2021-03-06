<?php
/**
 * @file
 * nems_vacancy.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_vacancy_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_vacancy_content|node|nems_vacancy|form';
  $field_group->group_name = 'group_nems_vacancy_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_vacancy';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_nems_deadline',
      2 => 'field_nems_reference',
      3 => 'field_nems_vacancy_status',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-vacancy-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_vacancy_content|node|nems_vacancy|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_vacancy_files|node|nems_vacancy|form';
  $field_group->group_name = 'group_nems_vacancy_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_vacancy';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Upload files',
    'weight' => '5',
    'children' => array(
      0 => 'field_nems_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-vacancy-files field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_vacancy_files|node|nems_vacancy|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Upload files');

  return $field_groups;
}
