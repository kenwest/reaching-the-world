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

  // Exported menu link: management_reachingcity-footer-navigation:admin/structure/menu/manage/menu-reaching-city-footer-naviga.
  $menu_links['management_reachingcity-footer-navigation:admin/structure/menu/manage/menu-reaching-city-footer-naviga'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-reaching-city-footer-naviga',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'reaching.city footer navigation',
    'options' => array(
      'identifier' => 'management_reachingcity-footer-navigation:admin/structure/menu/manage/menu-reaching-city-footer-naviga',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_reachingcity-our-websites:admin/structure/menu/manage/menu-reaching-city-other-sites.
  $menu_links['management_reachingcity-our-websites:admin/structure/menu/manage/menu-reaching-city-other-sites'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-reaching-city-other-sites',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'reaching.city our websites',
    'options' => array(
      'identifier' => 'management_reachingcity-our-websites:admin/structure/menu/manage/menu-reaching-city-other-sites',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: menu-reaching-city-footer-naviga_about-us:node/3075.
  $menu_links['menu-reaching-city-footer-naviga_about-us:node/3075'] = array(
    'menu_name' => 'menu-reaching-city-footer-naviga',
    'link_path' => 'node/3075',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-footer-naviga_about-us:node/3075',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-footer-naviga_contact-us:contact/us.
  $menu_links['menu-reaching-city-footer-naviga_contact-us:contact/us'] = array(
    'menu_name' => 'menu-reaching-city-footer-naviga',
    'link_path' => 'contact/us',
    'router_path' => 'contact/%',
    'link_title' => 'Contact us',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-footer-naviga_contact-us:contact/us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-footer-naviga_privacy:node/61.
  $menu_links['menu-reaching-city-footer-naviga_privacy:node/61'] = array(
    'menu_name' => 'menu-reaching-city-footer-naviga',
    'link_path' => 'node/61',
    'router_path' => 'node/%',
    'link_title' => 'Privacy',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-footer-naviga_privacy:node/61',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-footer-naviga_staff:user.
  $menu_links['menu-reaching-city-footer-naviga_staff:user'] = array(
    'menu_name' => 'menu-reaching-city-footer-naviga',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Staff',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-footer-naviga_staff:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-main-menu_about-us:menutoken/5a0b9797c0d05.
  $menu_links['menu-reaching-city-main-menu_about-us:menutoken/5a0b9797c0d05'] = array(
    'menu_name' => 'menu-reaching-city-main-menu',
    'link_path' => 'menutoken/5a0b9797c0d05',
    'router_path' => 'menutoken/%',
    'link_title' => 'About us',
    'options' => array(
      'identifier' => 'menu-reaching-city-main-menu_about-us:menutoken/5a0b9797c0d05',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[campus:path]about',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
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
  // Exported menu link: menu-reaching-city-main-menu_city-bible-forum-site://citybibleforum.org.
  $menu_links['menu-reaching-city-main-menu_city-bible-forum-site://citybibleforum.org'] = array(
    'menu_name' => 'menu-reaching-city-main-menu',
    'link_path' => '//citybibleforum.org',
    'router_path' => '',
    'link_title' => 'City Bible Forum site',
    'options' => array(
      'identifier' => 'menu-reaching-city-main-menu_city-bible-forum-site://citybibleforum.org',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-main-menu_contact-us:menutoken/5a0b97f67ea3e.
  $menu_links['menu-reaching-city-main-menu_contact-us:menutoken/5a0b97f67ea3e'] = array(
    'menu_name' => 'menu-reaching-city-main-menu',
    'link_path' => 'menutoken/5a0b97f67ea3e',
    'router_path' => 'menutoken/%',
    'link_title' => 'Contact us',
    'options' => array(
      'identifier' => 'menu-reaching-city-main-menu_contact-us:menutoken/5a0b97f67ea3e',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'menu_token_link_path' => '[campus:path]contact',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
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
  // Exported menu link: menu-reaching-city-main-menu_support-us:node/15.
  $menu_links['menu-reaching-city-main-menu_support-us:node/15'] = array(
    'menu_name' => 'menu-reaching-city-main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Support us',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-main-menu_support-us:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-other-sites_bigger-questions:https://biggerquestions.org.
  $menu_links['menu-reaching-city-other-sites_bigger-questions:https://biggerquestions.org'] = array(
    'menu_name' => 'menu-reaching-city-other-sites',
    'link_path' => 'https://biggerquestions.org',
    'router_path' => '',
    'link_title' => 'Bigger questions',
    'options' => array(
      'identifier' => 'menu-reaching-city-other-sites_bigger-questions:https://biggerquestions.org',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-other-sites_city-bible-forum:https://citybibleforum.org.
  $menu_links['menu-reaching-city-other-sites_city-bible-forum:https://citybibleforum.org'] = array(
    'menu_name' => 'menu-reaching-city-other-sites',
    'link_path' => 'https://citybibleforum.org',
    'router_path' => '',
    'link_title' => 'City Bible Forum',
    'options' => array(
      'identifier' => 'menu-reaching-city-other-sites_city-bible-forum:https://citybibleforum.org',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-other-sites_lifework:https://lifeatwork.org.au/.
  $menu_links['menu-reaching-city-other-sites_lifework:https://lifeatwork.org.au/'] = array(
    'menu_name' => 'menu-reaching-city-other-sites',
    'link_path' => 'https://lifeatwork.org.au/',
    'router_path' => '',
    'link_title' => 'Life@Work',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-other-sites_lifework:https://lifeatwork.org.au/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-other-sites_reaching-the-world:https://reaching.city.
  $menu_links['menu-reaching-city-other-sites_reaching-the-world:https://reaching.city'] = array(
    'menu_name' => 'menu-reaching-city-other-sites',
    'link_path' => 'https://reaching.city',
    'router_path' => '',
    'link_title' => 'Reaching the world',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-other-sites_reaching-the-world:https://reaching.city',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-other-sites_smith-lecture:https://smithlecture.org/.
  $menu_links['menu-reaching-city-other-sites_smith-lecture:https://smithlecture.org/'] = array(
    'menu_name' => 'menu-reaching-city-other-sites',
    'link_path' => 'https://smithlecture.org/',
    'router_path' => '',
    'link_title' => 'Smith Lecture',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-other-sites_smith-lecture:https://smithlecture.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-reaching-city-other-sites_the-edge:https://theedge.live.
  $menu_links['menu-reaching-city-other-sites_the-edge:https://theedge.live'] = array(
    'menu_name' => 'menu-reaching-city-other-sites',
    'link_path' => 'https://theedge.live',
    'router_path' => '',
    'link_title' => 'The Edge',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-reaching-city-other-sites_the-edge:https://theedge.live',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
    'weight' => -50,
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
    'weight' => -49,
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
    'weight' => -48,
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
    'weight' => -47,
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
    'weight' => -46,
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
    'weight' => -45,
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
    'weight' => -44,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Adelaide');
  t('Bigger questions');
  t('Blog');
  t('Brisbane');
  t('Canberra');
  t('City Bible Forum');
  t('City Bible Forum site');
  t('Contact us');
  t('Hobart');
  t('Library');
  t('Life@Work');
  t('Melbourne');
  t('Perth');
  t('Privacy');
  t('Reaching the world');
  t('Smith Lecture');
  t('Staff');
  t('Support us');
  t('Sydney');
  t('The Edge');
  t('reaching.city footer navigation');
  t('reaching.city our websites');

  return $menu_links;
}
