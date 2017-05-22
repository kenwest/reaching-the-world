<?php
/**
 * @file
 * reaching_the_world.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function reaching_the_world_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'reaching.city promotional video';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'reaching_city_promotional_video';
  $fe_block_boxes->body = '<p>[video:https://www.youtube.com/watch?v=BQcnvOSNN5s]</p>
';

  $export['reaching_city_promotional_video'] = $fe_block_boxes;

  return $export;
}
