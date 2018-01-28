<?php
/**
 * @file
 * homepage_slideshow.features.inc
 */

/**
 * Implements hook_views_api().
 */
function homepage_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function homepage_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: announcement_hero_slide.
  $styles['announcement_hero_slide'] = array(
    'label' => 'Announcement Hero Slide',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 556,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 741,
          'height' => 556,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function homepage_slideshow_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('Building blocks of slideshows'),
      'has_title' => '1',
      'title_label' => t('Caption'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
