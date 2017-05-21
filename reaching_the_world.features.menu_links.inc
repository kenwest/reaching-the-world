<?php
/**
 * @file
 * reaching_the_world.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function reaching_the_world_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-reaching-city-main-menu_blog:articles.
  $menu_links['menu-reaching-city-main-menu_blog:articles'] = array(
    'menu_name' => 'menu-reaching-city-main-menu',
    'link_path' => 'articles',
    'router_path' => 'articles',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-main-menu_blog:articles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-main-menu_library:library.
  $menu_links['menu-reaching-city-main-menu_library:library'] = array(
    'menu_name' => 'menu-reaching-city-main-menu',
    'link_path' => 'library',
    'router_path' => 'library',
    'link_title' => 'Library',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-main-menu_library:library',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-main-menu_main-site://citybibleforum.org.
  $menu_links['menu-reaching-city-main-menu_main-site://citybibleforum.org'] = array(
    'menu_name' => 'menu-reaching-city-main-menu',
    'link_path' => '//citybibleforum.org',
    'router_path' => '',
    'link_title' => 'Main site',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-main-menu_main-site://citybibleforum.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-secondary-men_adelaide:city/adelaide.
  $menu_links['menu-reaching-city-secondary-men_adelaide:city/adelaide'] = array(
    'menu_name' => 'menu-reaching-city-secondary-men',
    'link_path' => 'city/adelaide',
    'router_path' => 'city/%',
    'link_title' => 'Adelaide',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-adelaide',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-secondary-men_adelaide:city/adelaide',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-secondary-men_brisbane:city/brisbane.
  $menu_links['menu-reaching-city-secondary-men_brisbane:city/brisbane'] = array(
    'menu_name' => 'menu-reaching-city-secondary-men',
    'link_path' => 'city/brisbane',
    'router_path' => 'city/%',
    'link_title' => 'Brisbane',
    'options' => array(
      'identifier' => 'menu-reaching-city-secondary-men_brisbane:city/brisbane',
      'attributes' => array(
        'class' => array(
          0 => 'menu-brisbane',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-secondary-men_canberra:city/canberra.
  $menu_links['menu-reaching-city-secondary-men_canberra:city/canberra'] = array(
    'menu_name' => 'menu-reaching-city-secondary-men',
    'link_path' => 'city/canberra',
    'router_path' => 'city/%',
    'link_title' => 'Canberra',
    'options' => array(
      'identifier' => 'menu-reaching-city-secondary-men_canberra:city/canberra',
      'attributes' => array(
        'class' => array(
          0 => 'menu-canberra',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-secondary-men_hobart:city/hobart.
  $menu_links['menu-reaching-city-secondary-men_hobart:city/hobart'] = array(
    'menu_name' => 'menu-reaching-city-secondary-men',
    'link_path' => 'city/hobart',
    'router_path' => 'city/%',
    'link_title' => 'Hobart',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-hobart',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-secondary-men_hobart:city/hobart',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-secondary-men_melbourne:city/melbourne.
  $menu_links['menu-reaching-city-secondary-men_melbourne:city/melbourne'] = array(
    'menu_name' => 'menu-reaching-city-secondary-men',
    'link_path' => 'city/melbourne',
    'router_path' => 'city/%',
    'link_title' => 'Melbourne',
    'options' => array(
      'identifier' => 'menu-reaching-city-secondary-men_melbourne:city/melbourne',
      'attributes' => array(
        'class' => array(
          0 => 'menu-melbourne',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-secondary-men_perth:city/perth.
  $menu_links['menu-reaching-city-secondary-men_perth:city/perth'] = array(
    'menu_name' => 'menu-reaching-city-secondary-men',
    'link_path' => 'city/perth',
    'router_path' => 'city/%',
    'link_title' => 'Perth',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-perth',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-secondary-men_perth:city/perth',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-secondary-men_sydney:city/sydney.
  $menu_links['menu-reaching-city-secondary-men_sydney:city/sydney'] = array(
    'menu_name' => 'menu-reaching-city-secondary-men',
    'link_path' => 'city/sydney',
    'router_path' => 'city/%',
    'link_title' => 'Sydney',
    'options' => array(
      'identifier' => 'menu-reaching-city-secondary-men_sydney:city/sydney',
      'attributes' => array(
        'class' => array(
          0 => 'menu-sydney',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adelaide');
  t('Blog');
  t('Brisbane');
  t('Canberra');
  t('Hobart');
  t('Library');
  t('Main site');
  t('Melbourne');
  t('Perth');
  t('Sydney');

  return $menu_links;
}
