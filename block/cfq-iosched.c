



<!DOCTYPE html>
<html lang="en" class=" is-copy-enabled">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>

    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/frameworks-fef7fdfe41dd435c6d82f93b486dc62bc095ebd12cd24fa2a817c8bb45dc073e.css" integrity="sha256-/vf9/kHdQ1xtgvk7SG3GK8CV69Es0k+iqBfIu0XcBz4=" media="all" rel="stylesheet" />
    <link crossorigin="anonymous" href="https://assets-cdn.github.com/assets/github-83e53f1624aa604c4ddbe30d30459bf55c8e735d9029f0f10741db45f146f46b.css" integrity="sha256-g+U/FiSqYExN2+MNMEWb9VyOc12QKfDxB0HbRfFG9Gs=" media="all" rel="stylesheet" />
    
    
    
    
    

    <link as="script" href="https://assets-cdn.github.com/assets/frameworks-f2de4c863a487a877150989f965232bacfde178abf9c1963d9f84c5c19916f0c.js" rel="preload" />
    
    <link as="script" href="https://assets-cdn.github.com/assets/github-3da11fb1d4d66b3fb20c6939e728684832b73975615e3fd052df8274c9d3484a.js" rel="preload" />

    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    <meta name="viewport" content="width=device-width">
    
    
    <title>lightning-kernel-bacon/cfq-iosched.c at 11edf634e1f4979191ea0427e45b6bda898b588a · nikhil18/lightning-kernel-bacon</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" href="/apple-touch-icon.png">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-57x57.png">
    <link rel="apple-touch-icon" sizes="60x60" href="/apple-touch-icon-60x60.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-72x72.png">
    <link rel="apple-touch-icon" sizes="76x76" href="/apple-touch-icon-76x76.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114x114.png">
    <link rel="apple-touch-icon" sizes="120x120" href="/apple-touch-icon-120x120.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144x144.png">
    <link rel="apple-touch-icon" sizes="152x152" href="/apple-touch-icon-152x152.png">
    <link rel="apple-touch-icon" sizes="180x180" href="/apple-touch-icon-180x180.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="https://avatars0.githubusercontent.com/u/7988338?v=3&amp;s=400" name="twitter:image:src" /><meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="nikhil18/lightning-kernel-bacon" name="twitter:title" /><meta content="Contribute to lightning-kernel-bacon development by creating an account on GitHub." name="twitter:description" />
      <meta content="https://avatars0.githubusercontent.com/u/7988338?v=3&amp;s=400" property="og:image" /><meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="nikhil18/lightning-kernel-bacon" property="og:title" /><meta content="https://github.com/nikhil18/lightning-kernel-bacon" property="og:url" /><meta content="Contribute to lightning-kernel-bacon development by creating an account on GitHub." property="og:description" />
      <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">
    <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">
    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="web-socket" href="wss://live.github.com/_sockets/MTc3MTgxMDY6YjFmZjk3ODUyMzFlN2EwYzRjYTVkZjQ5NTAwMTBjYzM6ZGQwZTNiODdjMDFjODkyZTc3Zjc1M2Q3MmVkN2YxNjIyZWEzZDNhNjc5ZjMzNGM1MjYxZDMwNTY1ZmNiMGYxZA==--f7dd85b491db08c60231e98f107d8c190b3acca3">
    <meta name="pjax-timeout" content="1000">
    <link rel="sudo-modal" href="/sessions/sudo_modal">

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>

    <meta name="google-site-verification" content="KT5gs8h0wvaagLKAVWq8bbeNwnZZK1r1XQysX3xurLU">
<meta name="google-site-verification" content="ZzhVyEFwb7w3e0-uOTltm8Jsck2F5StVihD0exw2fsA">
    <meta name="google-analytics" content="UA-3769691-2">

<meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="7C28F706:2B24:9D4FD86:577A8436" name="octolytics-dimension-request_id" /><meta content="17718106" name="octolytics-actor-id" /><meta content="anburajajith" name="octolytics-actor-login" /><meta content="802e57d8860813b4e2d5790c350be1657133615dd85559c8bb882bbb358b21bf" name="octolytics-actor-hash" />
<meta content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-pjax-transient="true" name="analytics-location" />



  <meta class="js-ga-set" name="dimension1" content="Logged In">



        <meta name="hostname" content="github.com">
    <meta name="user-login" content="anburajajith">

        <meta name="expected-hostname" content="github.com">
      <meta name="js-proxy-site-detection-payload" content="YzUyZTMxYmI2YjBjOGFlMDk1ZjZjMzU3YzQxNDljOWMxZmQyMjMwZWE1NWRiMDYxM2Q4MWE3MmYzZGY0ODE1MHx7InJlbW90ZV9hZGRyZXNzIjoiMTI0LjQwLjI0Ny42IiwicmVxdWVzdF9pZCI6IjdDMjhGNzA2OjJCMjQ6OUQ0RkQ4Njo1NzdBODQzNiIsInRpbWVzdGFtcCI6MTQ2NzY0NzAzN30=">


      <link rel="mask-icon" href="https://assets-cdn.github.com/pinned-octocat.svg" color="#4078c0">
      <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">

    <meta name="html-safe-nonce" content="e4883db43f9d3a4c82ee348c9c0908094a72ed45">
    <meta content="cd8b01b9fd6b6703fa8f315dbd12faaa039f21bd" name="form-nonce" />

    <meta http-equiv="x-pjax-version" content="7ca106dd8d4396d47796a4f7b714d8c7">
    

      
  <meta name="description" content="Contribute to lightning-kernel-bacon development by creating an account on GitHub.">
  <meta name="go-import" content="github.com/nikhil18/lightning-kernel-bacon git https://github.com/nikhil18/lightning-kernel-bacon.git">

  <meta content="7988338" name="octolytics-dimension-user_id" /><meta content="nikhil18" name="octolytics-dimension-user_login" /><meta content="46799756" name="octolytics-dimension-repository_id" /><meta content="nikhil18/lightning-kernel-bacon" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="20425525" name="octolytics-dimension-repository_parent_id" /><meta content="CyanogenMod/android_kernel_oneplus_msm8974" name="octolytics-dimension-repository_parent_nwo" /><meta content="20425525" name="octolytics-dimension-repository_network_root_id" /><meta content="CyanogenMod/android_kernel_oneplus_msm8974" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/nikhil18/lightning-kernel-bacon/commits/11edf634e1f4979191ea0427e45b6bda898b588a.atom" rel="alternate" title="Recent Commits to lightning-kernel-bacon:11edf634e1f4979191ea0427e45b6bda898b588a" type="application/atom+xml">


      <link rel="canonical" href="https://github.com/nikhil18/lightning-kernel-bacon/blob/11edf634e1f4979191ea0427e45b6bda898b588a/block/cfq-iosched.c" data-pjax-transient>
  </head>


  <body class="logged-in   env-production linux vis-public fork page-blob">
    <div id="js-pjax-loader-bar" class="pjax-loader-bar"></div>
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>

    
    
    



        <div class="header header-logged-in true" role="banner">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <svg aria-hidden="true" class="octicon octicon-mark-github" height="28" version="1.1" viewBox="0 0 16 16" width="28"><path d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"></path></svg>
</a>


        <div class="header-search scoped-search site-scoped-search js-site-search" role="search">
  <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/nikhil18/lightning-kernel-bacon/search" class="js-site-search-form" data-scoped-search-url="/nikhil18/lightning-kernel-bacon/search" data-unscoped-search-url="/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <label class="form-control header-search-wrapper js-chromeless-input-container">
      <div class="header-search-scope">This repository</div>
      <input type="text"
        class="form-control header-search-input js-site-search-focus js-site-search-field is-clearable"
        data-hotkey="s"
        name="q"
        placeholder="Search"
        aria-label="Search this repository"
        data-unscoped-placeholder="Search GitHub"
        data-scoped-placeholder="Search"
        tabindex="1"
        autocapitalize="off">
    </label>
</form></div>


      <ul class="header-nav left" role="navigation">
        <li class="header-nav-item">
          <a href="/pulls" class="js-selected-navigation-item header-nav-link" data-ga-click="Header, click, Nav menu - item:pulls context:user" data-hotkey="g p" data-selected-links="/pulls /pulls/assigned /pulls/mentioned /pulls">
            Pull requests
</a>        </li>
        <li class="header-nav-item">
          <a href="/issues" class="js-selected-navigation-item header-nav-link" data-ga-click="Header, click, Nav menu - item:issues context:user" data-hotkey="g i" data-selected-links="/issues /issues/assigned /issues/mentioned /issues">
            Issues
</a>        </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://gist.github.com/" data-ga-click="Header, go to gist, text:gist">Gist</a>
          </li>
      </ul>

    
<ul class="header-nav user-nav right" id="user-links">
  <li class="header-nav-item">
    

  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link tooltipped tooltipped-s js-menu-target" href="/new"
       aria-label="Create new…"
       data-ga-click="Header, create new, icon:add">
      <svg aria-hidden="true" class="octicon octicon-plus left" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 9H7v5H5V9H0V7h5V2h2v5h5z"></path></svg>
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <ul class="dropdown-menu dropdown-menu-sw">
        
<a class="dropdown-item" href="/new" data-ga-click="Header, create new repository">
  New repository
</a>

  <a class="dropdown-item" href="/new/import" data-ga-click="Header, import a repository">
    Import repository
  </a>


  <a class="dropdown-item" href="/organizations/new" data-ga-click="Header, create new organization">
    New organization
  </a>




      </ul>
    </div>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link name tooltipped tooltipped-sw js-menu-target" href="/anburajajith"
       aria-label="View profile and more"
       data-ga-click="Header, show menu, icon:avatar">
      <img alt="@anburajajith" class="avatar" height="20" src="https://avatars1.githubusercontent.com/u/17718106?v=3&amp;s=40" width="20" />
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <div class="dropdown-menu dropdown-menu-sw">
        <div class="dropdown-header header-nav-current-user css-truncate">
          Signed in as <strong class="css-truncate-target">anburajajith</strong>
        </div>

        <div class="dropdown-divider"></div>

        <a class="dropdown-item" href="/anburajajith" data-ga-click="Header, go to profile, text:your profile">
          Your profile
        </a>
        <a class="dropdown-item" href="/stars" data-ga-click="Header, go to starred repos, text:your stars">
          Your stars
        </a>
        <a class="dropdown-item" href="/explore" data-ga-click="Header, go to explore, text:explore">
          Explore
        </a>
          <a class="dropdown-item" href="/integrations" data-ga-click="Header, go to integrations, text:integrations">
            Integrations
          </a>
        <a class="dropdown-item" href="https://help.github.com" data-ga-click="Header, go to help, text:help">
          Help
        </a>


        <div class="dropdown-divider"></div>

        <a class="dropdown-item" href="/settings/profile" data-ga-click="Header, go to settings, icon:settings">
          Settings
        </a>

        <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/logout" class="logout-form" data-form-nonce="cd8b01b9fd6b6703fa8f315dbd12faaa039f21bd" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="1Vio6LxVKS+fuCEaDQ+5LXhfhuPrmfQF9eFtwvW5odX1cfNlL2NvQHXnD16kxpPlaFfZkULeMfOdl8b31bACBw==" /></div>
          <button class="dropdown-item dropdown-signout" data-ga-click="Header, sign out, icon:logout">
            Sign out
          </button>
</form>      </div>
    </div>
  </li>
</ul>


    
  </div>
</div>


      


    <div id="start-of-content" class="accessibility-aid"></div>

      <div id="js-flash-container">
</div>


    <div role="main" class="main-content">
        <div itemscope itemtype="http://schema.org/SoftwareSourceCode">
    <div id="js-repo-pjax-container" data-pjax-container>
      
<div class="pagehead repohead instapaper_ignore readability-menu experiment-repo-nav">
  <div class="container repohead-details-container">

    

<ul class="pagehead-actions">

  <li>
        <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-form-nonce="cd8b01b9fd6b6703fa8f315dbd12faaa039f21bd" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="5xlldjvN1oWtn0i9JTPXpLaKmRewuQ4I9OpoyhxaAOplqefx2O9UB19Qn9d1WgpoNmSHxbZpI/jVlhTHSO1rvg==" /></div>      <input class="form-control" id="repository_id" name="repository_id" type="hidden" value="46799756" />

        <div class="select-menu js-menu-container js-select-menu">
          <a href="/nikhil18/lightning-kernel-bacon/subscription"
            class="btn btn-sm btn-with-count select-menu-button js-menu-target" role="button" tabindex="0" aria-haspopup="true"
            data-ga-click="Repository, click Watch settings, action:blob#show">
            <span class="js-select-button">
              <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"></path></svg>
              Watch
            </span>
          </a>
          <a class="social-count js-social-count" href="/nikhil18/lightning-kernel-bacon/watchers">
            5
          </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
            <div class="select-menu-header js-navigation-enable" tabindex="-1">
              <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"></path></svg>
              <span class="select-menu-title">Notifications</span>
            </div>

              <div class="select-menu-list js-navigation-container" role="menu">

                <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
                  <div class="select-menu-item-text">
                    <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                    <span class="select-menu-item-heading">Not watching</span>
                    <span class="description">Be notified when participating or @mentioned.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"></path></svg>
                      Watch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
                  <div class="select-menu-item-text">
                    <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                    <span class="select-menu-item-heading">Watching</span>
                    <span class="description">Be notified of all conversations.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-eye" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M8.06 2C3 2 0 8 0 8s3 6 8.06 6C13 14 16 8 16 8s-3-6-7.94-6zM8 12c-2.2 0-4-1.78-4-4 0-2.2 1.8-4 4-4 2.22 0 4 1.8 4 4 0 2.22-1.78 4-4 4zm2-4c0 1.11-.89 2-2 2-1.11 0-2-.89-2-2 0-1.11.89-2 2-2 1.11 0 2 .89 2 2z"></path></svg>
                      Unwatch
                    </span>
                  </div>
                </div>

                <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                  <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
                  <div class="select-menu-item-text">
                    <input id="do_ignore" name="do" type="radio" value="ignore" />
                    <span class="select-menu-item-heading">Ignoring</span>
                    <span class="description">Never be notified.</span>
                    <span class="js-select-button-text hidden-select-button-text">
                      <svg aria-hidden="true" class="octicon octicon-mute" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M8 2.81v10.38c0 .67-.81 1-1.28.53L3 10H1c-.55 0-1-.45-1-1V7c0-.55.45-1 1-1h2l3.72-3.72C7.19 1.81 8 2.14 8 2.81zm7.53 3.22l-1.06-1.06-1.97 1.97-1.97-1.97-1.06 1.06L11.44 8 9.47 9.97l1.06 1.06 1.97-1.97 1.97 1.97 1.06-1.06L13.56 8l1.97-1.97z"></path></svg>
                      Stop ignoring
                    </span>
                  </div>
                </div>

              </div>

            </div>
          </div>
        </div>
</form>
  </li>

  <li>
    
  <div class="js-toggler-container js-social-container starring-container ">

    <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/nikhil18/lightning-kernel-bacon/unstar" class="starred" data-form-nonce="cd8b01b9fd6b6703fa8f315dbd12faaa039f21bd" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="PcQCCvFWY2Xr68gWPcwbFj97qvhyN8vRYipAPnk2Pz6JR2u7Smnm1rxESUC7eDwqqkZYmCYQzCaynGMwqHwYQQ==" /></div>
      <button
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar nikhil18/lightning-kernel-bacon"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"></path></svg>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/nikhil18/lightning-kernel-bacon/stargazers">
          6
        </a>
</form>
    <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/nikhil18/lightning-kernel-bacon/star" class="unstarred" data-form-nonce="cd8b01b9fd6b6703fa8f315dbd12faaa039f21bd" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="OLHmku6/0MMUcq9beyC0o6IdJtF5v7x6nXwMsbFvkcXo57z9nXAYerFSv6gN+wDzwDOKlNNEHoPydpLrJFLgBA==" /></div>
      <button
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star nikhil18/lightning-kernel-bacon"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <svg aria-hidden="true" class="octicon octicon-star" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path d="M14 6l-4.9-.64L7 1 4.9 5.36 0 6l3.6 3.26L2.67 14 7 11.67 11.33 14l-.93-4.74z"></path></svg>
        Star
      </button>
        <a class="social-count js-social-count" href="/nikhil18/lightning-kernel-bacon/stargazers">
          6
        </a>
</form>  </div>

  </li>

  <li>
          <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="/nikhil18/lightning-kernel-bacon/fork" class="btn-with-count" data-form-nonce="cd8b01b9fd6b6703fa8f315dbd12faaa039f21bd" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="VCH80V9m4RCu+nEXiGxD9PfNaUlb4wpxSqlvOa17tZLf3qyS5+3BLjhHLMOzuU9dFThJITUyoStXpOcLtp+g0A==" /></div>
            <button
                type="submit"
                class="btn btn-sm btn-with-count"
                data-ga-click="Repository, show fork modal, action:blob#show; text:Fork"
                title="Fork your own copy of nikhil18/lightning-kernel-bacon to your account"
                aria-label="Fork your own copy of nikhil18/lightning-kernel-bacon to your account">
              <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"></path></svg>
              Fork
            </button>
</form>
    <a href="/nikhil18/lightning-kernel-bacon/network" class="social-count">
      294
    </a>
  </li>
</ul>

    <h1 class="public ">
  <svg aria-hidden="true" class="octicon octicon-repo-forked" height="16" version="1.1" viewBox="0 0 10 16" width="10"><path d="M8 1a1.993 1.993 0 0 0-1 3.72V6L5 8 3 6V4.72A1.993 1.993 0 0 0 2 1a1.993 1.993 0 0 0-1 3.72V6.5l3 3v1.78A1.993 1.993 0 0 0 5 15a1.993 1.993 0 0 0 1-3.72V9.5l3-3V4.72A1.993 1.993 0 0 0 8 1zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3 10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zm3-10c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"></path></svg>
  <span class="author" itemprop="author"><a href="/nikhil18" class="url fn" rel="author">nikhil18</a></span><!--
--><span class="path-divider">/</span><!--
--><strong itemprop="name"><a href="/nikhil18/lightning-kernel-bacon" data-pjax="#js-repo-pjax-container">lightning-kernel-bacon</a></strong>

    <span class="fork-flag">
      <span class="text">forked from <a href="/CyanogenMod/android_kernel_oneplus_msm8974">CyanogenMod/android_kernel_oneplus_msm8974</a></span>
    </span>
</h1>

  </div>
  <div class="container">
    
<nav class="reponav js-repo-nav js-sidenav-container-pjax"
     itemscope
     itemtype="http://schema.org/BreadcrumbList"
     role="navigation"
     data-pjax="#js-repo-pjax-container">

  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/nikhil18/lightning-kernel-bacon" aria-selected="true" class="js-selected-navigation-item selected reponav-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /nikhil18/lightning-kernel-bacon" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-code" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path d="M9.5 3L8 4.5 11.5 8 8 11.5 9.5 13 14 8 9.5 3zm-5 0L0 8l4.5 5L6 11.5 2.5 8 6 4.5 4.5 3z"></path></svg>
      <span itemprop="name">Code</span>
      <meta itemprop="position" content="1">
</a>  </span>


  <span itemscope itemtype="http://schema.org/ListItem" itemprop="itemListElement">
    <a href="/nikhil18/lightning-kernel-bacon/pulls" class="js-selected-navigation-item reponav-item" data-hotkey="g p" data-selected-links="repo_pulls /nikhil18/lightning-kernel-bacon/pulls" itemprop="url">
      <svg aria-hidden="true" class="octicon octicon-git-pull-request" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M11 11.28V5c-.03-.78-.34-1.47-.94-2.06C9.46 2.35 8.78 2.03 8 2H7V0L4 3l3 3V4h1c.27.02.48.11.69.31.21.2.3.42.31.69v6.28A1.993 1.993 0 0 0 10 15a1.993 1.993 0 0 0 1-3.72zm-1 2.92c-.66 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2zM4 3c0-1.11-.89-2-2-2a1.993 1.993 0 0 0-1 3.72v6.56A1.993 1.993 0 0 0 2 15a1.993 1.993 0 0 0 1-3.72V4.72c.59-.34 1-.98 1-1.72zm-.8 10c0 .66-.55 1.2-1.2 1.2-.65 0-1.2-.55-1.2-1.2 0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2zM2 4.2C1.34 4.2.8 3.65.8 3c0-.65.55-1.2 1.2-1.2.65 0 1.2.55 1.2 1.2 0 .65-.55 1.2-1.2 1.2z"></path></svg>
      <span itemprop="name">Pull requests</span>
      <span class="counter">0</span>
      <meta itemprop="position" content="3">
</a>  </span>



  <a href="/nikhil18/lightning-kernel-bacon/pulse" class="js-selected-navigation-item reponav-item" data-selected-links="pulse /nikhil18/lightning-kernel-bacon/pulse">
    <svg aria-hidden="true" class="octicon octicon-pulse" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path d="M11.5 8L8.8 5.4 6.6 8.5 5.5 1.6 2.38 8H0v2h3.6l.9-1.8.9 5.4L9 8.5l1.6 1.5H14V8z"></path></svg>
    Pulse
</a>
  <a href="/nikhil18/lightning-kernel-bacon/graphs" class="js-selected-navigation-item reponav-item" data-selected-links="repo_graphs repo_contributors /nikhil18/lightning-kernel-bacon/graphs">
    <svg aria-hidden="true" class="octicon octicon-graph" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M16 14v1H0V0h1v14h15zM5 13H3V8h2v5zm4 0H7V3h2v10zm4 0h-2V6h2v7z"></path></svg>
    Graphs
</a>

</nav>

  </div>
</div>

<div class="container new-discussion-timeline experiment-repo-nav">
  <div class="repository-content">

    

<a href="/nikhil18/lightning-kernel-bacon/blob/11edf634e1f4979191ea0427e45b6bda898b588a/block/cfq-iosched.c" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:430d521678a4dd60f06c3225d290bded -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu branch-select-menu js-menu-container js-select-menu left">
  <button class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    title=""
    type="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <i>Tree:</i>
    <span class="js-select-button css-truncate-target">11edf634e1</span>
  </button>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <svg aria-label="Close" class="octicon octicon-x js-menu-close" height="16" role="img" version="1.1" viewBox="0 0 12 16" width="12"><path d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"></path></svg>
        <span class="select-menu-title">Switch branches/tags</span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="form-control js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab" role="tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab" role="tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches" role="menu">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/3.10-backup/block/cfq-iosched.c"
               data-name="3.10-backup"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="3.10-backup">
                3.10-backup
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/3.10-backup2/block/cfq-iosched.c"
               data-name="3.10-backup2"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="3.10-backup2">
                3.10-backup2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/LA.BF.2.1.2_rb1.5/block/cfq-iosched.c"
               data-name="LA.BF.2.1.2_rb1.5"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="LA.BF.2.1.2_rb1.5">
                LA.BF.2.1.2_rb1.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/lightning-3.10/block/cfq-iosched.c"
               data-name="lightning-3.10"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="lightning-3.10">
                lightning-3.10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/lightning-caf/block/cfq-iosched.c"
               data-name="lightning-caf"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="lightning-caf">
                lightning-caf
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/lightning-cm13-new/block/cfq-iosched.c"
               data-name="lightning-cm13-new"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="lightning-cm13-new">
                lightning-cm13-new
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/lightning-kernel-3.10-BFS/block/cfq-iosched.c"
               data-name="lightning-kernel-3.10-BFS"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="lightning-kernel-3.10-BFS">
                lightning-kernel-3.10-BFS
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/lightning-kernel-3.10/block/cfq-iosched.c"
               data-name="lightning-kernel-3.10"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="lightning-kernel-3.10">
                lightning-kernel-3.10
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/lightning-kernel-retry/block/cfq-iosched.c"
               data-name="lightning-kernel-retry"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="lightning-kernel-retry">
                lightning-kernel-retry
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/lightning-omni/block/cfq-iosched.c"
               data-name="lightning-omni"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="lightning-omni">
                lightning-omni
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/lightning_3.10_backup/block/cfq-iosched.c"
               data-name="lightning_3.10_backup"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="lightning_3.10_backup">
                lightning_3.10_backup
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/nikhil18/lightning-kernel-bacon/blob/lightning_3.10_oxygen/block/cfq-iosched.c"
               data-name="lightning_3.10_oxygen"
               data-skip-pjax="true"
               rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target js-select-menu-filter-text" title="lightning_3.10_oxygen">
                lightning_3.10_oxygen
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/nikhil18/lightning-kernel-bacon/tree/cm-12.1-YOG4PA_1L0/block/cfq-iosched.c"
              data-name="cm-12.1-YOG4PA_1L0"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="cm-12.1-YOG4PA_1L0">
                cm-12.1-YOG4PA_1L0
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/nikhil18/lightning-kernel-bacon/tree/cm-11.0-XNPH44S-bacon-5fa8c79c0b/block/cfq-iosched.c"
              data-name="cm-11.0-XNPH44S-bacon-5fa8c79c0b"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="cm-11.0-XNPH44S-bacon-5fa8c79c0b">
                cm-11.0-XNPH44S-bacon-5fa8c79c0b
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/nikhil18/lightning-kernel-bacon/tree/cm-11.0-XNPH33R-bacon-3628510d76/block/cfq-iosched.c"
              data-name="cm-11.0-XNPH33R-bacon-3628510d76"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="cm-11.0-XNPH33R-bacon-3628510d76">
                cm-11.0-XNPH33R-bacon-3628510d76
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/nikhil18/lightning-kernel-bacon/tree/cm-11.0-XNPH30O-bacon-4f280f505a/block/cfq-iosched.c"
              data-name="cm-11.0-XNPH30O-bacon-4f280f505a"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="cm-11.0-XNPH30O-bacon-4f280f505a">
                cm-11.0-XNPH30O-bacon-4f280f505a
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/nikhil18/lightning-kernel-bacon/tree/cm-11.0-XNPH25R-bacon-d22b777afa/block/cfq-iosched.c"
              data-name="cm-11.0-XNPH25R-bacon-d22b777afa"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="cm-11.0-XNPH25R-bacon-d22b777afa">
                cm-11.0-XNPH25R-bacon-d22b777afa
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
              href="/nikhil18/lightning-kernel-bacon/tree/cm-11.0-XNPH05Q-bacon-5229c4ef56/block/cfq-iosched.c"
              data-name="cm-11.0-XNPH05Q-bacon-5229c4ef56"
              data-skip-pjax="true"
              rel="nofollow">
              <svg aria-hidden="true" class="octicon octicon-check select-menu-item-icon" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M12 5l-8 8-4-4 1.5-1.5L4 10l6.5-6.5z"></path></svg>
              <span class="select-menu-item-text css-truncate-target" title="cm-11.0-XNPH05Q-bacon-5229c4ef56">
                cm-11.0-XNPH05Q-bacon-5229c4ef56
              </span>
            </a>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="btn-group right">
    <a href="/nikhil18/lightning-kernel-bacon/find/11edf634e1f4979191ea0427e45b6bda898b588a"
          class="js-pjax-capture-input btn btn-sm"
          data-pjax
          data-hotkey="t">
      Find file
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button tooltipped tooltipped-s" data-copied-hint="Copied!" type="button">Copy path</button>
  </div>
  <div class="breadcrumb js-zeroclipboard-target">
    <span class="repo-root js-repo-root"><span class="js-path-segment"><a href="/nikhil18/lightning-kernel-bacon/tree/11edf634e1f4979191ea0427e45b6bda898b588a"><span>lightning-kernel-bacon</span></a></span></span><span class="separator">/</span><span class="js-path-segment"><a href="/nikhil18/lightning-kernel-bacon/tree/11edf634e1f4979191ea0427e45b6bda898b588a/block"><span>block</span></a></span><span class="separator">/</span><strong class="final-path">cfq-iosched.c</strong>
  </div>
</div>

<include-fragment class="commit-tease" src="/nikhil18/lightning-kernel-bacon/contributors/11edf634e1f4979191ea0427e45b6bda898b588a/block/cfq-iosched.c">
  <div>
    Fetching contributors&hellip;
  </div>

  <div class="commit-tease-contributors">
    <img alt="" class="loader-loading left" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" />
    <span class="loader-error">Cannot retrieve contributors at this time</span>
  </div>
</include-fragment>
<div class="file">
  <div class="file-header">
  <div class="file-actions">

    <div class="btn-group">
      <a href="/nikhil18/lightning-kernel-bacon/raw/11edf634e1f4979191ea0427e45b6bda898b588a/block/cfq-iosched.c" class="btn btn-sm " id="raw-url">Raw</a>
        <a href="/nikhil18/lightning-kernel-bacon/blame/11edf634e1f4979191ea0427e45b6bda898b588a/block/cfq-iosched.c" class="btn btn-sm js-update-url-with-hash">Blame</a>
      <a href="/nikhil18/lightning-kernel-bacon/commits/11edf634e1f4979191ea0427e45b6bda898b588a/block/cfq-iosched.c" class="btn btn-sm " rel="nofollow">History</a>
    </div>


        <button type="button" class="btn-octicon disabled tooltipped tooltipped-nw"
          aria-label="You must be on a branch to make or propose changes to this file">
          <svg aria-hidden="true" class="octicon octicon-pencil" height="16" version="1.1" viewBox="0 0 14 16" width="14"><path d="M0 12v3h3l8-8-3-3-8 8zm3 2H1v-2h1v1h1v1zm10.3-9.3L12 6 9 3l1.3-1.3a.996.996 0 0 1 1.41 0l1.59 1.59c.39.39.39 1.02 0 1.41z"></path></svg>
        </button>
        <button type="button" class="btn-octicon btn-octicon-danger disabled tooltipped tooltipped-nw"
          aria-label="You must be on a branch to make or propose changes to this file">
          <svg aria-hidden="true" class="octicon octicon-trashcan" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M11 2H9c0-.55-.45-1-1-1H5c-.55 0-1 .45-1 1H2c-.55 0-1 .45-1 1v1c0 .55.45 1 1 1v9c0 .55.45 1 1 1h7c.55 0 1-.45 1-1V5c.55 0 1-.45 1-1V3c0-.55-.45-1-1-1zm-1 12H3V5h1v8h1V5h1v8h1V5h1v8h1V5h1v9zm1-10H2V3h9v1z"></path></svg>
        </button>
  </div>

  <div class="file-info">
      3940 lines (3336 sloc)
      <span class="file-info-divider"></span>
    99.7 KB
  </div>
</div>

  

  <div itemprop="text" class="blob-wrapper data type-c">
      <table class="highlight tab-size js-file-line-container" data-tab-size="8">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *  CFQ, or complete fairness queueing, disk scheduler.</span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *  Based on ideas from a previously unfinished io</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *  scheduler (round robin per-process disk scheduling) and Andrea Arcangeli.</span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *  Copyright (C) 2003 Jens Axboe &lt;axboe@kernel.dk&gt;</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>linux/module.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>linux/slab.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>linux/blkdev.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>linux/elevator.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>linux/jiffies.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>linux/rbtree.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>linux/ioprio.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>linux/blktrace_api.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>blk.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&quot;</span>cfq.h<span class="pl-pds">&quot;</span></span></td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * tunables</span></td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/* max queue in one round of service */</span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-k">int</span> cfq_quantum = <span class="pl-c1">8</span>;</td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-k">int</span> cfq_fifo_expire[<span class="pl-c1">2</span>] = { HZ / <span class="pl-c1">4</span>, HZ / <span class="pl-c1">8</span> };</td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/* maximum backwards seek, in KiB */</span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-k">int</span> cfq_back_max = <span class="pl-c1">16</span> * <span class="pl-c1">1024</span>;</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/* penalty of a backwards seek */</span></td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-k">int</span> cfq_back_penalty = <span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-k">int</span> cfq_slice_sync = HZ / <span class="pl-c1">10</span>;</td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> cfq_slice_async = HZ / <span class="pl-c1">25</span>;</td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-k">int</span> cfq_slice_async_rq = <span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> cfq_slice_idle = HZ / <span class="pl-c1">125</span>;</td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> cfq_group_idle = HZ / <span class="pl-c1">125</span>;</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-k">int</span> cfq_target_latency = HZ * <span class="pl-c1">3</span>/<span class="pl-c1">10</span>; <span class="pl-c">/* 300 ms */</span></td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">const</span> <span class="pl-k">int</span> cfq_hist_divisor = <span class="pl-c1">4</span>;</td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * offset from end of service tree</span></td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_IDLE_DELAY</span>		(HZ / <span class="pl-c1">5</span>)</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * below this threshold, we consider thinktime immediate</span></td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_MIN_TT</span>		(<span class="pl-c1">2</span>)</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_SLICE_SCALE</span>		(<span class="pl-c1">5</span>)</td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_HW_QUEUE_MIN</span>	(<span class="pl-c1">5</span>)</td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_SERVICE_SHIFT</span>       <span class="pl-c1">12</span></td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQQ_SEEK_THR</span>		(<span class="pl-c1">sector_t</span>)(<span class="pl-c1">8</span> * <span class="pl-c1">100</span>)</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQQ_CLOSE_THR</span>		(<span class="pl-c1">sector_t</span>)(<span class="pl-c1">8</span> * <span class="pl-c1">1024</span>)</td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQQ_SECT_THR_NONROT</span>	(<span class="pl-c1">sector_t</span>)(<span class="pl-c1">2</span> * <span class="pl-c1">32</span>)</td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQQ_SEEKY</span>(<span class="pl-v">cfqq</span>)	(hweight32(cfqq-&gt;seek_history) &gt; <span class="pl-c1">32</span>/<span class="pl-c1">8</span>)</td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">RQ_CIC</span>(<span class="pl-v">rq</span>)		icq_to_cic((rq)-&gt;elv.icq)</td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">RQ_CFQQ</span>(<span class="pl-v">rq</span>)		(<span class="pl-k">struct</span> cfq_queue *) ((rq)-&gt;elv.priv[<span class="pl-c1">0</span>])</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">RQ_CFQG</span>(<span class="pl-v">rq</span>)		(<span class="pl-k">struct</span> cfq_group *) ((rq)-&gt;elv.priv[<span class="pl-c1">1</span>])</td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> kmem_cache *cfq_pool;</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_PRIO_LISTS</span>		IOPRIO_BE_NR</td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">cfq_class_idle</span>(<span class="pl-v">cfqq</span>)	((cfqq)-&gt;ioprio_class == IOPRIO_CLASS_IDLE)</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">cfq_class_rt</span>(<span class="pl-v">cfqq</span>)	((cfqq)-&gt;ioprio_class == IOPRIO_CLASS_RT)</td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">sample_valid</span>(<span class="pl-v">samples</span>)	((samples) &gt; <span class="pl-c1">80</span>)</td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">rb_entry_cfqg</span>(<span class="pl-v">node</span>)	rb_entry((node), <span class="pl-k">struct</span> cfq_group, rb_node)</td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> cfq_ttime {</td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> last_end_request;</td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> ttime_total;</td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> ttime_samples;</td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> ttime_mean;</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Most of our rbtree usage is for sorting with min extraction, so</span></td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * if we cache the leftmost node we don&#39;t have to walk down the tree</span></td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * to find it. Idea borrowed from Ingo Molnars CFS scheduler. We should</span></td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * move this into the elevator for the rq sorting as well.</span></td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> cfq_rb_root {</td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_root rb;</td>
      </tr>
      <tr>
        <td id="L86" class="blob-num js-line-number" data-line-number="86"></td>
        <td id="LC86" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node *left;</td>
      </tr>
      <tr>
        <td id="L87" class="blob-num js-line-number" data-line-number="87"></td>
        <td id="LC87" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> count;</td>
      </tr>
      <tr>
        <td id="L88" class="blob-num js-line-number" data-line-number="88"></td>
        <td id="LC88" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> total_weight;</td>
      </tr>
      <tr>
        <td id="L89" class="blob-num js-line-number" data-line-number="89"></td>
        <td id="LC89" class="blob-code blob-code-inner js-file-line">	u64 min_vdisktime;</td>
      </tr>
      <tr>
        <td id="L90" class="blob-num js-line-number" data-line-number="90"></td>
        <td id="LC90" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_ttime ttime;</td>
      </tr>
      <tr>
        <td id="L91" class="blob-num js-line-number" data-line-number="91"></td>
        <td id="LC91" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L92" class="blob-num js-line-number" data-line-number="92"></td>
        <td id="LC92" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_RB_ROOT</span>	(<span class="pl-k">struct</span> cfq_rb_root) { .<span class="pl-smi">rb</span> = RB_ROOT, \</td>
      </tr>
      <tr>
        <td id="L93" class="blob-num js-line-number" data-line-number="93"></td>
        <td id="LC93" class="blob-code blob-code-inner js-file-line">			.<span class="pl-smi">ttime</span> = {.<span class="pl-smi">last_end_request</span> = jiffies,},}</td>
      </tr>
      <tr>
        <td id="L94" class="blob-num js-line-number" data-line-number="94"></td>
        <td id="LC94" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L95" class="blob-num js-line-number" data-line-number="95"></td>
        <td id="LC95" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L96" class="blob-num js-line-number" data-line-number="96"></td>
        <td id="LC96" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Per process-grouping structure</span></td>
      </tr>
      <tr>
        <td id="L97" class="blob-num js-line-number" data-line-number="97"></td>
        <td id="LC97" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L98" class="blob-num js-line-number" data-line-number="98"></td>
        <td id="LC98" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> cfq_queue {</td>
      </tr>
      <tr>
        <td id="L99" class="blob-num js-line-number" data-line-number="99"></td>
        <td id="LC99" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* reference count */</span></td>
      </tr>
      <tr>
        <td id="L100" class="blob-num js-line-number" data-line-number="100"></td>
        <td id="LC100" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> ref;</td>
      </tr>
      <tr>
        <td id="L101" class="blob-num js-line-number" data-line-number="101"></td>
        <td id="LC101" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* various state flags, see below */</span></td>
      </tr>
      <tr>
        <td id="L102" class="blob-num js-line-number" data-line-number="102"></td>
        <td id="LC102" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> flags;</td>
      </tr>
      <tr>
        <td id="L103" class="blob-num js-line-number" data-line-number="103"></td>
        <td id="LC103" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* parent cfq_data */</span></td>
      </tr>
      <tr>
        <td id="L104" class="blob-num js-line-number" data-line-number="104"></td>
        <td id="LC104" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd;</td>
      </tr>
      <tr>
        <td id="L105" class="blob-num js-line-number" data-line-number="105"></td>
        <td id="LC105" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* service_tree member */</span></td>
      </tr>
      <tr>
        <td id="L106" class="blob-num js-line-number" data-line-number="106"></td>
        <td id="LC106" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node rb_node;</td>
      </tr>
      <tr>
        <td id="L107" class="blob-num js-line-number" data-line-number="107"></td>
        <td id="LC107" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* service_tree key */</span></td>
      </tr>
      <tr>
        <td id="L108" class="blob-num js-line-number" data-line-number="108"></td>
        <td id="LC108" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> rb_key;</td>
      </tr>
      <tr>
        <td id="L109" class="blob-num js-line-number" data-line-number="109"></td>
        <td id="LC109" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* prio tree member */</span></td>
      </tr>
      <tr>
        <td id="L110" class="blob-num js-line-number" data-line-number="110"></td>
        <td id="LC110" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node p_node;</td>
      </tr>
      <tr>
        <td id="L111" class="blob-num js-line-number" data-line-number="111"></td>
        <td id="LC111" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* prio tree root we belong to, if any */</span></td>
      </tr>
      <tr>
        <td id="L112" class="blob-num js-line-number" data-line-number="112"></td>
        <td id="LC112" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_root *p_root;</td>
      </tr>
      <tr>
        <td id="L113" class="blob-num js-line-number" data-line-number="113"></td>
        <td id="LC113" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* sorted list of pending requests */</span></td>
      </tr>
      <tr>
        <td id="L114" class="blob-num js-line-number" data-line-number="114"></td>
        <td id="LC114" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_root sort_list;</td>
      </tr>
      <tr>
        <td id="L115" class="blob-num js-line-number" data-line-number="115"></td>
        <td id="LC115" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* if fifo isn&#39;t expired, next request to serve */</span></td>
      </tr>
      <tr>
        <td id="L116" class="blob-num js-line-number" data-line-number="116"></td>
        <td id="LC116" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request *next_rq;</td>
      </tr>
      <tr>
        <td id="L117" class="blob-num js-line-number" data-line-number="117"></td>
        <td id="LC117" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* requests queued in sort_list */</span></td>
      </tr>
      <tr>
        <td id="L118" class="blob-num js-line-number" data-line-number="118"></td>
        <td id="LC118" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> queued[<span class="pl-c1">2</span>];</td>
      </tr>
      <tr>
        <td id="L119" class="blob-num js-line-number" data-line-number="119"></td>
        <td id="LC119" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* currently allocated requests */</span></td>
      </tr>
      <tr>
        <td id="L120" class="blob-num js-line-number" data-line-number="120"></td>
        <td id="LC120" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> allocated[<span class="pl-c1">2</span>];</td>
      </tr>
      <tr>
        <td id="L121" class="blob-num js-line-number" data-line-number="121"></td>
        <td id="LC121" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* fifo list of requests in sort_list */</span></td>
      </tr>
      <tr>
        <td id="L122" class="blob-num js-line-number" data-line-number="122"></td>
        <td id="LC122" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> list_head fifo;</td>
      </tr>
      <tr>
        <td id="L123" class="blob-num js-line-number" data-line-number="123"></td>
        <td id="LC123" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L124" class="blob-num js-line-number" data-line-number="124"></td>
        <td id="LC124" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* time when queue got scheduled in to dispatch first request. */</span></td>
      </tr>
      <tr>
        <td id="L125" class="blob-num js-line-number" data-line-number="125"></td>
        <td id="LC125" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> dispatch_start;</td>
      </tr>
      <tr>
        <td id="L126" class="blob-num js-line-number" data-line-number="126"></td>
        <td id="LC126" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> allocated_slice;</td>
      </tr>
      <tr>
        <td id="L127" class="blob-num js-line-number" data-line-number="127"></td>
        <td id="LC127" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> slice_dispatch;</td>
      </tr>
      <tr>
        <td id="L128" class="blob-num js-line-number" data-line-number="128"></td>
        <td id="LC128" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* time when first request from queue completed and slice started. */</span></td>
      </tr>
      <tr>
        <td id="L129" class="blob-num js-line-number" data-line-number="129"></td>
        <td id="LC129" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> slice_start;</td>
      </tr>
      <tr>
        <td id="L130" class="blob-num js-line-number" data-line-number="130"></td>
        <td id="LC130" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> slice_end;</td>
      </tr>
      <tr>
        <td id="L131" class="blob-num js-line-number" data-line-number="131"></td>
        <td id="LC131" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">long</span> slice_resid;</td>
      </tr>
      <tr>
        <td id="L132" class="blob-num js-line-number" data-line-number="132"></td>
        <td id="LC132" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L133" class="blob-num js-line-number" data-line-number="133"></td>
        <td id="LC133" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* pending priority requests */</span></td>
      </tr>
      <tr>
        <td id="L134" class="blob-num js-line-number" data-line-number="134"></td>
        <td id="LC134" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> prio_pending;</td>
      </tr>
      <tr>
        <td id="L135" class="blob-num js-line-number" data-line-number="135"></td>
        <td id="LC135" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* number of requests that are on the dispatch list or inside driver */</span></td>
      </tr>
      <tr>
        <td id="L136" class="blob-num js-line-number" data-line-number="136"></td>
        <td id="LC136" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> dispatched;</td>
      </tr>
      <tr>
        <td id="L137" class="blob-num js-line-number" data-line-number="137"></td>
        <td id="LC137" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L138" class="blob-num js-line-number" data-line-number="138"></td>
        <td id="LC138" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* io prio of this group */</span></td>
      </tr>
      <tr>
        <td id="L139" class="blob-num js-line-number" data-line-number="139"></td>
        <td id="LC139" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">short</span> ioprio, org_ioprio;</td>
      </tr>
      <tr>
        <td id="L140" class="blob-num js-line-number" data-line-number="140"></td>
        <td id="LC140" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">short</span> ioprio_class;</td>
      </tr>
      <tr>
        <td id="L141" class="blob-num js-line-number" data-line-number="141"></td>
        <td id="LC141" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L142" class="blob-num js-line-number" data-line-number="142"></td>
        <td id="LC142" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">pid_t</span> pid;</td>
      </tr>
      <tr>
        <td id="L143" class="blob-num js-line-number" data-line-number="143"></td>
        <td id="LC143" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L144" class="blob-num js-line-number" data-line-number="144"></td>
        <td id="LC144" class="blob-code blob-code-inner js-file-line">	u32 seek_history;</td>
      </tr>
      <tr>
        <td id="L145" class="blob-num js-line-number" data-line-number="145"></td>
        <td id="LC145" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sector_t</span> last_request_pos;</td>
      </tr>
      <tr>
        <td id="L146" class="blob-num js-line-number" data-line-number="146"></td>
        <td id="LC146" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L147" class="blob-num js-line-number" data-line-number="147"></td>
        <td id="LC147" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *service_tree;</td>
      </tr>
      <tr>
        <td id="L148" class="blob-num js-line-number" data-line-number="148"></td>
        <td id="LC148" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *new_cfqq;</td>
      </tr>
      <tr>
        <td id="L149" class="blob-num js-line-number" data-line-number="149"></td>
        <td id="LC149" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg;</td>
      </tr>
      <tr>
        <td id="L150" class="blob-num js-line-number" data-line-number="150"></td>
        <td id="LC150" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Number of sectors dispatched from queue in single dispatch round */</span></td>
      </tr>
      <tr>
        <td id="L151" class="blob-num js-line-number" data-line-number="151"></td>
        <td id="LC151" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> nr_sectors;</td>
      </tr>
      <tr>
        <td id="L152" class="blob-num js-line-number" data-line-number="152"></td>
        <td id="LC152" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L153" class="blob-num js-line-number" data-line-number="153"></td>
        <td id="LC153" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L154" class="blob-num js-line-number" data-line-number="154"></td>
        <td id="LC154" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L155" class="blob-num js-line-number" data-line-number="155"></td>
        <td id="LC155" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * First index in the service_trees.</span></td>
      </tr>
      <tr>
        <td id="L156" class="blob-num js-line-number" data-line-number="156"></td>
        <td id="LC156" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * IDLE is handled separately, so it has negative index</span></td>
      </tr>
      <tr>
        <td id="L157" class="blob-num js-line-number" data-line-number="157"></td>
        <td id="LC157" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L158" class="blob-num js-line-number" data-line-number="158"></td>
        <td id="LC158" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> <span class="pl-c1">wl_prio_t</span> {</td>
      </tr>
      <tr>
        <td id="L159" class="blob-num js-line-number" data-line-number="159"></td>
        <td id="LC159" class="blob-code blob-code-inner js-file-line">	BE_WORKLOAD = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L160" class="blob-num js-line-number" data-line-number="160"></td>
        <td id="LC160" class="blob-code blob-code-inner js-file-line">	RT_WORKLOAD = <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L161" class="blob-num js-line-number" data-line-number="161"></td>
        <td id="LC161" class="blob-code blob-code-inner js-file-line">	IDLE_WORKLOAD = <span class="pl-c1">2</span>,</td>
      </tr>
      <tr>
        <td id="L162" class="blob-num js-line-number" data-line-number="162"></td>
        <td id="LC162" class="blob-code blob-code-inner js-file-line">	CFQ_PRIO_NR,</td>
      </tr>
      <tr>
        <td id="L163" class="blob-num js-line-number" data-line-number="163"></td>
        <td id="LC163" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L164" class="blob-num js-line-number" data-line-number="164"></td>
        <td id="LC164" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L165" class="blob-num js-line-number" data-line-number="165"></td>
        <td id="LC165" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L166" class="blob-num js-line-number" data-line-number="166"></td>
        <td id="LC166" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Second index in the service_trees.</span></td>
      </tr>
      <tr>
        <td id="L167" class="blob-num js-line-number" data-line-number="167"></td>
        <td id="LC167" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L168" class="blob-num js-line-number" data-line-number="168"></td>
        <td id="LC168" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> <span class="pl-c1">wl_type_t</span> {</td>
      </tr>
      <tr>
        <td id="L169" class="blob-num js-line-number" data-line-number="169"></td>
        <td id="LC169" class="blob-code blob-code-inner js-file-line">	ASYNC_WORKLOAD = <span class="pl-c1">0</span>,</td>
      </tr>
      <tr>
        <td id="L170" class="blob-num js-line-number" data-line-number="170"></td>
        <td id="LC170" class="blob-code blob-code-inner js-file-line">	SYNC_NOIDLE_WORKLOAD = <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L171" class="blob-num js-line-number" data-line-number="171"></td>
        <td id="LC171" class="blob-code blob-code-inner js-file-line">	SYNC_WORKLOAD = <span class="pl-c1">2</span></td>
      </tr>
      <tr>
        <td id="L172" class="blob-num js-line-number" data-line-number="172"></td>
        <td id="LC172" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L173" class="blob-num js-line-number" data-line-number="173"></td>
        <td id="LC173" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L174" class="blob-num js-line-number" data-line-number="174"></td>
        <td id="LC174" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/* This is per cgroup per device grouping structure */</span></td>
      </tr>
      <tr>
        <td id="L175" class="blob-num js-line-number" data-line-number="175"></td>
        <td id="LC175" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> cfq_group {</td>
      </tr>
      <tr>
        <td id="L176" class="blob-num js-line-number" data-line-number="176"></td>
        <td id="LC176" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* group service_tree member */</span></td>
      </tr>
      <tr>
        <td id="L177" class="blob-num js-line-number" data-line-number="177"></td>
        <td id="LC177" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node rb_node;</td>
      </tr>
      <tr>
        <td id="L178" class="blob-num js-line-number" data-line-number="178"></td>
        <td id="LC178" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L179" class="blob-num js-line-number" data-line-number="179"></td>
        <td id="LC179" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* group service_tree key */</span></td>
      </tr>
      <tr>
        <td id="L180" class="blob-num js-line-number" data-line-number="180"></td>
        <td id="LC180" class="blob-code blob-code-inner js-file-line">	u64 vdisktime;</td>
      </tr>
      <tr>
        <td id="L181" class="blob-num js-line-number" data-line-number="181"></td>
        <td id="LC181" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> weight;</td>
      </tr>
      <tr>
        <td id="L182" class="blob-num js-line-number" data-line-number="182"></td>
        <td id="LC182" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> new_weight;</td>
      </tr>
      <tr>
        <td id="L183" class="blob-num js-line-number" data-line-number="183"></td>
        <td id="LC183" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">bool</span> needs_update;</td>
      </tr>
      <tr>
        <td id="L184" class="blob-num js-line-number" data-line-number="184"></td>
        <td id="LC184" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L185" class="blob-num js-line-number" data-line-number="185"></td>
        <td id="LC185" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* number of cfqq currently on this group */</span></td>
      </tr>
      <tr>
        <td id="L186" class="blob-num js-line-number" data-line-number="186"></td>
        <td id="LC186" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> nr_cfqq;</td>
      </tr>
      <tr>
        <td id="L187" class="blob-num js-line-number" data-line-number="187"></td>
        <td id="LC187" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L188" class="blob-num js-line-number" data-line-number="188"></td>
        <td id="LC188" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L189" class="blob-num js-line-number" data-line-number="189"></td>
        <td id="LC189" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Per group busy queues average. Useful for workload slice calc. We</span></td>
      </tr>
      <tr>
        <td id="L190" class="blob-num js-line-number" data-line-number="190"></td>
        <td id="LC190" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * create the array for each prio class but at run time it is used</span></td>
      </tr>
      <tr>
        <td id="L191" class="blob-num js-line-number" data-line-number="191"></td>
        <td id="LC191" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * only for RT and BE class and slot for IDLE class remains unused.</span></td>
      </tr>
      <tr>
        <td id="L192" class="blob-num js-line-number" data-line-number="192"></td>
        <td id="LC192" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * This is primarily done to avoid confusion and a gcc warning.</span></td>
      </tr>
      <tr>
        <td id="L193" class="blob-num js-line-number" data-line-number="193"></td>
        <td id="LC193" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L194" class="blob-num js-line-number" data-line-number="194"></td>
        <td id="LC194" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> busy_queues_avg[CFQ_PRIO_NR];</td>
      </tr>
      <tr>
        <td id="L195" class="blob-num js-line-number" data-line-number="195"></td>
        <td id="LC195" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L196" class="blob-num js-line-number" data-line-number="196"></td>
        <td id="LC196" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * rr lists of queues with requests. We maintain service trees for</span></td>
      </tr>
      <tr>
        <td id="L197" class="blob-num js-line-number" data-line-number="197"></td>
        <td id="LC197" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * RT and BE classes. These trees are subdivided in subclasses</span></td>
      </tr>
      <tr>
        <td id="L198" class="blob-num js-line-number" data-line-number="198"></td>
        <td id="LC198" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * of SYNC, SYNC_NOIDLE and ASYNC based on workload type. For IDLE</span></td>
      </tr>
      <tr>
        <td id="L199" class="blob-num js-line-number" data-line-number="199"></td>
        <td id="LC199" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * class there is no subclassification and all the cfq queues go on</span></td>
      </tr>
      <tr>
        <td id="L200" class="blob-num js-line-number" data-line-number="200"></td>
        <td id="LC200" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * a single tree service_tree_idle.</span></td>
      </tr>
      <tr>
        <td id="L201" class="blob-num js-line-number" data-line-number="201"></td>
        <td id="LC201" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Counts are embedded in the cfq_rb_root</span></td>
      </tr>
      <tr>
        <td id="L202" class="blob-num js-line-number" data-line-number="202"></td>
        <td id="LC202" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L203" class="blob-num js-line-number" data-line-number="203"></td>
        <td id="LC203" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root service_trees[<span class="pl-c1">2</span>][<span class="pl-c1">3</span>];</td>
      </tr>
      <tr>
        <td id="L204" class="blob-num js-line-number" data-line-number="204"></td>
        <td id="LC204" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root service_tree_idle;</td>
      </tr>
      <tr>
        <td id="L205" class="blob-num js-line-number" data-line-number="205"></td>
        <td id="LC205" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L206" class="blob-num js-line-number" data-line-number="206"></td>
        <td id="LC206" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> saved_workload_slice;</td>
      </tr>
      <tr>
        <td id="L207" class="blob-num js-line-number" data-line-number="207"></td>
        <td id="LC207" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">enum</span> <span class="pl-c1">wl_type_t</span> saved_workload;</td>
      </tr>
      <tr>
        <td id="L208" class="blob-num js-line-number" data-line-number="208"></td>
        <td id="LC208" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">enum</span> <span class="pl-c1">wl_prio_t</span> saved_serving_prio;</td>
      </tr>
      <tr>
        <td id="L209" class="blob-num js-line-number" data-line-number="209"></td>
        <td id="LC209" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> blkio_group blkg;</td>
      </tr>
      <tr>
        <td id="L210" class="blob-num js-line-number" data-line-number="210"></td>
        <td id="LC210" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L211" class="blob-num js-line-number" data-line-number="211"></td>
        <td id="LC211" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> hlist_node cfqd_node;</td>
      </tr>
      <tr>
        <td id="L212" class="blob-num js-line-number" data-line-number="212"></td>
        <td id="LC212" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> ref;</td>
      </tr>
      <tr>
        <td id="L213" class="blob-num js-line-number" data-line-number="213"></td>
        <td id="LC213" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L214" class="blob-num js-line-number" data-line-number="214"></td>
        <td id="LC214" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* number of requests that are on the dispatch list or inside driver */</span></td>
      </tr>
      <tr>
        <td id="L215" class="blob-num js-line-number" data-line-number="215"></td>
        <td id="LC215" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> dispatched;</td>
      </tr>
      <tr>
        <td id="L216" class="blob-num js-line-number" data-line-number="216"></td>
        <td id="LC216" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_ttime ttime;</td>
      </tr>
      <tr>
        <td id="L217" class="blob-num js-line-number" data-line-number="217"></td>
        <td id="LC217" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L218" class="blob-num js-line-number" data-line-number="218"></td>
        <td id="LC218" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L219" class="blob-num js-line-number" data-line-number="219"></td>
        <td id="LC219" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> cfq_io_cq {</td>
      </tr>
      <tr>
        <td id="L220" class="blob-num js-line-number" data-line-number="220"></td>
        <td id="LC220" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> io_cq		icq;		<span class="pl-c">/* must be the first member */</span></td>
      </tr>
      <tr>
        <td id="L221" class="blob-num js-line-number" data-line-number="221"></td>
        <td id="LC221" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue	*cfqq[<span class="pl-c1">2</span>];</td>
      </tr>
      <tr>
        <td id="L222" class="blob-num js-line-number" data-line-number="222"></td>
        <td id="LC222" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_ttime	ttime;</td>
      </tr>
      <tr>
        <td id="L223" class="blob-num js-line-number" data-line-number="223"></td>
        <td id="LC223" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L224" class="blob-num js-line-number" data-line-number="224"></td>
        <td id="LC224" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L225" class="blob-num js-line-number" data-line-number="225"></td>
        <td id="LC225" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L226" class="blob-num js-line-number" data-line-number="226"></td>
        <td id="LC226" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Per block device queue structure</span></td>
      </tr>
      <tr>
        <td id="L227" class="blob-num js-line-number" data-line-number="227"></td>
        <td id="LC227" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L228" class="blob-num js-line-number" data-line-number="228"></td>
        <td id="LC228" class="blob-code blob-code-inner js-file-line"><span class="pl-k">struct</span> cfq_data {</td>
      </tr>
      <tr>
        <td id="L229" class="blob-num js-line-number" data-line-number="229"></td>
        <td id="LC229" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request_queue *queue;</td>
      </tr>
      <tr>
        <td id="L230" class="blob-num js-line-number" data-line-number="230"></td>
        <td id="LC230" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Root service tree for cfq_groups */</span></td>
      </tr>
      <tr>
        <td id="L231" class="blob-num js-line-number" data-line-number="231"></td>
        <td id="LC231" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root grp_service_tree;</td>
      </tr>
      <tr>
        <td id="L232" class="blob-num js-line-number" data-line-number="232"></td>
        <td id="LC232" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group root_group;</td>
      </tr>
      <tr>
        <td id="L233" class="blob-num js-line-number" data-line-number="233"></td>
        <td id="LC233" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L234" class="blob-num js-line-number" data-line-number="234"></td>
        <td id="LC234" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L235" class="blob-num js-line-number" data-line-number="235"></td>
        <td id="LC235" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * The priority currently being served</span></td>
      </tr>
      <tr>
        <td id="L236" class="blob-num js-line-number" data-line-number="236"></td>
        <td id="LC236" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L237" class="blob-num js-line-number" data-line-number="237"></td>
        <td id="LC237" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">enum</span> <span class="pl-c1">wl_prio_t</span> serving_prio;</td>
      </tr>
      <tr>
        <td id="L238" class="blob-num js-line-number" data-line-number="238"></td>
        <td id="LC238" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">enum</span> <span class="pl-c1">wl_type_t</span> serving_type;</td>
      </tr>
      <tr>
        <td id="L239" class="blob-num js-line-number" data-line-number="239"></td>
        <td id="LC239" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> workload_expires;</td>
      </tr>
      <tr>
        <td id="L240" class="blob-num js-line-number" data-line-number="240"></td>
        <td id="LC240" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *serving_group;</td>
      </tr>
      <tr>
        <td id="L241" class="blob-num js-line-number" data-line-number="241"></td>
        <td id="LC241" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L242" class="blob-num js-line-number" data-line-number="242"></td>
        <td id="LC242" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L243" class="blob-num js-line-number" data-line-number="243"></td>
        <td id="LC243" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Each priority tree is sorted by next_request position.  These</span></td>
      </tr>
      <tr>
        <td id="L244" class="blob-num js-line-number" data-line-number="244"></td>
        <td id="LC244" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * trees are used when determining if two or more queues are</span></td>
      </tr>
      <tr>
        <td id="L245" class="blob-num js-line-number" data-line-number="245"></td>
        <td id="LC245" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * interleaving requests (see cfq_close_cooperator).</span></td>
      </tr>
      <tr>
        <td id="L246" class="blob-num js-line-number" data-line-number="246"></td>
        <td id="LC246" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L247" class="blob-num js-line-number" data-line-number="247"></td>
        <td id="LC247" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_root prio_trees[CFQ_PRIO_LISTS];</td>
      </tr>
      <tr>
        <td id="L248" class="blob-num js-line-number" data-line-number="248"></td>
        <td id="LC248" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L249" class="blob-num js-line-number" data-line-number="249"></td>
        <td id="LC249" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> busy_queues;</td>
      </tr>
      <tr>
        <td id="L250" class="blob-num js-line-number" data-line-number="250"></td>
        <td id="LC250" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> busy_sync_queues;</td>
      </tr>
      <tr>
        <td id="L251" class="blob-num js-line-number" data-line-number="251"></td>
        <td id="LC251" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L252" class="blob-num js-line-number" data-line-number="252"></td>
        <td id="LC252" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> rq_in_driver;</td>
      </tr>
      <tr>
        <td id="L253" class="blob-num js-line-number" data-line-number="253"></td>
        <td id="LC253" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> rq_in_flight[<span class="pl-c1">2</span>];</td>
      </tr>
      <tr>
        <td id="L254" class="blob-num js-line-number" data-line-number="254"></td>
        <td id="LC254" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L255" class="blob-num js-line-number" data-line-number="255"></td>
        <td id="LC255" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L256" class="blob-num js-line-number" data-line-number="256"></td>
        <td id="LC256" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * queue-depth detection</span></td>
      </tr>
      <tr>
        <td id="L257" class="blob-num js-line-number" data-line-number="257"></td>
        <td id="LC257" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L258" class="blob-num js-line-number" data-line-number="258"></td>
        <td id="LC258" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> rq_queued;</td>
      </tr>
      <tr>
        <td id="L259" class="blob-num js-line-number" data-line-number="259"></td>
        <td id="LC259" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> hw_tag;</td>
      </tr>
      <tr>
        <td id="L260" class="blob-num js-line-number" data-line-number="260"></td>
        <td id="LC260" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L261" class="blob-num js-line-number" data-line-number="261"></td>
        <td id="LC261" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * hw_tag can be</span></td>
      </tr>
      <tr>
        <td id="L262" class="blob-num js-line-number" data-line-number="262"></td>
        <td id="LC262" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * -1 =&gt; indeterminate, (cfq will behave as if NCQ is present, to allow better detection)</span></td>
      </tr>
      <tr>
        <td id="L263" class="blob-num js-line-number" data-line-number="263"></td>
        <td id="LC263" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 *  1 =&gt; NCQ is present (hw_tag_est_depth is the estimated max depth)</span></td>
      </tr>
      <tr>
        <td id="L264" class="blob-num js-line-number" data-line-number="264"></td>
        <td id="LC264" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 *  0 =&gt; no NCQ</span></td>
      </tr>
      <tr>
        <td id="L265" class="blob-num js-line-number" data-line-number="265"></td>
        <td id="LC265" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L266" class="blob-num js-line-number" data-line-number="266"></td>
        <td id="LC266" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> hw_tag_est_depth;</td>
      </tr>
      <tr>
        <td id="L267" class="blob-num js-line-number" data-line-number="267"></td>
        <td id="LC267" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> hw_tag_samples;</td>
      </tr>
      <tr>
        <td id="L268" class="blob-num js-line-number" data-line-number="268"></td>
        <td id="LC268" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L269" class="blob-num js-line-number" data-line-number="269"></td>
        <td id="LC269" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L270" class="blob-num js-line-number" data-line-number="270"></td>
        <td id="LC270" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * idle window management</span></td>
      </tr>
      <tr>
        <td id="L271" class="blob-num js-line-number" data-line-number="271"></td>
        <td id="LC271" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L272" class="blob-num js-line-number" data-line-number="272"></td>
        <td id="LC272" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> timer_list idle_slice_timer;</td>
      </tr>
      <tr>
        <td id="L273" class="blob-num js-line-number" data-line-number="273"></td>
        <td id="LC273" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> work_struct unplug_work;</td>
      </tr>
      <tr>
        <td id="L274" class="blob-num js-line-number" data-line-number="274"></td>
        <td id="LC274" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L275" class="blob-num js-line-number" data-line-number="275"></td>
        <td id="LC275" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *active_queue;</td>
      </tr>
      <tr>
        <td id="L276" class="blob-num js-line-number" data-line-number="276"></td>
        <td id="LC276" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *active_cic;</td>
      </tr>
      <tr>
        <td id="L277" class="blob-num js-line-number" data-line-number="277"></td>
        <td id="LC277" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L278" class="blob-num js-line-number" data-line-number="278"></td>
        <td id="LC278" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L279" class="blob-num js-line-number" data-line-number="279"></td>
        <td id="LC279" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * async queue for each priority case</span></td>
      </tr>
      <tr>
        <td id="L280" class="blob-num js-line-number" data-line-number="280"></td>
        <td id="LC280" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L281" class="blob-num js-line-number" data-line-number="281"></td>
        <td id="LC281" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *async_cfqq[<span class="pl-c1">2</span>][IOPRIO_BE_NR];</td>
      </tr>
      <tr>
        <td id="L282" class="blob-num js-line-number" data-line-number="282"></td>
        <td id="LC282" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *async_idle_cfqq;</td>
      </tr>
      <tr>
        <td id="L283" class="blob-num js-line-number" data-line-number="283"></td>
        <td id="LC283" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L284" class="blob-num js-line-number" data-line-number="284"></td>
        <td id="LC284" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sector_t</span> last_position;</td>
      </tr>
      <tr>
        <td id="L285" class="blob-num js-line-number" data-line-number="285"></td>
        <td id="LC285" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L286" class="blob-num js-line-number" data-line-number="286"></td>
        <td id="LC286" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L287" class="blob-num js-line-number" data-line-number="287"></td>
        <td id="LC287" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * tunables, see top of file</span></td>
      </tr>
      <tr>
        <td id="L288" class="blob-num js-line-number" data-line-number="288"></td>
        <td id="LC288" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L289" class="blob-num js-line-number" data-line-number="289"></td>
        <td id="LC289" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> cfq_quantum;</td>
      </tr>
      <tr>
        <td id="L290" class="blob-num js-line-number" data-line-number="290"></td>
        <td id="LC290" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> cfq_fifo_expire[<span class="pl-c1">2</span>];</td>
      </tr>
      <tr>
        <td id="L291" class="blob-num js-line-number" data-line-number="291"></td>
        <td id="LC291" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> cfq_back_penalty;</td>
      </tr>
      <tr>
        <td id="L292" class="blob-num js-line-number" data-line-number="292"></td>
        <td id="LC292" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> cfq_back_max;</td>
      </tr>
      <tr>
        <td id="L293" class="blob-num js-line-number" data-line-number="293"></td>
        <td id="LC293" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> cfq_slice[<span class="pl-c1">2</span>];</td>
      </tr>
      <tr>
        <td id="L294" class="blob-num js-line-number" data-line-number="294"></td>
        <td id="LC294" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> cfq_slice_async_rq;</td>
      </tr>
      <tr>
        <td id="L295" class="blob-num js-line-number" data-line-number="295"></td>
        <td id="LC295" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> cfq_slice_idle;</td>
      </tr>
      <tr>
        <td id="L296" class="blob-num js-line-number" data-line-number="296"></td>
        <td id="LC296" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> cfq_group_idle;</td>
      </tr>
      <tr>
        <td id="L297" class="blob-num js-line-number" data-line-number="297"></td>
        <td id="LC297" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> cfq_latency;</td>
      </tr>
      <tr>
        <td id="L298" class="blob-num js-line-number" data-line-number="298"></td>
        <td id="LC298" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> cfq_target_latency;</td>
      </tr>
      <tr>
        <td id="L299" class="blob-num js-line-number" data-line-number="299"></td>
        <td id="LC299" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L300" class="blob-num js-line-number" data-line-number="300"></td>
        <td id="LC300" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L301" class="blob-num js-line-number" data-line-number="301"></td>
        <td id="LC301" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Fallback dummy cfqq for extreme OOM conditions</span></td>
      </tr>
      <tr>
        <td id="L302" class="blob-num js-line-number" data-line-number="302"></td>
        <td id="LC302" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L303" class="blob-num js-line-number" data-line-number="303"></td>
        <td id="LC303" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue oom_cfqq;</td>
      </tr>
      <tr>
        <td id="L304" class="blob-num js-line-number" data-line-number="304"></td>
        <td id="LC304" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L305" class="blob-num js-line-number" data-line-number="305"></td>
        <td id="LC305" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> last_delayed_sync;</td>
      </tr>
      <tr>
        <td id="L306" class="blob-num js-line-number" data-line-number="306"></td>
        <td id="LC306" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L307" class="blob-num js-line-number" data-line-number="307"></td>
        <td id="LC307" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* List of cfq groups being managed on this device*/</span></td>
      </tr>
      <tr>
        <td id="L308" class="blob-num js-line-number" data-line-number="308"></td>
        <td id="LC308" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> hlist_head cfqg_list;</td>
      </tr>
      <tr>
        <td id="L309" class="blob-num js-line-number" data-line-number="309"></td>
        <td id="LC309" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L310" class="blob-num js-line-number" data-line-number="310"></td>
        <td id="LC310" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Number of groups which are on blkcg-&gt;blkg_list */</span></td>
      </tr>
      <tr>
        <td id="L311" class="blob-num js-line-number" data-line-number="311"></td>
        <td id="LC311" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> nr_blkcg_linked_grps;</td>
      </tr>
      <tr>
        <td id="L312" class="blob-num js-line-number" data-line-number="312"></td>
        <td id="LC312" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L313" class="blob-num js-line-number" data-line-number="313"></td>
        <td id="LC313" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L314" class="blob-num js-line-number" data-line-number="314"></td>
        <td id="LC314" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_group *<span class="pl-en">cfq_get_next_cfqg</span>(<span class="pl-k">struct</span> cfq_data *cfqd);</td>
      </tr>
      <tr>
        <td id="L315" class="blob-num js-line-number" data-line-number="315"></td>
        <td id="LC315" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L316" class="blob-num js-line-number" data-line-number="316"></td>
        <td id="LC316" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_rb_root *<span class="pl-en">service_tree_for</span>(<span class="pl-k">struct</span> cfq_group *cfqg,</td>
      </tr>
      <tr>
        <td id="L317" class="blob-num js-line-number" data-line-number="317"></td>
        <td id="LC317" class="blob-code blob-code-inner js-file-line">					    <span class="pl-k">enum</span> <span class="pl-c1">wl_prio_t</span> prio,</td>
      </tr>
      <tr>
        <td id="L318" class="blob-num js-line-number" data-line-number="318"></td>
        <td id="LC318" class="blob-code blob-code-inner js-file-line">					    <span class="pl-k">enum</span> <span class="pl-c1">wl_type_t</span> type)</td>
      </tr>
      <tr>
        <td id="L319" class="blob-num js-line-number" data-line-number="319"></td>
        <td id="LC319" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L320" class="blob-num js-line-number" data-line-number="320"></td>
        <td id="LC320" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqg)</td>
      </tr>
      <tr>
        <td id="L321" class="blob-num js-line-number" data-line-number="321"></td>
        <td id="LC321" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L322" class="blob-num js-line-number" data-line-number="322"></td>
        <td id="LC322" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L323" class="blob-num js-line-number" data-line-number="323"></td>
        <td id="LC323" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (prio == IDLE_WORKLOAD)</td>
      </tr>
      <tr>
        <td id="L324" class="blob-num js-line-number" data-line-number="324"></td>
        <td id="LC324" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> &amp;cfqg-&gt;service_tree_idle;</td>
      </tr>
      <tr>
        <td id="L325" class="blob-num js-line-number" data-line-number="325"></td>
        <td id="LC325" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L326" class="blob-num js-line-number" data-line-number="326"></td>
        <td id="LC326" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> &amp;cfqg-&gt;service_trees[prio][type];</td>
      </tr>
      <tr>
        <td id="L327" class="blob-num js-line-number" data-line-number="327"></td>
        <td id="LC327" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L328" class="blob-num js-line-number" data-line-number="328"></td>
        <td id="LC328" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L329" class="blob-num js-line-number" data-line-number="329"></td>
        <td id="LC329" class="blob-code blob-code-inner js-file-line"><span class="pl-k">enum</span> cfqq_state_flags {</td>
      </tr>
      <tr>
        <td id="L330" class="blob-num js-line-number" data-line-number="330"></td>
        <td id="LC330" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_on_rr = <span class="pl-c1">0</span>,	<span class="pl-c">/* on round-robin busy list */</span></td>
      </tr>
      <tr>
        <td id="L331" class="blob-num js-line-number" data-line-number="331"></td>
        <td id="LC331" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_wait_request,	<span class="pl-c">/* waiting for a request */</span></td>
      </tr>
      <tr>
        <td id="L332" class="blob-num js-line-number" data-line-number="332"></td>
        <td id="LC332" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_must_dispatch,	<span class="pl-c">/* must be allowed a dispatch */</span></td>
      </tr>
      <tr>
        <td id="L333" class="blob-num js-line-number" data-line-number="333"></td>
        <td id="LC333" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_must_alloc_slice,	<span class="pl-c">/* per-slice must_alloc flag */</span></td>
      </tr>
      <tr>
        <td id="L334" class="blob-num js-line-number" data-line-number="334"></td>
        <td id="LC334" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_fifo_expire,	<span class="pl-c">/* FIFO checked in this slice */</span></td>
      </tr>
      <tr>
        <td id="L335" class="blob-num js-line-number" data-line-number="335"></td>
        <td id="LC335" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_idle_window,	<span class="pl-c">/* slice idling enabled */</span></td>
      </tr>
      <tr>
        <td id="L336" class="blob-num js-line-number" data-line-number="336"></td>
        <td id="LC336" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_prio_changed,	<span class="pl-c">/* task priority has changed */</span></td>
      </tr>
      <tr>
        <td id="L337" class="blob-num js-line-number" data-line-number="337"></td>
        <td id="LC337" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_slice_new,	<span class="pl-c">/* no requests dispatched in slice */</span></td>
      </tr>
      <tr>
        <td id="L338" class="blob-num js-line-number" data-line-number="338"></td>
        <td id="LC338" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_sync,		<span class="pl-c">/* synchronous queue */</span></td>
      </tr>
      <tr>
        <td id="L339" class="blob-num js-line-number" data-line-number="339"></td>
        <td id="LC339" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_coop,		<span class="pl-c">/* cfqq is shared */</span></td>
      </tr>
      <tr>
        <td id="L340" class="blob-num js-line-number" data-line-number="340"></td>
        <td id="LC340" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_split_coop,	<span class="pl-c">/* shared cfqq will be splitted */</span></td>
      </tr>
      <tr>
        <td id="L341" class="blob-num js-line-number" data-line-number="341"></td>
        <td id="LC341" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_deep,		<span class="pl-c">/* sync cfqq experienced large depth */</span></td>
      </tr>
      <tr>
        <td id="L342" class="blob-num js-line-number" data-line-number="342"></td>
        <td id="LC342" class="blob-code blob-code-inner js-file-line">	CFQ_CFQQ_FLAG_wait_busy,	<span class="pl-c">/* Waiting for next request */</span></td>
      </tr>
      <tr>
        <td id="L343" class="blob-num js-line-number" data-line-number="343"></td>
        <td id="LC343" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L344" class="blob-num js-line-number" data-line-number="344"></td>
        <td id="LC344" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L345" class="blob-num js-line-number" data-line-number="345"></td>
        <td id="LC345" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_CFQQ_FNS</span>(<span class="pl-v">name</span>)						\</td>
      </tr>
      <tr>
        <td id="L346" class="blob-num js-line-number" data-line-number="346"></td>
        <td id="LC346" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> cfq_mark_cfqq_##name(<span class="pl-k">struct</span> cfq_queue *cfqq)		\</td>
      </tr>
      <tr>
        <td id="L347" class="blob-num js-line-number" data-line-number="347"></td>
        <td id="LC347" class="blob-code blob-code-inner js-file-line">{									\</td>
      </tr>
      <tr>
        <td id="L348" class="blob-num js-line-number" data-line-number="348"></td>
        <td id="LC348" class="blob-code blob-code-inner js-file-line">	(cfqq)-&gt;flags |= (<span class="pl-c1">1</span> &lt;&lt; CFQ_CFQQ_FLAG_##name);			\</td>
      </tr>
      <tr>
        <td id="L349" class="blob-num js-line-number" data-line-number="349"></td>
        <td id="LC349" class="blob-code blob-code-inner js-file-line">}									\</td>
      </tr>
      <tr>
        <td id="L350" class="blob-num js-line-number" data-line-number="350"></td>
        <td id="LC350" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> cfq_clear_cfqq_##name(<span class="pl-k">struct</span> cfq_queue *cfqq)	\</td>
      </tr>
      <tr>
        <td id="L351" class="blob-num js-line-number" data-line-number="351"></td>
        <td id="LC351" class="blob-code blob-code-inner js-file-line">{									\</td>
      </tr>
      <tr>
        <td id="L352" class="blob-num js-line-number" data-line-number="352"></td>
        <td id="LC352" class="blob-code blob-code-inner js-file-line">	(cfqq)-&gt;flags &amp;= ~(<span class="pl-c1">1</span> &lt;&lt; CFQ_CFQQ_FLAG_##name);			\</td>
      </tr>
      <tr>
        <td id="L353" class="blob-num js-line-number" data-line-number="353"></td>
        <td id="LC353" class="blob-code blob-code-inner js-file-line">}									\</td>
      </tr>
      <tr>
        <td id="L354" class="blob-num js-line-number" data-line-number="354"></td>
        <td id="LC354" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">int</span> cfq_cfqq_##name(<span class="pl-k">const</span> <span class="pl-k">struct</span> cfq_queue *cfqq)		\</td>
      </tr>
      <tr>
        <td id="L355" class="blob-num js-line-number" data-line-number="355"></td>
        <td id="LC355" class="blob-code blob-code-inner js-file-line">{									\</td>
      </tr>
      <tr>
        <td id="L356" class="blob-num js-line-number" data-line-number="356"></td>
        <td id="LC356" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> ((cfqq)-&gt;flags &amp; (<span class="pl-c1">1</span> &lt;&lt; CFQ_CFQQ_FLAG_##name)) != <span class="pl-c1">0</span>;	\</td>
      </tr>
      <tr>
        <td id="L357" class="blob-num js-line-number" data-line-number="357"></td>
        <td id="LC357" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L358" class="blob-num js-line-number" data-line-number="358"></td>
        <td id="LC358" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L359" class="blob-num js-line-number" data-line-number="359"></td>
        <td id="LC359" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(on_rr);</td>
      </tr>
      <tr>
        <td id="L360" class="blob-num js-line-number" data-line-number="360"></td>
        <td id="LC360" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(wait_request);</td>
      </tr>
      <tr>
        <td id="L361" class="blob-num js-line-number" data-line-number="361"></td>
        <td id="LC361" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(must_dispatch);</td>
      </tr>
      <tr>
        <td id="L362" class="blob-num js-line-number" data-line-number="362"></td>
        <td id="LC362" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(must_alloc_slice);</td>
      </tr>
      <tr>
        <td id="L363" class="blob-num js-line-number" data-line-number="363"></td>
        <td id="LC363" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(fifo_expire);</td>
      </tr>
      <tr>
        <td id="L364" class="blob-num js-line-number" data-line-number="364"></td>
        <td id="LC364" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(idle_window);</td>
      </tr>
      <tr>
        <td id="L365" class="blob-num js-line-number" data-line-number="365"></td>
        <td id="LC365" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(prio_changed);</td>
      </tr>
      <tr>
        <td id="L366" class="blob-num js-line-number" data-line-number="366"></td>
        <td id="LC366" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(slice_new);</td>
      </tr>
      <tr>
        <td id="L367" class="blob-num js-line-number" data-line-number="367"></td>
        <td id="LC367" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(sync);</td>
      </tr>
      <tr>
        <td id="L368" class="blob-num js-line-number" data-line-number="368"></td>
        <td id="LC368" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(coop);</td>
      </tr>
      <tr>
        <td id="L369" class="blob-num js-line-number" data-line-number="369"></td>
        <td id="LC369" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(split_coop);</td>
      </tr>
      <tr>
        <td id="L370" class="blob-num js-line-number" data-line-number="370"></td>
        <td id="LC370" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(deep);</td>
      </tr>
      <tr>
        <td id="L371" class="blob-num js-line-number" data-line-number="371"></td>
        <td id="LC371" class="blob-code blob-code-inner js-file-line"><span class="pl-en">CFQ_CFQQ_FNS</span>(wait_busy);</td>
      </tr>
      <tr>
        <td id="L372" class="blob-num js-line-number" data-line-number="372"></td>
        <td id="LC372" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">undef</span> CFQ_CFQQ_FNS</td>
      </tr>
      <tr>
        <td id="L373" class="blob-num js-line-number" data-line-number="373"></td>
        <td id="LC373" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L374" class="blob-num js-line-number" data-line-number="374"></td>
        <td id="LC374" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L375" class="blob-num js-line-number" data-line-number="375"></td>
        <td id="LC375" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">cfq_log_cfqq</span>(<span class="pl-v">cfqd, cfqq, fmt, args...</span>)	\</td>
      </tr>
      <tr>
        <td id="L376" class="blob-num js-line-number" data-line-number="376"></td>
        <td id="LC376" class="blob-code blob-code-inner js-file-line">	<span class="pl-en">blk_add_trace_msg</span>((cfqd)-&gt;queue, &quot;cfq%d%c %s &quot; fmt, (cfqq)-&gt;pid, \</td>
      </tr>
      <tr>
        <td id="L377" class="blob-num js-line-number" data-line-number="377"></td>
        <td id="LC377" class="blob-code blob-code-inner js-file-line">			cfq_cfqq_sync((cfqq)) ? &#39;S&#39; : &#39;A&#39;, \</td>
      </tr>
      <tr>
        <td id="L378" class="blob-num js-line-number" data-line-number="378"></td>
        <td id="LC378" class="blob-code blob-code-inner js-file-line">			blkg_path(&amp;(cfqq)-&gt;cfqg-&gt;blkg), ##args)</td>
      </tr>
      <tr>
        <td id="L379" class="blob-num js-line-number" data-line-number="379"></td>
        <td id="LC379" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L380" class="blob-num js-line-number" data-line-number="380"></td>
        <td id="LC380" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">cfq_log_cfqg</span>(<span class="pl-v">cfqd, cfqg, fmt, args...</span>)				\</td>
      </tr>
      <tr>
        <td id="L381" class="blob-num js-line-number" data-line-number="381"></td>
        <td id="LC381" class="blob-code blob-code-inner js-file-line">	<span class="pl-en">blk_add_trace_msg</span>((cfqd)-&gt;queue, &quot;%s &quot; fmt,			\</td>
      </tr>
      <tr>
        <td id="L382" class="blob-num js-line-number" data-line-number="382"></td>
        <td id="LC382" class="blob-code blob-code-inner js-file-line">				blkg_path(&amp;(cfqg)-&gt;blkg), ##args)       \</td>
      </tr>
      <tr>
        <td id="L383" class="blob-num js-line-number" data-line-number="383"></td>
        <td id="LC383" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L384" class="blob-num js-line-number" data-line-number="384"></td>
        <td id="LC384" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L385" class="blob-num js-line-number" data-line-number="385"></td>
        <td id="LC385" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">cfq_log_cfqq</span>(<span class="pl-v">cfqd, cfqq, fmt, args...</span>)	\</td>
      </tr>
      <tr>
        <td id="L386" class="blob-num js-line-number" data-line-number="386"></td>
        <td id="LC386" class="blob-code blob-code-inner js-file-line">	<span class="pl-en">blk_add_trace_msg</span>((cfqd)-&gt;queue, &quot;cfq%d &quot; fmt, (cfqq)-&gt;pid, ##args)</td>
      </tr>
      <tr>
        <td id="L387" class="blob-num js-line-number" data-line-number="387"></td>
        <td id="LC387" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">cfq_log_cfqg</span>(<span class="pl-v">cfqd, cfqg, fmt, args...</span>)		<span class="pl-k">do</span> {} <span class="pl-k">while</span> (<span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L388" class="blob-num js-line-number" data-line-number="388"></td>
        <td id="LC388" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L389" class="blob-num js-line-number" data-line-number="389"></td>
        <td id="LC389" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">cfq_log</span>(<span class="pl-v">cfqd, fmt, args...</span>)	\</td>
      </tr>
      <tr>
        <td id="L390" class="blob-num js-line-number" data-line-number="390"></td>
        <td id="LC390" class="blob-code blob-code-inner js-file-line">	<span class="pl-en">blk_add_trace_msg</span>((cfqd)-&gt;queue, &quot;cfq &quot; fmt, ##args)</td>
      </tr>
      <tr>
        <td id="L391" class="blob-num js-line-number" data-line-number="391"></td>
        <td id="LC391" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L392" class="blob-num js-line-number" data-line-number="392"></td>
        <td id="LC392" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/* Traverses through cfq group service trees */</span></td>
      </tr>
      <tr>
        <td id="L393" class="blob-num js-line-number" data-line-number="393"></td>
        <td id="LC393" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">for_each_cfqg_st</span>(<span class="pl-v">cfqg, i, j, st</span>) \</td>
      </tr>
      <tr>
        <td id="L394" class="blob-num js-line-number" data-line-number="394"></td>
        <td id="LC394" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (i = <span class="pl-c1">0</span>; i &lt;= IDLE_WORKLOAD; i++) \</td>
      </tr>
      <tr>
        <td id="L395" class="blob-num js-line-number" data-line-number="395"></td>
        <td id="LC395" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">for</span> (j = <span class="pl-c1">0</span>, st = i &lt; IDLE_WORKLOAD ? &amp;cfqg-&gt;service_trees[i][j]\</td>
      </tr>
      <tr>
        <td id="L396" class="blob-num js-line-number" data-line-number="396"></td>
        <td id="LC396" class="blob-code blob-code-inner js-file-line">			: &amp;cfqg-&gt;service_tree_idle; \</td>
      </tr>
      <tr>
        <td id="L397" class="blob-num js-line-number" data-line-number="397"></td>
        <td id="LC397" class="blob-code blob-code-inner js-file-line">			(i &lt; IDLE_WORKLOAD &amp;&amp; j &lt;= SYNC_WORKLOAD) || \</td>
      </tr>
      <tr>
        <td id="L398" class="blob-num js-line-number" data-line-number="398"></td>
        <td id="LC398" class="blob-code blob-code-inner js-file-line">			(i == IDLE_WORKLOAD &amp;&amp; j == <span class="pl-c1">0</span>); \</td>
      </tr>
      <tr>
        <td id="L399" class="blob-num js-line-number" data-line-number="399"></td>
        <td id="LC399" class="blob-code blob-code-inner js-file-line">			j++, st = i &lt; IDLE_WORKLOAD ? \</td>
      </tr>
      <tr>
        <td id="L400" class="blob-num js-line-number" data-line-number="400"></td>
        <td id="LC400" class="blob-code blob-code-inner js-file-line">			&amp;cfqg-&gt;service_trees[i][j]: <span class="pl-c1">NULL</span>) \</td>
      </tr>
      <tr>
        <td id="L401" class="blob-num js-line-number" data-line-number="401"></td>
        <td id="LC401" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L402" class="blob-num js-line-number" data-line-number="402"></td>
        <td id="LC402" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">cfq_io_thinktime_big</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L403" class="blob-num js-line-number" data-line-number="403"></td>
        <td id="LC403" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_ttime *ttime, <span class="pl-k">bool</span> group_idle)</td>
      </tr>
      <tr>
        <td id="L404" class="blob-num js-line-number" data-line-number="404"></td>
        <td id="LC404" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L405" class="blob-num js-line-number" data-line-number="405"></td>
        <td id="LC405" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> slice;</td>
      </tr>
      <tr>
        <td id="L406" class="blob-num js-line-number" data-line-number="406"></td>
        <td id="LC406" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">sample_valid</span>(ttime-&gt;ttime_samples))</td>
      </tr>
      <tr>
        <td id="L407" class="blob-num js-line-number" data-line-number="407"></td>
        <td id="LC407" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L408" class="blob-num js-line-number" data-line-number="408"></td>
        <td id="LC408" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (group_idle)</td>
      </tr>
      <tr>
        <td id="L409" class="blob-num js-line-number" data-line-number="409"></td>
        <td id="LC409" class="blob-code blob-code-inner js-file-line">		slice = cfqd-&gt;cfq_group_idle;</td>
      </tr>
      <tr>
        <td id="L410" class="blob-num js-line-number" data-line-number="410"></td>
        <td id="LC410" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L411" class="blob-num js-line-number" data-line-number="411"></td>
        <td id="LC411" class="blob-code blob-code-inner js-file-line">		slice = cfqd-&gt;cfq_slice_idle;</td>
      </tr>
      <tr>
        <td id="L412" class="blob-num js-line-number" data-line-number="412"></td>
        <td id="LC412" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> ttime-&gt;ttime_mean &gt; slice;</td>
      </tr>
      <tr>
        <td id="L413" class="blob-num js-line-number" data-line-number="413"></td>
        <td id="LC413" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L414" class="blob-num js-line-number" data-line-number="414"></td>
        <td id="LC414" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L415" class="blob-num js-line-number" data-line-number="415"></td>
        <td id="LC415" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">iops_mode</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L416" class="blob-num js-line-number" data-line-number="416"></td>
        <td id="LC416" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L417" class="blob-num js-line-number" data-line-number="417"></td>
        <td id="LC417" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L418" class="blob-num js-line-number" data-line-number="418"></td>
        <td id="LC418" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If we are not idling on queues and it is a NCQ drive, parallel</span></td>
      </tr>
      <tr>
        <td id="L419" class="blob-num js-line-number" data-line-number="419"></td>
        <td id="LC419" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * execution of requests is on and measuring time is not possible</span></td>
      </tr>
      <tr>
        <td id="L420" class="blob-num js-line-number" data-line-number="420"></td>
        <td id="LC420" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * in most of the cases until and unless we drive shallower queue</span></td>
      </tr>
      <tr>
        <td id="L421" class="blob-num js-line-number" data-line-number="421"></td>
        <td id="LC421" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * depths and that becomes a performance bottleneck. In such cases</span></td>
      </tr>
      <tr>
        <td id="L422" class="blob-num js-line-number" data-line-number="422"></td>
        <td id="LC422" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * switch to start providing fairness in terms of number of IOs.</span></td>
      </tr>
      <tr>
        <td id="L423" class="blob-num js-line-number" data-line-number="423"></td>
        <td id="LC423" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L424" class="blob-num js-line-number" data-line-number="424"></td>
        <td id="LC424" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqd-&gt;cfq_slice_idle &amp;&amp; cfqd-&gt;hw_tag)</td>
      </tr>
      <tr>
        <td id="L425" class="blob-num js-line-number" data-line-number="425"></td>
        <td id="LC425" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L426" class="blob-num js-line-number" data-line-number="426"></td>
        <td id="LC426" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L427" class="blob-num js-line-number" data-line-number="427"></td>
        <td id="LC427" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L428" class="blob-num js-line-number" data-line-number="428"></td>
        <td id="LC428" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L429" class="blob-num js-line-number" data-line-number="429"></td>
        <td id="LC429" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L430" class="blob-num js-line-number" data-line-number="430"></td>
        <td id="LC430" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">enum</span> <span class="pl-c1">wl_prio_t</span> <span class="pl-en">cfqq_prio</span>(<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L431" class="blob-num js-line-number" data-line-number="431"></td>
        <td id="LC431" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L432" class="blob-num js-line-number" data-line-number="432"></td>
        <td id="LC432" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_idle</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L433" class="blob-num js-line-number" data-line-number="433"></td>
        <td id="LC433" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> IDLE_WORKLOAD;</td>
      </tr>
      <tr>
        <td id="L434" class="blob-num js-line-number" data-line-number="434"></td>
        <td id="LC434" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_rt</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L435" class="blob-num js-line-number" data-line-number="435"></td>
        <td id="LC435" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> RT_WORKLOAD;</td>
      </tr>
      <tr>
        <td id="L436" class="blob-num js-line-number" data-line-number="436"></td>
        <td id="LC436" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> BE_WORKLOAD;</td>
      </tr>
      <tr>
        <td id="L437" class="blob-num js-line-number" data-line-number="437"></td>
        <td id="LC437" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L438" class="blob-num js-line-number" data-line-number="438"></td>
        <td id="LC438" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L439" class="blob-num js-line-number" data-line-number="439"></td>
        <td id="LC439" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L440" class="blob-num js-line-number" data-line-number="440"></td>
        <td id="LC440" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">enum</span> <span class="pl-c1">wl_type_t</span> <span class="pl-en">cfqq_type</span>(<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L441" class="blob-num js-line-number" data-line-number="441"></td>
        <td id="LC441" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L442" class="blob-num js-line-number" data-line-number="442"></td>
        <td id="LC442" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_cfqq_sync</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L443" class="blob-num js-line-number" data-line-number="443"></td>
        <td id="LC443" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> ASYNC_WORKLOAD;</td>
      </tr>
      <tr>
        <td id="L444" class="blob-num js-line-number" data-line-number="444"></td>
        <td id="LC444" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_cfqq_idle_window</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L445" class="blob-num js-line-number" data-line-number="445"></td>
        <td id="LC445" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> SYNC_NOIDLE_WORKLOAD;</td>
      </tr>
      <tr>
        <td id="L446" class="blob-num js-line-number" data-line-number="446"></td>
        <td id="LC446" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> SYNC_WORKLOAD;</td>
      </tr>
      <tr>
        <td id="L447" class="blob-num js-line-number" data-line-number="447"></td>
        <td id="LC447" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L448" class="blob-num js-line-number" data-line-number="448"></td>
        <td id="LC448" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L449" class="blob-num js-line-number" data-line-number="449"></td>
        <td id="LC449" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">int</span> <span class="pl-en">cfq_group_busy_queues_wl</span>(<span class="pl-k">enum</span> <span class="pl-c1">wl_prio_t</span> wl,</td>
      </tr>
      <tr>
        <td id="L450" class="blob-num js-line-number" data-line-number="450"></td>
        <td id="LC450" class="blob-code blob-code-inner js-file-line">					<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L451" class="blob-num js-line-number" data-line-number="451"></td>
        <td id="LC451" class="blob-code blob-code-inner js-file-line">					<span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L452" class="blob-num js-line-number" data-line-number="452"></td>
        <td id="LC452" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L453" class="blob-num js-line-number" data-line-number="453"></td>
        <td id="LC453" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (wl == IDLE_WORKLOAD)</td>
      </tr>
      <tr>
        <td id="L454" class="blob-num js-line-number" data-line-number="454"></td>
        <td id="LC454" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> cfqg-&gt;service_tree_idle.<span class="pl-smi">count</span>;</td>
      </tr>
      <tr>
        <td id="L455" class="blob-num js-line-number" data-line-number="455"></td>
        <td id="LC455" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L456" class="blob-num js-line-number" data-line-number="456"></td>
        <td id="LC456" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqg-&gt;service_trees[wl][ASYNC_WORKLOAD].<span class="pl-smi">count</span></td>
      </tr>
      <tr>
        <td id="L457" class="blob-num js-line-number" data-line-number="457"></td>
        <td id="LC457" class="blob-code blob-code-inner js-file-line">		+ cfqg-&gt;service_trees[wl][SYNC_NOIDLE_WORKLOAD].<span class="pl-smi">count</span></td>
      </tr>
      <tr>
        <td id="L458" class="blob-num js-line-number" data-line-number="458"></td>
        <td id="LC458" class="blob-code blob-code-inner js-file-line">		+ cfqg-&gt;service_trees[wl][SYNC_WORKLOAD].<span class="pl-smi">count</span>;</td>
      </tr>
      <tr>
        <td id="L459" class="blob-num js-line-number" data-line-number="459"></td>
        <td id="LC459" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L460" class="blob-num js-line-number" data-line-number="460"></td>
        <td id="LC460" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L461" class="blob-num js-line-number" data-line-number="461"></td>
        <td id="LC461" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">int</span> <span class="pl-en">cfqg_busy_async_queues</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L462" class="blob-num js-line-number" data-line-number="462"></td>
        <td id="LC462" class="blob-code blob-code-inner js-file-line">					<span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L463" class="blob-num js-line-number" data-line-number="463"></td>
        <td id="LC463" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L464" class="blob-num js-line-number" data-line-number="464"></td>
        <td id="LC464" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqg-&gt;service_trees[RT_WORKLOAD][ASYNC_WORKLOAD].<span class="pl-smi">count</span></td>
      </tr>
      <tr>
        <td id="L465" class="blob-num js-line-number" data-line-number="465"></td>
        <td id="LC465" class="blob-code blob-code-inner js-file-line">		+ cfqg-&gt;service_trees[BE_WORKLOAD][ASYNC_WORKLOAD].<span class="pl-smi">count</span>;</td>
      </tr>
      <tr>
        <td id="L466" class="blob-num js-line-number" data-line-number="466"></td>
        <td id="LC466" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L467" class="blob-num js-line-number" data-line-number="467"></td>
        <td id="LC467" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L468" class="blob-num js-line-number" data-line-number="468"></td>
        <td id="LC468" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_dispatch_insert</span>(<span class="pl-k">struct</span> request_queue *, <span class="pl-k">struct</span> request *);</td>
      </tr>
      <tr>
        <td id="L469" class="blob-num js-line-number" data-line-number="469"></td>
        <td id="LC469" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *<span class="pl-en">cfq_get_queue</span>(<span class="pl-k">struct</span> cfq_data *, <span class="pl-k">bool</span>,</td>
      </tr>
      <tr>
        <td id="L470" class="blob-num js-line-number" data-line-number="470"></td>
        <td id="LC470" class="blob-code blob-code-inner js-file-line">				       <span class="pl-k">struct</span> io_context *, <span class="pl-c1">gfp_t</span>);</td>
      </tr>
      <tr>
        <td id="L471" class="blob-num js-line-number" data-line-number="471"></td>
        <td id="LC471" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L472" class="blob-num js-line-number" data-line-number="472"></td>
        <td id="LC472" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">struct</span> cfq_io_cq *<span class="pl-en">icq_to_cic</span>(<span class="pl-k">struct</span> io_cq *icq)</td>
      </tr>
      <tr>
        <td id="L473" class="blob-num js-line-number" data-line-number="473"></td>
        <td id="LC473" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L474" class="blob-num js-line-number" data-line-number="474"></td>
        <td id="LC474" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* cic-&gt;icq is the first member, %NULL will convert to %NULL */</span></td>
      </tr>
      <tr>
        <td id="L475" class="blob-num js-line-number" data-line-number="475"></td>
        <td id="LC475" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">container_of</span>(icq, <span class="pl-k">struct</span> cfq_io_cq, icq);</td>
      </tr>
      <tr>
        <td id="L476" class="blob-num js-line-number" data-line-number="476"></td>
        <td id="LC476" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L477" class="blob-num js-line-number" data-line-number="477"></td>
        <td id="LC477" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L478" class="blob-num js-line-number" data-line-number="478"></td>
        <td id="LC478" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">struct</span> cfq_io_cq *<span class="pl-en">cfq_cic_lookup</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L479" class="blob-num js-line-number" data-line-number="479"></td>
        <td id="LC479" class="blob-code blob-code-inner js-file-line">					       <span class="pl-k">struct</span> io_context *ioc)</td>
      </tr>
      <tr>
        <td id="L480" class="blob-num js-line-number" data-line-number="480"></td>
        <td id="LC480" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L481" class="blob-num js-line-number" data-line-number="481"></td>
        <td id="LC481" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (ioc)</td>
      </tr>
      <tr>
        <td id="L482" class="blob-num js-line-number" data-line-number="482"></td>
        <td id="LC482" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">icq_to_cic</span>(<span class="pl-c1">ioc_lookup_icq</span>(ioc, cfqd-&gt;queue));</td>
      </tr>
      <tr>
        <td id="L483" class="blob-num js-line-number" data-line-number="483"></td>
        <td id="LC483" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L484" class="blob-num js-line-number" data-line-number="484"></td>
        <td id="LC484" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L485" class="blob-num js-line-number" data-line-number="485"></td>
        <td id="LC485" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L486" class="blob-num js-line-number" data-line-number="486"></td>
        <td id="LC486" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">struct</span> cfq_queue *<span class="pl-en">cic_to_cfqq</span>(<span class="pl-k">struct</span> cfq_io_cq *cic, <span class="pl-k">bool</span> is_sync)</td>
      </tr>
      <tr>
        <td id="L487" class="blob-num js-line-number" data-line-number="487"></td>
        <td id="LC487" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L488" class="blob-num js-line-number" data-line-number="488"></td>
        <td id="LC488" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cic-&gt;cfqq[is_sync];</td>
      </tr>
      <tr>
        <td id="L489" class="blob-num js-line-number" data-line-number="489"></td>
        <td id="LC489" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L490" class="blob-num js-line-number" data-line-number="490"></td>
        <td id="LC490" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L491" class="blob-num js-line-number" data-line-number="491"></td>
        <td id="LC491" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">cic_set_cfqq</span>(<span class="pl-k">struct</span> cfq_io_cq *cic, <span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L492" class="blob-num js-line-number" data-line-number="492"></td>
        <td id="LC492" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">bool</span> is_sync)</td>
      </tr>
      <tr>
        <td id="L493" class="blob-num js-line-number" data-line-number="493"></td>
        <td id="LC493" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L494" class="blob-num js-line-number" data-line-number="494"></td>
        <td id="LC494" class="blob-code blob-code-inner js-file-line">	cic-&gt;cfqq[is_sync] = cfqq;</td>
      </tr>
      <tr>
        <td id="L495" class="blob-num js-line-number" data-line-number="495"></td>
        <td id="LC495" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L496" class="blob-num js-line-number" data-line-number="496"></td>
        <td id="LC496" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L497" class="blob-num js-line-number" data-line-number="497"></td>
        <td id="LC497" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">struct</span> cfq_data *<span class="pl-en">cic_to_cfqd</span>(<span class="pl-k">struct</span> cfq_io_cq *cic)</td>
      </tr>
      <tr>
        <td id="L498" class="blob-num js-line-number" data-line-number="498"></td>
        <td id="LC498" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L499" class="blob-num js-line-number" data-line-number="499"></td>
        <td id="LC499" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cic-&gt;icq.<span class="pl-smi">q</span>-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L500" class="blob-num js-line-number" data-line-number="500"></td>
        <td id="LC500" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L501" class="blob-num js-line-number" data-line-number="501"></td>
        <td id="LC501" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L502" class="blob-num js-line-number" data-line-number="502"></td>
        <td id="LC502" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L503" class="blob-num js-line-number" data-line-number="503"></td>
        <td id="LC503" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * We regard a request as SYNC, if it&#39;s either a read or has the SYNC bit</span></td>
      </tr>
      <tr>
        <td id="L504" class="blob-num js-line-number" data-line-number="504"></td>
        <td id="LC504" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * set (in which case it could also be direct WRITE).</span></td>
      </tr>
      <tr>
        <td id="L505" class="blob-num js-line-number" data-line-number="505"></td>
        <td id="LC505" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L506" class="blob-num js-line-number" data-line-number="506"></td>
        <td id="LC506" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">cfq_bio_sync</span>(<span class="pl-k">struct</span> bio *bio)</td>
      </tr>
      <tr>
        <td id="L507" class="blob-num js-line-number" data-line-number="507"></td>
        <td id="LC507" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L508" class="blob-num js-line-number" data-line-number="508"></td>
        <td id="LC508" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">bio_data_dir</span>(bio) == READ || (bio-&gt;bi_rw &amp; REQ_SYNC);</td>
      </tr>
      <tr>
        <td id="L509" class="blob-num js-line-number" data-line-number="509"></td>
        <td id="LC509" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L510" class="blob-num js-line-number" data-line-number="510"></td>
        <td id="LC510" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L511" class="blob-num js-line-number" data-line-number="511"></td>
        <td id="LC511" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L512" class="blob-num js-line-number" data-line-number="512"></td>
        <td id="LC512" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * scheduler run of queue, if there are requests pending and no one in the</span></td>
      </tr>
      <tr>
        <td id="L513" class="blob-num js-line-number" data-line-number="513"></td>
        <td id="LC513" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * driver that will restart queueing</span></td>
      </tr>
      <tr>
        <td id="L514" class="blob-num js-line-number" data-line-number="514"></td>
        <td id="LC514" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L515" class="blob-num js-line-number" data-line-number="515"></td>
        <td id="LC515" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">cfq_schedule_dispatch</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L516" class="blob-num js-line-number" data-line-number="516"></td>
        <td id="LC516" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L517" class="blob-num js-line-number" data-line-number="517"></td>
        <td id="LC517" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;busy_queues) {</td>
      </tr>
      <tr>
        <td id="L518" class="blob-num js-line-number" data-line-number="518"></td>
        <td id="LC518" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_log</span>(cfqd, <span class="pl-s"><span class="pl-pds">&quot;</span>schedule dispatch<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L519" class="blob-num js-line-number" data-line-number="519"></td>
        <td id="LC519" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">kblockd_schedule_work</span>(cfqd-&gt;queue, &amp;cfqd-&gt;unplug_work);</td>
      </tr>
      <tr>
        <td id="L520" class="blob-num js-line-number" data-line-number="520"></td>
        <td id="LC520" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L521" class="blob-num js-line-number" data-line-number="521"></td>
        <td id="LC521" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L522" class="blob-num js-line-number" data-line-number="522"></td>
        <td id="LC522" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L523" class="blob-num js-line-number" data-line-number="523"></td>
        <td id="LC523" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L524" class="blob-num js-line-number" data-line-number="524"></td>
        <td id="LC524" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Scale schedule slice based on io priority. Use the sync time slice only</span></td>
      </tr>
      <tr>
        <td id="L525" class="blob-num js-line-number" data-line-number="525"></td>
        <td id="LC525" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * if a queue is marked sync and has sync io queued. A sync queue with async</span></td>
      </tr>
      <tr>
        <td id="L526" class="blob-num js-line-number" data-line-number="526"></td>
        <td id="LC526" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * io only, should not get full sync slice length.</span></td>
      </tr>
      <tr>
        <td id="L527" class="blob-num js-line-number" data-line-number="527"></td>
        <td id="LC527" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L528" class="blob-num js-line-number" data-line-number="528"></td>
        <td id="LC528" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">int</span> <span class="pl-en">cfq_prio_slice</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">bool</span> sync,</td>
      </tr>
      <tr>
        <td id="L529" class="blob-num js-line-number" data-line-number="529"></td>
        <td id="LC529" class="blob-code blob-code-inner js-file-line">				 <span class="pl-k">unsigned</span> <span class="pl-k">short</span> prio)</td>
      </tr>
      <tr>
        <td id="L530" class="blob-num js-line-number" data-line-number="530"></td>
        <td id="LC530" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L531" class="blob-num js-line-number" data-line-number="531"></td>
        <td id="LC531" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">const</span> <span class="pl-k">int</span> base_slice = cfqd-&gt;cfq_slice[<span class="pl-c1">sync</span>];</td>
      </tr>
      <tr>
        <td id="L532" class="blob-num js-line-number" data-line-number="532"></td>
        <td id="LC532" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L533" class="blob-num js-line-number" data-line-number="533"></td>
        <td id="LC533" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">WARN_ON</span>(prio &gt;= IOPRIO_BE_NR);</td>
      </tr>
      <tr>
        <td id="L534" class="blob-num js-line-number" data-line-number="534"></td>
        <td id="LC534" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L535" class="blob-num js-line-number" data-line-number="535"></td>
        <td id="LC535" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> base_slice + (base_slice/CFQ_SLICE_SCALE * (<span class="pl-c1">4</span> - prio));</td>
      </tr>
      <tr>
        <td id="L536" class="blob-num js-line-number" data-line-number="536"></td>
        <td id="LC536" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L537" class="blob-num js-line-number" data-line-number="537"></td>
        <td id="LC537" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L538" class="blob-num js-line-number" data-line-number="538"></td>
        <td id="LC538" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">int</span></td>
      </tr>
      <tr>
        <td id="L539" class="blob-num js-line-number" data-line-number="539"></td>
        <td id="LC539" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_prio_to_slice</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L540" class="blob-num js-line-number" data-line-number="540"></td>
        <td id="LC540" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L541" class="blob-num js-line-number" data-line-number="541"></td>
        <td id="LC541" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">cfq_prio_slice</span>(cfqd, <span class="pl-c1">cfq_cfqq_sync</span>(cfqq), cfqq-&gt;ioprio);</td>
      </tr>
      <tr>
        <td id="L542" class="blob-num js-line-number" data-line-number="542"></td>
        <td id="LC542" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L543" class="blob-num js-line-number" data-line-number="543"></td>
        <td id="LC543" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L544" class="blob-num js-line-number" data-line-number="544"></td>
        <td id="LC544" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> u64 <span class="pl-en">cfq_scale_slice</span>(<span class="pl-k">unsigned</span> <span class="pl-k">long</span> delta, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L545" class="blob-num js-line-number" data-line-number="545"></td>
        <td id="LC545" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L546" class="blob-num js-line-number" data-line-number="546"></td>
        <td id="LC546" class="blob-code blob-code-inner js-file-line">	u64 d = delta &lt;&lt; CFQ_SERVICE_SHIFT;</td>
      </tr>
      <tr>
        <td id="L547" class="blob-num js-line-number" data-line-number="547"></td>
        <td id="LC547" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L548" class="blob-num js-line-number" data-line-number="548"></td>
        <td id="LC548" class="blob-code blob-code-inner js-file-line">	d = d * BLKIO_WEIGHT_DEFAULT;</td>
      </tr>
      <tr>
        <td id="L549" class="blob-num js-line-number" data-line-number="549"></td>
        <td id="LC549" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">do_div</span>(d, cfqg-&gt;weight);</td>
      </tr>
      <tr>
        <td id="L550" class="blob-num js-line-number" data-line-number="550"></td>
        <td id="LC550" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> d;</td>
      </tr>
      <tr>
        <td id="L551" class="blob-num js-line-number" data-line-number="551"></td>
        <td id="LC551" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L552" class="blob-num js-line-number" data-line-number="552"></td>
        <td id="LC552" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L553" class="blob-num js-line-number" data-line-number="553"></td>
        <td id="LC553" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> u64 <span class="pl-en">max_vdisktime</span>(u64 min_vdisktime, u64 vdisktime)</td>
      </tr>
      <tr>
        <td id="L554" class="blob-num js-line-number" data-line-number="554"></td>
        <td id="LC554" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L555" class="blob-num js-line-number" data-line-number="555"></td>
        <td id="LC555" class="blob-code blob-code-inner js-file-line">	s64 delta = (s64)(vdisktime - min_vdisktime);</td>
      </tr>
      <tr>
        <td id="L556" class="blob-num js-line-number" data-line-number="556"></td>
        <td id="LC556" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (delta &gt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L557" class="blob-num js-line-number" data-line-number="557"></td>
        <td id="LC557" class="blob-code blob-code-inner js-file-line">		min_vdisktime = vdisktime;</td>
      </tr>
      <tr>
        <td id="L558" class="blob-num js-line-number" data-line-number="558"></td>
        <td id="LC558" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L559" class="blob-num js-line-number" data-line-number="559"></td>
        <td id="LC559" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> min_vdisktime;</td>
      </tr>
      <tr>
        <td id="L560" class="blob-num js-line-number" data-line-number="560"></td>
        <td id="LC560" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L561" class="blob-num js-line-number" data-line-number="561"></td>
        <td id="LC561" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L562" class="blob-num js-line-number" data-line-number="562"></td>
        <td id="LC562" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> u64 <span class="pl-en">min_vdisktime</span>(u64 min_vdisktime, u64 vdisktime)</td>
      </tr>
      <tr>
        <td id="L563" class="blob-num js-line-number" data-line-number="563"></td>
        <td id="LC563" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L564" class="blob-num js-line-number" data-line-number="564"></td>
        <td id="LC564" class="blob-code blob-code-inner js-file-line">	s64 delta = (s64)(vdisktime - min_vdisktime);</td>
      </tr>
      <tr>
        <td id="L565" class="blob-num js-line-number" data-line-number="565"></td>
        <td id="LC565" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (delta &lt; <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L566" class="blob-num js-line-number" data-line-number="566"></td>
        <td id="LC566" class="blob-code blob-code-inner js-file-line">		min_vdisktime = vdisktime;</td>
      </tr>
      <tr>
        <td id="L567" class="blob-num js-line-number" data-line-number="567"></td>
        <td id="LC567" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L568" class="blob-num js-line-number" data-line-number="568"></td>
        <td id="LC568" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> min_vdisktime;</td>
      </tr>
      <tr>
        <td id="L569" class="blob-num js-line-number" data-line-number="569"></td>
        <td id="LC569" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L570" class="blob-num js-line-number" data-line-number="570"></td>
        <td id="LC570" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L571" class="blob-num js-line-number" data-line-number="571"></td>
        <td id="LC571" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">update_min_vdisktime</span>(<span class="pl-k">struct</span> cfq_rb_root *st)</td>
      </tr>
      <tr>
        <td id="L572" class="blob-num js-line-number" data-line-number="572"></td>
        <td id="LC572" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L573" class="blob-num js-line-number" data-line-number="573"></td>
        <td id="LC573" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg;</td>
      </tr>
      <tr>
        <td id="L574" class="blob-num js-line-number" data-line-number="574"></td>
        <td id="LC574" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L575" class="blob-num js-line-number" data-line-number="575"></td>
        <td id="LC575" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (st-&gt;left) {</td>
      </tr>
      <tr>
        <td id="L576" class="blob-num js-line-number" data-line-number="576"></td>
        <td id="LC576" class="blob-code blob-code-inner js-file-line">		cfqg = <span class="pl-c1">rb_entry_cfqg</span>(st-&gt;left);</td>
      </tr>
      <tr>
        <td id="L577" class="blob-num js-line-number" data-line-number="577"></td>
        <td id="LC577" class="blob-code blob-code-inner js-file-line">		st-&gt;min_vdisktime = <span class="pl-c1">max_vdisktime</span>(st-&gt;min_vdisktime,</td>
      </tr>
      <tr>
        <td id="L578" class="blob-num js-line-number" data-line-number="578"></td>
        <td id="LC578" class="blob-code blob-code-inner js-file-line">						  cfqg-&gt;vdisktime);</td>
      </tr>
      <tr>
        <td id="L579" class="blob-num js-line-number" data-line-number="579"></td>
        <td id="LC579" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L580" class="blob-num js-line-number" data-line-number="580"></td>
        <td id="LC580" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L581" class="blob-num js-line-number" data-line-number="581"></td>
        <td id="LC581" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L582" class="blob-num js-line-number" data-line-number="582"></td>
        <td id="LC582" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L583" class="blob-num js-line-number" data-line-number="583"></td>
        <td id="LC583" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * get averaged number of queues of RT/BE priority.</span></td>
      </tr>
      <tr>
        <td id="L584" class="blob-num js-line-number" data-line-number="584"></td>
        <td id="LC584" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * average is updated, with a formula that gives more weight to higher numbers,</span></td>
      </tr>
      <tr>
        <td id="L585" class="blob-num js-line-number" data-line-number="585"></td>
        <td id="LC585" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * to quickly follows sudden increases and decrease slowly</span></td>
      </tr>
      <tr>
        <td id="L586" class="blob-num js-line-number" data-line-number="586"></td>
        <td id="LC586" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L587" class="blob-num js-line-number" data-line-number="587"></td>
        <td id="LC587" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L588" class="blob-num js-line-number" data-line-number="588"></td>
        <td id="LC588" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">unsigned</span> <span class="pl-en">cfq_group_get_avg_queues</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L589" class="blob-num js-line-number" data-line-number="589"></td>
        <td id="LC589" class="blob-code blob-code-inner js-file-line">					<span class="pl-k">struct</span> cfq_group *cfqg, <span class="pl-k">bool</span> rt)</td>
      </tr>
      <tr>
        <td id="L590" class="blob-num js-line-number" data-line-number="590"></td>
        <td id="LC590" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L591" class="blob-num js-line-number" data-line-number="591"></td>
        <td id="LC591" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> min_q, max_q;</td>
      </tr>
      <tr>
        <td id="L592" class="blob-num js-line-number" data-line-number="592"></td>
        <td id="LC592" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> mult  = cfq_hist_divisor - <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L593" class="blob-num js-line-number" data-line-number="593"></td>
        <td id="LC593" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-c1">round</span> = cfq_hist_divisor / <span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="L594" class="blob-num js-line-number" data-line-number="594"></td>
        <td id="LC594" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> busy = <span class="pl-c1">cfq_group_busy_queues_wl</span>(rt, cfqd, cfqg);</td>
      </tr>
      <tr>
        <td id="L595" class="blob-num js-line-number" data-line-number="595"></td>
        <td id="LC595" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L596" class="blob-num js-line-number" data-line-number="596"></td>
        <td id="LC596" class="blob-code blob-code-inner js-file-line">	min_q = <span class="pl-c1">min</span>(cfqg-&gt;busy_queues_avg[rt], busy);</td>
      </tr>
      <tr>
        <td id="L597" class="blob-num js-line-number" data-line-number="597"></td>
        <td id="LC597" class="blob-code blob-code-inner js-file-line">	max_q = <span class="pl-c1">max</span>(cfqg-&gt;busy_queues_avg[rt], busy);</td>
      </tr>
      <tr>
        <td id="L598" class="blob-num js-line-number" data-line-number="598"></td>
        <td id="LC598" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;busy_queues_avg[rt] = (mult * max_q + min_q + <span class="pl-c1">round</span>) /</td>
      </tr>
      <tr>
        <td id="L599" class="blob-num js-line-number" data-line-number="599"></td>
        <td id="LC599" class="blob-code blob-code-inner js-file-line">		cfq_hist_divisor;</td>
      </tr>
      <tr>
        <td id="L600" class="blob-num js-line-number" data-line-number="600"></td>
        <td id="LC600" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqg-&gt;busy_queues_avg[rt];</td>
      </tr>
      <tr>
        <td id="L601" class="blob-num js-line-number" data-line-number="601"></td>
        <td id="LC601" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L602" class="blob-num js-line-number" data-line-number="602"></td>
        <td id="LC602" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L603" class="blob-num js-line-number" data-line-number="603"></td>
        <td id="LC603" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">unsigned</span></td>
      </tr>
      <tr>
        <td id="L604" class="blob-num js-line-number" data-line-number="604"></td>
        <td id="LC604" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_group_slice</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L605" class="blob-num js-line-number" data-line-number="605"></td>
        <td id="LC605" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L606" class="blob-num js-line-number" data-line-number="606"></td>
        <td id="LC606" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *st = &amp;cfqd-&gt;grp_service_tree;</td>
      </tr>
      <tr>
        <td id="L607" class="blob-num js-line-number" data-line-number="607"></td>
        <td id="LC607" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L608" class="blob-num js-line-number" data-line-number="608"></td>
        <td id="LC608" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqd-&gt;cfq_target_latency * cfqg-&gt;weight / st-&gt;total_weight;</td>
      </tr>
      <tr>
        <td id="L609" class="blob-num js-line-number" data-line-number="609"></td>
        <td id="LC609" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L610" class="blob-num js-line-number" data-line-number="610"></td>
        <td id="LC610" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L611" class="blob-num js-line-number" data-line-number="611"></td>
        <td id="LC611" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">unsigned</span></td>
      </tr>
      <tr>
        <td id="L612" class="blob-num js-line-number" data-line-number="612"></td>
        <td id="LC612" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_scaled_cfqq_slice</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L613" class="blob-num js-line-number" data-line-number="613"></td>
        <td id="LC613" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L614" class="blob-num js-line-number" data-line-number="614"></td>
        <td id="LC614" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> slice = <span class="pl-c1">cfq_prio_to_slice</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L615" class="blob-num js-line-number" data-line-number="615"></td>
        <td id="LC615" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;cfq_latency) {</td>
      </tr>
      <tr>
        <td id="L616" class="blob-num js-line-number" data-line-number="616"></td>
        <td id="LC616" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L617" class="blob-num js-line-number" data-line-number="617"></td>
        <td id="LC617" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * interested queues (we consider only the ones with the same</span></td>
      </tr>
      <tr>
        <td id="L618" class="blob-num js-line-number" data-line-number="618"></td>
        <td id="LC618" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * priority class in the cfq group)</span></td>
      </tr>
      <tr>
        <td id="L619" class="blob-num js-line-number" data-line-number="619"></td>
        <td id="LC619" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L620" class="blob-num js-line-number" data-line-number="620"></td>
        <td id="LC620" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> iq = <span class="pl-c1">cfq_group_get_avg_queues</span>(cfqd, cfqq-&gt;cfqg,</td>
      </tr>
      <tr>
        <td id="L621" class="blob-num js-line-number" data-line-number="621"></td>
        <td id="LC621" class="blob-code blob-code-inner js-file-line">						<span class="pl-c1">cfq_class_rt</span>(cfqq));</td>
      </tr>
      <tr>
        <td id="L622" class="blob-num js-line-number" data-line-number="622"></td>
        <td id="LC622" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> sync_slice = cfqd-&gt;cfq_slice[<span class="pl-c1">1</span>];</td>
      </tr>
      <tr>
        <td id="L623" class="blob-num js-line-number" data-line-number="623"></td>
        <td id="LC623" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> expect_latency = sync_slice * iq;</td>
      </tr>
      <tr>
        <td id="L624" class="blob-num js-line-number" data-line-number="624"></td>
        <td id="LC624" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> group_slice = <span class="pl-c1">cfq_group_slice</span>(cfqd, cfqq-&gt;cfqg);</td>
      </tr>
      <tr>
        <td id="L625" class="blob-num js-line-number" data-line-number="625"></td>
        <td id="LC625" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L626" class="blob-num js-line-number" data-line-number="626"></td>
        <td id="LC626" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (expect_latency &gt; group_slice) {</td>
      </tr>
      <tr>
        <td id="L627" class="blob-num js-line-number" data-line-number="627"></td>
        <td id="LC627" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">unsigned</span> base_low_slice = <span class="pl-c1">2</span> * cfqd-&gt;cfq_slice_idle;</td>
      </tr>
      <tr>
        <td id="L628" class="blob-num js-line-number" data-line-number="628"></td>
        <td id="LC628" class="blob-code blob-code-inner js-file-line">			<span class="pl-c">/* scale low_slice according to IO priority</span></td>
      </tr>
      <tr>
        <td id="L629" class="blob-num js-line-number" data-line-number="629"></td>
        <td id="LC629" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			 * and sync vs async */</span></td>
      </tr>
      <tr>
        <td id="L630" class="blob-num js-line-number" data-line-number="630"></td>
        <td id="LC630" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">unsigned</span> low_slice =</td>
      </tr>
      <tr>
        <td id="L631" class="blob-num js-line-number" data-line-number="631"></td>
        <td id="LC631" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">min</span>(slice, base_low_slice * slice / sync_slice);</td>
      </tr>
      <tr>
        <td id="L632" class="blob-num js-line-number" data-line-number="632"></td>
        <td id="LC632" class="blob-code blob-code-inner js-file-line">			<span class="pl-c">/* the adapted slice value is scaled to fit all iqs</span></td>
      </tr>
      <tr>
        <td id="L633" class="blob-num js-line-number" data-line-number="633"></td>
        <td id="LC633" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			 * into the target latency */</span></td>
      </tr>
      <tr>
        <td id="L634" class="blob-num js-line-number" data-line-number="634"></td>
        <td id="LC634" class="blob-code blob-code-inner js-file-line">			slice = <span class="pl-c1">max</span>(slice * group_slice / expect_latency,</td>
      </tr>
      <tr>
        <td id="L635" class="blob-num js-line-number" data-line-number="635"></td>
        <td id="LC635" class="blob-code blob-code-inner js-file-line">				    low_slice);</td>
      </tr>
      <tr>
        <td id="L636" class="blob-num js-line-number" data-line-number="636"></td>
        <td id="LC636" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L637" class="blob-num js-line-number" data-line-number="637"></td>
        <td id="LC637" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L638" class="blob-num js-line-number" data-line-number="638"></td>
        <td id="LC638" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> slice;</td>
      </tr>
      <tr>
        <td id="L639" class="blob-num js-line-number" data-line-number="639"></td>
        <td id="LC639" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L640" class="blob-num js-line-number" data-line-number="640"></td>
        <td id="LC640" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L641" class="blob-num js-line-number" data-line-number="641"></td>
        <td id="LC641" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L642" class="blob-num js-line-number" data-line-number="642"></td>
        <td id="LC642" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_set_prio_slice</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L643" class="blob-num js-line-number" data-line-number="643"></td>
        <td id="LC643" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L644" class="blob-num js-line-number" data-line-number="644"></td>
        <td id="LC644" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> slice = <span class="pl-c1">cfq_scaled_cfqq_slice</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L645" class="blob-num js-line-number" data-line-number="645"></td>
        <td id="LC645" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L646" class="blob-num js-line-number" data-line-number="646"></td>
        <td id="LC646" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;slice_start = jiffies;</td>
      </tr>
      <tr>
        <td id="L647" class="blob-num js-line-number" data-line-number="647"></td>
        <td id="LC647" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;slice_end = jiffies + slice;</td>
      </tr>
      <tr>
        <td id="L648" class="blob-num js-line-number" data-line-number="648"></td>
        <td id="LC648" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;allocated_slice = slice;</td>
      </tr>
      <tr>
        <td id="L649" class="blob-num js-line-number" data-line-number="649"></td>
        <td id="LC649" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>set_slice=<span class="pl-c1">%lu</span><span class="pl-pds">&quot;</span></span>, cfqq-&gt;slice_end - jiffies);</td>
      </tr>
      <tr>
        <td id="L650" class="blob-num js-line-number" data-line-number="650"></td>
        <td id="LC650" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L651" class="blob-num js-line-number" data-line-number="651"></td>
        <td id="LC651" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L652" class="blob-num js-line-number" data-line-number="652"></td>
        <td id="LC652" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L653" class="blob-num js-line-number" data-line-number="653"></td>
        <td id="LC653" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * We need to wrap this check in cfq_cfqq_slice_new(), since -&gt;slice_end</span></td>
      </tr>
      <tr>
        <td id="L654" class="blob-num js-line-number" data-line-number="654"></td>
        <td id="LC654" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * isn&#39;t valid until the first request from the dispatch is activated</span></td>
      </tr>
      <tr>
        <td id="L655" class="blob-num js-line-number" data-line-number="655"></td>
        <td id="LC655" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * and the slice time set.</span></td>
      </tr>
      <tr>
        <td id="L656" class="blob-num js-line-number" data-line-number="656"></td>
        <td id="LC656" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L657" class="blob-num js-line-number" data-line-number="657"></td>
        <td id="LC657" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">cfq_slice_used</span>(<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L658" class="blob-num js-line-number" data-line-number="658"></td>
        <td id="LC658" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L659" class="blob-num js-line-number" data-line-number="659"></td>
        <td id="LC659" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_slice_new</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L660" class="blob-num js-line-number" data-line-number="660"></td>
        <td id="LC660" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L661" class="blob-num js-line-number" data-line-number="661"></td>
        <td id="LC661" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">time_before</span>(jiffies, cfqq-&gt;slice_end))</td>
      </tr>
      <tr>
        <td id="L662" class="blob-num js-line-number" data-line-number="662"></td>
        <td id="LC662" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L663" class="blob-num js-line-number" data-line-number="663"></td>
        <td id="LC663" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L664" class="blob-num js-line-number" data-line-number="664"></td>
        <td id="LC664" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L665" class="blob-num js-line-number" data-line-number="665"></td>
        <td id="LC665" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L666" class="blob-num js-line-number" data-line-number="666"></td>
        <td id="LC666" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L667" class="blob-num js-line-number" data-line-number="667"></td>
        <td id="LC667" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L668" class="blob-num js-line-number" data-line-number="668"></td>
        <td id="LC668" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Lifted from AS - choose which of rq1 and rq2 that is best served now.</span></td>
      </tr>
      <tr>
        <td id="L669" class="blob-num js-line-number" data-line-number="669"></td>
        <td id="LC669" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * We choose the request that is closest to the head right now. Distance</span></td>
      </tr>
      <tr>
        <td id="L670" class="blob-num js-line-number" data-line-number="670"></td>
        <td id="LC670" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * behind the head is penalized and only allowed to a certain extent.</span></td>
      </tr>
      <tr>
        <td id="L671" class="blob-num js-line-number" data-line-number="671"></td>
        <td id="LC671" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L672" class="blob-num js-line-number" data-line-number="672"></td>
        <td id="LC672" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> request *</td>
      </tr>
      <tr>
        <td id="L673" class="blob-num js-line-number" data-line-number="673"></td>
        <td id="LC673" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_choose_req</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> request *rq1, <span class="pl-k">struct</span> request *rq2, <span class="pl-c1">sector_t</span> last)</td>
      </tr>
      <tr>
        <td id="L674" class="blob-num js-line-number" data-line-number="674"></td>
        <td id="LC674" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L675" class="blob-num js-line-number" data-line-number="675"></td>
        <td id="LC675" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sector_t</span> s1, s2, d1 = <span class="pl-c1">0</span>, d2 = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L676" class="blob-num js-line-number" data-line-number="676"></td>
        <td id="LC676" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> back_max;</td>
      </tr>
      <tr>
        <td id="L677" class="blob-num js-line-number" data-line-number="677"></td>
        <td id="LC677" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_RQ1_WRAP</span>	0x01 <span class="pl-c">/* request 1 wraps */</span></td>
      </tr>
      <tr>
        <td id="L678" class="blob-num js-line-number" data-line-number="678"></td>
        <td id="LC678" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_RQ2_WRAP</span>	0x02 <span class="pl-c">/* request 2 wraps */</span></td>
      </tr>
      <tr>
        <td id="L679" class="blob-num js-line-number" data-line-number="679"></td>
        <td id="LC679" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> wrap = <span class="pl-c1">0</span>; <span class="pl-c">/* bit mask: requests behind the disk head? */</span></td>
      </tr>
      <tr>
        <td id="L680" class="blob-num js-line-number" data-line-number="680"></td>
        <td id="LC680" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L681" class="blob-num js-line-number" data-line-number="681"></td>
        <td id="LC681" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (rq1 == <span class="pl-c1">NULL</span> || rq1 == rq2)</td>
      </tr>
      <tr>
        <td id="L682" class="blob-num js-line-number" data-line-number="682"></td>
        <td id="LC682" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> rq2;</td>
      </tr>
      <tr>
        <td id="L683" class="blob-num js-line-number" data-line-number="683"></td>
        <td id="LC683" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (rq2 == <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L684" class="blob-num js-line-number" data-line-number="684"></td>
        <td id="LC684" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> rq1;</td>
      </tr>
      <tr>
        <td id="L685" class="blob-num js-line-number" data-line-number="685"></td>
        <td id="LC685" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L686" class="blob-num js-line-number" data-line-number="686"></td>
        <td id="LC686" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">rq_is_sync</span>(rq1) != <span class="pl-c1">rq_is_sync</span>(rq2))</td>
      </tr>
      <tr>
        <td id="L687" class="blob-num js-line-number" data-line-number="687"></td>
        <td id="LC687" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">rq_is_sync</span>(rq1) ? rq1 : rq2;</td>
      </tr>
      <tr>
        <td id="L688" class="blob-num js-line-number" data-line-number="688"></td>
        <td id="LC688" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L689" class="blob-num js-line-number" data-line-number="689"></td>
        <td id="LC689" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> ((rq1-&gt;cmd_flags ^ rq2-&gt;cmd_flags) &amp; REQ_PRIO)</td>
      </tr>
      <tr>
        <td id="L690" class="blob-num js-line-number" data-line-number="690"></td>
        <td id="LC690" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> rq1-&gt;cmd_flags &amp; REQ_PRIO ? rq1 : rq2;</td>
      </tr>
      <tr>
        <td id="L691" class="blob-num js-line-number" data-line-number="691"></td>
        <td id="LC691" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L692" class="blob-num js-line-number" data-line-number="692"></td>
        <td id="LC692" class="blob-code blob-code-inner js-file-line">	s1 = <span class="pl-c1">blk_rq_pos</span>(rq1);</td>
      </tr>
      <tr>
        <td id="L693" class="blob-num js-line-number" data-line-number="693"></td>
        <td id="LC693" class="blob-code blob-code-inner js-file-line">	s2 = <span class="pl-c1">blk_rq_pos</span>(rq2);</td>
      </tr>
      <tr>
        <td id="L694" class="blob-num js-line-number" data-line-number="694"></td>
        <td id="LC694" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L695" class="blob-num js-line-number" data-line-number="695"></td>
        <td id="LC695" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L696" class="blob-num js-line-number" data-line-number="696"></td>
        <td id="LC696" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * by definition, 1KiB is 2 sectors</span></td>
      </tr>
      <tr>
        <td id="L697" class="blob-num js-line-number" data-line-number="697"></td>
        <td id="LC697" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L698" class="blob-num js-line-number" data-line-number="698"></td>
        <td id="LC698" class="blob-code blob-code-inner js-file-line">	back_max = cfqd-&gt;cfq_back_max * <span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="L699" class="blob-num js-line-number" data-line-number="699"></td>
        <td id="LC699" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L700" class="blob-num js-line-number" data-line-number="700"></td>
        <td id="LC700" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L701" class="blob-num js-line-number" data-line-number="701"></td>
        <td id="LC701" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Strict one way elevator _except_ in the case where we allow</span></td>
      </tr>
      <tr>
        <td id="L702" class="blob-num js-line-number" data-line-number="702"></td>
        <td id="LC702" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * short backward seeks which are biased as twice the cost of a</span></td>
      </tr>
      <tr>
        <td id="L703" class="blob-num js-line-number" data-line-number="703"></td>
        <td id="LC703" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * similar forward seek.</span></td>
      </tr>
      <tr>
        <td id="L704" class="blob-num js-line-number" data-line-number="704"></td>
        <td id="LC704" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L705" class="blob-num js-line-number" data-line-number="705"></td>
        <td id="LC705" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (s1 &gt;= last)</td>
      </tr>
      <tr>
        <td id="L706" class="blob-num js-line-number" data-line-number="706"></td>
        <td id="LC706" class="blob-code blob-code-inner js-file-line">		d1 = s1 - last;</td>
      </tr>
      <tr>
        <td id="L707" class="blob-num js-line-number" data-line-number="707"></td>
        <td id="LC707" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span> <span class="pl-k">if</span> (s1 + back_max &gt;= last)</td>
      </tr>
      <tr>
        <td id="L708" class="blob-num js-line-number" data-line-number="708"></td>
        <td id="LC708" class="blob-code blob-code-inner js-file-line">		d1 = (last - s1) * cfqd-&gt;cfq_back_penalty;</td>
      </tr>
      <tr>
        <td id="L709" class="blob-num js-line-number" data-line-number="709"></td>
        <td id="LC709" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L710" class="blob-num js-line-number" data-line-number="710"></td>
        <td id="LC710" class="blob-code blob-code-inner js-file-line">		wrap |= CFQ_RQ1_WRAP;</td>
      </tr>
      <tr>
        <td id="L711" class="blob-num js-line-number" data-line-number="711"></td>
        <td id="LC711" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L712" class="blob-num js-line-number" data-line-number="712"></td>
        <td id="LC712" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (s2 &gt;= last)</td>
      </tr>
      <tr>
        <td id="L713" class="blob-num js-line-number" data-line-number="713"></td>
        <td id="LC713" class="blob-code blob-code-inner js-file-line">		d2 = s2 - last;</td>
      </tr>
      <tr>
        <td id="L714" class="blob-num js-line-number" data-line-number="714"></td>
        <td id="LC714" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span> <span class="pl-k">if</span> (s2 + back_max &gt;= last)</td>
      </tr>
      <tr>
        <td id="L715" class="blob-num js-line-number" data-line-number="715"></td>
        <td id="LC715" class="blob-code blob-code-inner js-file-line">		d2 = (last - s2) * cfqd-&gt;cfq_back_penalty;</td>
      </tr>
      <tr>
        <td id="L716" class="blob-num js-line-number" data-line-number="716"></td>
        <td id="LC716" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L717" class="blob-num js-line-number" data-line-number="717"></td>
        <td id="LC717" class="blob-code blob-code-inner js-file-line">		wrap |= CFQ_RQ2_WRAP;</td>
      </tr>
      <tr>
        <td id="L718" class="blob-num js-line-number" data-line-number="718"></td>
        <td id="LC718" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L719" class="blob-num js-line-number" data-line-number="719"></td>
        <td id="LC719" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Found required data */</span></td>
      </tr>
      <tr>
        <td id="L720" class="blob-num js-line-number" data-line-number="720"></td>
        <td id="LC720" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L721" class="blob-num js-line-number" data-line-number="721"></td>
        <td id="LC721" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L722" class="blob-num js-line-number" data-line-number="722"></td>
        <td id="LC722" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * By doing switch() on the bit mask &quot;wrap&quot; we avoid having to</span></td>
      </tr>
      <tr>
        <td id="L723" class="blob-num js-line-number" data-line-number="723"></td>
        <td id="LC723" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * check two variables for all permutations: --&gt; faster!</span></td>
      </tr>
      <tr>
        <td id="L724" class="blob-num js-line-number" data-line-number="724"></td>
        <td id="LC724" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L725" class="blob-num js-line-number" data-line-number="725"></td>
        <td id="LC725" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">switch</span> (wrap) {</td>
      </tr>
      <tr>
        <td id="L726" class="blob-num js-line-number" data-line-number="726"></td>
        <td id="LC726" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">case</span> <span class="pl-c1">0</span>: <span class="pl-c">/* common case for CFQ: rq1 and rq2 not wrapped */</span></td>
      </tr>
      <tr>
        <td id="L727" class="blob-num js-line-number" data-line-number="727"></td>
        <td id="LC727" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (d1 &lt; d2)</td>
      </tr>
      <tr>
        <td id="L728" class="blob-num js-line-number" data-line-number="728"></td>
        <td id="LC728" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span> rq1;</td>
      </tr>
      <tr>
        <td id="L729" class="blob-num js-line-number" data-line-number="729"></td>
        <td id="LC729" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span> <span class="pl-k">if</span> (d2 &lt; d1)</td>
      </tr>
      <tr>
        <td id="L730" class="blob-num js-line-number" data-line-number="730"></td>
        <td id="LC730" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span> rq2;</td>
      </tr>
      <tr>
        <td id="L731" class="blob-num js-line-number" data-line-number="731"></td>
        <td id="LC731" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L732" class="blob-num js-line-number" data-line-number="732"></td>
        <td id="LC732" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (s1 &gt;= s2)</td>
      </tr>
      <tr>
        <td id="L733" class="blob-num js-line-number" data-line-number="733"></td>
        <td id="LC733" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">return</span> rq1;</td>
      </tr>
      <tr>
        <td id="L734" class="blob-num js-line-number" data-line-number="734"></td>
        <td id="LC734" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L735" class="blob-num js-line-number" data-line-number="735"></td>
        <td id="LC735" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">return</span> rq2;</td>
      </tr>
      <tr>
        <td id="L736" class="blob-num js-line-number" data-line-number="736"></td>
        <td id="LC736" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L737" class="blob-num js-line-number" data-line-number="737"></td>
        <td id="LC737" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L738" class="blob-num js-line-number" data-line-number="738"></td>
        <td id="LC738" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">case</span> CFQ_RQ2_WRAP:</td>
      </tr>
      <tr>
        <td id="L739" class="blob-num js-line-number" data-line-number="739"></td>
        <td id="LC739" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> rq1;</td>
      </tr>
      <tr>
        <td id="L740" class="blob-num js-line-number" data-line-number="740"></td>
        <td id="LC740" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">case</span> CFQ_RQ1_WRAP:</td>
      </tr>
      <tr>
        <td id="L741" class="blob-num js-line-number" data-line-number="741"></td>
        <td id="LC741" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> rq2;</td>
      </tr>
      <tr>
        <td id="L742" class="blob-num js-line-number" data-line-number="742"></td>
        <td id="LC742" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">case</span> (CFQ_RQ1_WRAP|CFQ_RQ2_WRAP): <span class="pl-c">/* both rqs wrapped */</span></td>
      </tr>
      <tr>
        <td id="L743" class="blob-num js-line-number" data-line-number="743"></td>
        <td id="LC743" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="L744" class="blob-num js-line-number" data-line-number="744"></td>
        <td id="LC744" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L745" class="blob-num js-line-number" data-line-number="745"></td>
        <td id="LC745" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Since both rqs are wrapped,</span></td>
      </tr>
      <tr>
        <td id="L746" class="blob-num js-line-number" data-line-number="746"></td>
        <td id="LC746" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * start with the one that&#39;s further behind head</span></td>
      </tr>
      <tr>
        <td id="L747" class="blob-num js-line-number" data-line-number="747"></td>
        <td id="LC747" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * (--&gt; only *one* back seek required),</span></td>
      </tr>
      <tr>
        <td id="L748" class="blob-num js-line-number" data-line-number="748"></td>
        <td id="LC748" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * since back seek takes more time than forward.</span></td>
      </tr>
      <tr>
        <td id="L749" class="blob-num js-line-number" data-line-number="749"></td>
        <td id="LC749" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L750" class="blob-num js-line-number" data-line-number="750"></td>
        <td id="LC750" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (s1 &lt;= s2)</td>
      </tr>
      <tr>
        <td id="L751" class="blob-num js-line-number" data-line-number="751"></td>
        <td id="LC751" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span> rq1;</td>
      </tr>
      <tr>
        <td id="L752" class="blob-num js-line-number" data-line-number="752"></td>
        <td id="LC752" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L753" class="blob-num js-line-number" data-line-number="753"></td>
        <td id="LC753" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span> rq2;</td>
      </tr>
      <tr>
        <td id="L754" class="blob-num js-line-number" data-line-number="754"></td>
        <td id="LC754" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L755" class="blob-num js-line-number" data-line-number="755"></td>
        <td id="LC755" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L756" class="blob-num js-line-number" data-line-number="756"></td>
        <td id="LC756" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L757" class="blob-num js-line-number" data-line-number="757"></td>
        <td id="LC757" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L758" class="blob-num js-line-number" data-line-number="758"></td>
        <td id="LC758" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * The below is leftmost cache rbtree addon</span></td>
      </tr>
      <tr>
        <td id="L759" class="blob-num js-line-number" data-line-number="759"></td>
        <td id="LC759" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L760" class="blob-num js-line-number" data-line-number="760"></td>
        <td id="LC760" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *<span class="pl-en">cfq_rb_first</span>(<span class="pl-k">struct</span> cfq_rb_root *root)</td>
      </tr>
      <tr>
        <td id="L761" class="blob-num js-line-number" data-line-number="761"></td>
        <td id="LC761" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L762" class="blob-num js-line-number" data-line-number="762"></td>
        <td id="LC762" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Service tree is empty */</span></td>
      </tr>
      <tr>
        <td id="L763" class="blob-num js-line-number" data-line-number="763"></td>
        <td id="LC763" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!root-&gt;count)</td>
      </tr>
      <tr>
        <td id="L764" class="blob-num js-line-number" data-line-number="764"></td>
        <td id="LC764" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L765" class="blob-num js-line-number" data-line-number="765"></td>
        <td id="LC765" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L766" class="blob-num js-line-number" data-line-number="766"></td>
        <td id="LC766" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!root-&gt;left)</td>
      </tr>
      <tr>
        <td id="L767" class="blob-num js-line-number" data-line-number="767"></td>
        <td id="LC767" class="blob-code blob-code-inner js-file-line">		root-&gt;left = <span class="pl-c1">rb_first</span>(&amp;root-&gt;rb);</td>
      </tr>
      <tr>
        <td id="L768" class="blob-num js-line-number" data-line-number="768"></td>
        <td id="LC768" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L769" class="blob-num js-line-number" data-line-number="769"></td>
        <td id="LC769" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (root-&gt;left)</td>
      </tr>
      <tr>
        <td id="L770" class="blob-num js-line-number" data-line-number="770"></td>
        <td id="LC770" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">rb_entry</span>(root-&gt;left, <span class="pl-k">struct</span> cfq_queue, rb_node);</td>
      </tr>
      <tr>
        <td id="L771" class="blob-num js-line-number" data-line-number="771"></td>
        <td id="LC771" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L772" class="blob-num js-line-number" data-line-number="772"></td>
        <td id="LC772" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L773" class="blob-num js-line-number" data-line-number="773"></td>
        <td id="LC773" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L774" class="blob-num js-line-number" data-line-number="774"></td>
        <td id="LC774" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L775" class="blob-num js-line-number" data-line-number="775"></td>
        <td id="LC775" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_group *<span class="pl-en">cfq_rb_first_group</span>(<span class="pl-k">struct</span> cfq_rb_root *root)</td>
      </tr>
      <tr>
        <td id="L776" class="blob-num js-line-number" data-line-number="776"></td>
        <td id="LC776" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L777" class="blob-num js-line-number" data-line-number="777"></td>
        <td id="LC777" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!root-&gt;left)</td>
      </tr>
      <tr>
        <td id="L778" class="blob-num js-line-number" data-line-number="778"></td>
        <td id="LC778" class="blob-code blob-code-inner js-file-line">		root-&gt;left = <span class="pl-c1">rb_first</span>(&amp;root-&gt;rb);</td>
      </tr>
      <tr>
        <td id="L779" class="blob-num js-line-number" data-line-number="779"></td>
        <td id="LC779" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L780" class="blob-num js-line-number" data-line-number="780"></td>
        <td id="LC780" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (root-&gt;left)</td>
      </tr>
      <tr>
        <td id="L781" class="blob-num js-line-number" data-line-number="781"></td>
        <td id="LC781" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">rb_entry_cfqg</span>(root-&gt;left);</td>
      </tr>
      <tr>
        <td id="L782" class="blob-num js-line-number" data-line-number="782"></td>
        <td id="LC782" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L783" class="blob-num js-line-number" data-line-number="783"></td>
        <td id="LC783" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L784" class="blob-num js-line-number" data-line-number="784"></td>
        <td id="LC784" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L785" class="blob-num js-line-number" data-line-number="785"></td>
        <td id="LC785" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L786" class="blob-num js-line-number" data-line-number="786"></td>
        <td id="LC786" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">rb_erase_init</span>(<span class="pl-k">struct</span> rb_node *n, <span class="pl-k">struct</span> rb_root *root)</td>
      </tr>
      <tr>
        <td id="L787" class="blob-num js-line-number" data-line-number="787"></td>
        <td id="LC787" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L788" class="blob-num js-line-number" data-line-number="788"></td>
        <td id="LC788" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rb_erase</span>(n, root);</td>
      </tr>
      <tr>
        <td id="L789" class="blob-num js-line-number" data-line-number="789"></td>
        <td id="LC789" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">RB_CLEAR_NODE</span>(n);</td>
      </tr>
      <tr>
        <td id="L790" class="blob-num js-line-number" data-line-number="790"></td>
        <td id="LC790" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L791" class="blob-num js-line-number" data-line-number="791"></td>
        <td id="LC791" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L792" class="blob-num js-line-number" data-line-number="792"></td>
        <td id="LC792" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_rb_erase</span>(<span class="pl-k">struct</span> rb_node *n, <span class="pl-k">struct</span> cfq_rb_root *root)</td>
      </tr>
      <tr>
        <td id="L793" class="blob-num js-line-number" data-line-number="793"></td>
        <td id="LC793" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L794" class="blob-num js-line-number" data-line-number="794"></td>
        <td id="LC794" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (root-&gt;left == n)</td>
      </tr>
      <tr>
        <td id="L795" class="blob-num js-line-number" data-line-number="795"></td>
        <td id="LC795" class="blob-code blob-code-inner js-file-line">		root-&gt;left = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L796" class="blob-num js-line-number" data-line-number="796"></td>
        <td id="LC796" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rb_erase_init</span>(n, &amp;root-&gt;rb);</td>
      </tr>
      <tr>
        <td id="L797" class="blob-num js-line-number" data-line-number="797"></td>
        <td id="LC797" class="blob-code blob-code-inner js-file-line">	--root-&gt;count;</td>
      </tr>
      <tr>
        <td id="L798" class="blob-num js-line-number" data-line-number="798"></td>
        <td id="LC798" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L799" class="blob-num js-line-number" data-line-number="799"></td>
        <td id="LC799" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L800" class="blob-num js-line-number" data-line-number="800"></td>
        <td id="LC800" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L801" class="blob-num js-line-number" data-line-number="801"></td>
        <td id="LC801" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * would be nice to take fifo expire time into account as well</span></td>
      </tr>
      <tr>
        <td id="L802" class="blob-num js-line-number" data-line-number="802"></td>
        <td id="LC802" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L803" class="blob-num js-line-number" data-line-number="803"></td>
        <td id="LC803" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> request *</td>
      </tr>
      <tr>
        <td id="L804" class="blob-num js-line-number" data-line-number="804"></td>
        <td id="LC804" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_find_next_rq</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L805" class="blob-num js-line-number" data-line-number="805"></td>
        <td id="LC805" class="blob-code blob-code-inner js-file-line">		  <span class="pl-k">struct</span> request *last)</td>
      </tr>
      <tr>
        <td id="L806" class="blob-num js-line-number" data-line-number="806"></td>
        <td id="LC806" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L807" class="blob-num js-line-number" data-line-number="807"></td>
        <td id="LC807" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node *rbnext = <span class="pl-c1">rb_next</span>(&amp;last-&gt;rb_node);</td>
      </tr>
      <tr>
        <td id="L808" class="blob-num js-line-number" data-line-number="808"></td>
        <td id="LC808" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node *rbprev = <span class="pl-c1">rb_prev</span>(&amp;last-&gt;rb_node);</td>
      </tr>
      <tr>
        <td id="L809" class="blob-num js-line-number" data-line-number="809"></td>
        <td id="LC809" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request *next = <span class="pl-c1">NULL</span>, *prev = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L810" class="blob-num js-line-number" data-line-number="810"></td>
        <td id="LC810" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L811" class="blob-num js-line-number" data-line-number="811"></td>
        <td id="LC811" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(<span class="pl-c1">RB_EMPTY_NODE</span>(&amp;last-&gt;rb_node));</td>
      </tr>
      <tr>
        <td id="L812" class="blob-num js-line-number" data-line-number="812"></td>
        <td id="LC812" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L813" class="blob-num js-line-number" data-line-number="813"></td>
        <td id="LC813" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (rbprev)</td>
      </tr>
      <tr>
        <td id="L814" class="blob-num js-line-number" data-line-number="814"></td>
        <td id="LC814" class="blob-code blob-code-inner js-file-line">		prev = <span class="pl-c1">rb_entry_rq</span>(rbprev);</td>
      </tr>
      <tr>
        <td id="L815" class="blob-num js-line-number" data-line-number="815"></td>
        <td id="LC815" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L816" class="blob-num js-line-number" data-line-number="816"></td>
        <td id="LC816" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (rbnext)</td>
      </tr>
      <tr>
        <td id="L817" class="blob-num js-line-number" data-line-number="817"></td>
        <td id="LC817" class="blob-code blob-code-inner js-file-line">		next = <span class="pl-c1">rb_entry_rq</span>(rbnext);</td>
      </tr>
      <tr>
        <td id="L818" class="blob-num js-line-number" data-line-number="818"></td>
        <td id="LC818" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L819" class="blob-num js-line-number" data-line-number="819"></td>
        <td id="LC819" class="blob-code blob-code-inner js-file-line">		rbnext = <span class="pl-c1">rb_first</span>(&amp;cfqq-&gt;sort_list);</td>
      </tr>
      <tr>
        <td id="L820" class="blob-num js-line-number" data-line-number="820"></td>
        <td id="LC820" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (rbnext &amp;&amp; rbnext != &amp;last-&gt;rb_node)</td>
      </tr>
      <tr>
        <td id="L821" class="blob-num js-line-number" data-line-number="821"></td>
        <td id="LC821" class="blob-code blob-code-inner js-file-line">			next = <span class="pl-c1">rb_entry_rq</span>(rbnext);</td>
      </tr>
      <tr>
        <td id="L822" class="blob-num js-line-number" data-line-number="822"></td>
        <td id="LC822" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L823" class="blob-num js-line-number" data-line-number="823"></td>
        <td id="LC823" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L824" class="blob-num js-line-number" data-line-number="824"></td>
        <td id="LC824" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">cfq_choose_req</span>(cfqd, next, prev, <span class="pl-c1">blk_rq_pos</span>(last));</td>
      </tr>
      <tr>
        <td id="L825" class="blob-num js-line-number" data-line-number="825"></td>
        <td id="LC825" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L826" class="blob-num js-line-number" data-line-number="826"></td>
        <td id="LC826" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L827" class="blob-num js-line-number" data-line-number="827"></td>
        <td id="LC827" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">unsigned</span> <span class="pl-k">long</span> <span class="pl-en">cfq_slice_offset</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L828" class="blob-num js-line-number" data-line-number="828"></td>
        <td id="LC828" class="blob-code blob-code-inner js-file-line">				      <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L829" class="blob-num js-line-number" data-line-number="829"></td>
        <td id="LC829" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L830" class="blob-num js-line-number" data-line-number="830"></td>
        <td id="LC830" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L831" class="blob-num js-line-number" data-line-number="831"></td>
        <td id="LC831" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * just an approximation, should be ok.</span></td>
      </tr>
      <tr>
        <td id="L832" class="blob-num js-line-number" data-line-number="832"></td>
        <td id="LC832" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L833" class="blob-num js-line-number" data-line-number="833"></td>
        <td id="LC833" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> (cfqq-&gt;cfqg-&gt;nr_cfqq - <span class="pl-c1">1</span>) * (<span class="pl-c1">cfq_prio_slice</span>(cfqd, <span class="pl-c1">1</span>, <span class="pl-c1">0</span>) -</td>
      </tr>
      <tr>
        <td id="L834" class="blob-num js-line-number" data-line-number="834"></td>
        <td id="LC834" class="blob-code blob-code-inner js-file-line">		       <span class="pl-c1">cfq_prio_slice</span>(cfqd, <span class="pl-c1">cfq_cfqq_sync</span>(cfqq), cfqq-&gt;ioprio));</td>
      </tr>
      <tr>
        <td id="L835" class="blob-num js-line-number" data-line-number="835"></td>
        <td id="LC835" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L836" class="blob-num js-line-number" data-line-number="836"></td>
        <td id="LC836" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L837" class="blob-num js-line-number" data-line-number="837"></td>
        <td id="LC837" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> s64</td>
      </tr>
      <tr>
        <td id="L838" class="blob-num js-line-number" data-line-number="838"></td>
        <td id="LC838" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfqg_key</span>(<span class="pl-k">struct</span> cfq_rb_root *st, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L839" class="blob-num js-line-number" data-line-number="839"></td>
        <td id="LC839" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L840" class="blob-num js-line-number" data-line-number="840"></td>
        <td id="LC840" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqg-&gt;vdisktime - st-&gt;min_vdisktime;</td>
      </tr>
      <tr>
        <td id="L841" class="blob-num js-line-number" data-line-number="841"></td>
        <td id="LC841" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L842" class="blob-num js-line-number" data-line-number="842"></td>
        <td id="LC842" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L843" class="blob-num js-line-number" data-line-number="843"></td>
        <td id="LC843" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L844" class="blob-num js-line-number" data-line-number="844"></td>
        <td id="LC844" class="blob-code blob-code-inner js-file-line"><span class="pl-en">__cfq_group_service_tree_add</span>(<span class="pl-k">struct</span> cfq_rb_root *st, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L845" class="blob-num js-line-number" data-line-number="845"></td>
        <td id="LC845" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L846" class="blob-num js-line-number" data-line-number="846"></td>
        <td id="LC846" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node **node = &amp;st-&gt;rb.<span class="pl-smi">rb_node</span>;</td>
      </tr>
      <tr>
        <td id="L847" class="blob-num js-line-number" data-line-number="847"></td>
        <td id="LC847" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node *parent = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L848" class="blob-num js-line-number" data-line-number="848"></td>
        <td id="LC848" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *__cfqg;</td>
      </tr>
      <tr>
        <td id="L849" class="blob-num js-line-number" data-line-number="849"></td>
        <td id="LC849" class="blob-code blob-code-inner js-file-line">	s64 key = <span class="pl-c1">cfqg_key</span>(st, cfqg);</td>
      </tr>
      <tr>
        <td id="L850" class="blob-num js-line-number" data-line-number="850"></td>
        <td id="LC850" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> left = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L851" class="blob-num js-line-number" data-line-number="851"></td>
        <td id="LC851" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L852" class="blob-num js-line-number" data-line-number="852"></td>
        <td id="LC852" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">while</span> (*node != <span class="pl-c1">NULL</span>) {</td>
      </tr>
      <tr>
        <td id="L853" class="blob-num js-line-number" data-line-number="853"></td>
        <td id="LC853" class="blob-code blob-code-inner js-file-line">		parent = *node;</td>
      </tr>
      <tr>
        <td id="L854" class="blob-num js-line-number" data-line-number="854"></td>
        <td id="LC854" class="blob-code blob-code-inner js-file-line">		__cfqg = <span class="pl-c1">rb_entry_cfqg</span>(parent);</td>
      </tr>
      <tr>
        <td id="L855" class="blob-num js-line-number" data-line-number="855"></td>
        <td id="LC855" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L856" class="blob-num js-line-number" data-line-number="856"></td>
        <td id="LC856" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (key &lt; <span class="pl-c1">cfqg_key</span>(st, __cfqg))</td>
      </tr>
      <tr>
        <td id="L857" class="blob-num js-line-number" data-line-number="857"></td>
        <td id="LC857" class="blob-code blob-code-inner js-file-line">			node = &amp;parent-&gt;rb_left;</td>
      </tr>
      <tr>
        <td id="L858" class="blob-num js-line-number" data-line-number="858"></td>
        <td id="LC858" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L859" class="blob-num js-line-number" data-line-number="859"></td>
        <td id="LC859" class="blob-code blob-code-inner js-file-line">			node = &amp;parent-&gt;rb_right;</td>
      </tr>
      <tr>
        <td id="L860" class="blob-num js-line-number" data-line-number="860"></td>
        <td id="LC860" class="blob-code blob-code-inner js-file-line">			left = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L861" class="blob-num js-line-number" data-line-number="861"></td>
        <td id="LC861" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L862" class="blob-num js-line-number" data-line-number="862"></td>
        <td id="LC862" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L863" class="blob-num js-line-number" data-line-number="863"></td>
        <td id="LC863" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L864" class="blob-num js-line-number" data-line-number="864"></td>
        <td id="LC864" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (left)</td>
      </tr>
      <tr>
        <td id="L865" class="blob-num js-line-number" data-line-number="865"></td>
        <td id="LC865" class="blob-code blob-code-inner js-file-line">		st-&gt;left = &amp;cfqg-&gt;rb_node;</td>
      </tr>
      <tr>
        <td id="L866" class="blob-num js-line-number" data-line-number="866"></td>
        <td id="LC866" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L867" class="blob-num js-line-number" data-line-number="867"></td>
        <td id="LC867" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rb_link_node</span>(&amp;cfqg-&gt;rb_node, parent, node);</td>
      </tr>
      <tr>
        <td id="L868" class="blob-num js-line-number" data-line-number="868"></td>
        <td id="LC868" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rb_insert_color</span>(&amp;cfqg-&gt;rb_node, &amp;st-&gt;rb);</td>
      </tr>
      <tr>
        <td id="L869" class="blob-num js-line-number" data-line-number="869"></td>
        <td id="LC869" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L870" class="blob-num js-line-number" data-line-number="870"></td>
        <td id="LC870" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L871" class="blob-num js-line-number" data-line-number="871"></td>
        <td id="LC871" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L872" class="blob-num js-line-number" data-line-number="872"></td>
        <td id="LC872" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_update_group_weight</span>(<span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L873" class="blob-num js-line-number" data-line-number="873"></td>
        <td id="LC873" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L874" class="blob-num js-line-number" data-line-number="874"></td>
        <td id="LC874" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(!<span class="pl-c1">RB_EMPTY_NODE</span>(&amp;cfqg-&gt;rb_node));</td>
      </tr>
      <tr>
        <td id="L875" class="blob-num js-line-number" data-line-number="875"></td>
        <td id="LC875" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqg-&gt;needs_update) {</td>
      </tr>
      <tr>
        <td id="L876" class="blob-num js-line-number" data-line-number="876"></td>
        <td id="LC876" class="blob-code blob-code-inner js-file-line">		cfqg-&gt;weight = cfqg-&gt;new_weight;</td>
      </tr>
      <tr>
        <td id="L877" class="blob-num js-line-number" data-line-number="877"></td>
        <td id="LC877" class="blob-code blob-code-inner js-file-line">		cfqg-&gt;needs_update = <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L878" class="blob-num js-line-number" data-line-number="878"></td>
        <td id="LC878" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L879" class="blob-num js-line-number" data-line-number="879"></td>
        <td id="LC879" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L880" class="blob-num js-line-number" data-line-number="880"></td>
        <td id="LC880" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L881" class="blob-num js-line-number" data-line-number="881"></td>
        <td id="LC881" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L882" class="blob-num js-line-number" data-line-number="882"></td>
        <td id="LC882" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_group_service_tree_add</span>(<span class="pl-k">struct</span> cfq_rb_root *st, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L883" class="blob-num js-line-number" data-line-number="883"></td>
        <td id="LC883" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L884" class="blob-num js-line-number" data-line-number="884"></td>
        <td id="LC884" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(!<span class="pl-c1">RB_EMPTY_NODE</span>(&amp;cfqg-&gt;rb_node));</td>
      </tr>
      <tr>
        <td id="L885" class="blob-num js-line-number" data-line-number="885"></td>
        <td id="LC885" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L886" class="blob-num js-line-number" data-line-number="886"></td>
        <td id="LC886" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_update_group_weight</span>(cfqg);</td>
      </tr>
      <tr>
        <td id="L887" class="blob-num js-line-number" data-line-number="887"></td>
        <td id="LC887" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">__cfq_group_service_tree_add</span>(st, cfqg);</td>
      </tr>
      <tr>
        <td id="L888" class="blob-num js-line-number" data-line-number="888"></td>
        <td id="LC888" class="blob-code blob-code-inner js-file-line">	st-&gt;total_weight += cfqg-&gt;weight;</td>
      </tr>
      <tr>
        <td id="L889" class="blob-num js-line-number" data-line-number="889"></td>
        <td id="LC889" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L890" class="blob-num js-line-number" data-line-number="890"></td>
        <td id="LC890" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L891" class="blob-num js-line-number" data-line-number="891"></td>
        <td id="LC891" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L892" class="blob-num js-line-number" data-line-number="892"></td>
        <td id="LC892" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_group_notify_queue_add</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L893" class="blob-num js-line-number" data-line-number="893"></td>
        <td id="LC893" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L894" class="blob-num js-line-number" data-line-number="894"></td>
        <td id="LC894" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *st = &amp;cfqd-&gt;grp_service_tree;</td>
      </tr>
      <tr>
        <td id="L895" class="blob-num js-line-number" data-line-number="895"></td>
        <td id="LC895" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *__cfqg;</td>
      </tr>
      <tr>
        <td id="L896" class="blob-num js-line-number" data-line-number="896"></td>
        <td id="LC896" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node *n;</td>
      </tr>
      <tr>
        <td id="L897" class="blob-num js-line-number" data-line-number="897"></td>
        <td id="LC897" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L898" class="blob-num js-line-number" data-line-number="898"></td>
        <td id="LC898" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;nr_cfqq++;</td>
      </tr>
      <tr>
        <td id="L899" class="blob-num js-line-number" data-line-number="899"></td>
        <td id="LC899" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">RB_EMPTY_NODE</span>(&amp;cfqg-&gt;rb_node))</td>
      </tr>
      <tr>
        <td id="L900" class="blob-num js-line-number" data-line-number="900"></td>
        <td id="LC900" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L901" class="blob-num js-line-number" data-line-number="901"></td>
        <td id="LC901" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L902" class="blob-num js-line-number" data-line-number="902"></td>
        <td id="LC902" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L903" class="blob-num js-line-number" data-line-number="903"></td>
        <td id="LC903" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Currently put the group at the end. Later implement something</span></td>
      </tr>
      <tr>
        <td id="L904" class="blob-num js-line-number" data-line-number="904"></td>
        <td id="LC904" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * so that groups get lesser vtime based on their weights, so that</span></td>
      </tr>
      <tr>
        <td id="L905" class="blob-num js-line-number" data-line-number="905"></td>
        <td id="LC905" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * if group does not loose all if it was not continuously backlogged.</span></td>
      </tr>
      <tr>
        <td id="L906" class="blob-num js-line-number" data-line-number="906"></td>
        <td id="LC906" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L907" class="blob-num js-line-number" data-line-number="907"></td>
        <td id="LC907" class="blob-code blob-code-inner js-file-line">	n = <span class="pl-c1">rb_last</span>(&amp;st-&gt;rb);</td>
      </tr>
      <tr>
        <td id="L908" class="blob-num js-line-number" data-line-number="908"></td>
        <td id="LC908" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (n) {</td>
      </tr>
      <tr>
        <td id="L909" class="blob-num js-line-number" data-line-number="909"></td>
        <td id="LC909" class="blob-code blob-code-inner js-file-line">		__cfqg = <span class="pl-c1">rb_entry_cfqg</span>(n);</td>
      </tr>
      <tr>
        <td id="L910" class="blob-num js-line-number" data-line-number="910"></td>
        <td id="LC910" class="blob-code blob-code-inner js-file-line">		cfqg-&gt;vdisktime = __cfqg-&gt;vdisktime + CFQ_IDLE_DELAY;</td>
      </tr>
      <tr>
        <td id="L911" class="blob-num js-line-number" data-line-number="911"></td>
        <td id="LC911" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L912" class="blob-num js-line-number" data-line-number="912"></td>
        <td id="LC912" class="blob-code blob-code-inner js-file-line">		cfqg-&gt;vdisktime = st-&gt;min_vdisktime;</td>
      </tr>
      <tr>
        <td id="L913" class="blob-num js-line-number" data-line-number="913"></td>
        <td id="LC913" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_group_service_tree_add</span>(st, cfqg);</td>
      </tr>
      <tr>
        <td id="L914" class="blob-num js-line-number" data-line-number="914"></td>
        <td id="LC914" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L915" class="blob-num js-line-number" data-line-number="915"></td>
        <td id="LC915" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L916" class="blob-num js-line-number" data-line-number="916"></td>
        <td id="LC916" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L917" class="blob-num js-line-number" data-line-number="917"></td>
        <td id="LC917" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_group_service_tree_del</span>(<span class="pl-k">struct</span> cfq_rb_root *st, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L918" class="blob-num js-line-number" data-line-number="918"></td>
        <td id="LC918" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L919" class="blob-num js-line-number" data-line-number="919"></td>
        <td id="LC919" class="blob-code blob-code-inner js-file-line">	st-&gt;total_weight -= cfqg-&gt;weight;</td>
      </tr>
      <tr>
        <td id="L920" class="blob-num js-line-number" data-line-number="920"></td>
        <td id="LC920" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">RB_EMPTY_NODE</span>(&amp;cfqg-&gt;rb_node))</td>
      </tr>
      <tr>
        <td id="L921" class="blob-num js-line-number" data-line-number="921"></td>
        <td id="LC921" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_rb_erase</span>(&amp;cfqg-&gt;rb_node, st);</td>
      </tr>
      <tr>
        <td id="L922" class="blob-num js-line-number" data-line-number="922"></td>
        <td id="LC922" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L923" class="blob-num js-line-number" data-line-number="923"></td>
        <td id="LC923" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L924" class="blob-num js-line-number" data-line-number="924"></td>
        <td id="LC924" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L925" class="blob-num js-line-number" data-line-number="925"></td>
        <td id="LC925" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_group_notify_queue_del</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L926" class="blob-num js-line-number" data-line-number="926"></td>
        <td id="LC926" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L927" class="blob-num js-line-number" data-line-number="927"></td>
        <td id="LC927" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *st = &amp;cfqd-&gt;grp_service_tree;</td>
      </tr>
      <tr>
        <td id="L928" class="blob-num js-line-number" data-line-number="928"></td>
        <td id="LC928" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L929" class="blob-num js-line-number" data-line-number="929"></td>
        <td id="LC929" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(cfqg-&gt;nr_cfqq &lt; <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L930" class="blob-num js-line-number" data-line-number="930"></td>
        <td id="LC930" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;nr_cfqq--;</td>
      </tr>
      <tr>
        <td id="L931" class="blob-num js-line-number" data-line-number="931"></td>
        <td id="LC931" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L932" class="blob-num js-line-number" data-line-number="932"></td>
        <td id="LC932" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* If there are other cfq queues under this group, don&#39;t delete it */</span></td>
      </tr>
      <tr>
        <td id="L933" class="blob-num js-line-number" data-line-number="933"></td>
        <td id="LC933" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqg-&gt;nr_cfqq)</td>
      </tr>
      <tr>
        <td id="L934" class="blob-num js-line-number" data-line-number="934"></td>
        <td id="LC934" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L935" class="blob-num js-line-number" data-line-number="935"></td>
        <td id="LC935" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L936" class="blob-num js-line-number" data-line-number="936"></td>
        <td id="LC936" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqg</span>(cfqd, cfqg, <span class="pl-s"><span class="pl-pds">&quot;</span>del_from_rr group<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L937" class="blob-num js-line-number" data-line-number="937"></td>
        <td id="LC937" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_group_service_tree_del</span>(st, cfqg);</td>
      </tr>
      <tr>
        <td id="L938" class="blob-num js-line-number" data-line-number="938"></td>
        <td id="LC938" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;saved_workload_slice = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L939" class="blob-num js-line-number" data-line-number="939"></td>
        <td id="LC939" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_dequeue_stats</span>(&amp;cfqg-&gt;blkg, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L940" class="blob-num js-line-number" data-line-number="940"></td>
        <td id="LC940" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L941" class="blob-num js-line-number" data-line-number="941"></td>
        <td id="LC941" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L942" class="blob-num js-line-number" data-line-number="942"></td>
        <td id="LC942" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">unsigned</span> <span class="pl-k">int</span> <span class="pl-en">cfq_cfqq_slice_usage</span>(<span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L943" class="blob-num js-line-number" data-line-number="943"></td>
        <td id="LC943" class="blob-code blob-code-inner js-file-line">						<span class="pl-k">unsigned</span> <span class="pl-k">int</span> *unaccounted_time)</td>
      </tr>
      <tr>
        <td id="L944" class="blob-num js-line-number" data-line-number="944"></td>
        <td id="LC944" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L945" class="blob-num js-line-number" data-line-number="945"></td>
        <td id="LC945" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> slice_used;</td>
      </tr>
      <tr>
        <td id="L946" class="blob-num js-line-number" data-line-number="946"></td>
        <td id="LC946" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L947" class="blob-num js-line-number" data-line-number="947"></td>
        <td id="LC947" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L948" class="blob-num js-line-number" data-line-number="948"></td>
        <td id="LC948" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Queue got expired before even a single request completed or</span></td>
      </tr>
      <tr>
        <td id="L949" class="blob-num js-line-number" data-line-number="949"></td>
        <td id="LC949" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * got expired immediately after first request completion.</span></td>
      </tr>
      <tr>
        <td id="L950" class="blob-num js-line-number" data-line-number="950"></td>
        <td id="LC950" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L951" class="blob-num js-line-number" data-line-number="951"></td>
        <td id="LC951" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqq-&gt;slice_start || cfqq-&gt;slice_start == jiffies) {</td>
      </tr>
      <tr>
        <td id="L952" class="blob-num js-line-number" data-line-number="952"></td>
        <td id="LC952" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L953" class="blob-num js-line-number" data-line-number="953"></td>
        <td id="LC953" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Also charge the seek time incurred to the group, otherwise</span></td>
      </tr>
      <tr>
        <td id="L954" class="blob-num js-line-number" data-line-number="954"></td>
        <td id="LC954" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * if there are mutiple queues in the group, each can dispatch</span></td>
      </tr>
      <tr>
        <td id="L955" class="blob-num js-line-number" data-line-number="955"></td>
        <td id="LC955" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * a single request on seeky media and cause lots of seek time</span></td>
      </tr>
      <tr>
        <td id="L956" class="blob-num js-line-number" data-line-number="956"></td>
        <td id="LC956" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * and group will never know it.</span></td>
      </tr>
      <tr>
        <td id="L957" class="blob-num js-line-number" data-line-number="957"></td>
        <td id="LC957" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L958" class="blob-num js-line-number" data-line-number="958"></td>
        <td id="LC958" class="blob-code blob-code-inner js-file-line">		slice_used = <span class="pl-c1">max_t</span>(<span class="pl-k">unsigned</span>, (jiffies - cfqq-&gt;dispatch_start),</td>
      </tr>
      <tr>
        <td id="L959" class="blob-num js-line-number" data-line-number="959"></td>
        <td id="LC959" class="blob-code blob-code-inner js-file-line">					<span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L960" class="blob-num js-line-number" data-line-number="960"></td>
        <td id="LC960" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L961" class="blob-num js-line-number" data-line-number="961"></td>
        <td id="LC961" class="blob-code blob-code-inner js-file-line">		slice_used = jiffies - cfqq-&gt;slice_start;</td>
      </tr>
      <tr>
        <td id="L962" class="blob-num js-line-number" data-line-number="962"></td>
        <td id="LC962" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (slice_used &gt; cfqq-&gt;allocated_slice) {</td>
      </tr>
      <tr>
        <td id="L963" class="blob-num js-line-number" data-line-number="963"></td>
        <td id="LC963" class="blob-code blob-code-inner js-file-line">			*unaccounted_time = slice_used - cfqq-&gt;allocated_slice;</td>
      </tr>
      <tr>
        <td id="L964" class="blob-num js-line-number" data-line-number="964"></td>
        <td id="LC964" class="blob-code blob-code-inner js-file-line">			slice_used = cfqq-&gt;allocated_slice;</td>
      </tr>
      <tr>
        <td id="L965" class="blob-num js-line-number" data-line-number="965"></td>
        <td id="LC965" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L966" class="blob-num js-line-number" data-line-number="966"></td>
        <td id="LC966" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">time_after</span>(cfqq-&gt;slice_start, cfqq-&gt;dispatch_start))</td>
      </tr>
      <tr>
        <td id="L967" class="blob-num js-line-number" data-line-number="967"></td>
        <td id="LC967" class="blob-code blob-code-inner js-file-line">			*unaccounted_time += cfqq-&gt;slice_start -</td>
      </tr>
      <tr>
        <td id="L968" class="blob-num js-line-number" data-line-number="968"></td>
        <td id="LC968" class="blob-code blob-code-inner js-file-line">					cfqq-&gt;dispatch_start;</td>
      </tr>
      <tr>
        <td id="L969" class="blob-num js-line-number" data-line-number="969"></td>
        <td id="LC969" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L970" class="blob-num js-line-number" data-line-number="970"></td>
        <td id="LC970" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L971" class="blob-num js-line-number" data-line-number="971"></td>
        <td id="LC971" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> slice_used;</td>
      </tr>
      <tr>
        <td id="L972" class="blob-num js-line-number" data-line-number="972"></td>
        <td id="LC972" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L973" class="blob-num js-line-number" data-line-number="973"></td>
        <td id="LC973" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L974" class="blob-num js-line-number" data-line-number="974"></td>
        <td id="LC974" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_group_served</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_group *cfqg,</td>
      </tr>
      <tr>
        <td id="L975" class="blob-num js-line-number" data-line-number="975"></td>
        <td id="LC975" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L976" class="blob-num js-line-number" data-line-number="976"></td>
        <td id="LC976" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L977" class="blob-num js-line-number" data-line-number="977"></td>
        <td id="LC977" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *st = &amp;cfqd-&gt;grp_service_tree;</td>
      </tr>
      <tr>
        <td id="L978" class="blob-num js-line-number" data-line-number="978"></td>
        <td id="LC978" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> used_sl, charge, unaccounted_sl = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L979" class="blob-num js-line-number" data-line-number="979"></td>
        <td id="LC979" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> nr_sync = cfqg-&gt;nr_cfqq - <span class="pl-c1">cfqg_busy_async_queues</span>(cfqd, cfqg)</td>
      </tr>
      <tr>
        <td id="L980" class="blob-num js-line-number" data-line-number="980"></td>
        <td id="LC980" class="blob-code blob-code-inner js-file-line">			- cfqg-&gt;service_tree_idle.<span class="pl-smi">count</span>;</td>
      </tr>
      <tr>
        <td id="L981" class="blob-num js-line-number" data-line-number="981"></td>
        <td id="LC981" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L982" class="blob-num js-line-number" data-line-number="982"></td>
        <td id="LC982" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(nr_sync &lt; <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L983" class="blob-num js-line-number" data-line-number="983"></td>
        <td id="LC983" class="blob-code blob-code-inner js-file-line">	used_sl = charge = <span class="pl-c1">cfq_cfqq_slice_usage</span>(cfqq, &amp;unaccounted_sl);</td>
      </tr>
      <tr>
        <td id="L984" class="blob-num js-line-number" data-line-number="984"></td>
        <td id="LC984" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L985" class="blob-num js-line-number" data-line-number="985"></td>
        <td id="LC985" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">iops_mode</span>(cfqd))</td>
      </tr>
      <tr>
        <td id="L986" class="blob-num js-line-number" data-line-number="986"></td>
        <td id="LC986" class="blob-code blob-code-inner js-file-line">		charge = cfqq-&gt;slice_dispatch;</td>
      </tr>
      <tr>
        <td id="L987" class="blob-num js-line-number" data-line-number="987"></td>
        <td id="LC987" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span> <span class="pl-k">if</span> (!<span class="pl-c1">cfq_cfqq_sync</span>(cfqq) &amp;&amp; !nr_sync)</td>
      </tr>
      <tr>
        <td id="L988" class="blob-num js-line-number" data-line-number="988"></td>
        <td id="LC988" class="blob-code blob-code-inner js-file-line">		charge = cfqq-&gt;allocated_slice;</td>
      </tr>
      <tr>
        <td id="L989" class="blob-num js-line-number" data-line-number="989"></td>
        <td id="LC989" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L990" class="blob-num js-line-number" data-line-number="990"></td>
        <td id="LC990" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Can&#39;t update vdisktime while group is on service tree */</span></td>
      </tr>
      <tr>
        <td id="L991" class="blob-num js-line-number" data-line-number="991"></td>
        <td id="LC991" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_group_service_tree_del</span>(st, cfqg);</td>
      </tr>
      <tr>
        <td id="L992" class="blob-num js-line-number" data-line-number="992"></td>
        <td id="LC992" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;vdisktime += <span class="pl-c1">cfq_scale_slice</span>(charge, cfqg);</td>
      </tr>
      <tr>
        <td id="L993" class="blob-num js-line-number" data-line-number="993"></td>
        <td id="LC993" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* If a new weight was requested, update now, off tree */</span></td>
      </tr>
      <tr>
        <td id="L994" class="blob-num js-line-number" data-line-number="994"></td>
        <td id="LC994" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_group_service_tree_add</span>(st, cfqg);</td>
      </tr>
      <tr>
        <td id="L995" class="blob-num js-line-number" data-line-number="995"></td>
        <td id="LC995" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L996" class="blob-num js-line-number" data-line-number="996"></td>
        <td id="LC996" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* This group is being expired. Save the context */</span></td>
      </tr>
      <tr>
        <td id="L997" class="blob-num js-line-number" data-line-number="997"></td>
        <td id="LC997" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">time_after</span>(cfqd-&gt;workload_expires, jiffies)) {</td>
      </tr>
      <tr>
        <td id="L998" class="blob-num js-line-number" data-line-number="998"></td>
        <td id="LC998" class="blob-code blob-code-inner js-file-line">		cfqg-&gt;saved_workload_slice = cfqd-&gt;workload_expires</td>
      </tr>
      <tr>
        <td id="L999" class="blob-num js-line-number" data-line-number="999"></td>
        <td id="LC999" class="blob-code blob-code-inner js-file-line">						- jiffies;</td>
      </tr>
      <tr>
        <td id="L1000" class="blob-num js-line-number" data-line-number="1000"></td>
        <td id="LC1000" class="blob-code blob-code-inner js-file-line">		cfqg-&gt;saved_workload = cfqd-&gt;serving_type;</td>
      </tr>
      <tr>
        <td id="L1001" class="blob-num js-line-number" data-line-number="1001"></td>
        <td id="LC1001" class="blob-code blob-code-inner js-file-line">		cfqg-&gt;saved_serving_prio = cfqd-&gt;serving_prio;</td>
      </tr>
      <tr>
        <td id="L1002" class="blob-num js-line-number" data-line-number="1002"></td>
        <td id="LC1002" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1003" class="blob-num js-line-number" data-line-number="1003"></td>
        <td id="LC1003" class="blob-code blob-code-inner js-file-line">		cfqg-&gt;saved_workload_slice = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1004" class="blob-num js-line-number" data-line-number="1004"></td>
        <td id="LC1004" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1005" class="blob-num js-line-number" data-line-number="1005"></td>
        <td id="LC1005" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqg</span>(cfqd, cfqg, <span class="pl-s"><span class="pl-pds">&quot;</span>served: vt=<span class="pl-c1">%llu</span> min_vt=<span class="pl-c1">%llu</span><span class="pl-pds">&quot;</span></span>, cfqg-&gt;vdisktime,</td>
      </tr>
      <tr>
        <td id="L1006" class="blob-num js-line-number" data-line-number="1006"></td>
        <td id="LC1006" class="blob-code blob-code-inner js-file-line">					st-&gt;min_vdisktime);</td>
      </tr>
      <tr>
        <td id="L1007" class="blob-num js-line-number" data-line-number="1007"></td>
        <td id="LC1007" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqq-&gt;cfqd, cfqq,</td>
      </tr>
      <tr>
        <td id="L1008" class="blob-num js-line-number" data-line-number="1008"></td>
        <td id="LC1008" class="blob-code blob-code-inner js-file-line">		     <span class="pl-s"><span class="pl-pds">&quot;</span>sl_used=<span class="pl-c1">%u</span> disp=<span class="pl-c1">%u</span> charge=<span class="pl-c1">%u</span> iops=<span class="pl-c1">%u</span> sect=<span class="pl-c1">%lu</span><span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L1009" class="blob-num js-line-number" data-line-number="1009"></td>
        <td id="LC1009" class="blob-code blob-code-inner js-file-line">		     used_sl, cfqq-&gt;slice_dispatch, charge,</td>
      </tr>
      <tr>
        <td id="L1010" class="blob-num js-line-number" data-line-number="1010"></td>
        <td id="LC1010" class="blob-code blob-code-inner js-file-line">		     <span class="pl-c1">iops_mode</span>(cfqd), cfqq-&gt;nr_sectors);</td>
      </tr>
      <tr>
        <td id="L1011" class="blob-num js-line-number" data-line-number="1011"></td>
        <td id="LC1011" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_timeslice_used</span>(&amp;cfqg-&gt;blkg, used_sl,</td>
      </tr>
      <tr>
        <td id="L1012" class="blob-num js-line-number" data-line-number="1012"></td>
        <td id="LC1012" class="blob-code blob-code-inner js-file-line">					  unaccounted_sl);</td>
      </tr>
      <tr>
        <td id="L1013" class="blob-num js-line-number" data-line-number="1013"></td>
        <td id="LC1013" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_set_start_empty_time</span>(&amp;cfqg-&gt;blkg);</td>
      </tr>
      <tr>
        <td id="L1014" class="blob-num js-line-number" data-line-number="1014"></td>
        <td id="LC1014" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1015" class="blob-num js-line-number" data-line-number="1015"></td>
        <td id="LC1015" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1016" class="blob-num js-line-number" data-line-number="1016"></td>
        <td id="LC1016" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L1017" class="blob-num js-line-number" data-line-number="1017"></td>
        <td id="LC1017" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">struct</span> cfq_group *<span class="pl-en">cfqg_of_blkg</span>(<span class="pl-k">struct</span> blkio_group *blkg)</td>
      </tr>
      <tr>
        <td id="L1018" class="blob-num js-line-number" data-line-number="1018"></td>
        <td id="LC1018" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1019" class="blob-num js-line-number" data-line-number="1019"></td>
        <td id="LC1019" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (blkg)</td>
      </tr>
      <tr>
        <td id="L1020" class="blob-num js-line-number" data-line-number="1020"></td>
        <td id="LC1020" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">container_of</span>(blkg, <span class="pl-k">struct</span> cfq_group, blkg);</td>
      </tr>
      <tr>
        <td id="L1021" class="blob-num js-line-number" data-line-number="1021"></td>
        <td id="LC1021" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1022" class="blob-num js-line-number" data-line-number="1022"></td>
        <td id="LC1022" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1023" class="blob-num js-line-number" data-line-number="1023"></td>
        <td id="LC1023" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1024" class="blob-num js-line-number" data-line-number="1024"></td>
        <td id="LC1024" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_update_blkio_group_weight</span>(<span class="pl-k">void</span> *key, <span class="pl-k">struct</span> blkio_group *blkg,</td>
      </tr>
      <tr>
        <td id="L1025" class="blob-num js-line-number" data-line-number="1025"></td>
        <td id="LC1025" class="blob-code blob-code-inner js-file-line">					  <span class="pl-k">unsigned</span> <span class="pl-k">int</span> weight)</td>
      </tr>
      <tr>
        <td id="L1026" class="blob-num js-line-number" data-line-number="1026"></td>
        <td id="LC1026" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1027" class="blob-num js-line-number" data-line-number="1027"></td>
        <td id="LC1027" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg = <span class="pl-c1">cfqg_of_blkg</span>(blkg);</td>
      </tr>
      <tr>
        <td id="L1028" class="blob-num js-line-number" data-line-number="1028"></td>
        <td id="LC1028" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;new_weight = weight;</td>
      </tr>
      <tr>
        <td id="L1029" class="blob-num js-line-number" data-line-number="1029"></td>
        <td id="LC1029" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;needs_update = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L1030" class="blob-num js-line-number" data-line-number="1030"></td>
        <td id="LC1030" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1031" class="blob-num js-line-number" data-line-number="1031"></td>
        <td id="LC1031" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1032" class="blob-num js-line-number" data-line-number="1032"></td>
        <td id="LC1032" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_init_add_cfqg_lists</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L1033" class="blob-num js-line-number" data-line-number="1033"></td>
        <td id="LC1033" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">struct</span> cfq_group *cfqg, <span class="pl-k">struct</span> blkio_cgroup *blkcg)</td>
      </tr>
      <tr>
        <td id="L1034" class="blob-num js-line-number" data-line-number="1034"></td>
        <td id="LC1034" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1035" class="blob-num js-line-number" data-line-number="1035"></td>
        <td id="LC1035" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> backing_dev_info *bdi = &amp;cfqd-&gt;queue-&gt;backing_dev_info;</td>
      </tr>
      <tr>
        <td id="L1036" class="blob-num js-line-number" data-line-number="1036"></td>
        <td id="LC1036" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> <span class="pl-c1">major</span>, <span class="pl-c1">minor</span>;</td>
      </tr>
      <tr>
        <td id="L1037" class="blob-num js-line-number" data-line-number="1037"></td>
        <td id="LC1037" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1038" class="blob-num js-line-number" data-line-number="1038"></td>
        <td id="LC1038" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1039" class="blob-num js-line-number" data-line-number="1039"></td>
        <td id="LC1039" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Add group onto cgroup list. It might happen that bdi-&gt;dev is</span></td>
      </tr>
      <tr>
        <td id="L1040" class="blob-num js-line-number" data-line-number="1040"></td>
        <td id="LC1040" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * not initialized yet. Initialize this new group without major</span></td>
      </tr>
      <tr>
        <td id="L1041" class="blob-num js-line-number" data-line-number="1041"></td>
        <td id="LC1041" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * and minor info and this info will be filled in once a new thread</span></td>
      </tr>
      <tr>
        <td id="L1042" class="blob-num js-line-number" data-line-number="1042"></td>
        <td id="LC1042" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * comes for IO.</span></td>
      </tr>
      <tr>
        <td id="L1043" class="blob-num js-line-number" data-line-number="1043"></td>
        <td id="LC1043" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1044" class="blob-num js-line-number" data-line-number="1044"></td>
        <td id="LC1044" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (bdi-&gt;dev) {</td>
      </tr>
      <tr>
        <td id="L1045" class="blob-num js-line-number" data-line-number="1045"></td>
        <td id="LC1045" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">sscanf</span>(<span class="pl-c1">dev_name</span>(bdi-&gt;dev), <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-c1">%u</span>:<span class="pl-c1">%u</span><span class="pl-pds">&quot;</span></span>, &amp;<span class="pl-c1">major</span>, &amp;<span class="pl-c1">minor</span>);</td>
      </tr>
      <tr>
        <td id="L1046" class="blob-num js-line-number" data-line-number="1046"></td>
        <td id="LC1046" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_blkiocg_add_blkio_group</span>(blkcg, &amp;cfqg-&gt;blkg,</td>
      </tr>
      <tr>
        <td id="L1047" class="blob-num js-line-number" data-line-number="1047"></td>
        <td id="LC1047" class="blob-code blob-code-inner js-file-line">					(<span class="pl-k">void</span> *)cfqd, <span class="pl-c1">MKDEV</span>(<span class="pl-c1">major</span>, <span class="pl-c1">minor</span>));</td>
      </tr>
      <tr>
        <td id="L1048" class="blob-num js-line-number" data-line-number="1048"></td>
        <td id="LC1048" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1049" class="blob-num js-line-number" data-line-number="1049"></td>
        <td id="LC1049" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_blkiocg_add_blkio_group</span>(blkcg, &amp;cfqg-&gt;blkg,</td>
      </tr>
      <tr>
        <td id="L1050" class="blob-num js-line-number" data-line-number="1050"></td>
        <td id="LC1050" class="blob-code blob-code-inner js-file-line">					(<span class="pl-k">void</span> *)cfqd, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L1051" class="blob-num js-line-number" data-line-number="1051"></td>
        <td id="LC1051" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1052" class="blob-num js-line-number" data-line-number="1052"></td>
        <td id="LC1052" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;nr_blkcg_linked_grps++;</td>
      </tr>
      <tr>
        <td id="L1053" class="blob-num js-line-number" data-line-number="1053"></td>
        <td id="LC1053" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;weight = <span class="pl-c1">blkcg_get_weight</span>(blkcg, cfqg-&gt;blkg.<span class="pl-smi">dev</span>);</td>
      </tr>
      <tr>
        <td id="L1054" class="blob-num js-line-number" data-line-number="1054"></td>
        <td id="LC1054" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1055" class="blob-num js-line-number" data-line-number="1055"></td>
        <td id="LC1055" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Add group on cfqd list */</span></td>
      </tr>
      <tr>
        <td id="L1056" class="blob-num js-line-number" data-line-number="1056"></td>
        <td id="LC1056" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">hlist_add_head</span>(&amp;cfqg-&gt;cfqd_node, &amp;cfqd-&gt;cfqg_list);</td>
      </tr>
      <tr>
        <td id="L1057" class="blob-num js-line-number" data-line-number="1057"></td>
        <td id="LC1057" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1058" class="blob-num js-line-number" data-line-number="1058"></td>
        <td id="LC1058" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1059" class="blob-num js-line-number" data-line-number="1059"></td>
        <td id="LC1059" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1060" class="blob-num js-line-number" data-line-number="1060"></td>
        <td id="LC1060" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Should be called from sleepable context. No request queue lock as per</span></td>
      </tr>
      <tr>
        <td id="L1061" class="blob-num js-line-number" data-line-number="1061"></td>
        <td id="LC1061" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * cpu stats are allocated dynamically and alloc_percpu needs to be called</span></td>
      </tr>
      <tr>
        <td id="L1062" class="blob-num js-line-number" data-line-number="1062"></td>
        <td id="LC1062" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * from sleepable context.</span></td>
      </tr>
      <tr>
        <td id="L1063" class="blob-num js-line-number" data-line-number="1063"></td>
        <td id="LC1063" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1064" class="blob-num js-line-number" data-line-number="1064"></td>
        <td id="LC1064" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_group * <span class="pl-en">cfq_alloc_cfqg</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L1065" class="blob-num js-line-number" data-line-number="1065"></td>
        <td id="LC1065" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1066" class="blob-num js-line-number" data-line-number="1066"></td>
        <td id="LC1066" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1067" class="blob-num js-line-number" data-line-number="1067"></td>
        <td id="LC1067" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> i, j, ret;</td>
      </tr>
      <tr>
        <td id="L1068" class="blob-num js-line-number" data-line-number="1068"></td>
        <td id="LC1068" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *st;</td>
      </tr>
      <tr>
        <td id="L1069" class="blob-num js-line-number" data-line-number="1069"></td>
        <td id="LC1069" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1070" class="blob-num js-line-number" data-line-number="1070"></td>
        <td id="LC1070" class="blob-code blob-code-inner js-file-line">	cfqg = <span class="pl-c1">kzalloc_node</span>(<span class="pl-k">sizeof</span>(*cfqg), GFP_ATOMIC, cfqd-&gt;queue-&gt;node);</td>
      </tr>
      <tr>
        <td id="L1071" class="blob-num js-line-number" data-line-number="1071"></td>
        <td id="LC1071" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqg)</td>
      </tr>
      <tr>
        <td id="L1072" class="blob-num js-line-number" data-line-number="1072"></td>
        <td id="LC1072" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1073" class="blob-num js-line-number" data-line-number="1073"></td>
        <td id="LC1073" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1074" class="blob-num js-line-number" data-line-number="1074"></td>
        <td id="LC1074" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">for_each_cfqg_st</span>(cfqg, i, j, st)</td>
      </tr>
      <tr>
        <td id="L1075" class="blob-num js-line-number" data-line-number="1075"></td>
        <td id="LC1075" class="blob-code blob-code-inner js-file-line">		*st = CFQ_RB_ROOT;</td>
      </tr>
      <tr>
        <td id="L1076" class="blob-num js-line-number" data-line-number="1076"></td>
        <td id="LC1076" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">RB_CLEAR_NODE</span>(&amp;cfqg-&gt;rb_node);</td>
      </tr>
      <tr>
        <td id="L1077" class="blob-num js-line-number" data-line-number="1077"></td>
        <td id="LC1077" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1078" class="blob-num js-line-number" data-line-number="1078"></td>
        <td id="LC1078" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;ttime.<span class="pl-smi">last_end_request</span> = jiffies;</td>
      </tr>
      <tr>
        <td id="L1079" class="blob-num js-line-number" data-line-number="1079"></td>
        <td id="LC1079" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1080" class="blob-num js-line-number" data-line-number="1080"></td>
        <td id="LC1080" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1081" class="blob-num js-line-number" data-line-number="1081"></td>
        <td id="LC1081" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Take the initial reference that will be released on destroy</span></td>
      </tr>
      <tr>
        <td id="L1082" class="blob-num js-line-number" data-line-number="1082"></td>
        <td id="LC1082" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * This can be thought of a joint reference by cgroup and</span></td>
      </tr>
      <tr>
        <td id="L1083" class="blob-num js-line-number" data-line-number="1083"></td>
        <td id="LC1083" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * elevator which will be dropped by either elevator exit</span></td>
      </tr>
      <tr>
        <td id="L1084" class="blob-num js-line-number" data-line-number="1084"></td>
        <td id="LC1084" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * or cgroup deletion path depending on who is exiting first.</span></td>
      </tr>
      <tr>
        <td id="L1085" class="blob-num js-line-number" data-line-number="1085"></td>
        <td id="LC1085" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1086" class="blob-num js-line-number" data-line-number="1086"></td>
        <td id="LC1086" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;ref = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L1087" class="blob-num js-line-number" data-line-number="1087"></td>
        <td id="LC1087" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1088" class="blob-num js-line-number" data-line-number="1088"></td>
        <td id="LC1088" class="blob-code blob-code-inner js-file-line">	ret = <span class="pl-c1">blkio_alloc_blkg_stats</span>(&amp;cfqg-&gt;blkg);</td>
      </tr>
      <tr>
        <td id="L1089" class="blob-num js-line-number" data-line-number="1089"></td>
        <td id="LC1089" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (ret) {</td>
      </tr>
      <tr>
        <td id="L1090" class="blob-num js-line-number" data-line-number="1090"></td>
        <td id="LC1090" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">kfree</span>(cfqg);</td>
      </tr>
      <tr>
        <td id="L1091" class="blob-num js-line-number" data-line-number="1091"></td>
        <td id="LC1091" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1092" class="blob-num js-line-number" data-line-number="1092"></td>
        <td id="LC1092" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1093" class="blob-num js-line-number" data-line-number="1093"></td>
        <td id="LC1093" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1094" class="blob-num js-line-number" data-line-number="1094"></td>
        <td id="LC1094" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqg;</td>
      </tr>
      <tr>
        <td id="L1095" class="blob-num js-line-number" data-line-number="1095"></td>
        <td id="LC1095" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1096" class="blob-num js-line-number" data-line-number="1096"></td>
        <td id="LC1096" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1097" class="blob-num js-line-number" data-line-number="1097"></td>
        <td id="LC1097" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_group *</td>
      </tr>
      <tr>
        <td id="L1098" class="blob-num js-line-number" data-line-number="1098"></td>
        <td id="LC1098" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_find_cfqg</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> blkio_cgroup *blkcg)</td>
      </tr>
      <tr>
        <td id="L1099" class="blob-num js-line-number" data-line-number="1099"></td>
        <td id="LC1099" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1100" class="blob-num js-line-number" data-line-number="1100"></td>
        <td id="LC1100" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1101" class="blob-num js-line-number" data-line-number="1101"></td>
        <td id="LC1101" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">void</span> *key = cfqd;</td>
      </tr>
      <tr>
        <td id="L1102" class="blob-num js-line-number" data-line-number="1102"></td>
        <td id="LC1102" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> backing_dev_info *bdi = &amp;cfqd-&gt;queue-&gt;backing_dev_info;</td>
      </tr>
      <tr>
        <td id="L1103" class="blob-num js-line-number" data-line-number="1103"></td>
        <td id="LC1103" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> <span class="pl-c1">major</span>, <span class="pl-c1">minor</span>;</td>
      </tr>
      <tr>
        <td id="L1104" class="blob-num js-line-number" data-line-number="1104"></td>
        <td id="LC1104" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1105" class="blob-num js-line-number" data-line-number="1105"></td>
        <td id="LC1105" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1106" class="blob-num js-line-number" data-line-number="1106"></td>
        <td id="LC1106" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * This is the common case when there are no blkio cgroups.</span></td>
      </tr>
      <tr>
        <td id="L1107" class="blob-num js-line-number" data-line-number="1107"></td>
        <td id="LC1107" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Avoid lookup in this case</span></td>
      </tr>
      <tr>
        <td id="L1108" class="blob-num js-line-number" data-line-number="1108"></td>
        <td id="LC1108" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1109" class="blob-num js-line-number" data-line-number="1109"></td>
        <td id="LC1109" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (blkcg == &amp;blkio_root_cgroup)</td>
      </tr>
      <tr>
        <td id="L1110" class="blob-num js-line-number" data-line-number="1110"></td>
        <td id="LC1110" class="blob-code blob-code-inner js-file-line">		cfqg = &amp;cfqd-&gt;root_group;</td>
      </tr>
      <tr>
        <td id="L1111" class="blob-num js-line-number" data-line-number="1111"></td>
        <td id="LC1111" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1112" class="blob-num js-line-number" data-line-number="1112"></td>
        <td id="LC1112" class="blob-code blob-code-inner js-file-line">		cfqg = <span class="pl-c1">cfqg_of_blkg</span>(<span class="pl-c1">blkiocg_lookup_group</span>(blkcg, key));</td>
      </tr>
      <tr>
        <td id="L1113" class="blob-num js-line-number" data-line-number="1113"></td>
        <td id="LC1113" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1114" class="blob-num js-line-number" data-line-number="1114"></td>
        <td id="LC1114" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqg &amp;&amp; !cfqg-&gt;blkg.<span class="pl-smi">dev</span> &amp;&amp; bdi-&gt;dev &amp;&amp; <span class="pl-c1">dev_name</span>(bdi-&gt;dev)) {</td>
      </tr>
      <tr>
        <td id="L1115" class="blob-num js-line-number" data-line-number="1115"></td>
        <td id="LC1115" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">sscanf</span>(<span class="pl-c1">dev_name</span>(bdi-&gt;dev), <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-c1">%u</span>:<span class="pl-c1">%u</span><span class="pl-pds">&quot;</span></span>, &amp;<span class="pl-c1">major</span>, &amp;<span class="pl-c1">minor</span>);</td>
      </tr>
      <tr>
        <td id="L1116" class="blob-num js-line-number" data-line-number="1116"></td>
        <td id="LC1116" class="blob-code blob-code-inner js-file-line">		cfqg-&gt;blkg.<span class="pl-smi">dev</span> = <span class="pl-c1">MKDEV</span>(<span class="pl-c1">major</span>, <span class="pl-c1">minor</span>);</td>
      </tr>
      <tr>
        <td id="L1117" class="blob-num js-line-number" data-line-number="1117"></td>
        <td id="LC1117" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1118" class="blob-num js-line-number" data-line-number="1118"></td>
        <td id="LC1118" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1119" class="blob-num js-line-number" data-line-number="1119"></td>
        <td id="LC1119" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqg;</td>
      </tr>
      <tr>
        <td id="L1120" class="blob-num js-line-number" data-line-number="1120"></td>
        <td id="LC1120" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1121" class="blob-num js-line-number" data-line-number="1121"></td>
        <td id="LC1121" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1122" class="blob-num js-line-number" data-line-number="1122"></td>
        <td id="LC1122" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1123" class="blob-num js-line-number" data-line-number="1123"></td>
        <td id="LC1123" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Search for the cfq group current task belongs to. request_queue lock must</span></td>
      </tr>
      <tr>
        <td id="L1124" class="blob-num js-line-number" data-line-number="1124"></td>
        <td id="LC1124" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * be held.</span></td>
      </tr>
      <tr>
        <td id="L1125" class="blob-num js-line-number" data-line-number="1125"></td>
        <td id="LC1125" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1126" class="blob-num js-line-number" data-line-number="1126"></td>
        <td id="LC1126" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_group *<span class="pl-en">cfq_get_cfqg</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L1127" class="blob-num js-line-number" data-line-number="1127"></td>
        <td id="LC1127" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1128" class="blob-num js-line-number" data-line-number="1128"></td>
        <td id="LC1128" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> blkio_cgroup *blkcg;</td>
      </tr>
      <tr>
        <td id="L1129" class="blob-num js-line-number" data-line-number="1129"></td>
        <td id="LC1129" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg = <span class="pl-c1">NULL</span>, *__cfqg = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1130" class="blob-num js-line-number" data-line-number="1130"></td>
        <td id="LC1130" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request_queue *q = cfqd-&gt;queue;</td>
      </tr>
      <tr>
        <td id="L1131" class="blob-num js-line-number" data-line-number="1131"></td>
        <td id="LC1131" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1132" class="blob-num js-line-number" data-line-number="1132"></td>
        <td id="LC1132" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rcu_read_lock</span>();</td>
      </tr>
      <tr>
        <td id="L1133" class="blob-num js-line-number" data-line-number="1133"></td>
        <td id="LC1133" class="blob-code blob-code-inner js-file-line">	blkcg = <span class="pl-c1">task_blkio_cgroup</span>(current);</td>
      </tr>
      <tr>
        <td id="L1134" class="blob-num js-line-number" data-line-number="1134"></td>
        <td id="LC1134" class="blob-code blob-code-inner js-file-line">	cfqg = <span class="pl-c1">cfq_find_cfqg</span>(cfqd, blkcg);</td>
      </tr>
      <tr>
        <td id="L1135" class="blob-num js-line-number" data-line-number="1135"></td>
        <td id="LC1135" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqg) {</td>
      </tr>
      <tr>
        <td id="L1136" class="blob-num js-line-number" data-line-number="1136"></td>
        <td id="LC1136" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">rcu_read_unlock</span>();</td>
      </tr>
      <tr>
        <td id="L1137" class="blob-num js-line-number" data-line-number="1137"></td>
        <td id="LC1137" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> cfqg;</td>
      </tr>
      <tr>
        <td id="L1138" class="blob-num js-line-number" data-line-number="1138"></td>
        <td id="LC1138" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1139" class="blob-num js-line-number" data-line-number="1139"></td>
        <td id="LC1139" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1140" class="blob-num js-line-number" data-line-number="1140"></td>
        <td id="LC1140" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1141" class="blob-num js-line-number" data-line-number="1141"></td>
        <td id="LC1141" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Need to allocate a group. Allocation of group also needs allocation</span></td>
      </tr>
      <tr>
        <td id="L1142" class="blob-num js-line-number" data-line-number="1142"></td>
        <td id="LC1142" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * of per cpu stats which in-turn takes a mutex() and can block. Hence</span></td>
      </tr>
      <tr>
        <td id="L1143" class="blob-num js-line-number" data-line-number="1143"></td>
        <td id="LC1143" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * we need to drop rcu lock and queue_lock before we call alloc.</span></td>
      </tr>
      <tr>
        <td id="L1144" class="blob-num js-line-number" data-line-number="1144"></td>
        <td id="LC1144" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 *</span></td>
      </tr>
      <tr>
        <td id="L1145" class="blob-num js-line-number" data-line-number="1145"></td>
        <td id="LC1145" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Not taking any queue reference here and assuming that queue is</span></td>
      </tr>
      <tr>
        <td id="L1146" class="blob-num js-line-number" data-line-number="1146"></td>
        <td id="LC1146" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * around by the time we return. CFQ queue allocation code does</span></td>
      </tr>
      <tr>
        <td id="L1147" class="blob-num js-line-number" data-line-number="1147"></td>
        <td id="LC1147" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * the same. It might be racy though.</span></td>
      </tr>
      <tr>
        <td id="L1148" class="blob-num js-line-number" data-line-number="1148"></td>
        <td id="LC1148" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1149" class="blob-num js-line-number" data-line-number="1149"></td>
        <td id="LC1149" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1150" class="blob-num js-line-number" data-line-number="1150"></td>
        <td id="LC1150" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rcu_read_unlock</span>();</td>
      </tr>
      <tr>
        <td id="L1151" class="blob-num js-line-number" data-line-number="1151"></td>
        <td id="LC1151" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_unlock_irq</span>(q-&gt;queue_lock);</td>
      </tr>
      <tr>
        <td id="L1152" class="blob-num js-line-number" data-line-number="1152"></td>
        <td id="LC1152" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1153" class="blob-num js-line-number" data-line-number="1153"></td>
        <td id="LC1153" class="blob-code blob-code-inner js-file-line">	cfqg = <span class="pl-c1">cfq_alloc_cfqg</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L1154" class="blob-num js-line-number" data-line-number="1154"></td>
        <td id="LC1154" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1155" class="blob-num js-line-number" data-line-number="1155"></td>
        <td id="LC1155" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_lock_irq</span>(q-&gt;queue_lock);</td>
      </tr>
      <tr>
        <td id="L1156" class="blob-num js-line-number" data-line-number="1156"></td>
        <td id="LC1156" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1157" class="blob-num js-line-number" data-line-number="1157"></td>
        <td id="LC1157" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rcu_read_lock</span>();</td>
      </tr>
      <tr>
        <td id="L1158" class="blob-num js-line-number" data-line-number="1158"></td>
        <td id="LC1158" class="blob-code blob-code-inner js-file-line">	blkcg = <span class="pl-c1">task_blkio_cgroup</span>(current);</td>
      </tr>
      <tr>
        <td id="L1159" class="blob-num js-line-number" data-line-number="1159"></td>
        <td id="LC1159" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1160" class="blob-num js-line-number" data-line-number="1160"></td>
        <td id="LC1160" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1161" class="blob-num js-line-number" data-line-number="1161"></td>
        <td id="LC1161" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If some other thread already allocated the group while we were</span></td>
      </tr>
      <tr>
        <td id="L1162" class="blob-num js-line-number" data-line-number="1162"></td>
        <td id="LC1162" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * not holding queue lock, free up the group</span></td>
      </tr>
      <tr>
        <td id="L1163" class="blob-num js-line-number" data-line-number="1163"></td>
        <td id="LC1163" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1164" class="blob-num js-line-number" data-line-number="1164"></td>
        <td id="LC1164" class="blob-code blob-code-inner js-file-line">	__cfqg = <span class="pl-c1">cfq_find_cfqg</span>(cfqd, blkcg);</td>
      </tr>
      <tr>
        <td id="L1165" class="blob-num js-line-number" data-line-number="1165"></td>
        <td id="LC1165" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1166" class="blob-num js-line-number" data-line-number="1166"></td>
        <td id="LC1166" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (__cfqg) {</td>
      </tr>
      <tr>
        <td id="L1167" class="blob-num js-line-number" data-line-number="1167"></td>
        <td id="LC1167" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">kfree</span>(cfqg);</td>
      </tr>
      <tr>
        <td id="L1168" class="blob-num js-line-number" data-line-number="1168"></td>
        <td id="LC1168" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">rcu_read_unlock</span>();</td>
      </tr>
      <tr>
        <td id="L1169" class="blob-num js-line-number" data-line-number="1169"></td>
        <td id="LC1169" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> __cfqg;</td>
      </tr>
      <tr>
        <td id="L1170" class="blob-num js-line-number" data-line-number="1170"></td>
        <td id="LC1170" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1171" class="blob-num js-line-number" data-line-number="1171"></td>
        <td id="LC1171" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1172" class="blob-num js-line-number" data-line-number="1172"></td>
        <td id="LC1172" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqg)</td>
      </tr>
      <tr>
        <td id="L1173" class="blob-num js-line-number" data-line-number="1173"></td>
        <td id="LC1173" class="blob-code blob-code-inner js-file-line">		cfqg = &amp;cfqd-&gt;root_group;</td>
      </tr>
      <tr>
        <td id="L1174" class="blob-num js-line-number" data-line-number="1174"></td>
        <td id="LC1174" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1175" class="blob-num js-line-number" data-line-number="1175"></td>
        <td id="LC1175" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_init_add_cfqg_lists</span>(cfqd, cfqg, blkcg);</td>
      </tr>
      <tr>
        <td id="L1176" class="blob-num js-line-number" data-line-number="1176"></td>
        <td id="LC1176" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rcu_read_unlock</span>();</td>
      </tr>
      <tr>
        <td id="L1177" class="blob-num js-line-number" data-line-number="1177"></td>
        <td id="LC1177" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqg;</td>
      </tr>
      <tr>
        <td id="L1178" class="blob-num js-line-number" data-line-number="1178"></td>
        <td id="LC1178" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1179" class="blob-num js-line-number" data-line-number="1179"></td>
        <td id="LC1179" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1180" class="blob-num js-line-number" data-line-number="1180"></td>
        <td id="LC1180" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">struct</span> cfq_group *<span class="pl-en">cfq_ref_get_cfqg</span>(<span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L1181" class="blob-num js-line-number" data-line-number="1181"></td>
        <td id="LC1181" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1182" class="blob-num js-line-number" data-line-number="1182"></td>
        <td id="LC1182" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;ref++;</td>
      </tr>
      <tr>
        <td id="L1183" class="blob-num js-line-number" data-line-number="1183"></td>
        <td id="LC1183" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqg;</td>
      </tr>
      <tr>
        <td id="L1184" class="blob-num js-line-number" data-line-number="1184"></td>
        <td id="LC1184" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1185" class="blob-num js-line-number" data-line-number="1185"></td>
        <td id="LC1185" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1186" class="blob-num js-line-number" data-line-number="1186"></td>
        <td id="LC1186" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_link_cfqq_cfqg</span>(<span class="pl-k">struct</span> cfq_queue *cfqq, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L1187" class="blob-num js-line-number" data-line-number="1187"></td>
        <td id="LC1187" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1188" class="blob-num js-line-number" data-line-number="1188"></td>
        <td id="LC1188" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Currently, all async queues are mapped to root group */</span></td>
      </tr>
      <tr>
        <td id="L1189" class="blob-num js-line-number" data-line-number="1189"></td>
        <td id="LC1189" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_cfqq_sync</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L1190" class="blob-num js-line-number" data-line-number="1190"></td>
        <td id="LC1190" class="blob-code blob-code-inner js-file-line">		cfqg = &amp;cfqq-&gt;cfqd-&gt;root_group;</td>
      </tr>
      <tr>
        <td id="L1191" class="blob-num js-line-number" data-line-number="1191"></td>
        <td id="LC1191" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1192" class="blob-num js-line-number" data-line-number="1192"></td>
        <td id="LC1192" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;cfqg = cfqg;</td>
      </tr>
      <tr>
        <td id="L1193" class="blob-num js-line-number" data-line-number="1193"></td>
        <td id="LC1193" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* cfqq reference on cfqg */</span></td>
      </tr>
      <tr>
        <td id="L1194" class="blob-num js-line-number" data-line-number="1194"></td>
        <td id="LC1194" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;cfqg-&gt;ref++;</td>
      </tr>
      <tr>
        <td id="L1195" class="blob-num js-line-number" data-line-number="1195"></td>
        <td id="LC1195" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1196" class="blob-num js-line-number" data-line-number="1196"></td>
        <td id="LC1196" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1197" class="blob-num js-line-number" data-line-number="1197"></td>
        <td id="LC1197" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_put_cfqg</span>(<span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L1198" class="blob-num js-line-number" data-line-number="1198"></td>
        <td id="LC1198" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1199" class="blob-num js-line-number" data-line-number="1199"></td>
        <td id="LC1199" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *st;</td>
      </tr>
      <tr>
        <td id="L1200" class="blob-num js-line-number" data-line-number="1200"></td>
        <td id="LC1200" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> i, j;</td>
      </tr>
      <tr>
        <td id="L1201" class="blob-num js-line-number" data-line-number="1201"></td>
        <td id="LC1201" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1202" class="blob-num js-line-number" data-line-number="1202"></td>
        <td id="LC1202" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(cfqg-&gt;ref &lt;= <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L1203" class="blob-num js-line-number" data-line-number="1203"></td>
        <td id="LC1203" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;ref--;</td>
      </tr>
      <tr>
        <td id="L1204" class="blob-num js-line-number" data-line-number="1204"></td>
        <td id="LC1204" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqg-&gt;ref)</td>
      </tr>
      <tr>
        <td id="L1205" class="blob-num js-line-number" data-line-number="1205"></td>
        <td id="LC1205" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L1206" class="blob-num js-line-number" data-line-number="1206"></td>
        <td id="LC1206" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">for_each_cfqg_st</span>(cfqg, i, j, st)</td>
      </tr>
      <tr>
        <td id="L1207" class="blob-num js-line-number" data-line-number="1207"></td>
        <td id="LC1207" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">BUG_ON</span>(!<span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;st-&gt;rb));</td>
      </tr>
      <tr>
        <td id="L1208" class="blob-num js-line-number" data-line-number="1208"></td>
        <td id="LC1208" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">free_percpu</span>(cfqg-&gt;blkg.<span class="pl-smi">stats_cpu</span>);</td>
      </tr>
      <tr>
        <td id="L1209" class="blob-num js-line-number" data-line-number="1209"></td>
        <td id="LC1209" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">kfree</span>(cfqg);</td>
      </tr>
      <tr>
        <td id="L1210" class="blob-num js-line-number" data-line-number="1210"></td>
        <td id="LC1210" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1211" class="blob-num js-line-number" data-line-number="1211"></td>
        <td id="LC1211" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1212" class="blob-num js-line-number" data-line-number="1212"></td>
        <td id="LC1212" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_destroy_cfqg</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L1213" class="blob-num js-line-number" data-line-number="1213"></td>
        <td id="LC1213" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1214" class="blob-num js-line-number" data-line-number="1214"></td>
        <td id="LC1214" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Something wrong if we are trying to remove same group twice */</span></td>
      </tr>
      <tr>
        <td id="L1215" class="blob-num js-line-number" data-line-number="1215"></td>
        <td id="LC1215" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(<span class="pl-c1">hlist_unhashed</span>(&amp;cfqg-&gt;cfqd_node));</td>
      </tr>
      <tr>
        <td id="L1216" class="blob-num js-line-number" data-line-number="1216"></td>
        <td id="LC1216" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1217" class="blob-num js-line-number" data-line-number="1217"></td>
        <td id="LC1217" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">hlist_del_init</span>(&amp;cfqg-&gt;cfqd_node);</td>
      </tr>
      <tr>
        <td id="L1218" class="blob-num js-line-number" data-line-number="1218"></td>
        <td id="LC1218" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1219" class="blob-num js-line-number" data-line-number="1219"></td>
        <td id="LC1219" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(cfqd-&gt;nr_blkcg_linked_grps &lt;= <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L1220" class="blob-num js-line-number" data-line-number="1220"></td>
        <td id="LC1220" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;nr_blkcg_linked_grps--;</td>
      </tr>
      <tr>
        <td id="L1221" class="blob-num js-line-number" data-line-number="1221"></td>
        <td id="LC1221" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1222" class="blob-num js-line-number" data-line-number="1222"></td>
        <td id="LC1222" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1223" class="blob-num js-line-number" data-line-number="1223"></td>
        <td id="LC1223" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Put the reference taken at the time of creation so that when all</span></td>
      </tr>
      <tr>
        <td id="L1224" class="blob-num js-line-number" data-line-number="1224"></td>
        <td id="LC1224" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * queues are gone, group can be destroyed.</span></td>
      </tr>
      <tr>
        <td id="L1225" class="blob-num js-line-number" data-line-number="1225"></td>
        <td id="LC1225" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1226" class="blob-num js-line-number" data-line-number="1226"></td>
        <td id="LC1226" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_put_cfqg</span>(cfqg);</td>
      </tr>
      <tr>
        <td id="L1227" class="blob-num js-line-number" data-line-number="1227"></td>
        <td id="LC1227" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1228" class="blob-num js-line-number" data-line-number="1228"></td>
        <td id="LC1228" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1229" class="blob-num js-line-number" data-line-number="1229"></td>
        <td id="LC1229" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_release_cfq_groups</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L1230" class="blob-num js-line-number" data-line-number="1230"></td>
        <td id="LC1230" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1231" class="blob-num js-line-number" data-line-number="1231"></td>
        <td id="LC1231" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> hlist_node *pos, *n;</td>
      </tr>
      <tr>
        <td id="L1232" class="blob-num js-line-number" data-line-number="1232"></td>
        <td id="LC1232" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg;</td>
      </tr>
      <tr>
        <td id="L1233" class="blob-num js-line-number" data-line-number="1233"></td>
        <td id="LC1233" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1234" class="blob-num js-line-number" data-line-number="1234"></td>
        <td id="LC1234" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">hlist_for_each_entry_safe</span>(cfqg, pos, n, &amp;cfqd-&gt;cfqg_list, cfqd_node) {</td>
      </tr>
      <tr>
        <td id="L1235" class="blob-num js-line-number" data-line-number="1235"></td>
        <td id="LC1235" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1236" class="blob-num js-line-number" data-line-number="1236"></td>
        <td id="LC1236" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * If cgroup removal path got to blk_group first and removed</span></td>
      </tr>
      <tr>
        <td id="L1237" class="blob-num js-line-number" data-line-number="1237"></td>
        <td id="LC1237" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * it from cgroup list, then it will take care of destroying</span></td>
      </tr>
      <tr>
        <td id="L1238" class="blob-num js-line-number" data-line-number="1238"></td>
        <td id="LC1238" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * cfqg also.</span></td>
      </tr>
      <tr>
        <td id="L1239" class="blob-num js-line-number" data-line-number="1239"></td>
        <td id="LC1239" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L1240" class="blob-num js-line-number" data-line-number="1240"></td>
        <td id="LC1240" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (!<span class="pl-c1">cfq_blkiocg_del_blkio_group</span>(&amp;cfqg-&gt;blkg))</td>
      </tr>
      <tr>
        <td id="L1241" class="blob-num js-line-number" data-line-number="1241"></td>
        <td id="LC1241" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_destroy_cfqg</span>(cfqd, cfqg);</td>
      </tr>
      <tr>
        <td id="L1242" class="blob-num js-line-number" data-line-number="1242"></td>
        <td id="LC1242" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1243" class="blob-num js-line-number" data-line-number="1243"></td>
        <td id="LC1243" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1244" class="blob-num js-line-number" data-line-number="1244"></td>
        <td id="LC1244" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1245" class="blob-num js-line-number" data-line-number="1245"></td>
        <td id="LC1245" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1246" class="blob-num js-line-number" data-line-number="1246"></td>
        <td id="LC1246" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Blk cgroup controller notification saying that blkio_group object is being</span></td>
      </tr>
      <tr>
        <td id="L1247" class="blob-num js-line-number" data-line-number="1247"></td>
        <td id="LC1247" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * delinked as associated cgroup object is going away. That also means that</span></td>
      </tr>
      <tr>
        <td id="L1248" class="blob-num js-line-number" data-line-number="1248"></td>
        <td id="LC1248" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * no new IO will come in this group. So get rid of this group as soon as</span></td>
      </tr>
      <tr>
        <td id="L1249" class="blob-num js-line-number" data-line-number="1249"></td>
        <td id="LC1249" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * any pending IO in the group is finished.</span></td>
      </tr>
      <tr>
        <td id="L1250" class="blob-num js-line-number" data-line-number="1250"></td>
        <td id="LC1250" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L1251" class="blob-num js-line-number" data-line-number="1251"></td>
        <td id="LC1251" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * This function is called under rcu_read_lock(). key is the rcu protected</span></td>
      </tr>
      <tr>
        <td id="L1252" class="blob-num js-line-number" data-line-number="1252"></td>
        <td id="LC1252" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * pointer. That means &quot;key&quot; is a valid cfq_data pointer as long as we are rcu</span></td>
      </tr>
      <tr>
        <td id="L1253" class="blob-num js-line-number" data-line-number="1253"></td>
        <td id="LC1253" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * read lock.</span></td>
      </tr>
      <tr>
        <td id="L1254" class="blob-num js-line-number" data-line-number="1254"></td>
        <td id="LC1254" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L1255" class="blob-num js-line-number" data-line-number="1255"></td>
        <td id="LC1255" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * &quot;key&quot; was fetched from blkio_group under blkio_cgroup-&gt;lock. That means</span></td>
      </tr>
      <tr>
        <td id="L1256" class="blob-num js-line-number" data-line-number="1256"></td>
        <td id="LC1256" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * it should not be NULL as even if elevator was exiting, cgroup deltion</span></td>
      </tr>
      <tr>
        <td id="L1257" class="blob-num js-line-number" data-line-number="1257"></td>
        <td id="LC1257" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * path got to it first.</span></td>
      </tr>
      <tr>
        <td id="L1258" class="blob-num js-line-number" data-line-number="1258"></td>
        <td id="LC1258" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1259" class="blob-num js-line-number" data-line-number="1259"></td>
        <td id="LC1259" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_unlink_blkio_group</span>(<span class="pl-k">void</span> *key, <span class="pl-k">struct</span> blkio_group *blkg)</td>
      </tr>
      <tr>
        <td id="L1260" class="blob-num js-line-number" data-line-number="1260"></td>
        <td id="LC1260" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1261" class="blob-num js-line-number" data-line-number="1261"></td>
        <td id="LC1261" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span>  flags;</td>
      </tr>
      <tr>
        <td id="L1262" class="blob-num js-line-number" data-line-number="1262"></td>
        <td id="LC1262" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = key;</td>
      </tr>
      <tr>
        <td id="L1263" class="blob-num js-line-number" data-line-number="1263"></td>
        <td id="LC1263" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1264" class="blob-num js-line-number" data-line-number="1264"></td>
        <td id="LC1264" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_lock_irqsave</span>(cfqd-&gt;queue-&gt;queue_lock, flags);</td>
      </tr>
      <tr>
        <td id="L1265" class="blob-num js-line-number" data-line-number="1265"></td>
        <td id="LC1265" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_destroy_cfqg</span>(cfqd, <span class="pl-c1">cfqg_of_blkg</span>(blkg));</td>
      </tr>
      <tr>
        <td id="L1266" class="blob-num js-line-number" data-line-number="1266"></td>
        <td id="LC1266" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_unlock_irqrestore</span>(cfqd-&gt;queue-&gt;queue_lock, flags);</td>
      </tr>
      <tr>
        <td id="L1267" class="blob-num js-line-number" data-line-number="1267"></td>
        <td id="LC1267" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1268" class="blob-num js-line-number" data-line-number="1268"></td>
        <td id="LC1268" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1269" class="blob-num js-line-number" data-line-number="1269"></td>
        <td id="LC1269" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span> <span class="pl-c">/* GROUP_IOSCHED */</span></td>
      </tr>
      <tr>
        <td id="L1270" class="blob-num js-line-number" data-line-number="1270"></td>
        <td id="LC1270" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_group *<span class="pl-en">cfq_get_cfqg</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L1271" class="blob-num js-line-number" data-line-number="1271"></td>
        <td id="LC1271" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1272" class="blob-num js-line-number" data-line-number="1272"></td>
        <td id="LC1272" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> &amp;cfqd-&gt;root_group;</td>
      </tr>
      <tr>
        <td id="L1273" class="blob-num js-line-number" data-line-number="1273"></td>
        <td id="LC1273" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1274" class="blob-num js-line-number" data-line-number="1274"></td>
        <td id="LC1274" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1275" class="blob-num js-line-number" data-line-number="1275"></td>
        <td id="LC1275" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">struct</span> cfq_group *<span class="pl-en">cfq_ref_get_cfqg</span>(<span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L1276" class="blob-num js-line-number" data-line-number="1276"></td>
        <td id="LC1276" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1277" class="blob-num js-line-number" data-line-number="1277"></td>
        <td id="LC1277" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqg;</td>
      </tr>
      <tr>
        <td id="L1278" class="blob-num js-line-number" data-line-number="1278"></td>
        <td id="LC1278" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1279" class="blob-num js-line-number" data-line-number="1279"></td>
        <td id="LC1279" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1280" class="blob-num js-line-number" data-line-number="1280"></td>
        <td id="LC1280" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L1281" class="blob-num js-line-number" data-line-number="1281"></td>
        <td id="LC1281" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_link_cfqq_cfqg</span>(<span class="pl-k">struct</span> cfq_queue *cfqq, <span class="pl-k">struct</span> cfq_group *cfqg) {</td>
      </tr>
      <tr>
        <td id="L1282" class="blob-num js-line-number" data-line-number="1282"></td>
        <td id="LC1282" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;cfqg = cfqg;</td>
      </tr>
      <tr>
        <td id="L1283" class="blob-num js-line-number" data-line-number="1283"></td>
        <td id="LC1283" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1284" class="blob-num js-line-number" data-line-number="1284"></td>
        <td id="LC1284" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1285" class="blob-num js-line-number" data-line-number="1285"></td>
        <td id="LC1285" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_release_cfq_groups</span>(<span class="pl-k">struct</span> cfq_data *cfqd) {}</td>
      </tr>
      <tr>
        <td id="L1286" class="blob-num js-line-number" data-line-number="1286"></td>
        <td id="LC1286" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">cfq_put_cfqg</span>(<span class="pl-k">struct</span> cfq_group *cfqg) {}</td>
      </tr>
      <tr>
        <td id="L1287" class="blob-num js-line-number" data-line-number="1287"></td>
        <td id="LC1287" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1288" class="blob-num js-line-number" data-line-number="1288"></td>
        <td id="LC1288" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span> <span class="pl-c">/* GROUP_IOSCHED */</span></td>
      </tr>
      <tr>
        <td id="L1289" class="blob-num js-line-number" data-line-number="1289"></td>
        <td id="LC1289" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1290" class="blob-num js-line-number" data-line-number="1290"></td>
        <td id="LC1290" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1291" class="blob-num js-line-number" data-line-number="1291"></td>
        <td id="LC1291" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * The cfqd-&gt;service_trees holds all pending cfq_queue&#39;s that have</span></td>
      </tr>
      <tr>
        <td id="L1292" class="blob-num js-line-number" data-line-number="1292"></td>
        <td id="LC1292" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * requests waiting to be processed. It is sorted in the order that</span></td>
      </tr>
      <tr>
        <td id="L1293" class="blob-num js-line-number" data-line-number="1293"></td>
        <td id="LC1293" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * we will service the queues.</span></td>
      </tr>
      <tr>
        <td id="L1294" class="blob-num js-line-number" data-line-number="1294"></td>
        <td id="LC1294" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1295" class="blob-num js-line-number" data-line-number="1295"></td>
        <td id="LC1295" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_service_tree_add</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L1296" class="blob-num js-line-number" data-line-number="1296"></td>
        <td id="LC1296" class="blob-code blob-code-inner js-file-line">				 <span class="pl-k">bool</span> add_front)</td>
      </tr>
      <tr>
        <td id="L1297" class="blob-num js-line-number" data-line-number="1297"></td>
        <td id="LC1297" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1298" class="blob-num js-line-number" data-line-number="1298"></td>
        <td id="LC1298" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node **p, *parent;</td>
      </tr>
      <tr>
        <td id="L1299" class="blob-num js-line-number" data-line-number="1299"></td>
        <td id="LC1299" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *__cfqq;</td>
      </tr>
      <tr>
        <td id="L1300" class="blob-num js-line-number" data-line-number="1300"></td>
        <td id="LC1300" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> rb_key;</td>
      </tr>
      <tr>
        <td id="L1301" class="blob-num js-line-number" data-line-number="1301"></td>
        <td id="LC1301" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *service_tree;</td>
      </tr>
      <tr>
        <td id="L1302" class="blob-num js-line-number" data-line-number="1302"></td>
        <td id="LC1302" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> left;</td>
      </tr>
      <tr>
        <td id="L1303" class="blob-num js-line-number" data-line-number="1303"></td>
        <td id="LC1303" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> new_cfqq = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L1304" class="blob-num js-line-number" data-line-number="1304"></td>
        <td id="LC1304" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1305" class="blob-num js-line-number" data-line-number="1305"></td>
        <td id="LC1305" class="blob-code blob-code-inner js-file-line">	service_tree = <span class="pl-c1">service_tree_for</span>(cfqq-&gt;cfqg, <span class="pl-c1">cfqq_prio</span>(cfqq),</td>
      </tr>
      <tr>
        <td id="L1306" class="blob-num js-line-number" data-line-number="1306"></td>
        <td id="LC1306" class="blob-code blob-code-inner js-file-line">						<span class="pl-c1">cfqq_type</span>(cfqq));</td>
      </tr>
      <tr>
        <td id="L1307" class="blob-num js-line-number" data-line-number="1307"></td>
        <td id="LC1307" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_idle</span>(cfqq)) {</td>
      </tr>
      <tr>
        <td id="L1308" class="blob-num js-line-number" data-line-number="1308"></td>
        <td id="LC1308" class="blob-code blob-code-inner js-file-line">		rb_key = CFQ_IDLE_DELAY;</td>
      </tr>
      <tr>
        <td id="L1309" class="blob-num js-line-number" data-line-number="1309"></td>
        <td id="LC1309" class="blob-code blob-code-inner js-file-line">		parent = <span class="pl-c1">rb_last</span>(&amp;service_tree-&gt;rb);</td>
      </tr>
      <tr>
        <td id="L1310" class="blob-num js-line-number" data-line-number="1310"></td>
        <td id="LC1310" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (parent &amp;&amp; parent != &amp;cfqq-&gt;rb_node) {</td>
      </tr>
      <tr>
        <td id="L1311" class="blob-num js-line-number" data-line-number="1311"></td>
        <td id="LC1311" class="blob-code blob-code-inner js-file-line">			__cfqq = <span class="pl-c1">rb_entry</span>(parent, <span class="pl-k">struct</span> cfq_queue, rb_node);</td>
      </tr>
      <tr>
        <td id="L1312" class="blob-num js-line-number" data-line-number="1312"></td>
        <td id="LC1312" class="blob-code blob-code-inner js-file-line">			rb_key += __cfqq-&gt;rb_key;</td>
      </tr>
      <tr>
        <td id="L1313" class="blob-num js-line-number" data-line-number="1313"></td>
        <td id="LC1313" class="blob-code blob-code-inner js-file-line">		} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1314" class="blob-num js-line-number" data-line-number="1314"></td>
        <td id="LC1314" class="blob-code blob-code-inner js-file-line">			rb_key += jiffies;</td>
      </tr>
      <tr>
        <td id="L1315" class="blob-num js-line-number" data-line-number="1315"></td>
        <td id="LC1315" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span> <span class="pl-k">if</span> (!add_front) {</td>
      </tr>
      <tr>
        <td id="L1316" class="blob-num js-line-number" data-line-number="1316"></td>
        <td id="LC1316" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1317" class="blob-num js-line-number" data-line-number="1317"></td>
        <td id="LC1317" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Get our rb key offset. Subtract any residual slice</span></td>
      </tr>
      <tr>
        <td id="L1318" class="blob-num js-line-number" data-line-number="1318"></td>
        <td id="LC1318" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * value carried from last service. A negative resid</span></td>
      </tr>
      <tr>
        <td id="L1319" class="blob-num js-line-number" data-line-number="1319"></td>
        <td id="LC1319" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * count indicates slice overrun, and this should position</span></td>
      </tr>
      <tr>
        <td id="L1320" class="blob-num js-line-number" data-line-number="1320"></td>
        <td id="LC1320" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * the next service time further away in the tree.</span></td>
      </tr>
      <tr>
        <td id="L1321" class="blob-num js-line-number" data-line-number="1321"></td>
        <td id="LC1321" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L1322" class="blob-num js-line-number" data-line-number="1322"></td>
        <td id="LC1322" class="blob-code blob-code-inner js-file-line">		rb_key = <span class="pl-c1">cfq_slice_offset</span>(cfqd, cfqq) + jiffies;</td>
      </tr>
      <tr>
        <td id="L1323" class="blob-num js-line-number" data-line-number="1323"></td>
        <td id="LC1323" class="blob-code blob-code-inner js-file-line">		rb_key -= cfqq-&gt;slice_resid;</td>
      </tr>
      <tr>
        <td id="L1324" class="blob-num js-line-number" data-line-number="1324"></td>
        <td id="LC1324" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;slice_resid = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1325" class="blob-num js-line-number" data-line-number="1325"></td>
        <td id="LC1325" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L1326" class="blob-num js-line-number" data-line-number="1326"></td>
        <td id="LC1326" class="blob-code blob-code-inner js-file-line">		rb_key = -HZ;</td>
      </tr>
      <tr>
        <td id="L1327" class="blob-num js-line-number" data-line-number="1327"></td>
        <td id="LC1327" class="blob-code blob-code-inner js-file-line">		__cfqq = <span class="pl-c1">cfq_rb_first</span>(service_tree);</td>
      </tr>
      <tr>
        <td id="L1328" class="blob-num js-line-number" data-line-number="1328"></td>
        <td id="LC1328" class="blob-code blob-code-inner js-file-line">		rb_key += __cfqq ? __cfqq-&gt;rb_key : jiffies;</td>
      </tr>
      <tr>
        <td id="L1329" class="blob-num js-line-number" data-line-number="1329"></td>
        <td id="LC1329" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1330" class="blob-num js-line-number" data-line-number="1330"></td>
        <td id="LC1330" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1331" class="blob-num js-line-number" data-line-number="1331"></td>
        <td id="LC1331" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">RB_EMPTY_NODE</span>(&amp;cfqq-&gt;rb_node)) {</td>
      </tr>
      <tr>
        <td id="L1332" class="blob-num js-line-number" data-line-number="1332"></td>
        <td id="LC1332" class="blob-code blob-code-inner js-file-line">		new_cfqq = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1333" class="blob-num js-line-number" data-line-number="1333"></td>
        <td id="LC1333" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1334" class="blob-num js-line-number" data-line-number="1334"></td>
        <td id="LC1334" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * same position, nothing more to do</span></td>
      </tr>
      <tr>
        <td id="L1335" class="blob-num js-line-number" data-line-number="1335"></td>
        <td id="LC1335" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L1336" class="blob-num js-line-number" data-line-number="1336"></td>
        <td id="LC1336" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (rb_key == cfqq-&gt;rb_key &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1337" class="blob-num js-line-number" data-line-number="1337"></td>
        <td id="LC1337" class="blob-code blob-code-inner js-file-line">		    cfqq-&gt;service_tree == service_tree)</td>
      </tr>
      <tr>
        <td id="L1338" class="blob-num js-line-number" data-line-number="1338"></td>
        <td id="LC1338" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L1339" class="blob-num js-line-number" data-line-number="1339"></td>
        <td id="LC1339" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1340" class="blob-num js-line-number" data-line-number="1340"></td>
        <td id="LC1340" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_rb_erase</span>(&amp;cfqq-&gt;rb_node, cfqq-&gt;service_tree);</td>
      </tr>
      <tr>
        <td id="L1341" class="blob-num js-line-number" data-line-number="1341"></td>
        <td id="LC1341" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;service_tree = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1342" class="blob-num js-line-number" data-line-number="1342"></td>
        <td id="LC1342" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1343" class="blob-num js-line-number" data-line-number="1343"></td>
        <td id="LC1343" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1344" class="blob-num js-line-number" data-line-number="1344"></td>
        <td id="LC1344" class="blob-code blob-code-inner js-file-line">	left = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L1345" class="blob-num js-line-number" data-line-number="1345"></td>
        <td id="LC1345" class="blob-code blob-code-inner js-file-line">	parent = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1346" class="blob-num js-line-number" data-line-number="1346"></td>
        <td id="LC1346" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;service_tree = service_tree;</td>
      </tr>
      <tr>
        <td id="L1347" class="blob-num js-line-number" data-line-number="1347"></td>
        <td id="LC1347" class="blob-code blob-code-inner js-file-line">	p = &amp;service_tree-&gt;rb.<span class="pl-smi">rb_node</span>;</td>
      </tr>
      <tr>
        <td id="L1348" class="blob-num js-line-number" data-line-number="1348"></td>
        <td id="LC1348" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">while</span> (*p) {</td>
      </tr>
      <tr>
        <td id="L1349" class="blob-num js-line-number" data-line-number="1349"></td>
        <td id="LC1349" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">struct</span> rb_node **n;</td>
      </tr>
      <tr>
        <td id="L1350" class="blob-num js-line-number" data-line-number="1350"></td>
        <td id="LC1350" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1351" class="blob-num js-line-number" data-line-number="1351"></td>
        <td id="LC1351" class="blob-code blob-code-inner js-file-line">		parent = *p;</td>
      </tr>
      <tr>
        <td id="L1352" class="blob-num js-line-number" data-line-number="1352"></td>
        <td id="LC1352" class="blob-code blob-code-inner js-file-line">		__cfqq = <span class="pl-c1">rb_entry</span>(parent, <span class="pl-k">struct</span> cfq_queue, rb_node);</td>
      </tr>
      <tr>
        <td id="L1353" class="blob-num js-line-number" data-line-number="1353"></td>
        <td id="LC1353" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1354" class="blob-num js-line-number" data-line-number="1354"></td>
        <td id="LC1354" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1355" class="blob-num js-line-number" data-line-number="1355"></td>
        <td id="LC1355" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * sort by key, that represents service time.</span></td>
      </tr>
      <tr>
        <td id="L1356" class="blob-num js-line-number" data-line-number="1356"></td>
        <td id="LC1356" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L1357" class="blob-num js-line-number" data-line-number="1357"></td>
        <td id="LC1357" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">time_before</span>(rb_key, __cfqq-&gt;rb_key))</td>
      </tr>
      <tr>
        <td id="L1358" class="blob-num js-line-number" data-line-number="1358"></td>
        <td id="LC1358" class="blob-code blob-code-inner js-file-line">			n = &amp;(*p)-&gt;rb_left;</td>
      </tr>
      <tr>
        <td id="L1359" class="blob-num js-line-number" data-line-number="1359"></td>
        <td id="LC1359" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L1360" class="blob-num js-line-number" data-line-number="1360"></td>
        <td id="LC1360" class="blob-code blob-code-inner js-file-line">			n = &amp;(*p)-&gt;rb_right;</td>
      </tr>
      <tr>
        <td id="L1361" class="blob-num js-line-number" data-line-number="1361"></td>
        <td id="LC1361" class="blob-code blob-code-inner js-file-line">			left = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1362" class="blob-num js-line-number" data-line-number="1362"></td>
        <td id="LC1362" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L1363" class="blob-num js-line-number" data-line-number="1363"></td>
        <td id="LC1363" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1364" class="blob-num js-line-number" data-line-number="1364"></td>
        <td id="LC1364" class="blob-code blob-code-inner js-file-line">		p = n;</td>
      </tr>
      <tr>
        <td id="L1365" class="blob-num js-line-number" data-line-number="1365"></td>
        <td id="LC1365" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1366" class="blob-num js-line-number" data-line-number="1366"></td>
        <td id="LC1366" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1367" class="blob-num js-line-number" data-line-number="1367"></td>
        <td id="LC1367" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (left)</td>
      </tr>
      <tr>
        <td id="L1368" class="blob-num js-line-number" data-line-number="1368"></td>
        <td id="LC1368" class="blob-code blob-code-inner js-file-line">		service_tree-&gt;left = &amp;cfqq-&gt;rb_node;</td>
      </tr>
      <tr>
        <td id="L1369" class="blob-num js-line-number" data-line-number="1369"></td>
        <td id="LC1369" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1370" class="blob-num js-line-number" data-line-number="1370"></td>
        <td id="LC1370" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;rb_key = rb_key;</td>
      </tr>
      <tr>
        <td id="L1371" class="blob-num js-line-number" data-line-number="1371"></td>
        <td id="LC1371" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rb_link_node</span>(&amp;cfqq-&gt;rb_node, parent, p);</td>
      </tr>
      <tr>
        <td id="L1372" class="blob-num js-line-number" data-line-number="1372"></td>
        <td id="LC1372" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rb_insert_color</span>(&amp;cfqq-&gt;rb_node, &amp;service_tree-&gt;rb);</td>
      </tr>
      <tr>
        <td id="L1373" class="blob-num js-line-number" data-line-number="1373"></td>
        <td id="LC1373" class="blob-code blob-code-inner js-file-line">	service_tree-&gt;count++;</td>
      </tr>
      <tr>
        <td id="L1374" class="blob-num js-line-number" data-line-number="1374"></td>
        <td id="LC1374" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (add_front || !new_cfqq)</td>
      </tr>
      <tr>
        <td id="L1375" class="blob-num js-line-number" data-line-number="1375"></td>
        <td id="LC1375" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L1376" class="blob-num js-line-number" data-line-number="1376"></td>
        <td id="LC1376" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_group_notify_queue_add</span>(cfqd, cfqq-&gt;cfqg);</td>
      </tr>
      <tr>
        <td id="L1377" class="blob-num js-line-number" data-line-number="1377"></td>
        <td id="LC1377" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1378" class="blob-num js-line-number" data-line-number="1378"></td>
        <td id="LC1378" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1379" class="blob-num js-line-number" data-line-number="1379"></td>
        <td id="LC1379" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *</td>
      </tr>
      <tr>
        <td id="L1380" class="blob-num js-line-number" data-line-number="1380"></td>
        <td id="LC1380" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_prio_tree_lookup</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> rb_root *root,</td>
      </tr>
      <tr>
        <td id="L1381" class="blob-num js-line-number" data-line-number="1381"></td>
        <td id="LC1381" class="blob-code blob-code-inner js-file-line">		     <span class="pl-c1">sector_t</span> sector, <span class="pl-k">struct</span> rb_node **ret_parent,</td>
      </tr>
      <tr>
        <td id="L1382" class="blob-num js-line-number" data-line-number="1382"></td>
        <td id="LC1382" class="blob-code blob-code-inner js-file-line">		     <span class="pl-k">struct</span> rb_node ***rb_link)</td>
      </tr>
      <tr>
        <td id="L1383" class="blob-num js-line-number" data-line-number="1383"></td>
        <td id="LC1383" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1384" class="blob-num js-line-number" data-line-number="1384"></td>
        <td id="LC1384" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node **p, *parent;</td>
      </tr>
      <tr>
        <td id="L1385" class="blob-num js-line-number" data-line-number="1385"></td>
        <td id="LC1385" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1386" class="blob-num js-line-number" data-line-number="1386"></td>
        <td id="LC1386" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1387" class="blob-num js-line-number" data-line-number="1387"></td>
        <td id="LC1387" class="blob-code blob-code-inner js-file-line">	parent = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1388" class="blob-num js-line-number" data-line-number="1388"></td>
        <td id="LC1388" class="blob-code blob-code-inner js-file-line">	p = &amp;root-&gt;rb_node;</td>
      </tr>
      <tr>
        <td id="L1389" class="blob-num js-line-number" data-line-number="1389"></td>
        <td id="LC1389" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">while</span> (*p) {</td>
      </tr>
      <tr>
        <td id="L1390" class="blob-num js-line-number" data-line-number="1390"></td>
        <td id="LC1390" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">struct</span> rb_node **n;</td>
      </tr>
      <tr>
        <td id="L1391" class="blob-num js-line-number" data-line-number="1391"></td>
        <td id="LC1391" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1392" class="blob-num js-line-number" data-line-number="1392"></td>
        <td id="LC1392" class="blob-code blob-code-inner js-file-line">		parent = *p;</td>
      </tr>
      <tr>
        <td id="L1393" class="blob-num js-line-number" data-line-number="1393"></td>
        <td id="LC1393" class="blob-code blob-code-inner js-file-line">		cfqq = <span class="pl-c1">rb_entry</span>(parent, <span class="pl-k">struct</span> cfq_queue, p_node);</td>
      </tr>
      <tr>
        <td id="L1394" class="blob-num js-line-number" data-line-number="1394"></td>
        <td id="LC1394" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1395" class="blob-num js-line-number" data-line-number="1395"></td>
        <td id="LC1395" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1396" class="blob-num js-line-number" data-line-number="1396"></td>
        <td id="LC1396" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Sort strictly based on sector.  Smallest to the left,</span></td>
      </tr>
      <tr>
        <td id="L1397" class="blob-num js-line-number" data-line-number="1397"></td>
        <td id="LC1397" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * largest to the right.</span></td>
      </tr>
      <tr>
        <td id="L1398" class="blob-num js-line-number" data-line-number="1398"></td>
        <td id="LC1398" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L1399" class="blob-num js-line-number" data-line-number="1399"></td>
        <td id="LC1399" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (sector &gt; <span class="pl-c1">blk_rq_pos</span>(cfqq-&gt;next_rq))</td>
      </tr>
      <tr>
        <td id="L1400" class="blob-num js-line-number" data-line-number="1400"></td>
        <td id="LC1400" class="blob-code blob-code-inner js-file-line">			n = &amp;(*p)-&gt;rb_right;</td>
      </tr>
      <tr>
        <td id="L1401" class="blob-num js-line-number" data-line-number="1401"></td>
        <td id="LC1401" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span> <span class="pl-k">if</span> (sector &lt; <span class="pl-c1">blk_rq_pos</span>(cfqq-&gt;next_rq))</td>
      </tr>
      <tr>
        <td id="L1402" class="blob-num js-line-number" data-line-number="1402"></td>
        <td id="LC1402" class="blob-code blob-code-inner js-file-line">			n = &amp;(*p)-&gt;rb_left;</td>
      </tr>
      <tr>
        <td id="L1403" class="blob-num js-line-number" data-line-number="1403"></td>
        <td id="LC1403" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1404" class="blob-num js-line-number" data-line-number="1404"></td>
        <td id="LC1404" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L1405" class="blob-num js-line-number" data-line-number="1405"></td>
        <td id="LC1405" class="blob-code blob-code-inner js-file-line">		p = n;</td>
      </tr>
      <tr>
        <td id="L1406" class="blob-num js-line-number" data-line-number="1406"></td>
        <td id="LC1406" class="blob-code blob-code-inner js-file-line">		cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1407" class="blob-num js-line-number" data-line-number="1407"></td>
        <td id="LC1407" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1408" class="blob-num js-line-number" data-line-number="1408"></td>
        <td id="LC1408" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1409" class="blob-num js-line-number" data-line-number="1409"></td>
        <td id="LC1409" class="blob-code blob-code-inner js-file-line">	*ret_parent = parent;</td>
      </tr>
      <tr>
        <td id="L1410" class="blob-num js-line-number" data-line-number="1410"></td>
        <td id="LC1410" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (rb_link)</td>
      </tr>
      <tr>
        <td id="L1411" class="blob-num js-line-number" data-line-number="1411"></td>
        <td id="LC1411" class="blob-code blob-code-inner js-file-line">		*rb_link = p;</td>
      </tr>
      <tr>
        <td id="L1412" class="blob-num js-line-number" data-line-number="1412"></td>
        <td id="LC1412" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqq;</td>
      </tr>
      <tr>
        <td id="L1413" class="blob-num js-line-number" data-line-number="1413"></td>
        <td id="LC1413" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1414" class="blob-num js-line-number" data-line-number="1414"></td>
        <td id="LC1414" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1415" class="blob-num js-line-number" data-line-number="1415"></td>
        <td id="LC1415" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_prio_tree_add</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L1416" class="blob-num js-line-number" data-line-number="1416"></td>
        <td id="LC1416" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1417" class="blob-num js-line-number" data-line-number="1417"></td>
        <td id="LC1417" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node **p, *parent;</td>
      </tr>
      <tr>
        <td id="L1418" class="blob-num js-line-number" data-line-number="1418"></td>
        <td id="LC1418" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *__cfqq;</td>
      </tr>
      <tr>
        <td id="L1419" class="blob-num js-line-number" data-line-number="1419"></td>
        <td id="LC1419" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1420" class="blob-num js-line-number" data-line-number="1420"></td>
        <td id="LC1420" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;p_root) {</td>
      </tr>
      <tr>
        <td id="L1421" class="blob-num js-line-number" data-line-number="1421"></td>
        <td id="LC1421" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">rb_erase</span>(&amp;cfqq-&gt;p_node, cfqq-&gt;p_root);</td>
      </tr>
      <tr>
        <td id="L1422" class="blob-num js-line-number" data-line-number="1422"></td>
        <td id="LC1422" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;p_root = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1423" class="blob-num js-line-number" data-line-number="1423"></td>
        <td id="LC1423" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1424" class="blob-num js-line-number" data-line-number="1424"></td>
        <td id="LC1424" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1425" class="blob-num js-line-number" data-line-number="1425"></td>
        <td id="LC1425" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_idle</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L1426" class="blob-num js-line-number" data-line-number="1426"></td>
        <td id="LC1426" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L1427" class="blob-num js-line-number" data-line-number="1427"></td>
        <td id="LC1427" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqq-&gt;next_rq)</td>
      </tr>
      <tr>
        <td id="L1428" class="blob-num js-line-number" data-line-number="1428"></td>
        <td id="LC1428" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L1429" class="blob-num js-line-number" data-line-number="1429"></td>
        <td id="LC1429" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1430" class="blob-num js-line-number" data-line-number="1430"></td>
        <td id="LC1430" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;p_root = &amp;cfqd-&gt;prio_trees[cfqq-&gt;org_ioprio];</td>
      </tr>
      <tr>
        <td id="L1431" class="blob-num js-line-number" data-line-number="1431"></td>
        <td id="LC1431" class="blob-code blob-code-inner js-file-line">	__cfqq = <span class="pl-c1">cfq_prio_tree_lookup</span>(cfqd, cfqq-&gt;p_root,</td>
      </tr>
      <tr>
        <td id="L1432" class="blob-num js-line-number" data-line-number="1432"></td>
        <td id="LC1432" class="blob-code blob-code-inner js-file-line">				      <span class="pl-c1">blk_rq_pos</span>(cfqq-&gt;next_rq), &amp;parent, &amp;p);</td>
      </tr>
      <tr>
        <td id="L1433" class="blob-num js-line-number" data-line-number="1433"></td>
        <td id="LC1433" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!__cfqq) {</td>
      </tr>
      <tr>
        <td id="L1434" class="blob-num js-line-number" data-line-number="1434"></td>
        <td id="LC1434" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">rb_link_node</span>(&amp;cfqq-&gt;p_node, parent, p);</td>
      </tr>
      <tr>
        <td id="L1435" class="blob-num js-line-number" data-line-number="1435"></td>
        <td id="LC1435" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">rb_insert_color</span>(&amp;cfqq-&gt;p_node, cfqq-&gt;p_root);</td>
      </tr>
      <tr>
        <td id="L1436" class="blob-num js-line-number" data-line-number="1436"></td>
        <td id="LC1436" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1437" class="blob-num js-line-number" data-line-number="1437"></td>
        <td id="LC1437" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;p_root = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1438" class="blob-num js-line-number" data-line-number="1438"></td>
        <td id="LC1438" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1439" class="blob-num js-line-number" data-line-number="1439"></td>
        <td id="LC1439" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1440" class="blob-num js-line-number" data-line-number="1440"></td>
        <td id="LC1440" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1441" class="blob-num js-line-number" data-line-number="1441"></td>
        <td id="LC1441" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Update cfqq&#39;s position in the service tree.</span></td>
      </tr>
      <tr>
        <td id="L1442" class="blob-num js-line-number" data-line-number="1442"></td>
        <td id="LC1442" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1443" class="blob-num js-line-number" data-line-number="1443"></td>
        <td id="LC1443" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_resort_rr_list</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L1444" class="blob-num js-line-number" data-line-number="1444"></td>
        <td id="LC1444" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1445" class="blob-num js-line-number" data-line-number="1445"></td>
        <td id="LC1445" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1446" class="blob-num js-line-number" data-line-number="1446"></td>
        <td id="LC1446" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Resorting requires the cfqq to be on the RR list already.</span></td>
      </tr>
      <tr>
        <td id="L1447" class="blob-num js-line-number" data-line-number="1447"></td>
        <td id="LC1447" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1448" class="blob-num js-line-number" data-line-number="1448"></td>
        <td id="LC1448" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_on_rr</span>(cfqq)) {</td>
      </tr>
      <tr>
        <td id="L1449" class="blob-num js-line-number" data-line-number="1449"></td>
        <td id="LC1449" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_service_tree_add</span>(cfqd, cfqq, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L1450" class="blob-num js-line-number" data-line-number="1450"></td>
        <td id="LC1450" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_prio_tree_add</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1451" class="blob-num js-line-number" data-line-number="1451"></td>
        <td id="LC1451" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1452" class="blob-num js-line-number" data-line-number="1452"></td>
        <td id="LC1452" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1453" class="blob-num js-line-number" data-line-number="1453"></td>
        <td id="LC1453" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1454" class="blob-num js-line-number" data-line-number="1454"></td>
        <td id="LC1454" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1455" class="blob-num js-line-number" data-line-number="1455"></td>
        <td id="LC1455" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * add to busy list of queues for service, trying to be fair in ordering</span></td>
      </tr>
      <tr>
        <td id="L1456" class="blob-num js-line-number" data-line-number="1456"></td>
        <td id="LC1456" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * the pending list according to last request service</span></td>
      </tr>
      <tr>
        <td id="L1457" class="blob-num js-line-number" data-line-number="1457"></td>
        <td id="LC1457" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1458" class="blob-num js-line-number" data-line-number="1458"></td>
        <td id="LC1458" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_add_cfqq_rr</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L1459" class="blob-num js-line-number" data-line-number="1459"></td>
        <td id="LC1459" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1460" class="blob-num js-line-number" data-line-number="1460"></td>
        <td id="LC1460" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>add_to_rr<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1461" class="blob-num js-line-number" data-line-number="1461"></td>
        <td id="LC1461" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(<span class="pl-c1">cfq_cfqq_on_rr</span>(cfqq));</td>
      </tr>
      <tr>
        <td id="L1462" class="blob-num js-line-number" data-line-number="1462"></td>
        <td id="LC1462" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_mark_cfqq_on_rr</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1463" class="blob-num js-line-number" data-line-number="1463"></td>
        <td id="LC1463" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;busy_queues++;</td>
      </tr>
      <tr>
        <td id="L1464" class="blob-num js-line-number" data-line-number="1464"></td>
        <td id="LC1464" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_sync</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L1465" class="blob-num js-line-number" data-line-number="1465"></td>
        <td id="LC1465" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;busy_sync_queues++;</td>
      </tr>
      <tr>
        <td id="L1466" class="blob-num js-line-number" data-line-number="1466"></td>
        <td id="LC1466" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1467" class="blob-num js-line-number" data-line-number="1467"></td>
        <td id="LC1467" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_resort_rr_list</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1468" class="blob-num js-line-number" data-line-number="1468"></td>
        <td id="LC1468" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1469" class="blob-num js-line-number" data-line-number="1469"></td>
        <td id="LC1469" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1470" class="blob-num js-line-number" data-line-number="1470"></td>
        <td id="LC1470" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1471" class="blob-num js-line-number" data-line-number="1471"></td>
        <td id="LC1471" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Called when the cfqq no longer has requests pending, remove it from</span></td>
      </tr>
      <tr>
        <td id="L1472" class="blob-num js-line-number" data-line-number="1472"></td>
        <td id="LC1472" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * the service tree.</span></td>
      </tr>
      <tr>
        <td id="L1473" class="blob-num js-line-number" data-line-number="1473"></td>
        <td id="LC1473" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1474" class="blob-num js-line-number" data-line-number="1474"></td>
        <td id="LC1474" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_del_cfqq_rr</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L1475" class="blob-num js-line-number" data-line-number="1475"></td>
        <td id="LC1475" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1476" class="blob-num js-line-number" data-line-number="1476"></td>
        <td id="LC1476" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>del_from_rr<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L1477" class="blob-num js-line-number" data-line-number="1477"></td>
        <td id="LC1477" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(!<span class="pl-c1">cfq_cfqq_on_rr</span>(cfqq));</td>
      </tr>
      <tr>
        <td id="L1478" class="blob-num js-line-number" data-line-number="1478"></td>
        <td id="LC1478" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_clear_cfqq_on_rr</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1479" class="blob-num js-line-number" data-line-number="1479"></td>
        <td id="LC1479" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1480" class="blob-num js-line-number" data-line-number="1480"></td>
        <td id="LC1480" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">RB_EMPTY_NODE</span>(&amp;cfqq-&gt;rb_node)) {</td>
      </tr>
      <tr>
        <td id="L1481" class="blob-num js-line-number" data-line-number="1481"></td>
        <td id="LC1481" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_rb_erase</span>(&amp;cfqq-&gt;rb_node, cfqq-&gt;service_tree);</td>
      </tr>
      <tr>
        <td id="L1482" class="blob-num js-line-number" data-line-number="1482"></td>
        <td id="LC1482" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;service_tree = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1483" class="blob-num js-line-number" data-line-number="1483"></td>
        <td id="LC1483" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1484" class="blob-num js-line-number" data-line-number="1484"></td>
        <td id="LC1484" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;p_root) {</td>
      </tr>
      <tr>
        <td id="L1485" class="blob-num js-line-number" data-line-number="1485"></td>
        <td id="LC1485" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">rb_erase</span>(&amp;cfqq-&gt;p_node, cfqq-&gt;p_root);</td>
      </tr>
      <tr>
        <td id="L1486" class="blob-num js-line-number" data-line-number="1486"></td>
        <td id="LC1486" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;p_root = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1487" class="blob-num js-line-number" data-line-number="1487"></td>
        <td id="LC1487" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1488" class="blob-num js-line-number" data-line-number="1488"></td>
        <td id="LC1488" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1489" class="blob-num js-line-number" data-line-number="1489"></td>
        <td id="LC1489" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_group_notify_queue_del</span>(cfqd, cfqq-&gt;cfqg);</td>
      </tr>
      <tr>
        <td id="L1490" class="blob-num js-line-number" data-line-number="1490"></td>
        <td id="LC1490" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(!cfqd-&gt;busy_queues);</td>
      </tr>
      <tr>
        <td id="L1491" class="blob-num js-line-number" data-line-number="1491"></td>
        <td id="LC1491" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;busy_queues--;</td>
      </tr>
      <tr>
        <td id="L1492" class="blob-num js-line-number" data-line-number="1492"></td>
        <td id="LC1492" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_sync</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L1493" class="blob-num js-line-number" data-line-number="1493"></td>
        <td id="LC1493" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;busy_sync_queues--;</td>
      </tr>
      <tr>
        <td id="L1494" class="blob-num js-line-number" data-line-number="1494"></td>
        <td id="LC1494" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1495" class="blob-num js-line-number" data-line-number="1495"></td>
        <td id="LC1495" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1496" class="blob-num js-line-number" data-line-number="1496"></td>
        <td id="LC1496" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1497" class="blob-num js-line-number" data-line-number="1497"></td>
        <td id="LC1497" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * rb tree support functions</span></td>
      </tr>
      <tr>
        <td id="L1498" class="blob-num js-line-number" data-line-number="1498"></td>
        <td id="LC1498" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1499" class="blob-num js-line-number" data-line-number="1499"></td>
        <td id="LC1499" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_del_rq_rb</span>(<span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L1500" class="blob-num js-line-number" data-line-number="1500"></td>
        <td id="LC1500" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1501" class="blob-num js-line-number" data-line-number="1501"></td>
        <td id="LC1501" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">RQ_CFQQ</span>(rq);</td>
      </tr>
      <tr>
        <td id="L1502" class="blob-num js-line-number" data-line-number="1502"></td>
        <td id="LC1502" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">const</span> <span class="pl-k">int</span> <span class="pl-c1">sync</span> = <span class="pl-c1">rq_is_sync</span>(rq);</td>
      </tr>
      <tr>
        <td id="L1503" class="blob-num js-line-number" data-line-number="1503"></td>
        <td id="LC1503" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1504" class="blob-num js-line-number" data-line-number="1504"></td>
        <td id="LC1504" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(!cfqq-&gt;queued[<span class="pl-c1">sync</span>]);</td>
      </tr>
      <tr>
        <td id="L1505" class="blob-num js-line-number" data-line-number="1505"></td>
        <td id="LC1505" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;queued[<span class="pl-c1">sync</span>]--;</td>
      </tr>
      <tr>
        <td id="L1506" class="blob-num js-line-number" data-line-number="1506"></td>
        <td id="LC1506" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1507" class="blob-num js-line-number" data-line-number="1507"></td>
        <td id="LC1507" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">elv_rb_del</span>(&amp;cfqq-&gt;sort_list, rq);</td>
      </tr>
      <tr>
        <td id="L1508" class="blob-num js-line-number" data-line-number="1508"></td>
        <td id="LC1508" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1509" class="blob-num js-line-number" data-line-number="1509"></td>
        <td id="LC1509" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_on_rr</span>(cfqq) &amp;&amp; <span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list)) {</td>
      </tr>
      <tr>
        <td id="L1510" class="blob-num js-line-number" data-line-number="1510"></td>
        <td id="LC1510" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1511" class="blob-num js-line-number" data-line-number="1511"></td>
        <td id="LC1511" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Queue will be deleted from service tree when we actually</span></td>
      </tr>
      <tr>
        <td id="L1512" class="blob-num js-line-number" data-line-number="1512"></td>
        <td id="LC1512" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * expire it later. Right now just remove it from prio tree</span></td>
      </tr>
      <tr>
        <td id="L1513" class="blob-num js-line-number" data-line-number="1513"></td>
        <td id="LC1513" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * as it is empty.</span></td>
      </tr>
      <tr>
        <td id="L1514" class="blob-num js-line-number" data-line-number="1514"></td>
        <td id="LC1514" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L1515" class="blob-num js-line-number" data-line-number="1515"></td>
        <td id="LC1515" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cfqq-&gt;p_root) {</td>
      </tr>
      <tr>
        <td id="L1516" class="blob-num js-line-number" data-line-number="1516"></td>
        <td id="LC1516" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">rb_erase</span>(&amp;cfqq-&gt;p_node, cfqq-&gt;p_root);</td>
      </tr>
      <tr>
        <td id="L1517" class="blob-num js-line-number" data-line-number="1517"></td>
        <td id="LC1517" class="blob-code blob-code-inner js-file-line">			cfqq-&gt;p_root = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1518" class="blob-num js-line-number" data-line-number="1518"></td>
        <td id="LC1518" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L1519" class="blob-num js-line-number" data-line-number="1519"></td>
        <td id="LC1519" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1520" class="blob-num js-line-number" data-line-number="1520"></td>
        <td id="LC1520" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1521" class="blob-num js-line-number" data-line-number="1521"></td>
        <td id="LC1521" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1522" class="blob-num js-line-number" data-line-number="1522"></td>
        <td id="LC1522" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_add_rq_rb</span>(<span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L1523" class="blob-num js-line-number" data-line-number="1523"></td>
        <td id="LC1523" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1524" class="blob-num js-line-number" data-line-number="1524"></td>
        <td id="LC1524" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">RQ_CFQQ</span>(rq);</td>
      </tr>
      <tr>
        <td id="L1525" class="blob-num js-line-number" data-line-number="1525"></td>
        <td id="LC1525" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = cfqq-&gt;cfqd;</td>
      </tr>
      <tr>
        <td id="L1526" class="blob-num js-line-number" data-line-number="1526"></td>
        <td id="LC1526" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request *prev;</td>
      </tr>
      <tr>
        <td id="L1527" class="blob-num js-line-number" data-line-number="1527"></td>
        <td id="LC1527" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1528" class="blob-num js-line-number" data-line-number="1528"></td>
        <td id="LC1528" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;queued[<span class="pl-c1">rq_is_sync</span>(rq)]++;</td>
      </tr>
      <tr>
        <td id="L1529" class="blob-num js-line-number" data-line-number="1529"></td>
        <td id="LC1529" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1530" class="blob-num js-line-number" data-line-number="1530"></td>
        <td id="LC1530" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">elv_rb_add</span>(&amp;cfqq-&gt;sort_list, rq);</td>
      </tr>
      <tr>
        <td id="L1531" class="blob-num js-line-number" data-line-number="1531"></td>
        <td id="LC1531" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1532" class="blob-num js-line-number" data-line-number="1532"></td>
        <td id="LC1532" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_cfqq_on_rr</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L1533" class="blob-num js-line-number" data-line-number="1533"></td>
        <td id="LC1533" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_add_cfqq_rr</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1534" class="blob-num js-line-number" data-line-number="1534"></td>
        <td id="LC1534" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1535" class="blob-num js-line-number" data-line-number="1535"></td>
        <td id="LC1535" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1536" class="blob-num js-line-number" data-line-number="1536"></td>
        <td id="LC1536" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * check if this request is a better next-serve candidate</span></td>
      </tr>
      <tr>
        <td id="L1537" class="blob-num js-line-number" data-line-number="1537"></td>
        <td id="LC1537" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1538" class="blob-num js-line-number" data-line-number="1538"></td>
        <td id="LC1538" class="blob-code blob-code-inner js-file-line">	prev = cfqq-&gt;next_rq;</td>
      </tr>
      <tr>
        <td id="L1539" class="blob-num js-line-number" data-line-number="1539"></td>
        <td id="LC1539" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;next_rq = <span class="pl-c1">cfq_choose_req</span>(cfqd, cfqq-&gt;next_rq, rq, cfqd-&gt;last_position);</td>
      </tr>
      <tr>
        <td id="L1540" class="blob-num js-line-number" data-line-number="1540"></td>
        <td id="LC1540" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1541" class="blob-num js-line-number" data-line-number="1541"></td>
        <td id="LC1541" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1542" class="blob-num js-line-number" data-line-number="1542"></td>
        <td id="LC1542" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * adjust priority tree position, if -&gt;next_rq changes</span></td>
      </tr>
      <tr>
        <td id="L1543" class="blob-num js-line-number" data-line-number="1543"></td>
        <td id="LC1543" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1544" class="blob-num js-line-number" data-line-number="1544"></td>
        <td id="LC1544" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (prev != cfqq-&gt;next_rq)</td>
      </tr>
      <tr>
        <td id="L1545" class="blob-num js-line-number" data-line-number="1545"></td>
        <td id="LC1545" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_prio_tree_add</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1546" class="blob-num js-line-number" data-line-number="1546"></td>
        <td id="LC1546" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1547" class="blob-num js-line-number" data-line-number="1547"></td>
        <td id="LC1547" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(!cfqq-&gt;next_rq);</td>
      </tr>
      <tr>
        <td id="L1548" class="blob-num js-line-number" data-line-number="1548"></td>
        <td id="LC1548" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1549" class="blob-num js-line-number" data-line-number="1549"></td>
        <td id="LC1549" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1550" class="blob-num js-line-number" data-line-number="1550"></td>
        <td id="LC1550" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_reposition_rq_rb</span>(<span class="pl-k">struct</span> cfq_queue *cfqq, <span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L1551" class="blob-num js-line-number" data-line-number="1551"></td>
        <td id="LC1551" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1552" class="blob-num js-line-number" data-line-number="1552"></td>
        <td id="LC1552" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">elv_rb_del</span>(&amp;cfqq-&gt;sort_list, rq);</td>
      </tr>
      <tr>
        <td id="L1553" class="blob-num js-line-number" data-line-number="1553"></td>
        <td id="LC1553" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;queued[<span class="pl-c1">rq_is_sync</span>(rq)]--;</td>
      </tr>
      <tr>
        <td id="L1554" class="blob-num js-line-number" data-line-number="1554"></td>
        <td id="LC1554" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_io_remove_stats</span>(&amp;(<span class="pl-c1">RQ_CFQG</span>(rq))-&gt;blkg,</td>
      </tr>
      <tr>
        <td id="L1555" class="blob-num js-line-number" data-line-number="1555"></td>
        <td id="LC1555" class="blob-code blob-code-inner js-file-line">					<span class="pl-c1">rq_data_dir</span>(rq), <span class="pl-c1">rq_is_sync</span>(rq));</td>
      </tr>
      <tr>
        <td id="L1556" class="blob-num js-line-number" data-line-number="1556"></td>
        <td id="LC1556" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_add_rq_rb</span>(rq);</td>
      </tr>
      <tr>
        <td id="L1557" class="blob-num js-line-number" data-line-number="1557"></td>
        <td id="LC1557" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_io_add_stats</span>(&amp;(<span class="pl-c1">RQ_CFQG</span>(rq))-&gt;blkg,</td>
      </tr>
      <tr>
        <td id="L1558" class="blob-num js-line-number" data-line-number="1558"></td>
        <td id="LC1558" class="blob-code blob-code-inner js-file-line">			&amp;cfqq-&gt;cfqd-&gt;serving_group-&gt;blkg, <span class="pl-c1">rq_data_dir</span>(rq),</td>
      </tr>
      <tr>
        <td id="L1559" class="blob-num js-line-number" data-line-number="1559"></td>
        <td id="LC1559" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">rq_is_sync</span>(rq));</td>
      </tr>
      <tr>
        <td id="L1560" class="blob-num js-line-number" data-line-number="1560"></td>
        <td id="LC1560" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1561" class="blob-num js-line-number" data-line-number="1561"></td>
        <td id="LC1561" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1562" class="blob-num js-line-number" data-line-number="1562"></td>
        <td id="LC1562" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> request *</td>
      </tr>
      <tr>
        <td id="L1563" class="blob-num js-line-number" data-line-number="1563"></td>
        <td id="LC1563" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_find_rq_fmerge</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> bio *bio)</td>
      </tr>
      <tr>
        <td id="L1564" class="blob-num js-line-number" data-line-number="1564"></td>
        <td id="LC1564" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1565" class="blob-num js-line-number" data-line-number="1565"></td>
        <td id="LC1565" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> task_struct *tsk = current;</td>
      </tr>
      <tr>
        <td id="L1566" class="blob-num js-line-number" data-line-number="1566"></td>
        <td id="LC1566" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *cic;</td>
      </tr>
      <tr>
        <td id="L1567" class="blob-num js-line-number" data-line-number="1567"></td>
        <td id="LC1567" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L1568" class="blob-num js-line-number" data-line-number="1568"></td>
        <td id="LC1568" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1569" class="blob-num js-line-number" data-line-number="1569"></td>
        <td id="LC1569" class="blob-code blob-code-inner js-file-line">	cic = <span class="pl-c1">cfq_cic_lookup</span>(cfqd, tsk-&gt;io_context);</td>
      </tr>
      <tr>
        <td id="L1570" class="blob-num js-line-number" data-line-number="1570"></td>
        <td id="LC1570" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cic)</td>
      </tr>
      <tr>
        <td id="L1571" class="blob-num js-line-number" data-line-number="1571"></td>
        <td id="LC1571" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1572" class="blob-num js-line-number" data-line-number="1572"></td>
        <td id="LC1572" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1573" class="blob-num js-line-number" data-line-number="1573"></td>
        <td id="LC1573" class="blob-code blob-code-inner js-file-line">	cfqq = <span class="pl-c1">cic_to_cfqq</span>(cic, <span class="pl-c1">cfq_bio_sync</span>(bio));</td>
      </tr>
      <tr>
        <td id="L1574" class="blob-num js-line-number" data-line-number="1574"></td>
        <td id="LC1574" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq) {</td>
      </tr>
      <tr>
        <td id="L1575" class="blob-num js-line-number" data-line-number="1575"></td>
        <td id="LC1575" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">sector_t</span> sector = bio-&gt;bi_sector + <span class="pl-c1">bio_sectors</span>(bio);</td>
      </tr>
      <tr>
        <td id="L1576" class="blob-num js-line-number" data-line-number="1576"></td>
        <td id="LC1576" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1577" class="blob-num js-line-number" data-line-number="1577"></td>
        <td id="LC1577" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">elv_rb_find</span>(&amp;cfqq-&gt;sort_list, sector);</td>
      </tr>
      <tr>
        <td id="L1578" class="blob-num js-line-number" data-line-number="1578"></td>
        <td id="LC1578" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1579" class="blob-num js-line-number" data-line-number="1579"></td>
        <td id="LC1579" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1580" class="blob-num js-line-number" data-line-number="1580"></td>
        <td id="LC1580" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1581" class="blob-num js-line-number" data-line-number="1581"></td>
        <td id="LC1581" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1582" class="blob-num js-line-number" data-line-number="1582"></td>
        <td id="LC1582" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1583" class="blob-num js-line-number" data-line-number="1583"></td>
        <td id="LC1583" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_activate_request</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L1584" class="blob-num js-line-number" data-line-number="1584"></td>
        <td id="LC1584" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1585" class="blob-num js-line-number" data-line-number="1585"></td>
        <td id="LC1585" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = q-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L1586" class="blob-num js-line-number" data-line-number="1586"></td>
        <td id="LC1586" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1587" class="blob-num js-line-number" data-line-number="1587"></td>
        <td id="LC1587" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;rq_in_driver++;</td>
      </tr>
      <tr>
        <td id="L1588" class="blob-num js-line-number" data-line-number="1588"></td>
        <td id="LC1588" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, <span class="pl-c1">RQ_CFQQ</span>(rq), <span class="pl-s"><span class="pl-pds">&quot;</span>activate rq, drv=<span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L1589" class="blob-num js-line-number" data-line-number="1589"></td>
        <td id="LC1589" class="blob-code blob-code-inner js-file-line">						cfqd-&gt;rq_in_driver);</td>
      </tr>
      <tr>
        <td id="L1590" class="blob-num js-line-number" data-line-number="1590"></td>
        <td id="LC1590" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1591" class="blob-num js-line-number" data-line-number="1591"></td>
        <td id="LC1591" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;last_position = <span class="pl-c1">blk_rq_pos</span>(rq) + <span class="pl-c1">blk_rq_sectors</span>(rq);</td>
      </tr>
      <tr>
        <td id="L1592" class="blob-num js-line-number" data-line-number="1592"></td>
        <td id="LC1592" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1593" class="blob-num js-line-number" data-line-number="1593"></td>
        <td id="LC1593" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1594" class="blob-num js-line-number" data-line-number="1594"></td>
        <td id="LC1594" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_deactivate_request</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L1595" class="blob-num js-line-number" data-line-number="1595"></td>
        <td id="LC1595" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1596" class="blob-num js-line-number" data-line-number="1596"></td>
        <td id="LC1596" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = q-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L1597" class="blob-num js-line-number" data-line-number="1597"></td>
        <td id="LC1597" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1598" class="blob-num js-line-number" data-line-number="1598"></td>
        <td id="LC1598" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">WARN_ON</span>(!cfqd-&gt;rq_in_driver);</td>
      </tr>
      <tr>
        <td id="L1599" class="blob-num js-line-number" data-line-number="1599"></td>
        <td id="LC1599" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;rq_in_driver--;</td>
      </tr>
      <tr>
        <td id="L1600" class="blob-num js-line-number" data-line-number="1600"></td>
        <td id="LC1600" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, <span class="pl-c1">RQ_CFQQ</span>(rq), <span class="pl-s"><span class="pl-pds">&quot;</span>deactivate rq, drv=<span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L1601" class="blob-num js-line-number" data-line-number="1601"></td>
        <td id="LC1601" class="blob-code blob-code-inner js-file-line">						cfqd-&gt;rq_in_driver);</td>
      </tr>
      <tr>
        <td id="L1602" class="blob-num js-line-number" data-line-number="1602"></td>
        <td id="LC1602" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1603" class="blob-num js-line-number" data-line-number="1603"></td>
        <td id="LC1603" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1604" class="blob-num js-line-number" data-line-number="1604"></td>
        <td id="LC1604" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_remove_request</span>(<span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L1605" class="blob-num js-line-number" data-line-number="1605"></td>
        <td id="LC1605" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1606" class="blob-num js-line-number" data-line-number="1606"></td>
        <td id="LC1606" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">RQ_CFQQ</span>(rq);</td>
      </tr>
      <tr>
        <td id="L1607" class="blob-num js-line-number" data-line-number="1607"></td>
        <td id="LC1607" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1608" class="blob-num js-line-number" data-line-number="1608"></td>
        <td id="LC1608" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;next_rq == rq)</td>
      </tr>
      <tr>
        <td id="L1609" class="blob-num js-line-number" data-line-number="1609"></td>
        <td id="LC1609" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;next_rq = <span class="pl-c1">cfq_find_next_rq</span>(cfqq-&gt;cfqd, cfqq, rq);</td>
      </tr>
      <tr>
        <td id="L1610" class="blob-num js-line-number" data-line-number="1610"></td>
        <td id="LC1610" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1611" class="blob-num js-line-number" data-line-number="1611"></td>
        <td id="LC1611" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">list_del_init</span>(&amp;rq-&gt;queuelist);</td>
      </tr>
      <tr>
        <td id="L1612" class="blob-num js-line-number" data-line-number="1612"></td>
        <td id="LC1612" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_del_rq_rb</span>(rq);</td>
      </tr>
      <tr>
        <td id="L1613" class="blob-num js-line-number" data-line-number="1613"></td>
        <td id="LC1613" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1614" class="blob-num js-line-number" data-line-number="1614"></td>
        <td id="LC1614" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;cfqd-&gt;rq_queued--;</td>
      </tr>
      <tr>
        <td id="L1615" class="blob-num js-line-number" data-line-number="1615"></td>
        <td id="LC1615" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_io_remove_stats</span>(&amp;(<span class="pl-c1">RQ_CFQG</span>(rq))-&gt;blkg,</td>
      </tr>
      <tr>
        <td id="L1616" class="blob-num js-line-number" data-line-number="1616"></td>
        <td id="LC1616" class="blob-code blob-code-inner js-file-line">					<span class="pl-c1">rq_data_dir</span>(rq), <span class="pl-c1">rq_is_sync</span>(rq));</td>
      </tr>
      <tr>
        <td id="L1617" class="blob-num js-line-number" data-line-number="1617"></td>
        <td id="LC1617" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (rq-&gt;cmd_flags &amp; REQ_PRIO) {</td>
      </tr>
      <tr>
        <td id="L1618" class="blob-num js-line-number" data-line-number="1618"></td>
        <td id="LC1618" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">WARN_ON</span>(!cfqq-&gt;prio_pending);</td>
      </tr>
      <tr>
        <td id="L1619" class="blob-num js-line-number" data-line-number="1619"></td>
        <td id="LC1619" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;prio_pending--;</td>
      </tr>
      <tr>
        <td id="L1620" class="blob-num js-line-number" data-line-number="1620"></td>
        <td id="LC1620" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1621" class="blob-num js-line-number" data-line-number="1621"></td>
        <td id="LC1621" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1622" class="blob-num js-line-number" data-line-number="1622"></td>
        <td id="LC1622" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1623" class="blob-num js-line-number" data-line-number="1623"></td>
        <td id="LC1623" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> <span class="pl-en">cfq_merge</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request **req,</td>
      </tr>
      <tr>
        <td id="L1624" class="blob-num js-line-number" data-line-number="1624"></td>
        <td id="LC1624" class="blob-code blob-code-inner js-file-line">		     <span class="pl-k">struct</span> bio *bio)</td>
      </tr>
      <tr>
        <td id="L1625" class="blob-num js-line-number" data-line-number="1625"></td>
        <td id="LC1625" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1626" class="blob-num js-line-number" data-line-number="1626"></td>
        <td id="LC1626" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = q-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L1627" class="blob-num js-line-number" data-line-number="1627"></td>
        <td id="LC1627" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request *__rq;</td>
      </tr>
      <tr>
        <td id="L1628" class="blob-num js-line-number" data-line-number="1628"></td>
        <td id="LC1628" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1629" class="blob-num js-line-number" data-line-number="1629"></td>
        <td id="LC1629" class="blob-code blob-code-inner js-file-line">	__rq = <span class="pl-c1">cfq_find_rq_fmerge</span>(cfqd, bio);</td>
      </tr>
      <tr>
        <td id="L1630" class="blob-num js-line-number" data-line-number="1630"></td>
        <td id="LC1630" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (__rq &amp;&amp; <span class="pl-c1">elv_rq_merge_ok</span>(__rq, bio)) {</td>
      </tr>
      <tr>
        <td id="L1631" class="blob-num js-line-number" data-line-number="1631"></td>
        <td id="LC1631" class="blob-code blob-code-inner js-file-line">		*req = __rq;</td>
      </tr>
      <tr>
        <td id="L1632" class="blob-num js-line-number" data-line-number="1632"></td>
        <td id="LC1632" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> ELEVATOR_FRONT_MERGE;</td>
      </tr>
      <tr>
        <td id="L1633" class="blob-num js-line-number" data-line-number="1633"></td>
        <td id="LC1633" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1634" class="blob-num js-line-number" data-line-number="1634"></td>
        <td id="LC1634" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1635" class="blob-num js-line-number" data-line-number="1635"></td>
        <td id="LC1635" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> ELEVATOR_NO_MERGE;</td>
      </tr>
      <tr>
        <td id="L1636" class="blob-num js-line-number" data-line-number="1636"></td>
        <td id="LC1636" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1637" class="blob-num js-line-number" data-line-number="1637"></td>
        <td id="LC1637" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1638" class="blob-num js-line-number" data-line-number="1638"></td>
        <td id="LC1638" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_merged_request</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request *req,</td>
      </tr>
      <tr>
        <td id="L1639" class="blob-num js-line-number" data-line-number="1639"></td>
        <td id="LC1639" class="blob-code blob-code-inner js-file-line">			       <span class="pl-k">int</span> type)</td>
      </tr>
      <tr>
        <td id="L1640" class="blob-num js-line-number" data-line-number="1640"></td>
        <td id="LC1640" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1641" class="blob-num js-line-number" data-line-number="1641"></td>
        <td id="LC1641" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (type == ELEVATOR_FRONT_MERGE) {</td>
      </tr>
      <tr>
        <td id="L1642" class="blob-num js-line-number" data-line-number="1642"></td>
        <td id="LC1642" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">RQ_CFQQ</span>(req);</td>
      </tr>
      <tr>
        <td id="L1643" class="blob-num js-line-number" data-line-number="1643"></td>
        <td id="LC1643" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1644" class="blob-num js-line-number" data-line-number="1644"></td>
        <td id="LC1644" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_reposition_rq_rb</span>(cfqq, req);</td>
      </tr>
      <tr>
        <td id="L1645" class="blob-num js-line-number" data-line-number="1645"></td>
        <td id="LC1645" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1646" class="blob-num js-line-number" data-line-number="1646"></td>
        <td id="LC1646" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1647" class="blob-num js-line-number" data-line-number="1647"></td>
        <td id="LC1647" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1648" class="blob-num js-line-number" data-line-number="1648"></td>
        <td id="LC1648" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_bio_merged</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request *req,</td>
      </tr>
      <tr>
        <td id="L1649" class="blob-num js-line-number" data-line-number="1649"></td>
        <td id="LC1649" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">struct</span> bio *bio)</td>
      </tr>
      <tr>
        <td id="L1650" class="blob-num js-line-number" data-line-number="1650"></td>
        <td id="LC1650" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1651" class="blob-num js-line-number" data-line-number="1651"></td>
        <td id="LC1651" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_io_merged_stats</span>(&amp;(<span class="pl-c1">RQ_CFQG</span>(req))-&gt;blkg,</td>
      </tr>
      <tr>
        <td id="L1652" class="blob-num js-line-number" data-line-number="1652"></td>
        <td id="LC1652" class="blob-code blob-code-inner js-file-line">					<span class="pl-c1">bio_data_dir</span>(bio), <span class="pl-c1">cfq_bio_sync</span>(bio));</td>
      </tr>
      <tr>
        <td id="L1653" class="blob-num js-line-number" data-line-number="1653"></td>
        <td id="LC1653" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1654" class="blob-num js-line-number" data-line-number="1654"></td>
        <td id="LC1654" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1655" class="blob-num js-line-number" data-line-number="1655"></td>
        <td id="LC1655" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L1656" class="blob-num js-line-number" data-line-number="1656"></td>
        <td id="LC1656" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_merged_requests</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request *rq,</td>
      </tr>
      <tr>
        <td id="L1657" class="blob-num js-line-number" data-line-number="1657"></td>
        <td id="LC1657" class="blob-code blob-code-inner js-file-line">		    <span class="pl-k">struct</span> request *next)</td>
      </tr>
      <tr>
        <td id="L1658" class="blob-num js-line-number" data-line-number="1658"></td>
        <td id="LC1658" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1659" class="blob-num js-line-number" data-line-number="1659"></td>
        <td id="LC1659" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">RQ_CFQQ</span>(rq);</td>
      </tr>
      <tr>
        <td id="L1660" class="blob-num js-line-number" data-line-number="1660"></td>
        <td id="LC1660" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = q-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L1661" class="blob-num js-line-number" data-line-number="1661"></td>
        <td id="LC1661" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1662" class="blob-num js-line-number" data-line-number="1662"></td>
        <td id="LC1662" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1663" class="blob-num js-line-number" data-line-number="1663"></td>
        <td id="LC1663" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * reposition in fifo if next is older than rq</span></td>
      </tr>
      <tr>
        <td id="L1664" class="blob-num js-line-number" data-line-number="1664"></td>
        <td id="LC1664" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1665" class="blob-num js-line-number" data-line-number="1665"></td>
        <td id="LC1665" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">list_empty</span>(&amp;rq-&gt;queuelist) &amp;&amp; !<span class="pl-c1">list_empty</span>(&amp;next-&gt;queuelist) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1666" class="blob-num js-line-number" data-line-number="1666"></td>
        <td id="LC1666" class="blob-code blob-code-inner js-file-line">	    <span class="pl-c1">time_before</span>(<span class="pl-c1">rq_fifo_time</span>(next), <span class="pl-c1">rq_fifo_time</span>(rq))) {</td>
      </tr>
      <tr>
        <td id="L1667" class="blob-num js-line-number" data-line-number="1667"></td>
        <td id="LC1667" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">list_move</span>(&amp;rq-&gt;queuelist, &amp;next-&gt;queuelist);</td>
      </tr>
      <tr>
        <td id="L1668" class="blob-num js-line-number" data-line-number="1668"></td>
        <td id="LC1668" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">rq_set_fifo_time</span>(rq, <span class="pl-c1">rq_fifo_time</span>(next));</td>
      </tr>
      <tr>
        <td id="L1669" class="blob-num js-line-number" data-line-number="1669"></td>
        <td id="LC1669" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1670" class="blob-num js-line-number" data-line-number="1670"></td>
        <td id="LC1670" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1671" class="blob-num js-line-number" data-line-number="1671"></td>
        <td id="LC1671" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;next_rq == next)</td>
      </tr>
      <tr>
        <td id="L1672" class="blob-num js-line-number" data-line-number="1672"></td>
        <td id="LC1672" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;next_rq = rq;</td>
      </tr>
      <tr>
        <td id="L1673" class="blob-num js-line-number" data-line-number="1673"></td>
        <td id="LC1673" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_remove_request</span>(next);</td>
      </tr>
      <tr>
        <td id="L1674" class="blob-num js-line-number" data-line-number="1674"></td>
        <td id="LC1674" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_io_merged_stats</span>(&amp;(<span class="pl-c1">RQ_CFQG</span>(rq))-&gt;blkg,</td>
      </tr>
      <tr>
        <td id="L1675" class="blob-num js-line-number" data-line-number="1675"></td>
        <td id="LC1675" class="blob-code blob-code-inner js-file-line">					<span class="pl-c1">rq_data_dir</span>(next), <span class="pl-c1">rq_is_sync</span>(next));</td>
      </tr>
      <tr>
        <td id="L1676" class="blob-num js-line-number" data-line-number="1676"></td>
        <td id="LC1676" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1677" class="blob-num js-line-number" data-line-number="1677"></td>
        <td id="LC1677" class="blob-code blob-code-inner js-file-line">	cfqq = <span class="pl-c1">RQ_CFQQ</span>(next);</td>
      </tr>
      <tr>
        <td id="L1678" class="blob-num js-line-number" data-line-number="1678"></td>
        <td id="LC1678" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1679" class="blob-num js-line-number" data-line-number="1679"></td>
        <td id="LC1679" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * all requests of this queue are merged to other queues, delete it</span></td>
      </tr>
      <tr>
        <td id="L1680" class="blob-num js-line-number" data-line-number="1680"></td>
        <td id="LC1680" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * from the service tree. If it&#39;s the active_queue,</span></td>
      </tr>
      <tr>
        <td id="L1681" class="blob-num js-line-number" data-line-number="1681"></td>
        <td id="LC1681" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * cfq_dispatch_requests() will choose to expire it or do idle</span></td>
      </tr>
      <tr>
        <td id="L1682" class="blob-num js-line-number" data-line-number="1682"></td>
        <td id="LC1682" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1683" class="blob-num js-line-number" data-line-number="1683"></td>
        <td id="LC1683" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_on_rr</span>(cfqq) &amp;&amp; <span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1684" class="blob-num js-line-number" data-line-number="1684"></td>
        <td id="LC1684" class="blob-code blob-code-inner js-file-line">	    cfqq != cfqd-&gt;active_queue)</td>
      </tr>
      <tr>
        <td id="L1685" class="blob-num js-line-number" data-line-number="1685"></td>
        <td id="LC1685" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_del_cfqq_rr</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1686" class="blob-num js-line-number" data-line-number="1686"></td>
        <td id="LC1686" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1687" class="blob-num js-line-number" data-line-number="1687"></td>
        <td id="LC1687" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1688" class="blob-num js-line-number" data-line-number="1688"></td>
        <td id="LC1688" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> <span class="pl-en">cfq_allow_merge</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request *rq,</td>
      </tr>
      <tr>
        <td id="L1689" class="blob-num js-line-number" data-line-number="1689"></td>
        <td id="LC1689" class="blob-code blob-code-inner js-file-line">			   <span class="pl-k">struct</span> bio *bio)</td>
      </tr>
      <tr>
        <td id="L1690" class="blob-num js-line-number" data-line-number="1690"></td>
        <td id="LC1690" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1691" class="blob-num js-line-number" data-line-number="1691"></td>
        <td id="LC1691" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = q-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L1692" class="blob-num js-line-number" data-line-number="1692"></td>
        <td id="LC1692" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *cic;</td>
      </tr>
      <tr>
        <td id="L1693" class="blob-num js-line-number" data-line-number="1693"></td>
        <td id="LC1693" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L1694" class="blob-num js-line-number" data-line-number="1694"></td>
        <td id="LC1694" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1695" class="blob-num js-line-number" data-line-number="1695"></td>
        <td id="LC1695" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1696" class="blob-num js-line-number" data-line-number="1696"></td>
        <td id="LC1696" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Disallow merge of a sync bio into an async request.</span></td>
      </tr>
      <tr>
        <td id="L1697" class="blob-num js-line-number" data-line-number="1697"></td>
        <td id="LC1697" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1698" class="blob-num js-line-number" data-line-number="1698"></td>
        <td id="LC1698" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_bio_sync</span>(bio) &amp;&amp; !<span class="pl-c1">rq_is_sync</span>(rq))</td>
      </tr>
      <tr>
        <td id="L1699" class="blob-num js-line-number" data-line-number="1699"></td>
        <td id="LC1699" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L1700" class="blob-num js-line-number" data-line-number="1700"></td>
        <td id="LC1700" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1701" class="blob-num js-line-number" data-line-number="1701"></td>
        <td id="LC1701" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1702" class="blob-num js-line-number" data-line-number="1702"></td>
        <td id="LC1702" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Lookup the cfqq that this bio will be queued with and allow</span></td>
      </tr>
      <tr>
        <td id="L1703" class="blob-num js-line-number" data-line-number="1703"></td>
        <td id="LC1703" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * merge only if rq is queued there.</span></td>
      </tr>
      <tr>
        <td id="L1704" class="blob-num js-line-number" data-line-number="1704"></td>
        <td id="LC1704" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1705" class="blob-num js-line-number" data-line-number="1705"></td>
        <td id="LC1705" class="blob-code blob-code-inner js-file-line">	cic = <span class="pl-c1">cfq_cic_lookup</span>(cfqd, current-&gt;io_context);</td>
      </tr>
      <tr>
        <td id="L1706" class="blob-num js-line-number" data-line-number="1706"></td>
        <td id="LC1706" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cic)</td>
      </tr>
      <tr>
        <td id="L1707" class="blob-num js-line-number" data-line-number="1707"></td>
        <td id="LC1707" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L1708" class="blob-num js-line-number" data-line-number="1708"></td>
        <td id="LC1708" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1709" class="blob-num js-line-number" data-line-number="1709"></td>
        <td id="LC1709" class="blob-code blob-code-inner js-file-line">	cfqq = <span class="pl-c1">cic_to_cfqq</span>(cic, <span class="pl-c1">cfq_bio_sync</span>(bio));</td>
      </tr>
      <tr>
        <td id="L1710" class="blob-num js-line-number" data-line-number="1710"></td>
        <td id="LC1710" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqq == <span class="pl-c1">RQ_CFQQ</span>(rq);</td>
      </tr>
      <tr>
        <td id="L1711" class="blob-num js-line-number" data-line-number="1711"></td>
        <td id="LC1711" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1712" class="blob-num js-line-number" data-line-number="1712"></td>
        <td id="LC1712" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1713" class="blob-num js-line-number" data-line-number="1713"></td>
        <td id="LC1713" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">cfq_del_timer</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L1714" class="blob-num js-line-number" data-line-number="1714"></td>
        <td id="LC1714" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1715" class="blob-num js-line-number" data-line-number="1715"></td>
        <td id="LC1715" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">del_timer</span>(&amp;cfqd-&gt;idle_slice_timer);</td>
      </tr>
      <tr>
        <td id="L1716" class="blob-num js-line-number" data-line-number="1716"></td>
        <td id="LC1716" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_idle_time_stats</span>(&amp;cfqq-&gt;cfqg-&gt;blkg);</td>
      </tr>
      <tr>
        <td id="L1717" class="blob-num js-line-number" data-line-number="1717"></td>
        <td id="LC1717" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1718" class="blob-num js-line-number" data-line-number="1718"></td>
        <td id="LC1718" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1719" class="blob-num js-line-number" data-line-number="1719"></td>
        <td id="LC1719" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">__cfq_set_active_queue</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L1720" class="blob-num js-line-number" data-line-number="1720"></td>
        <td id="LC1720" class="blob-code blob-code-inner js-file-line">				   <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L1721" class="blob-num js-line-number" data-line-number="1721"></td>
        <td id="LC1721" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1722" class="blob-num js-line-number" data-line-number="1722"></td>
        <td id="LC1722" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq) {</td>
      </tr>
      <tr>
        <td id="L1723" class="blob-num js-line-number" data-line-number="1723"></td>
        <td id="LC1723" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>set_active wl_prio:<span class="pl-c1">%d</span> wl_type:<span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L1724" class="blob-num js-line-number" data-line-number="1724"></td>
        <td id="LC1724" class="blob-code blob-code-inner js-file-line">				cfqd-&gt;serving_prio, cfqd-&gt;serving_type);</td>
      </tr>
      <tr>
        <td id="L1725" class="blob-num js-line-number" data-line-number="1725"></td>
        <td id="LC1725" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_blkiocg_update_avg_queue_size_stats</span>(&amp;cfqq-&gt;cfqg-&gt;blkg);</td>
      </tr>
      <tr>
        <td id="L1726" class="blob-num js-line-number" data-line-number="1726"></td>
        <td id="LC1726" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;slice_start = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1727" class="blob-num js-line-number" data-line-number="1727"></td>
        <td id="LC1727" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;dispatch_start = jiffies;</td>
      </tr>
      <tr>
        <td id="L1728" class="blob-num js-line-number" data-line-number="1728"></td>
        <td id="LC1728" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;allocated_slice = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1729" class="blob-num js-line-number" data-line-number="1729"></td>
        <td id="LC1729" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;slice_end = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1730" class="blob-num js-line-number" data-line-number="1730"></td>
        <td id="LC1730" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;slice_dispatch = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1731" class="blob-num js-line-number" data-line-number="1731"></td>
        <td id="LC1731" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;nr_sectors = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L1732" class="blob-num js-line-number" data-line-number="1732"></td>
        <td id="LC1732" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1733" class="blob-num js-line-number" data-line-number="1733"></td>
        <td id="LC1733" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_clear_cfqq_wait_request</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1734" class="blob-num js-line-number" data-line-number="1734"></td>
        <td id="LC1734" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_clear_cfqq_must_dispatch</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1735" class="blob-num js-line-number" data-line-number="1735"></td>
        <td id="LC1735" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_clear_cfqq_must_alloc_slice</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1736" class="blob-num js-line-number" data-line-number="1736"></td>
        <td id="LC1736" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_clear_cfqq_fifo_expire</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1737" class="blob-num js-line-number" data-line-number="1737"></td>
        <td id="LC1737" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_mark_cfqq_slice_new</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1738" class="blob-num js-line-number" data-line-number="1738"></td>
        <td id="LC1738" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1739" class="blob-num js-line-number" data-line-number="1739"></td>
        <td id="LC1739" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_del_timer</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1740" class="blob-num js-line-number" data-line-number="1740"></td>
        <td id="LC1740" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1741" class="blob-num js-line-number" data-line-number="1741"></td>
        <td id="LC1741" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1742" class="blob-num js-line-number" data-line-number="1742"></td>
        <td id="LC1742" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;active_queue = cfqq;</td>
      </tr>
      <tr>
        <td id="L1743" class="blob-num js-line-number" data-line-number="1743"></td>
        <td id="LC1743" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1744" class="blob-num js-line-number" data-line-number="1744"></td>
        <td id="LC1744" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1745" class="blob-num js-line-number" data-line-number="1745"></td>
        <td id="LC1745" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1746" class="blob-num js-line-number" data-line-number="1746"></td>
        <td id="LC1746" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * current cfqq expired its slice (or was too idle), select new one</span></td>
      </tr>
      <tr>
        <td id="L1747" class="blob-num js-line-number" data-line-number="1747"></td>
        <td id="LC1747" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1748" class="blob-num js-line-number" data-line-number="1748"></td>
        <td id="LC1748" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L1749" class="blob-num js-line-number" data-line-number="1749"></td>
        <td id="LC1749" class="blob-code blob-code-inner js-file-line"><span class="pl-en">__cfq_slice_expired</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L1750" class="blob-num js-line-number" data-line-number="1750"></td>
        <td id="LC1750" class="blob-code blob-code-inner js-file-line">		    <span class="pl-k">bool</span> timed_out)</td>
      </tr>
      <tr>
        <td id="L1751" class="blob-num js-line-number" data-line-number="1751"></td>
        <td id="LC1751" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1752" class="blob-num js-line-number" data-line-number="1752"></td>
        <td id="LC1752" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>slice expired t=<span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>, timed_out);</td>
      </tr>
      <tr>
        <td id="L1753" class="blob-num js-line-number" data-line-number="1753"></td>
        <td id="LC1753" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1754" class="blob-num js-line-number" data-line-number="1754"></td>
        <td id="LC1754" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_wait_request</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L1755" class="blob-num js-line-number" data-line-number="1755"></td>
        <td id="LC1755" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_del_timer</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1756" class="blob-num js-line-number" data-line-number="1756"></td>
        <td id="LC1756" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1757" class="blob-num js-line-number" data-line-number="1757"></td>
        <td id="LC1757" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_clear_cfqq_wait_request</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1758" class="blob-num js-line-number" data-line-number="1758"></td>
        <td id="LC1758" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_clear_cfqq_wait_busy</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1759" class="blob-num js-line-number" data-line-number="1759"></td>
        <td id="LC1759" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1760" class="blob-num js-line-number" data-line-number="1760"></td>
        <td id="LC1760" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1761" class="blob-num js-line-number" data-line-number="1761"></td>
        <td id="LC1761" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If this cfqq is shared between multiple processes, check to</span></td>
      </tr>
      <tr>
        <td id="L1762" class="blob-num js-line-number" data-line-number="1762"></td>
        <td id="LC1762" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * make sure that those processes are still issuing I/Os within</span></td>
      </tr>
      <tr>
        <td id="L1763" class="blob-num js-line-number" data-line-number="1763"></td>
        <td id="LC1763" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * the mean seek distance.  If not, it may be time to break the</span></td>
      </tr>
      <tr>
        <td id="L1764" class="blob-num js-line-number" data-line-number="1764"></td>
        <td id="LC1764" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * queues apart again.</span></td>
      </tr>
      <tr>
        <td id="L1765" class="blob-num js-line-number" data-line-number="1765"></td>
        <td id="LC1765" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1766" class="blob-num js-line-number" data-line-number="1766"></td>
        <td id="LC1766" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_coop</span>(cfqq) &amp;&amp; <span class="pl-c1">CFQQ_SEEKY</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L1767" class="blob-num js-line-number" data-line-number="1767"></td>
        <td id="LC1767" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_mark_cfqq_split_coop</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1768" class="blob-num js-line-number" data-line-number="1768"></td>
        <td id="LC1768" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1769" class="blob-num js-line-number" data-line-number="1769"></td>
        <td id="LC1769" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1770" class="blob-num js-line-number" data-line-number="1770"></td>
        <td id="LC1770" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * store what was left of this slice, if the queue idled/timed out</span></td>
      </tr>
      <tr>
        <td id="L1771" class="blob-num js-line-number" data-line-number="1771"></td>
        <td id="LC1771" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1772" class="blob-num js-line-number" data-line-number="1772"></td>
        <td id="LC1772" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (timed_out) {</td>
      </tr>
      <tr>
        <td id="L1773" class="blob-num js-line-number" data-line-number="1773"></td>
        <td id="LC1773" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_slice_new</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L1774" class="blob-num js-line-number" data-line-number="1774"></td>
        <td id="LC1774" class="blob-code blob-code-inner js-file-line">			cfqq-&gt;slice_resid = <span class="pl-c1">cfq_scaled_cfqq_slice</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1775" class="blob-num js-line-number" data-line-number="1775"></td>
        <td id="LC1775" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1776" class="blob-num js-line-number" data-line-number="1776"></td>
        <td id="LC1776" class="blob-code blob-code-inner js-file-line">			cfqq-&gt;slice_resid = cfqq-&gt;slice_end - jiffies;</td>
      </tr>
      <tr>
        <td id="L1777" class="blob-num js-line-number" data-line-number="1777"></td>
        <td id="LC1777" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>resid=<span class="pl-c1">%ld</span><span class="pl-pds">&quot;</span></span>, cfqq-&gt;slice_resid);</td>
      </tr>
      <tr>
        <td id="L1778" class="blob-num js-line-number" data-line-number="1778"></td>
        <td id="LC1778" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1779" class="blob-num js-line-number" data-line-number="1779"></td>
        <td id="LC1779" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1780" class="blob-num js-line-number" data-line-number="1780"></td>
        <td id="LC1780" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_group_served</span>(cfqd, cfqq-&gt;cfqg, cfqq);</td>
      </tr>
      <tr>
        <td id="L1781" class="blob-num js-line-number" data-line-number="1781"></td>
        <td id="LC1781" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1782" class="blob-num js-line-number" data-line-number="1782"></td>
        <td id="LC1782" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_on_rr</span>(cfqq) &amp;&amp; <span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list))</td>
      </tr>
      <tr>
        <td id="L1783" class="blob-num js-line-number" data-line-number="1783"></td>
        <td id="LC1783" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_del_cfqq_rr</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1784" class="blob-num js-line-number" data-line-number="1784"></td>
        <td id="LC1784" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1785" class="blob-num js-line-number" data-line-number="1785"></td>
        <td id="LC1785" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_resort_rr_list</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1786" class="blob-num js-line-number" data-line-number="1786"></td>
        <td id="LC1786" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1787" class="blob-num js-line-number" data-line-number="1787"></td>
        <td id="LC1787" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq == cfqd-&gt;active_queue)</td>
      </tr>
      <tr>
        <td id="L1788" class="blob-num js-line-number" data-line-number="1788"></td>
        <td id="LC1788" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;active_queue = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1789" class="blob-num js-line-number" data-line-number="1789"></td>
        <td id="LC1789" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1790" class="blob-num js-line-number" data-line-number="1790"></td>
        <td id="LC1790" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;active_cic) {</td>
      </tr>
      <tr>
        <td id="L1791" class="blob-num js-line-number" data-line-number="1791"></td>
        <td id="LC1791" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">put_io_context</span>(cfqd-&gt;active_cic-&gt;icq.<span class="pl-smi">ioc</span>);</td>
      </tr>
      <tr>
        <td id="L1792" class="blob-num js-line-number" data-line-number="1792"></td>
        <td id="LC1792" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;active_cic = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1793" class="blob-num js-line-number" data-line-number="1793"></td>
        <td id="LC1793" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L1794" class="blob-num js-line-number" data-line-number="1794"></td>
        <td id="LC1794" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1795" class="blob-num js-line-number" data-line-number="1795"></td>
        <td id="LC1795" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1796" class="blob-num js-line-number" data-line-number="1796"></td>
        <td id="LC1796" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">void</span> <span class="pl-en">cfq_slice_expired</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">bool</span> timed_out)</td>
      </tr>
      <tr>
        <td id="L1797" class="blob-num js-line-number" data-line-number="1797"></td>
        <td id="LC1797" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1798" class="blob-num js-line-number" data-line-number="1798"></td>
        <td id="LC1798" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = cfqd-&gt;active_queue;</td>
      </tr>
      <tr>
        <td id="L1799" class="blob-num js-line-number" data-line-number="1799"></td>
        <td id="LC1799" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1800" class="blob-num js-line-number" data-line-number="1800"></td>
        <td id="LC1800" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq)</td>
      </tr>
      <tr>
        <td id="L1801" class="blob-num js-line-number" data-line-number="1801"></td>
        <td id="LC1801" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">__cfq_slice_expired</span>(cfqd, cfqq, timed_out);</td>
      </tr>
      <tr>
        <td id="L1802" class="blob-num js-line-number" data-line-number="1802"></td>
        <td id="LC1802" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1803" class="blob-num js-line-number" data-line-number="1803"></td>
        <td id="LC1803" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1804" class="blob-num js-line-number" data-line-number="1804"></td>
        <td id="LC1804" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1805" class="blob-num js-line-number" data-line-number="1805"></td>
        <td id="LC1805" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Get next queue for service. Unless we have a queue preemption,</span></td>
      </tr>
      <tr>
        <td id="L1806" class="blob-num js-line-number" data-line-number="1806"></td>
        <td id="LC1806" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * we&#39;ll simply select the first cfqq in the service tree.</span></td>
      </tr>
      <tr>
        <td id="L1807" class="blob-num js-line-number" data-line-number="1807"></td>
        <td id="LC1807" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1808" class="blob-num js-line-number" data-line-number="1808"></td>
        <td id="LC1808" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *<span class="pl-en">cfq_get_next_queue</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L1809" class="blob-num js-line-number" data-line-number="1809"></td>
        <td id="LC1809" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1810" class="blob-num js-line-number" data-line-number="1810"></td>
        <td id="LC1810" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *service_tree =</td>
      </tr>
      <tr>
        <td id="L1811" class="blob-num js-line-number" data-line-number="1811"></td>
        <td id="LC1811" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">service_tree_for</span>(cfqd-&gt;serving_group, cfqd-&gt;serving_prio,</td>
      </tr>
      <tr>
        <td id="L1812" class="blob-num js-line-number" data-line-number="1812"></td>
        <td id="LC1812" class="blob-code blob-code-inner js-file-line">					cfqd-&gt;serving_type);</td>
      </tr>
      <tr>
        <td id="L1813" class="blob-num js-line-number" data-line-number="1813"></td>
        <td id="LC1813" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1814" class="blob-num js-line-number" data-line-number="1814"></td>
        <td id="LC1814" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqd-&gt;rq_queued)</td>
      </tr>
      <tr>
        <td id="L1815" class="blob-num js-line-number" data-line-number="1815"></td>
        <td id="LC1815" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1816" class="blob-num js-line-number" data-line-number="1816"></td>
        <td id="LC1816" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1817" class="blob-num js-line-number" data-line-number="1817"></td>
        <td id="LC1817" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* There is nothing to dispatch */</span></td>
      </tr>
      <tr>
        <td id="L1818" class="blob-num js-line-number" data-line-number="1818"></td>
        <td id="LC1818" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!service_tree)</td>
      </tr>
      <tr>
        <td id="L1819" class="blob-num js-line-number" data-line-number="1819"></td>
        <td id="LC1819" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1820" class="blob-num js-line-number" data-line-number="1820"></td>
        <td id="LC1820" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;service_tree-&gt;rb))</td>
      </tr>
      <tr>
        <td id="L1821" class="blob-num js-line-number" data-line-number="1821"></td>
        <td id="LC1821" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1822" class="blob-num js-line-number" data-line-number="1822"></td>
        <td id="LC1822" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">cfq_rb_first</span>(service_tree);</td>
      </tr>
      <tr>
        <td id="L1823" class="blob-num js-line-number" data-line-number="1823"></td>
        <td id="LC1823" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1824" class="blob-num js-line-number" data-line-number="1824"></td>
        <td id="LC1824" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1825" class="blob-num js-line-number" data-line-number="1825"></td>
        <td id="LC1825" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *<span class="pl-en">cfq_get_next_queue_forced</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L1826" class="blob-num js-line-number" data-line-number="1826"></td>
        <td id="LC1826" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1827" class="blob-num js-line-number" data-line-number="1827"></td>
        <td id="LC1827" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg;</td>
      </tr>
      <tr>
        <td id="L1828" class="blob-num js-line-number" data-line-number="1828"></td>
        <td id="LC1828" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L1829" class="blob-num js-line-number" data-line-number="1829"></td>
        <td id="LC1829" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> i, j;</td>
      </tr>
      <tr>
        <td id="L1830" class="blob-num js-line-number" data-line-number="1830"></td>
        <td id="LC1830" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *st;</td>
      </tr>
      <tr>
        <td id="L1831" class="blob-num js-line-number" data-line-number="1831"></td>
        <td id="LC1831" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1832" class="blob-num js-line-number" data-line-number="1832"></td>
        <td id="LC1832" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqd-&gt;rq_queued)</td>
      </tr>
      <tr>
        <td id="L1833" class="blob-num js-line-number" data-line-number="1833"></td>
        <td id="LC1833" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1834" class="blob-num js-line-number" data-line-number="1834"></td>
        <td id="LC1834" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1835" class="blob-num js-line-number" data-line-number="1835"></td>
        <td id="LC1835" class="blob-code blob-code-inner js-file-line">	cfqg = <span class="pl-c1">cfq_get_next_cfqg</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L1836" class="blob-num js-line-number" data-line-number="1836"></td>
        <td id="LC1836" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqg)</td>
      </tr>
      <tr>
        <td id="L1837" class="blob-num js-line-number" data-line-number="1837"></td>
        <td id="LC1837" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1838" class="blob-num js-line-number" data-line-number="1838"></td>
        <td id="LC1838" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1839" class="blob-num js-line-number" data-line-number="1839"></td>
        <td id="LC1839" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">for_each_cfqg_st</span>(cfqg, i, j, st)</td>
      </tr>
      <tr>
        <td id="L1840" class="blob-num js-line-number" data-line-number="1840"></td>
        <td id="LC1840" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> ((cfqq = <span class="pl-c1">cfq_rb_first</span>(st)) != <span class="pl-c1">NULL</span>)</td>
      </tr>
      <tr>
        <td id="L1841" class="blob-num js-line-number" data-line-number="1841"></td>
        <td id="LC1841" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span> cfqq;</td>
      </tr>
      <tr>
        <td id="L1842" class="blob-num js-line-number" data-line-number="1842"></td>
        <td id="LC1842" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1843" class="blob-num js-line-number" data-line-number="1843"></td>
        <td id="LC1843" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1844" class="blob-num js-line-number" data-line-number="1844"></td>
        <td id="LC1844" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1845" class="blob-num js-line-number" data-line-number="1845"></td>
        <td id="LC1845" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1846" class="blob-num js-line-number" data-line-number="1846"></td>
        <td id="LC1846" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Get and set a new active queue for service.</span></td>
      </tr>
      <tr>
        <td id="L1847" class="blob-num js-line-number" data-line-number="1847"></td>
        <td id="LC1847" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1848" class="blob-num js-line-number" data-line-number="1848"></td>
        <td id="LC1848" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *<span class="pl-en">cfq_set_active_queue</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L1849" class="blob-num js-line-number" data-line-number="1849"></td>
        <td id="LC1849" class="blob-code blob-code-inner js-file-line">					      <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L1850" class="blob-num js-line-number" data-line-number="1850"></td>
        <td id="LC1850" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1851" class="blob-num js-line-number" data-line-number="1851"></td>
        <td id="LC1851" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqq)</td>
      </tr>
      <tr>
        <td id="L1852" class="blob-num js-line-number" data-line-number="1852"></td>
        <td id="LC1852" class="blob-code blob-code-inner js-file-line">		cfqq = <span class="pl-c1">cfq_get_next_queue</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L1853" class="blob-num js-line-number" data-line-number="1853"></td>
        <td id="LC1853" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1854" class="blob-num js-line-number" data-line-number="1854"></td>
        <td id="LC1854" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">__cfq_set_active_queue</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L1855" class="blob-num js-line-number" data-line-number="1855"></td>
        <td id="LC1855" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqq;</td>
      </tr>
      <tr>
        <td id="L1856" class="blob-num js-line-number" data-line-number="1856"></td>
        <td id="LC1856" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1857" class="blob-num js-line-number" data-line-number="1857"></td>
        <td id="LC1857" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1858" class="blob-num js-line-number" data-line-number="1858"></td>
        <td id="LC1858" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-c1">sector_t</span> <span class="pl-en">cfq_dist_from_last</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L1859" class="blob-num js-line-number" data-line-number="1859"></td>
        <td id="LC1859" class="blob-code blob-code-inner js-file-line">					  <span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L1860" class="blob-num js-line-number" data-line-number="1860"></td>
        <td id="LC1860" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1861" class="blob-num js-line-number" data-line-number="1861"></td>
        <td id="LC1861" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">blk_rq_pos</span>(rq) &gt;= cfqd-&gt;last_position)</td>
      </tr>
      <tr>
        <td id="L1862" class="blob-num js-line-number" data-line-number="1862"></td>
        <td id="LC1862" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">blk_rq_pos</span>(rq) - cfqd-&gt;last_position;</td>
      </tr>
      <tr>
        <td id="L1863" class="blob-num js-line-number" data-line-number="1863"></td>
        <td id="LC1863" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1864" class="blob-num js-line-number" data-line-number="1864"></td>
        <td id="LC1864" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> cfqd-&gt;last_position - <span class="pl-c1">blk_rq_pos</span>(rq);</td>
      </tr>
      <tr>
        <td id="L1865" class="blob-num js-line-number" data-line-number="1865"></td>
        <td id="LC1865" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1866" class="blob-num js-line-number" data-line-number="1866"></td>
        <td id="LC1866" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1867" class="blob-num js-line-number" data-line-number="1867"></td>
        <td id="LC1867" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">int</span> <span class="pl-en">cfq_rq_close</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L1868" class="blob-num js-line-number" data-line-number="1868"></td>
        <td id="LC1868" class="blob-code blob-code-inner js-file-line">			       <span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L1869" class="blob-num js-line-number" data-line-number="1869"></td>
        <td id="LC1869" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1870" class="blob-num js-line-number" data-line-number="1870"></td>
        <td id="LC1870" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">cfq_dist_from_last</span>(cfqd, rq) &lt;= CFQQ_CLOSE_THR;</td>
      </tr>
      <tr>
        <td id="L1871" class="blob-num js-line-number" data-line-number="1871"></td>
        <td id="LC1871" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1872" class="blob-num js-line-number" data-line-number="1872"></td>
        <td id="LC1872" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1873" class="blob-num js-line-number" data-line-number="1873"></td>
        <td id="LC1873" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *<span class="pl-en">cfqq_close</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L1874" class="blob-num js-line-number" data-line-number="1874"></td>
        <td id="LC1874" class="blob-code blob-code-inner js-file-line">				    <span class="pl-k">struct</span> cfq_queue *cur_cfqq)</td>
      </tr>
      <tr>
        <td id="L1875" class="blob-num js-line-number" data-line-number="1875"></td>
        <td id="LC1875" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1876" class="blob-num js-line-number" data-line-number="1876"></td>
        <td id="LC1876" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_root *root = &amp;cfqd-&gt;prio_trees[cur_cfqq-&gt;org_ioprio];</td>
      </tr>
      <tr>
        <td id="L1877" class="blob-num js-line-number" data-line-number="1877"></td>
        <td id="LC1877" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> rb_node *parent, *node;</td>
      </tr>
      <tr>
        <td id="L1878" class="blob-num js-line-number" data-line-number="1878"></td>
        <td id="LC1878" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *__cfqq;</td>
      </tr>
      <tr>
        <td id="L1879" class="blob-num js-line-number" data-line-number="1879"></td>
        <td id="LC1879" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sector_t</span> sector = cfqd-&gt;last_position;</td>
      </tr>
      <tr>
        <td id="L1880" class="blob-num js-line-number" data-line-number="1880"></td>
        <td id="LC1880" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1881" class="blob-num js-line-number" data-line-number="1881"></td>
        <td id="LC1881" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">RB_EMPTY_ROOT</span>(root))</td>
      </tr>
      <tr>
        <td id="L1882" class="blob-num js-line-number" data-line-number="1882"></td>
        <td id="LC1882" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1883" class="blob-num js-line-number" data-line-number="1883"></td>
        <td id="LC1883" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1884" class="blob-num js-line-number" data-line-number="1884"></td>
        <td id="LC1884" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1885" class="blob-num js-line-number" data-line-number="1885"></td>
        <td id="LC1885" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * First, if we find a request starting at the end of the last</span></td>
      </tr>
      <tr>
        <td id="L1886" class="blob-num js-line-number" data-line-number="1886"></td>
        <td id="LC1886" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * request, choose it.</span></td>
      </tr>
      <tr>
        <td id="L1887" class="blob-num js-line-number" data-line-number="1887"></td>
        <td id="LC1887" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1888" class="blob-num js-line-number" data-line-number="1888"></td>
        <td id="LC1888" class="blob-code blob-code-inner js-file-line">	__cfqq = <span class="pl-c1">cfq_prio_tree_lookup</span>(cfqd, root, sector, &amp;parent, <span class="pl-c1">NULL</span>);</td>
      </tr>
      <tr>
        <td id="L1889" class="blob-num js-line-number" data-line-number="1889"></td>
        <td id="LC1889" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (__cfqq)</td>
      </tr>
      <tr>
        <td id="L1890" class="blob-num js-line-number" data-line-number="1890"></td>
        <td id="LC1890" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> __cfqq;</td>
      </tr>
      <tr>
        <td id="L1891" class="blob-num js-line-number" data-line-number="1891"></td>
        <td id="LC1891" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1892" class="blob-num js-line-number" data-line-number="1892"></td>
        <td id="LC1892" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1893" class="blob-num js-line-number" data-line-number="1893"></td>
        <td id="LC1893" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If the exact sector wasn&#39;t found, the parent of the NULL leaf</span></td>
      </tr>
      <tr>
        <td id="L1894" class="blob-num js-line-number" data-line-number="1894"></td>
        <td id="LC1894" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * will contain the closest sector.</span></td>
      </tr>
      <tr>
        <td id="L1895" class="blob-num js-line-number" data-line-number="1895"></td>
        <td id="LC1895" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1896" class="blob-num js-line-number" data-line-number="1896"></td>
        <td id="LC1896" class="blob-code blob-code-inner js-file-line">	__cfqq = <span class="pl-c1">rb_entry</span>(parent, <span class="pl-k">struct</span> cfq_queue, p_node);</td>
      </tr>
      <tr>
        <td id="L1897" class="blob-num js-line-number" data-line-number="1897"></td>
        <td id="LC1897" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_rq_close</span>(cfqd, cur_cfqq, __cfqq-&gt;next_rq))</td>
      </tr>
      <tr>
        <td id="L1898" class="blob-num js-line-number" data-line-number="1898"></td>
        <td id="LC1898" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> __cfqq;</td>
      </tr>
      <tr>
        <td id="L1899" class="blob-num js-line-number" data-line-number="1899"></td>
        <td id="LC1899" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1900" class="blob-num js-line-number" data-line-number="1900"></td>
        <td id="LC1900" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">blk_rq_pos</span>(__cfqq-&gt;next_rq) &lt; sector)</td>
      </tr>
      <tr>
        <td id="L1901" class="blob-num js-line-number" data-line-number="1901"></td>
        <td id="LC1901" class="blob-code blob-code-inner js-file-line">		node = <span class="pl-c1">rb_next</span>(&amp;__cfqq-&gt;p_node);</td>
      </tr>
      <tr>
        <td id="L1902" class="blob-num js-line-number" data-line-number="1902"></td>
        <td id="LC1902" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L1903" class="blob-num js-line-number" data-line-number="1903"></td>
        <td id="LC1903" class="blob-code blob-code-inner js-file-line">		node = <span class="pl-c1">rb_prev</span>(&amp;__cfqq-&gt;p_node);</td>
      </tr>
      <tr>
        <td id="L1904" class="blob-num js-line-number" data-line-number="1904"></td>
        <td id="LC1904" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!node)</td>
      </tr>
      <tr>
        <td id="L1905" class="blob-num js-line-number" data-line-number="1905"></td>
        <td id="LC1905" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1906" class="blob-num js-line-number" data-line-number="1906"></td>
        <td id="LC1906" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1907" class="blob-num js-line-number" data-line-number="1907"></td>
        <td id="LC1907" class="blob-code blob-code-inner js-file-line">	__cfqq = <span class="pl-c1">rb_entry</span>(node, <span class="pl-k">struct</span> cfq_queue, p_node);</td>
      </tr>
      <tr>
        <td id="L1908" class="blob-num js-line-number" data-line-number="1908"></td>
        <td id="LC1908" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_rq_close</span>(cfqd, cur_cfqq, __cfqq-&gt;next_rq))</td>
      </tr>
      <tr>
        <td id="L1909" class="blob-num js-line-number" data-line-number="1909"></td>
        <td id="LC1909" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> __cfqq;</td>
      </tr>
      <tr>
        <td id="L1910" class="blob-num js-line-number" data-line-number="1910"></td>
        <td id="LC1910" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1911" class="blob-num js-line-number" data-line-number="1911"></td>
        <td id="LC1911" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1912" class="blob-num js-line-number" data-line-number="1912"></td>
        <td id="LC1912" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1913" class="blob-num js-line-number" data-line-number="1913"></td>
        <td id="LC1913" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1914" class="blob-num js-line-number" data-line-number="1914"></td>
        <td id="LC1914" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1915" class="blob-num js-line-number" data-line-number="1915"></td>
        <td id="LC1915" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * cfqd - obvious</span></td>
      </tr>
      <tr>
        <td id="L1916" class="blob-num js-line-number" data-line-number="1916"></td>
        <td id="LC1916" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * cur_cfqq - passed in so that we don&#39;t decide that the current queue is</span></td>
      </tr>
      <tr>
        <td id="L1917" class="blob-num js-line-number" data-line-number="1917"></td>
        <td id="LC1917" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * 	      closely cooperating with itself.</span></td>
      </tr>
      <tr>
        <td id="L1918" class="blob-num js-line-number" data-line-number="1918"></td>
        <td id="LC1918" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L1919" class="blob-num js-line-number" data-line-number="1919"></td>
        <td id="LC1919" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * So, basically we&#39;re assuming that that cur_cfqq has dispatched at least</span></td>
      </tr>
      <tr>
        <td id="L1920" class="blob-num js-line-number" data-line-number="1920"></td>
        <td id="LC1920" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * one request, and that cfqd-&gt;last_position reflects a position on the disk</span></td>
      </tr>
      <tr>
        <td id="L1921" class="blob-num js-line-number" data-line-number="1921"></td>
        <td id="LC1921" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * associated with the I/O issued by cur_cfqq.  I&#39;m not sure this is a valid</span></td>
      </tr>
      <tr>
        <td id="L1922" class="blob-num js-line-number" data-line-number="1922"></td>
        <td id="LC1922" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * assumption.</span></td>
      </tr>
      <tr>
        <td id="L1923" class="blob-num js-line-number" data-line-number="1923"></td>
        <td id="LC1923" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1924" class="blob-num js-line-number" data-line-number="1924"></td>
        <td id="LC1924" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *<span class="pl-en">cfq_close_cooperator</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L1925" class="blob-num js-line-number" data-line-number="1925"></td>
        <td id="LC1925" class="blob-code blob-code-inner js-file-line">					      <span class="pl-k">struct</span> cfq_queue *cur_cfqq)</td>
      </tr>
      <tr>
        <td id="L1926" class="blob-num js-line-number" data-line-number="1926"></td>
        <td id="LC1926" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1927" class="blob-num js-line-number" data-line-number="1927"></td>
        <td id="LC1927" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L1928" class="blob-num js-line-number" data-line-number="1928"></td>
        <td id="LC1928" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1929" class="blob-num js-line-number" data-line-number="1929"></td>
        <td id="LC1929" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_idle</span>(cur_cfqq))</td>
      </tr>
      <tr>
        <td id="L1930" class="blob-num js-line-number" data-line-number="1930"></td>
        <td id="LC1930" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1931" class="blob-num js-line-number" data-line-number="1931"></td>
        <td id="LC1931" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_cfqq_sync</span>(cur_cfqq))</td>
      </tr>
      <tr>
        <td id="L1932" class="blob-num js-line-number" data-line-number="1932"></td>
        <td id="LC1932" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1933" class="blob-num js-line-number" data-line-number="1933"></td>
        <td id="LC1933" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">CFQQ_SEEKY</span>(cur_cfqq))</td>
      </tr>
      <tr>
        <td id="L1934" class="blob-num js-line-number" data-line-number="1934"></td>
        <td id="LC1934" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1935" class="blob-num js-line-number" data-line-number="1935"></td>
        <td id="LC1935" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1936" class="blob-num js-line-number" data-line-number="1936"></td>
        <td id="LC1936" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1937" class="blob-num js-line-number" data-line-number="1937"></td>
        <td id="LC1937" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Don&#39;t search priority tree if it&#39;s the only queue in the group.</span></td>
      </tr>
      <tr>
        <td id="L1938" class="blob-num js-line-number" data-line-number="1938"></td>
        <td id="LC1938" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1939" class="blob-num js-line-number" data-line-number="1939"></td>
        <td id="LC1939" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cur_cfqq-&gt;cfqg-&gt;nr_cfqq == <span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L1940" class="blob-num js-line-number" data-line-number="1940"></td>
        <td id="LC1940" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1941" class="blob-num js-line-number" data-line-number="1941"></td>
        <td id="LC1941" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1942" class="blob-num js-line-number" data-line-number="1942"></td>
        <td id="LC1942" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1943" class="blob-num js-line-number" data-line-number="1943"></td>
        <td id="LC1943" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * We should notice if some of the queues are cooperating, eg</span></td>
      </tr>
      <tr>
        <td id="L1944" class="blob-num js-line-number" data-line-number="1944"></td>
        <td id="LC1944" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * working closely on the same area of the disk. In that case,</span></td>
      </tr>
      <tr>
        <td id="L1945" class="blob-num js-line-number" data-line-number="1945"></td>
        <td id="LC1945" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * we can group them together and don&#39;t waste time idling.</span></td>
      </tr>
      <tr>
        <td id="L1946" class="blob-num js-line-number" data-line-number="1946"></td>
        <td id="LC1946" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1947" class="blob-num js-line-number" data-line-number="1947"></td>
        <td id="LC1947" class="blob-code blob-code-inner js-file-line">	cfqq = <span class="pl-c1">cfqq_close</span>(cfqd, cur_cfqq);</td>
      </tr>
      <tr>
        <td id="L1948" class="blob-num js-line-number" data-line-number="1948"></td>
        <td id="LC1948" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqq)</td>
      </tr>
      <tr>
        <td id="L1949" class="blob-num js-line-number" data-line-number="1949"></td>
        <td id="LC1949" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1950" class="blob-num js-line-number" data-line-number="1950"></td>
        <td id="LC1950" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1951" class="blob-num js-line-number" data-line-number="1951"></td>
        <td id="LC1951" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* If new queue belongs to different cfq_group, don&#39;t choose it */</span></td>
      </tr>
      <tr>
        <td id="L1952" class="blob-num js-line-number" data-line-number="1952"></td>
        <td id="LC1952" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cur_cfqq-&gt;cfqg != cfqq-&gt;cfqg)</td>
      </tr>
      <tr>
        <td id="L1953" class="blob-num js-line-number" data-line-number="1953"></td>
        <td id="LC1953" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1954" class="blob-num js-line-number" data-line-number="1954"></td>
        <td id="LC1954" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1955" class="blob-num js-line-number" data-line-number="1955"></td>
        <td id="LC1955" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1956" class="blob-num js-line-number" data-line-number="1956"></td>
        <td id="LC1956" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * It only makes sense to merge sync queues.</span></td>
      </tr>
      <tr>
        <td id="L1957" class="blob-num js-line-number" data-line-number="1957"></td>
        <td id="LC1957" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1958" class="blob-num js-line-number" data-line-number="1958"></td>
        <td id="LC1958" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_cfqq_sync</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L1959" class="blob-num js-line-number" data-line-number="1959"></td>
        <td id="LC1959" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1960" class="blob-num js-line-number" data-line-number="1960"></td>
        <td id="LC1960" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">CFQQ_SEEKY</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L1961" class="blob-num js-line-number" data-line-number="1961"></td>
        <td id="LC1961" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1962" class="blob-num js-line-number" data-line-number="1962"></td>
        <td id="LC1962" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1963" class="blob-num js-line-number" data-line-number="1963"></td>
        <td id="LC1963" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1964" class="blob-num js-line-number" data-line-number="1964"></td>
        <td id="LC1964" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Do not merge queues of different priority classes</span></td>
      </tr>
      <tr>
        <td id="L1965" class="blob-num js-line-number" data-line-number="1965"></td>
        <td id="LC1965" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L1966" class="blob-num js-line-number" data-line-number="1966"></td>
        <td id="LC1966" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_rt</span>(cfqq) != <span class="pl-c1">cfq_class_rt</span>(cur_cfqq))</td>
      </tr>
      <tr>
        <td id="L1967" class="blob-num js-line-number" data-line-number="1967"></td>
        <td id="LC1967" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L1968" class="blob-num js-line-number" data-line-number="1968"></td>
        <td id="LC1968" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1969" class="blob-num js-line-number" data-line-number="1969"></td>
        <td id="LC1969" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqq;</td>
      </tr>
      <tr>
        <td id="L1970" class="blob-num js-line-number" data-line-number="1970"></td>
        <td id="LC1970" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L1971" class="blob-num js-line-number" data-line-number="1971"></td>
        <td id="LC1971" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1972" class="blob-num js-line-number" data-line-number="1972"></td>
        <td id="LC1972" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1973" class="blob-num js-line-number" data-line-number="1973"></td>
        <td id="LC1973" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Determine whether we should enforce idle window for this queue.</span></td>
      </tr>
      <tr>
        <td id="L1974" class="blob-num js-line-number" data-line-number="1974"></td>
        <td id="LC1974" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L1975" class="blob-num js-line-number" data-line-number="1975"></td>
        <td id="LC1975" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1976" class="blob-num js-line-number" data-line-number="1976"></td>
        <td id="LC1976" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">bool</span> <span class="pl-en">cfq_should_idle</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L1977" class="blob-num js-line-number" data-line-number="1977"></td>
        <td id="LC1977" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L1978" class="blob-num js-line-number" data-line-number="1978"></td>
        <td id="LC1978" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">enum</span> <span class="pl-c1">wl_prio_t</span> prio = <span class="pl-c1">cfqq_prio</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L1979" class="blob-num js-line-number" data-line-number="1979"></td>
        <td id="LC1979" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *service_tree = cfqq-&gt;service_tree;</td>
      </tr>
      <tr>
        <td id="L1980" class="blob-num js-line-number" data-line-number="1980"></td>
        <td id="LC1980" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1981" class="blob-num js-line-number" data-line-number="1981"></td>
        <td id="LC1981" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(!service_tree);</td>
      </tr>
      <tr>
        <td id="L1982" class="blob-num js-line-number" data-line-number="1982"></td>
        <td id="LC1982" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(!service_tree-&gt;count);</td>
      </tr>
      <tr>
        <td id="L1983" class="blob-num js-line-number" data-line-number="1983"></td>
        <td id="LC1983" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1984" class="blob-num js-line-number" data-line-number="1984"></td>
        <td id="LC1984" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqd-&gt;cfq_slice_idle)</td>
      </tr>
      <tr>
        <td id="L1985" class="blob-num js-line-number" data-line-number="1985"></td>
        <td id="LC1985" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L1986" class="blob-num js-line-number" data-line-number="1986"></td>
        <td id="LC1986" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1987" class="blob-num js-line-number" data-line-number="1987"></td>
        <td id="LC1987" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* We never do for idle class queues. */</span></td>
      </tr>
      <tr>
        <td id="L1988" class="blob-num js-line-number" data-line-number="1988"></td>
        <td id="LC1988" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (prio == IDLE_WORKLOAD)</td>
      </tr>
      <tr>
        <td id="L1989" class="blob-num js-line-number" data-line-number="1989"></td>
        <td id="LC1989" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L1990" class="blob-num js-line-number" data-line-number="1990"></td>
        <td id="LC1990" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1991" class="blob-num js-line-number" data-line-number="1991"></td>
        <td id="LC1991" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* We do for queues that were marked with idle window flag. */</span></td>
      </tr>
      <tr>
        <td id="L1992" class="blob-num js-line-number" data-line-number="1992"></td>
        <td id="LC1992" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_idle_window</span>(cfqq) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L1993" class="blob-num js-line-number" data-line-number="1993"></td>
        <td id="LC1993" class="blob-code blob-code-inner js-file-line">	   !(<span class="pl-c1">blk_queue_nonrot</span>(cfqd-&gt;queue) &amp;&amp; cfqd-&gt;hw_tag))</td>
      </tr>
      <tr>
        <td id="L1994" class="blob-num js-line-number" data-line-number="1994"></td>
        <td id="LC1994" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L1995" class="blob-num js-line-number" data-line-number="1995"></td>
        <td id="LC1995" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L1996" class="blob-num js-line-number" data-line-number="1996"></td>
        <td id="LC1996" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L1997" class="blob-num js-line-number" data-line-number="1997"></td>
        <td id="LC1997" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Otherwise, we do only if they are the last ones</span></td>
      </tr>
      <tr>
        <td id="L1998" class="blob-num js-line-number" data-line-number="1998"></td>
        <td id="LC1998" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * in their service tree.</span></td>
      </tr>
      <tr>
        <td id="L1999" class="blob-num js-line-number" data-line-number="1999"></td>
        <td id="LC1999" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2000" class="blob-num js-line-number" data-line-number="2000"></td>
        <td id="LC2000" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (service_tree-&gt;count == <span class="pl-c1">1</span> &amp;&amp; <span class="pl-c1">cfq_cfqq_sync</span>(cfqq) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L2001" class="blob-num js-line-number" data-line-number="2001"></td>
        <td id="LC2001" class="blob-code blob-code-inner js-file-line">	   !<span class="pl-c1">cfq_io_thinktime_big</span>(cfqd, &amp;service_tree-&gt;ttime, <span class="pl-c1">false</span>))</td>
      </tr>
      <tr>
        <td id="L2002" class="blob-num js-line-number" data-line-number="2002"></td>
        <td id="LC2002" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2003" class="blob-num js-line-number" data-line-number="2003"></td>
        <td id="LC2003" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>Not idling. st-&gt;count:<span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L2004" class="blob-num js-line-number" data-line-number="2004"></td>
        <td id="LC2004" class="blob-code blob-code-inner js-file-line">			service_tree-&gt;count);</td>
      </tr>
      <tr>
        <td id="L2005" class="blob-num js-line-number" data-line-number="2005"></td>
        <td id="LC2005" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2006" class="blob-num js-line-number" data-line-number="2006"></td>
        <td id="LC2006" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2007" class="blob-num js-line-number" data-line-number="2007"></td>
        <td id="LC2007" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2008" class="blob-num js-line-number" data-line-number="2008"></td>
        <td id="LC2008" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_arm_slice_timer</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L2009" class="blob-num js-line-number" data-line-number="2009"></td>
        <td id="LC2009" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2010" class="blob-num js-line-number" data-line-number="2010"></td>
        <td id="LC2010" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = cfqd-&gt;active_queue;</td>
      </tr>
      <tr>
        <td id="L2011" class="blob-num js-line-number" data-line-number="2011"></td>
        <td id="LC2011" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *cic;</td>
      </tr>
      <tr>
        <td id="L2012" class="blob-num js-line-number" data-line-number="2012"></td>
        <td id="LC2012" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> sl, group_idle = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2013" class="blob-num js-line-number" data-line-number="2013"></td>
        <td id="LC2013" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2014" class="blob-num js-line-number" data-line-number="2014"></td>
        <td id="LC2014" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2015" class="blob-num js-line-number" data-line-number="2015"></td>
        <td id="LC2015" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * SSD device without seek penalty, disable idling. But only do so</span></td>
      </tr>
      <tr>
        <td id="L2016" class="blob-num js-line-number" data-line-number="2016"></td>
        <td id="LC2016" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * for devices that support queuing, otherwise we still have a problem</span></td>
      </tr>
      <tr>
        <td id="L2017" class="blob-num js-line-number" data-line-number="2017"></td>
        <td id="LC2017" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * with sync vs async workloads.</span></td>
      </tr>
      <tr>
        <td id="L2018" class="blob-num js-line-number" data-line-number="2018"></td>
        <td id="LC2018" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2019" class="blob-num js-line-number" data-line-number="2019"></td>
        <td id="LC2019" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">blk_queue_nonrot</span>(cfqd-&gt;queue) &amp;&amp; cfqd-&gt;hw_tag)</td>
      </tr>
      <tr>
        <td id="L2020" class="blob-num js-line-number" data-line-number="2020"></td>
        <td id="LC2020" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2021" class="blob-num js-line-number" data-line-number="2021"></td>
        <td id="LC2021" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2022" class="blob-num js-line-number" data-line-number="2022"></td>
        <td id="LC2022" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">WARN_ON</span>(!<span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list));</td>
      </tr>
      <tr>
        <td id="L2023" class="blob-num js-line-number" data-line-number="2023"></td>
        <td id="LC2023" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">WARN_ON</span>(<span class="pl-c1">cfq_cfqq_slice_new</span>(cfqq));</td>
      </tr>
      <tr>
        <td id="L2024" class="blob-num js-line-number" data-line-number="2024"></td>
        <td id="LC2024" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2025" class="blob-num js-line-number" data-line-number="2025"></td>
        <td id="LC2025" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2026" class="blob-num js-line-number" data-line-number="2026"></td>
        <td id="LC2026" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * idle is disabled, either manually or by past process history</span></td>
      </tr>
      <tr>
        <td id="L2027" class="blob-num js-line-number" data-line-number="2027"></td>
        <td id="LC2027" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2028" class="blob-num js-line-number" data-line-number="2028"></td>
        <td id="LC2028" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_should_idle</span>(cfqd, cfqq)) {</td>
      </tr>
      <tr>
        <td id="L2029" class="blob-num js-line-number" data-line-number="2029"></td>
        <td id="LC2029" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/* no queue idling. Check for group idling */</span></td>
      </tr>
      <tr>
        <td id="L2030" class="blob-num js-line-number" data-line-number="2030"></td>
        <td id="LC2030" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cfqd-&gt;cfq_group_idle)</td>
      </tr>
      <tr>
        <td id="L2031" class="blob-num js-line-number" data-line-number="2031"></td>
        <td id="LC2031" class="blob-code blob-code-inner js-file-line">			group_idle = cfqd-&gt;cfq_group_idle;</td>
      </tr>
      <tr>
        <td id="L2032" class="blob-num js-line-number" data-line-number="2032"></td>
        <td id="LC2032" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2033" class="blob-num js-line-number" data-line-number="2033"></td>
        <td id="LC2033" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2034" class="blob-num js-line-number" data-line-number="2034"></td>
        <td id="LC2034" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2035" class="blob-num js-line-number" data-line-number="2035"></td>
        <td id="LC2035" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2036" class="blob-num js-line-number" data-line-number="2036"></td>
        <td id="LC2036" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2037" class="blob-num js-line-number" data-line-number="2037"></td>
        <td id="LC2037" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * still active requests from this queue, don&#39;t idle</span></td>
      </tr>
      <tr>
        <td id="L2038" class="blob-num js-line-number" data-line-number="2038"></td>
        <td id="LC2038" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2039" class="blob-num js-line-number" data-line-number="2039"></td>
        <td id="LC2039" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;dispatched)</td>
      </tr>
      <tr>
        <td id="L2040" class="blob-num js-line-number" data-line-number="2040"></td>
        <td id="LC2040" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2041" class="blob-num js-line-number" data-line-number="2041"></td>
        <td id="LC2041" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2042" class="blob-num js-line-number" data-line-number="2042"></td>
        <td id="LC2042" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2043" class="blob-num js-line-number" data-line-number="2043"></td>
        <td id="LC2043" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * task has exited, don&#39;t wait</span></td>
      </tr>
      <tr>
        <td id="L2044" class="blob-num js-line-number" data-line-number="2044"></td>
        <td id="LC2044" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2045" class="blob-num js-line-number" data-line-number="2045"></td>
        <td id="LC2045" class="blob-code blob-code-inner js-file-line">	cic = cfqd-&gt;active_cic;</td>
      </tr>
      <tr>
        <td id="L2046" class="blob-num js-line-number" data-line-number="2046"></td>
        <td id="LC2046" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cic || !<span class="pl-c1">atomic_read</span>(&amp;cic-&gt;icq.<span class="pl-smi">ioc</span>-&gt;nr_tasks))</td>
      </tr>
      <tr>
        <td id="L2047" class="blob-num js-line-number" data-line-number="2047"></td>
        <td id="LC2047" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2048" class="blob-num js-line-number" data-line-number="2048"></td>
        <td id="LC2048" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2049" class="blob-num js-line-number" data-line-number="2049"></td>
        <td id="LC2049" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2050" class="blob-num js-line-number" data-line-number="2050"></td>
        <td id="LC2050" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If our average think time is larger than the remaining time</span></td>
      </tr>
      <tr>
        <td id="L2051" class="blob-num js-line-number" data-line-number="2051"></td>
        <td id="LC2051" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * slice, then don&#39;t idle. This avoids overrunning the allotted</span></td>
      </tr>
      <tr>
        <td id="L2052" class="blob-num js-line-number" data-line-number="2052"></td>
        <td id="LC2052" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * time slice.</span></td>
      </tr>
      <tr>
        <td id="L2053" class="blob-num js-line-number" data-line-number="2053"></td>
        <td id="LC2053" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2054" class="blob-num js-line-number" data-line-number="2054"></td>
        <td id="LC2054" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">sample_valid</span>(cic-&gt;ttime.<span class="pl-smi">ttime_samples</span>) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L2055" class="blob-num js-line-number" data-line-number="2055"></td>
        <td id="LC2055" class="blob-code blob-code-inner js-file-line">	    (cfqq-&gt;slice_end - jiffies &lt; cic-&gt;ttime.<span class="pl-smi">ttime_mean</span>)) {</td>
      </tr>
      <tr>
        <td id="L2056" class="blob-num js-line-number" data-line-number="2056"></td>
        <td id="LC2056" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>Not idling. think_time:<span class="pl-c1">%lu</span><span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L2057" class="blob-num js-line-number" data-line-number="2057"></td>
        <td id="LC2057" class="blob-code blob-code-inner js-file-line">			     cic-&gt;ttime.<span class="pl-smi">ttime_mean</span>);</td>
      </tr>
      <tr>
        <td id="L2058" class="blob-num js-line-number" data-line-number="2058"></td>
        <td id="LC2058" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2059" class="blob-num js-line-number" data-line-number="2059"></td>
        <td id="LC2059" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2060" class="blob-num js-line-number" data-line-number="2060"></td>
        <td id="LC2060" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2061" class="blob-num js-line-number" data-line-number="2061"></td>
        <td id="LC2061" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* There are other queues in the group, don&#39;t do group idle */</span></td>
      </tr>
      <tr>
        <td id="L2062" class="blob-num js-line-number" data-line-number="2062"></td>
        <td id="LC2062" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (group_idle &amp;&amp; cfqq-&gt;cfqg-&gt;nr_cfqq &gt; <span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2063" class="blob-num js-line-number" data-line-number="2063"></td>
        <td id="LC2063" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2064" class="blob-num js-line-number" data-line-number="2064"></td>
        <td id="LC2064" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2065" class="blob-num js-line-number" data-line-number="2065"></td>
        <td id="LC2065" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_mark_cfqq_wait_request</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2066" class="blob-num js-line-number" data-line-number="2066"></td>
        <td id="LC2066" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2067" class="blob-num js-line-number" data-line-number="2067"></td>
        <td id="LC2067" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (group_idle)</td>
      </tr>
      <tr>
        <td id="L2068" class="blob-num js-line-number" data-line-number="2068"></td>
        <td id="LC2068" class="blob-code blob-code-inner js-file-line">		sl = cfqd-&gt;cfq_group_idle;</td>
      </tr>
      <tr>
        <td id="L2069" class="blob-num js-line-number" data-line-number="2069"></td>
        <td id="LC2069" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2070" class="blob-num js-line-number" data-line-number="2070"></td>
        <td id="LC2070" class="blob-code blob-code-inner js-file-line">		sl = cfqd-&gt;cfq_slice_idle;</td>
      </tr>
      <tr>
        <td id="L2071" class="blob-num js-line-number" data-line-number="2071"></td>
        <td id="LC2071" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2072" class="blob-num js-line-number" data-line-number="2072"></td>
        <td id="LC2072" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">mod_timer</span>(&amp;cfqd-&gt;idle_slice_timer, jiffies + sl);</td>
      </tr>
      <tr>
        <td id="L2073" class="blob-num js-line-number" data-line-number="2073"></td>
        <td id="LC2073" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_set_idle_time_stats</span>(&amp;cfqq-&gt;cfqg-&gt;blkg);</td>
      </tr>
      <tr>
        <td id="L2074" class="blob-num js-line-number" data-line-number="2074"></td>
        <td id="LC2074" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>arm_idle: <span class="pl-c1">%lu</span> group_idle: <span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>, sl,</td>
      </tr>
      <tr>
        <td id="L2075" class="blob-num js-line-number" data-line-number="2075"></td>
        <td id="LC2075" class="blob-code blob-code-inner js-file-line">			group_idle ? <span class="pl-c1">1</span> : <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2076" class="blob-num js-line-number" data-line-number="2076"></td>
        <td id="LC2076" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2077" class="blob-num js-line-number" data-line-number="2077"></td>
        <td id="LC2077" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2078" class="blob-num js-line-number" data-line-number="2078"></td>
        <td id="LC2078" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2079" class="blob-num js-line-number" data-line-number="2079"></td>
        <td id="LC2079" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Move request from internal lists to the request queue dispatch list.</span></td>
      </tr>
      <tr>
        <td id="L2080" class="blob-num js-line-number" data-line-number="2080"></td>
        <td id="LC2080" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L2081" class="blob-num js-line-number" data-line-number="2081"></td>
        <td id="LC2081" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_dispatch_insert</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L2082" class="blob-num js-line-number" data-line-number="2082"></td>
        <td id="LC2082" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2083" class="blob-num js-line-number" data-line-number="2083"></td>
        <td id="LC2083" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = q-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L2084" class="blob-num js-line-number" data-line-number="2084"></td>
        <td id="LC2084" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">RQ_CFQQ</span>(rq);</td>
      </tr>
      <tr>
        <td id="L2085" class="blob-num js-line-number" data-line-number="2085"></td>
        <td id="LC2085" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2086" class="blob-num js-line-number" data-line-number="2086"></td>
        <td id="LC2086" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>dispatch_insert<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L2087" class="blob-num js-line-number" data-line-number="2087"></td>
        <td id="LC2087" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2088" class="blob-num js-line-number" data-line-number="2088"></td>
        <td id="LC2088" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;next_rq = <span class="pl-c1">cfq_find_next_rq</span>(cfqd, cfqq, rq);</td>
      </tr>
      <tr>
        <td id="L2089" class="blob-num js-line-number" data-line-number="2089"></td>
        <td id="LC2089" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_remove_request</span>(rq);</td>
      </tr>
      <tr>
        <td id="L2090" class="blob-num js-line-number" data-line-number="2090"></td>
        <td id="LC2090" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;dispatched++;</td>
      </tr>
      <tr>
        <td id="L2091" class="blob-num js-line-number" data-line-number="2091"></td>
        <td id="LC2091" class="blob-code blob-code-inner js-file-line">	(<span class="pl-c1">RQ_CFQG</span>(rq))-&gt;dispatched++;</td>
      </tr>
      <tr>
        <td id="L2092" class="blob-num js-line-number" data-line-number="2092"></td>
        <td id="LC2092" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">elv_dispatch_sort</span>(q, rq);</td>
      </tr>
      <tr>
        <td id="L2093" class="blob-num js-line-number" data-line-number="2093"></td>
        <td id="LC2093" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2094" class="blob-num js-line-number" data-line-number="2094"></td>
        <td id="LC2094" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;rq_in_flight[<span class="pl-c1">cfq_cfqq_sync</span>(cfqq)]++;</td>
      </tr>
      <tr>
        <td id="L2095" class="blob-num js-line-number" data-line-number="2095"></td>
        <td id="LC2095" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;nr_sectors += <span class="pl-c1">blk_rq_sectors</span>(rq);</td>
      </tr>
      <tr>
        <td id="L2096" class="blob-num js-line-number" data-line-number="2096"></td>
        <td id="LC2096" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_dispatch_stats</span>(&amp;cfqq-&gt;cfqg-&gt;blkg, <span class="pl-c1">blk_rq_bytes</span>(rq),</td>
      </tr>
      <tr>
        <td id="L2097" class="blob-num js-line-number" data-line-number="2097"></td>
        <td id="LC2097" class="blob-code blob-code-inner js-file-line">					<span class="pl-c1">rq_data_dir</span>(rq), <span class="pl-c1">rq_is_sync</span>(rq));</td>
      </tr>
      <tr>
        <td id="L2098" class="blob-num js-line-number" data-line-number="2098"></td>
        <td id="LC2098" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2099" class="blob-num js-line-number" data-line-number="2099"></td>
        <td id="LC2099" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2100" class="blob-num js-line-number" data-line-number="2100"></td>
        <td id="LC2100" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2101" class="blob-num js-line-number" data-line-number="2101"></td>
        <td id="LC2101" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * return expired entry, or NULL to just start from scratch in rbtree</span></td>
      </tr>
      <tr>
        <td id="L2102" class="blob-num js-line-number" data-line-number="2102"></td>
        <td id="LC2102" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L2103" class="blob-num js-line-number" data-line-number="2103"></td>
        <td id="LC2103" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> request *<span class="pl-en">cfq_check_fifo</span>(<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L2104" class="blob-num js-line-number" data-line-number="2104"></td>
        <td id="LC2104" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2105" class="blob-num js-line-number" data-line-number="2105"></td>
        <td id="LC2105" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request *rq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2106" class="blob-num js-line-number" data-line-number="2106"></td>
        <td id="LC2106" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2107" class="blob-num js-line-number" data-line-number="2107"></td>
        <td id="LC2107" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_fifo_expire</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L2108" class="blob-num js-line-number" data-line-number="2108"></td>
        <td id="LC2108" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2109" class="blob-num js-line-number" data-line-number="2109"></td>
        <td id="LC2109" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2110" class="blob-num js-line-number" data-line-number="2110"></td>
        <td id="LC2110" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_mark_cfqq_fifo_expire</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2111" class="blob-num js-line-number" data-line-number="2111"></td>
        <td id="LC2111" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2112" class="blob-num js-line-number" data-line-number="2112"></td>
        <td id="LC2112" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">list_empty</span>(&amp;cfqq-&gt;fifo))</td>
      </tr>
      <tr>
        <td id="L2113" class="blob-num js-line-number" data-line-number="2113"></td>
        <td id="LC2113" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2114" class="blob-num js-line-number" data-line-number="2114"></td>
        <td id="LC2114" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2115" class="blob-num js-line-number" data-line-number="2115"></td>
        <td id="LC2115" class="blob-code blob-code-inner js-file-line">	rq = <span class="pl-c1">rq_entry_fifo</span>(cfqq-&gt;fifo.<span class="pl-smi">next</span>);</td>
      </tr>
      <tr>
        <td id="L2116" class="blob-num js-line-number" data-line-number="2116"></td>
        <td id="LC2116" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">time_before</span>(jiffies, <span class="pl-c1">rq_fifo_time</span>(rq)))</td>
      </tr>
      <tr>
        <td id="L2117" class="blob-num js-line-number" data-line-number="2117"></td>
        <td id="LC2117" class="blob-code blob-code-inner js-file-line">		rq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2118" class="blob-num js-line-number" data-line-number="2118"></td>
        <td id="LC2118" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2119" class="blob-num js-line-number" data-line-number="2119"></td>
        <td id="LC2119" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqq-&gt;cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>fifo=<span class="pl-c1">%p</span><span class="pl-pds">&quot;</span></span>, rq);</td>
      </tr>
      <tr>
        <td id="L2120" class="blob-num js-line-number" data-line-number="2120"></td>
        <td id="LC2120" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> rq;</td>
      </tr>
      <tr>
        <td id="L2121" class="blob-num js-line-number" data-line-number="2121"></td>
        <td id="LC2121" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2122" class="blob-num js-line-number" data-line-number="2122"></td>
        <td id="LC2122" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2123" class="blob-num js-line-number" data-line-number="2123"></td>
        <td id="LC2123" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">int</span></td>
      </tr>
      <tr>
        <td id="L2124" class="blob-num js-line-number" data-line-number="2124"></td>
        <td id="LC2124" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_prio_to_maxrq</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L2125" class="blob-num js-line-number" data-line-number="2125"></td>
        <td id="LC2125" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2126" class="blob-num js-line-number" data-line-number="2126"></td>
        <td id="LC2126" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">const</span> <span class="pl-k">int</span> base_rq = cfqd-&gt;cfq_slice_async_rq;</td>
      </tr>
      <tr>
        <td id="L2127" class="blob-num js-line-number" data-line-number="2127"></td>
        <td id="LC2127" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2128" class="blob-num js-line-number" data-line-number="2128"></td>
        <td id="LC2128" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">WARN_ON</span>(cfqq-&gt;ioprio &gt;= IOPRIO_BE_NR);</td>
      </tr>
      <tr>
        <td id="L2129" class="blob-num js-line-number" data-line-number="2129"></td>
        <td id="LC2129" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2130" class="blob-num js-line-number" data-line-number="2130"></td>
        <td id="LC2130" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">2</span> * base_rq * (IOPRIO_BE_NR - cfqq-&gt;ioprio);</td>
      </tr>
      <tr>
        <td id="L2131" class="blob-num js-line-number" data-line-number="2131"></td>
        <td id="LC2131" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2132" class="blob-num js-line-number" data-line-number="2132"></td>
        <td id="LC2132" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2133" class="blob-num js-line-number" data-line-number="2133"></td>
        <td id="LC2133" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2134" class="blob-num js-line-number" data-line-number="2134"></td>
        <td id="LC2134" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Must be called with the queue_lock held.</span></td>
      </tr>
      <tr>
        <td id="L2135" class="blob-num js-line-number" data-line-number="2135"></td>
        <td id="LC2135" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L2136" class="blob-num js-line-number" data-line-number="2136"></td>
        <td id="LC2136" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> <span class="pl-en">cfqq_process_refs</span>(<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L2137" class="blob-num js-line-number" data-line-number="2137"></td>
        <td id="LC2137" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2138" class="blob-num js-line-number" data-line-number="2138"></td>
        <td id="LC2138" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> process_refs, io_refs;</td>
      </tr>
      <tr>
        <td id="L2139" class="blob-num js-line-number" data-line-number="2139"></td>
        <td id="LC2139" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2140" class="blob-num js-line-number" data-line-number="2140"></td>
        <td id="LC2140" class="blob-code blob-code-inner js-file-line">	io_refs = cfqq-&gt;allocated[READ] + cfqq-&gt;allocated[WRITE];</td>
      </tr>
      <tr>
        <td id="L2141" class="blob-num js-line-number" data-line-number="2141"></td>
        <td id="LC2141" class="blob-code blob-code-inner js-file-line">	process_refs = cfqq-&gt;ref - io_refs;</td>
      </tr>
      <tr>
        <td id="L2142" class="blob-num js-line-number" data-line-number="2142"></td>
        <td id="LC2142" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(process_refs &lt; <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2143" class="blob-num js-line-number" data-line-number="2143"></td>
        <td id="LC2143" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> process_refs;</td>
      </tr>
      <tr>
        <td id="L2144" class="blob-num js-line-number" data-line-number="2144"></td>
        <td id="LC2144" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2145" class="blob-num js-line-number" data-line-number="2145"></td>
        <td id="LC2145" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2146" class="blob-num js-line-number" data-line-number="2146"></td>
        <td id="LC2146" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_setup_merge</span>(<span class="pl-k">struct</span> cfq_queue *cfqq, <span class="pl-k">struct</span> cfq_queue *new_cfqq)</td>
      </tr>
      <tr>
        <td id="L2147" class="blob-num js-line-number" data-line-number="2147"></td>
        <td id="LC2147" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2148" class="blob-num js-line-number" data-line-number="2148"></td>
        <td id="LC2148" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> process_refs, new_process_refs;</td>
      </tr>
      <tr>
        <td id="L2149" class="blob-num js-line-number" data-line-number="2149"></td>
        <td id="LC2149" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *__cfqq;</td>
      </tr>
      <tr>
        <td id="L2150" class="blob-num js-line-number" data-line-number="2150"></td>
        <td id="LC2150" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2151" class="blob-num js-line-number" data-line-number="2151"></td>
        <td id="LC2151" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2152" class="blob-num js-line-number" data-line-number="2152"></td>
        <td id="LC2152" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If there are no process references on the new_cfqq, then it is</span></td>
      </tr>
      <tr>
        <td id="L2153" class="blob-num js-line-number" data-line-number="2153"></td>
        <td id="LC2153" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * unsafe to follow the -&gt;new_cfqq chain as other cfqq&#39;s in the</span></td>
      </tr>
      <tr>
        <td id="L2154" class="blob-num js-line-number" data-line-number="2154"></td>
        <td id="LC2154" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * chain may have dropped their last reference (not just their</span></td>
      </tr>
      <tr>
        <td id="L2155" class="blob-num js-line-number" data-line-number="2155"></td>
        <td id="LC2155" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * last process reference).</span></td>
      </tr>
      <tr>
        <td id="L2156" class="blob-num js-line-number" data-line-number="2156"></td>
        <td id="LC2156" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2157" class="blob-num js-line-number" data-line-number="2157"></td>
        <td id="LC2157" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfqq_process_refs</span>(new_cfqq))</td>
      </tr>
      <tr>
        <td id="L2158" class="blob-num js-line-number" data-line-number="2158"></td>
        <td id="LC2158" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2159" class="blob-num js-line-number" data-line-number="2159"></td>
        <td id="LC2159" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2160" class="blob-num js-line-number" data-line-number="2160"></td>
        <td id="LC2160" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Avoid a circular list and skip interim queue merges */</span></td>
      </tr>
      <tr>
        <td id="L2161" class="blob-num js-line-number" data-line-number="2161"></td>
        <td id="LC2161" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">while</span> ((__cfqq = new_cfqq-&gt;new_cfqq)) {</td>
      </tr>
      <tr>
        <td id="L2162" class="blob-num js-line-number" data-line-number="2162"></td>
        <td id="LC2162" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (__cfqq == cfqq)</td>
      </tr>
      <tr>
        <td id="L2163" class="blob-num js-line-number" data-line-number="2163"></td>
        <td id="LC2163" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2164" class="blob-num js-line-number" data-line-number="2164"></td>
        <td id="LC2164" class="blob-code blob-code-inner js-file-line">		new_cfqq = __cfqq;</td>
      </tr>
      <tr>
        <td id="L2165" class="blob-num js-line-number" data-line-number="2165"></td>
        <td id="LC2165" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2166" class="blob-num js-line-number" data-line-number="2166"></td>
        <td id="LC2166" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2167" class="blob-num js-line-number" data-line-number="2167"></td>
        <td id="LC2167" class="blob-code blob-code-inner js-file-line">	process_refs = <span class="pl-c1">cfqq_process_refs</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2168" class="blob-num js-line-number" data-line-number="2168"></td>
        <td id="LC2168" class="blob-code blob-code-inner js-file-line">	new_process_refs = <span class="pl-c1">cfqq_process_refs</span>(new_cfqq);</td>
      </tr>
      <tr>
        <td id="L2169" class="blob-num js-line-number" data-line-number="2169"></td>
        <td id="LC2169" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2170" class="blob-num js-line-number" data-line-number="2170"></td>
        <td id="LC2170" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If the process for the cfqq has gone away, there is no</span></td>
      </tr>
      <tr>
        <td id="L2171" class="blob-num js-line-number" data-line-number="2171"></td>
        <td id="LC2171" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * sense in merging the queues.</span></td>
      </tr>
      <tr>
        <td id="L2172" class="blob-num js-line-number" data-line-number="2172"></td>
        <td id="LC2172" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2173" class="blob-num js-line-number" data-line-number="2173"></td>
        <td id="LC2173" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (process_refs == <span class="pl-c1">0</span> || new_process_refs == <span class="pl-c1">0</span>)</td>
      </tr>
      <tr>
        <td id="L2174" class="blob-num js-line-number" data-line-number="2174"></td>
        <td id="LC2174" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2175" class="blob-num js-line-number" data-line-number="2175"></td>
        <td id="LC2175" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2176" class="blob-num js-line-number" data-line-number="2176"></td>
        <td id="LC2176" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2177" class="blob-num js-line-number" data-line-number="2177"></td>
        <td id="LC2177" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Merge in the direction of the lesser amount of work.</span></td>
      </tr>
      <tr>
        <td id="L2178" class="blob-num js-line-number" data-line-number="2178"></td>
        <td id="LC2178" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2179" class="blob-num js-line-number" data-line-number="2179"></td>
        <td id="LC2179" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (new_process_refs &gt;= process_refs) {</td>
      </tr>
      <tr>
        <td id="L2180" class="blob-num js-line-number" data-line-number="2180"></td>
        <td id="LC2180" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;new_cfqq = new_cfqq;</td>
      </tr>
      <tr>
        <td id="L2181" class="blob-num js-line-number" data-line-number="2181"></td>
        <td id="LC2181" class="blob-code blob-code-inner js-file-line">		new_cfqq-&gt;ref += process_refs;</td>
      </tr>
      <tr>
        <td id="L2182" class="blob-num js-line-number" data-line-number="2182"></td>
        <td id="LC2182" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L2183" class="blob-num js-line-number" data-line-number="2183"></td>
        <td id="LC2183" class="blob-code blob-code-inner js-file-line">		new_cfqq-&gt;new_cfqq = cfqq;</td>
      </tr>
      <tr>
        <td id="L2184" class="blob-num js-line-number" data-line-number="2184"></td>
        <td id="LC2184" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;ref += new_process_refs;</td>
      </tr>
      <tr>
        <td id="L2185" class="blob-num js-line-number" data-line-number="2185"></td>
        <td id="LC2185" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2186" class="blob-num js-line-number" data-line-number="2186"></td>
        <td id="LC2186" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2187" class="blob-num js-line-number" data-line-number="2187"></td>
        <td id="LC2187" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2188" class="blob-num js-line-number" data-line-number="2188"></td>
        <td id="LC2188" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">enum</span> <span class="pl-c1">wl_type_t</span> <span class="pl-en">cfq_choose_wl</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L2189" class="blob-num js-line-number" data-line-number="2189"></td>
        <td id="LC2189" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">struct</span> cfq_group *cfqg, <span class="pl-k">enum</span> <span class="pl-c1">wl_prio_t</span> prio)</td>
      </tr>
      <tr>
        <td id="L2190" class="blob-num js-line-number" data-line-number="2190"></td>
        <td id="LC2190" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2191" class="blob-num js-line-number" data-line-number="2191"></td>
        <td id="LC2191" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *queue;</td>
      </tr>
      <tr>
        <td id="L2192" class="blob-num js-line-number" data-line-number="2192"></td>
        <td id="LC2192" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> i;</td>
      </tr>
      <tr>
        <td id="L2193" class="blob-num js-line-number" data-line-number="2193"></td>
        <td id="LC2193" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">bool</span> key_valid = <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2194" class="blob-num js-line-number" data-line-number="2194"></td>
        <td id="LC2194" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> lowest_key = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2195" class="blob-num js-line-number" data-line-number="2195"></td>
        <td id="LC2195" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">enum</span> <span class="pl-c1">wl_type_t</span> cur_best = SYNC_NOIDLE_WORKLOAD;</td>
      </tr>
      <tr>
        <td id="L2196" class="blob-num js-line-number" data-line-number="2196"></td>
        <td id="LC2196" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2197" class="blob-num js-line-number" data-line-number="2197"></td>
        <td id="LC2197" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (i = <span class="pl-c1">0</span>; i &lt;= SYNC_WORKLOAD; ++i) {</td>
      </tr>
      <tr>
        <td id="L2198" class="blob-num js-line-number" data-line-number="2198"></td>
        <td id="LC2198" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/* select the one with lowest rb_key */</span></td>
      </tr>
      <tr>
        <td id="L2199" class="blob-num js-line-number" data-line-number="2199"></td>
        <td id="LC2199" class="blob-code blob-code-inner js-file-line">		queue = <span class="pl-c1">cfq_rb_first</span>(<span class="pl-c1">service_tree_for</span>(cfqg, prio, i));</td>
      </tr>
      <tr>
        <td id="L2200" class="blob-num js-line-number" data-line-number="2200"></td>
        <td id="LC2200" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (queue &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L2201" class="blob-num js-line-number" data-line-number="2201"></td>
        <td id="LC2201" class="blob-code blob-code-inner js-file-line">		    (!key_valid || <span class="pl-c1">time_before</span>(queue-&gt;rb_key, lowest_key))) {</td>
      </tr>
      <tr>
        <td id="L2202" class="blob-num js-line-number" data-line-number="2202"></td>
        <td id="LC2202" class="blob-code blob-code-inner js-file-line">			lowest_key = queue-&gt;rb_key;</td>
      </tr>
      <tr>
        <td id="L2203" class="blob-num js-line-number" data-line-number="2203"></td>
        <td id="LC2203" class="blob-code blob-code-inner js-file-line">			cur_best = i;</td>
      </tr>
      <tr>
        <td id="L2204" class="blob-num js-line-number" data-line-number="2204"></td>
        <td id="LC2204" class="blob-code blob-code-inner js-file-line">			key_valid = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2205" class="blob-num js-line-number" data-line-number="2205"></td>
        <td id="LC2205" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L2206" class="blob-num js-line-number" data-line-number="2206"></td>
        <td id="LC2206" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2207" class="blob-num js-line-number" data-line-number="2207"></td>
        <td id="LC2207" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2208" class="blob-num js-line-number" data-line-number="2208"></td>
        <td id="LC2208" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cur_best;</td>
      </tr>
      <tr>
        <td id="L2209" class="blob-num js-line-number" data-line-number="2209"></td>
        <td id="LC2209" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2210" class="blob-num js-line-number" data-line-number="2210"></td>
        <td id="LC2210" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2211" class="blob-num js-line-number" data-line-number="2211"></td>
        <td id="LC2211" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">choose_service_tree</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_group *cfqg)</td>
      </tr>
      <tr>
        <td id="L2212" class="blob-num js-line-number" data-line-number="2212"></td>
        <td id="LC2212" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2213" class="blob-num js-line-number" data-line-number="2213"></td>
        <td id="LC2213" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> slice;</td>
      </tr>
      <tr>
        <td id="L2214" class="blob-num js-line-number" data-line-number="2214"></td>
        <td id="LC2214" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> count;</td>
      </tr>
      <tr>
        <td id="L2215" class="blob-num js-line-number" data-line-number="2215"></td>
        <td id="LC2215" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *st;</td>
      </tr>
      <tr>
        <td id="L2216" class="blob-num js-line-number" data-line-number="2216"></td>
        <td id="LC2216" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> group_slice;</td>
      </tr>
      <tr>
        <td id="L2217" class="blob-num js-line-number" data-line-number="2217"></td>
        <td id="LC2217" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">enum</span> <span class="pl-c1">wl_prio_t</span> original_prio = cfqd-&gt;serving_prio;</td>
      </tr>
      <tr>
        <td id="L2218" class="blob-num js-line-number" data-line-number="2218"></td>
        <td id="LC2218" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2219" class="blob-num js-line-number" data-line-number="2219"></td>
        <td id="LC2219" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Choose next priority. RT &gt; BE &gt; IDLE */</span></td>
      </tr>
      <tr>
        <td id="L2220" class="blob-num js-line-number" data-line-number="2220"></td>
        <td id="LC2220" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_group_busy_queues_wl</span>(RT_WORKLOAD, cfqd, cfqg))</td>
      </tr>
      <tr>
        <td id="L2221" class="blob-num js-line-number" data-line-number="2221"></td>
        <td id="LC2221" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;serving_prio = RT_WORKLOAD;</td>
      </tr>
      <tr>
        <td id="L2222" class="blob-num js-line-number" data-line-number="2222"></td>
        <td id="LC2222" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-c1">cfq_group_busy_queues_wl</span>(BE_WORKLOAD, cfqd, cfqg))</td>
      </tr>
      <tr>
        <td id="L2223" class="blob-num js-line-number" data-line-number="2223"></td>
        <td id="LC2223" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;serving_prio = BE_WORKLOAD;</td>
      </tr>
      <tr>
        <td id="L2224" class="blob-num js-line-number" data-line-number="2224"></td>
        <td id="LC2224" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L2225" class="blob-num js-line-number" data-line-number="2225"></td>
        <td id="LC2225" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;serving_prio = IDLE_WORKLOAD;</td>
      </tr>
      <tr>
        <td id="L2226" class="blob-num js-line-number" data-line-number="2226"></td>
        <td id="LC2226" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;workload_expires = jiffies + <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L2227" class="blob-num js-line-number" data-line-number="2227"></td>
        <td id="LC2227" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2228" class="blob-num js-line-number" data-line-number="2228"></td>
        <td id="LC2228" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2229" class="blob-num js-line-number" data-line-number="2229"></td>
        <td id="LC2229" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2230" class="blob-num js-line-number" data-line-number="2230"></td>
        <td id="LC2230" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (original_prio != cfqd-&gt;serving_prio)</td>
      </tr>
      <tr>
        <td id="L2231" class="blob-num js-line-number" data-line-number="2231"></td>
        <td id="LC2231" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">goto</span> new_workload;</td>
      </tr>
      <tr>
        <td id="L2232" class="blob-num js-line-number" data-line-number="2232"></td>
        <td id="LC2232" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2233" class="blob-num js-line-number" data-line-number="2233"></td>
        <td id="LC2233" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2234" class="blob-num js-line-number" data-line-number="2234"></td>
        <td id="LC2234" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * For RT and BE, we have to choose also the type</span></td>
      </tr>
      <tr>
        <td id="L2235" class="blob-num js-line-number" data-line-number="2235"></td>
        <td id="LC2235" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * (SYNC, SYNC_NOIDLE, ASYNC), and to compute a workload</span></td>
      </tr>
      <tr>
        <td id="L2236" class="blob-num js-line-number" data-line-number="2236"></td>
        <td id="LC2236" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * expiration time</span></td>
      </tr>
      <tr>
        <td id="L2237" class="blob-num js-line-number" data-line-number="2237"></td>
        <td id="LC2237" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2238" class="blob-num js-line-number" data-line-number="2238"></td>
        <td id="LC2238" class="blob-code blob-code-inner js-file-line">	st = <span class="pl-c1">service_tree_for</span>(cfqg, cfqd-&gt;serving_prio, cfqd-&gt;serving_type);</td>
      </tr>
      <tr>
        <td id="L2239" class="blob-num js-line-number" data-line-number="2239"></td>
        <td id="LC2239" class="blob-code blob-code-inner js-file-line">	count = st-&gt;count;</td>
      </tr>
      <tr>
        <td id="L2240" class="blob-num js-line-number" data-line-number="2240"></td>
        <td id="LC2240" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2241" class="blob-num js-line-number" data-line-number="2241"></td>
        <td id="LC2241" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2242" class="blob-num js-line-number" data-line-number="2242"></td>
        <td id="LC2242" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * check workload expiration, and that we still have other queues ready</span></td>
      </tr>
      <tr>
        <td id="L2243" class="blob-num js-line-number" data-line-number="2243"></td>
        <td id="LC2243" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2244" class="blob-num js-line-number" data-line-number="2244"></td>
        <td id="LC2244" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (count &amp;&amp; !<span class="pl-c1">time_after</span>(jiffies, cfqd-&gt;workload_expires))</td>
      </tr>
      <tr>
        <td id="L2245" class="blob-num js-line-number" data-line-number="2245"></td>
        <td id="LC2245" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2246" class="blob-num js-line-number" data-line-number="2246"></td>
        <td id="LC2246" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2247" class="blob-num js-line-number" data-line-number="2247"></td>
        <td id="LC2247" class="blob-code blob-code-inner js-file-line">new_workload:</td>
      </tr>
      <tr>
        <td id="L2248" class="blob-num js-line-number" data-line-number="2248"></td>
        <td id="LC2248" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* otherwise select new workload type */</span></td>
      </tr>
      <tr>
        <td id="L2249" class="blob-num js-line-number" data-line-number="2249"></td>
        <td id="LC2249" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;serving_type =</td>
      </tr>
      <tr>
        <td id="L2250" class="blob-num js-line-number" data-line-number="2250"></td>
        <td id="LC2250" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_choose_wl</span>(cfqd, cfqg, cfqd-&gt;serving_prio);</td>
      </tr>
      <tr>
        <td id="L2251" class="blob-num js-line-number" data-line-number="2251"></td>
        <td id="LC2251" class="blob-code blob-code-inner js-file-line">	st = <span class="pl-c1">service_tree_for</span>(cfqg, cfqd-&gt;serving_prio, cfqd-&gt;serving_type);</td>
      </tr>
      <tr>
        <td id="L2252" class="blob-num js-line-number" data-line-number="2252"></td>
        <td id="LC2252" class="blob-code blob-code-inner js-file-line">	count = st-&gt;count;</td>
      </tr>
      <tr>
        <td id="L2253" class="blob-num js-line-number" data-line-number="2253"></td>
        <td id="LC2253" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2254" class="blob-num js-line-number" data-line-number="2254"></td>
        <td id="LC2254" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2255" class="blob-num js-line-number" data-line-number="2255"></td>
        <td id="LC2255" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * the workload slice is computed as a fraction of target latency</span></td>
      </tr>
      <tr>
        <td id="L2256" class="blob-num js-line-number" data-line-number="2256"></td>
        <td id="LC2256" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * proportional to the number of queues in that workload, over</span></td>
      </tr>
      <tr>
        <td id="L2257" class="blob-num js-line-number" data-line-number="2257"></td>
        <td id="LC2257" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * all the queues in the same priority class</span></td>
      </tr>
      <tr>
        <td id="L2258" class="blob-num js-line-number" data-line-number="2258"></td>
        <td id="LC2258" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2259" class="blob-num js-line-number" data-line-number="2259"></td>
        <td id="LC2259" class="blob-code blob-code-inner js-file-line">	group_slice = <span class="pl-c1">cfq_group_slice</span>(cfqd, cfqg);</td>
      </tr>
      <tr>
        <td id="L2260" class="blob-num js-line-number" data-line-number="2260"></td>
        <td id="LC2260" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2261" class="blob-num js-line-number" data-line-number="2261"></td>
        <td id="LC2261" class="blob-code blob-code-inner js-file-line">	slice = group_slice * count /</td>
      </tr>
      <tr>
        <td id="L2262" class="blob-num js-line-number" data-line-number="2262"></td>
        <td id="LC2262" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">max_t</span>(<span class="pl-k">unsigned</span>, cfqg-&gt;busy_queues_avg[cfqd-&gt;serving_prio],</td>
      </tr>
      <tr>
        <td id="L2263" class="blob-num js-line-number" data-line-number="2263"></td>
        <td id="LC2263" class="blob-code blob-code-inner js-file-line">		      <span class="pl-c1">cfq_group_busy_queues_wl</span>(cfqd-&gt;serving_prio, cfqd, cfqg));</td>
      </tr>
      <tr>
        <td id="L2264" class="blob-num js-line-number" data-line-number="2264"></td>
        <td id="LC2264" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2265" class="blob-num js-line-number" data-line-number="2265"></td>
        <td id="LC2265" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;serving_type == ASYNC_WORKLOAD) {</td>
      </tr>
      <tr>
        <td id="L2266" class="blob-num js-line-number" data-line-number="2266"></td>
        <td id="LC2266" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> <span class="pl-k">int</span> tmp;</td>
      </tr>
      <tr>
        <td id="L2267" class="blob-num js-line-number" data-line-number="2267"></td>
        <td id="LC2267" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2268" class="blob-num js-line-number" data-line-number="2268"></td>
        <td id="LC2268" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2269" class="blob-num js-line-number" data-line-number="2269"></td>
        <td id="LC2269" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Async queues are currently system wide. Just taking</span></td>
      </tr>
      <tr>
        <td id="L2270" class="blob-num js-line-number" data-line-number="2270"></td>
        <td id="LC2270" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * proportion of queues with-in same group will lead to higher</span></td>
      </tr>
      <tr>
        <td id="L2271" class="blob-num js-line-number" data-line-number="2271"></td>
        <td id="LC2271" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * async ratio system wide as generally root group is going</span></td>
      </tr>
      <tr>
        <td id="L2272" class="blob-num js-line-number" data-line-number="2272"></td>
        <td id="LC2272" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * to have higher weight. A more accurate thing would be to</span></td>
      </tr>
      <tr>
        <td id="L2273" class="blob-num js-line-number" data-line-number="2273"></td>
        <td id="LC2273" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * calculate system wide asnc/sync ratio.</span></td>
      </tr>
      <tr>
        <td id="L2274" class="blob-num js-line-number" data-line-number="2274"></td>
        <td id="LC2274" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L2275" class="blob-num js-line-number" data-line-number="2275"></td>
        <td id="LC2275" class="blob-code blob-code-inner js-file-line">		tmp = cfqd-&gt;cfq_target_latency *</td>
      </tr>
      <tr>
        <td id="L2276" class="blob-num js-line-number" data-line-number="2276"></td>
        <td id="LC2276" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfqg_busy_async_queues</span>(cfqd, cfqg);</td>
      </tr>
      <tr>
        <td id="L2277" class="blob-num js-line-number" data-line-number="2277"></td>
        <td id="LC2277" class="blob-code blob-code-inner js-file-line">		tmp = tmp/cfqd-&gt;busy_queues;</td>
      </tr>
      <tr>
        <td id="L2278" class="blob-num js-line-number" data-line-number="2278"></td>
        <td id="LC2278" class="blob-code blob-code-inner js-file-line">		slice = <span class="pl-c1">min_t</span>(<span class="pl-k">unsigned</span>, slice, tmp);</td>
      </tr>
      <tr>
        <td id="L2279" class="blob-num js-line-number" data-line-number="2279"></td>
        <td id="LC2279" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2280" class="blob-num js-line-number" data-line-number="2280"></td>
        <td id="LC2280" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/* async workload slice is scaled down according to</span></td>
      </tr>
      <tr>
        <td id="L2281" class="blob-num js-line-number" data-line-number="2281"></td>
        <td id="LC2281" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * the sync/async slice ratio. */</span></td>
      </tr>
      <tr>
        <td id="L2282" class="blob-num js-line-number" data-line-number="2282"></td>
        <td id="LC2282" class="blob-code blob-code-inner js-file-line">		slice = slice * cfqd-&gt;cfq_slice[<span class="pl-c1">0</span>] / cfqd-&gt;cfq_slice[<span class="pl-c1">1</span>];</td>
      </tr>
      <tr>
        <td id="L2283" class="blob-num js-line-number" data-line-number="2283"></td>
        <td id="LC2283" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2284" class="blob-num js-line-number" data-line-number="2284"></td>
        <td id="LC2284" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/* sync workload slice is at least 2 * cfq_slice_idle */</span></td>
      </tr>
      <tr>
        <td id="L2285" class="blob-num js-line-number" data-line-number="2285"></td>
        <td id="LC2285" class="blob-code blob-code-inner js-file-line">		slice = <span class="pl-c1">max</span>(slice, <span class="pl-c1">2</span> * cfqd-&gt;cfq_slice_idle);</td>
      </tr>
      <tr>
        <td id="L2286" class="blob-num js-line-number" data-line-number="2286"></td>
        <td id="LC2286" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2287" class="blob-num js-line-number" data-line-number="2287"></td>
        <td id="LC2287" class="blob-code blob-code-inner js-file-line">	slice = <span class="pl-c1">max_t</span>(<span class="pl-k">unsigned</span>, slice, CFQ_MIN_TT);</td>
      </tr>
      <tr>
        <td id="L2288" class="blob-num js-line-number" data-line-number="2288"></td>
        <td id="LC2288" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log</span>(cfqd, <span class="pl-s"><span class="pl-pds">&quot;</span>workload slice:<span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>, slice);</td>
      </tr>
      <tr>
        <td id="L2289" class="blob-num js-line-number" data-line-number="2289"></td>
        <td id="LC2289" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;workload_expires = jiffies + slice;</td>
      </tr>
      <tr>
        <td id="L2290" class="blob-num js-line-number" data-line-number="2290"></td>
        <td id="LC2290" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2291" class="blob-num js-line-number" data-line-number="2291"></td>
        <td id="LC2291" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2292" class="blob-num js-line-number" data-line-number="2292"></td>
        <td id="LC2292" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_group *<span class="pl-en">cfq_get_next_cfqg</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L2293" class="blob-num js-line-number" data-line-number="2293"></td>
        <td id="LC2293" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2294" class="blob-num js-line-number" data-line-number="2294"></td>
        <td id="LC2294" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *st = &amp;cfqd-&gt;grp_service_tree;</td>
      </tr>
      <tr>
        <td id="L2295" class="blob-num js-line-number" data-line-number="2295"></td>
        <td id="LC2295" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg;</td>
      </tr>
      <tr>
        <td id="L2296" class="blob-num js-line-number" data-line-number="2296"></td>
        <td id="LC2296" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2297" class="blob-num js-line-number" data-line-number="2297"></td>
        <td id="LC2297" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;st-&gt;rb))</td>
      </tr>
      <tr>
        <td id="L2298" class="blob-num js-line-number" data-line-number="2298"></td>
        <td id="LC2298" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2299" class="blob-num js-line-number" data-line-number="2299"></td>
        <td id="LC2299" class="blob-code blob-code-inner js-file-line">	cfqg = <span class="pl-c1">cfq_rb_first_group</span>(st);</td>
      </tr>
      <tr>
        <td id="L2300" class="blob-num js-line-number" data-line-number="2300"></td>
        <td id="LC2300" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">update_min_vdisktime</span>(st);</td>
      </tr>
      <tr>
        <td id="L2301" class="blob-num js-line-number" data-line-number="2301"></td>
        <td id="LC2301" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqg;</td>
      </tr>
      <tr>
        <td id="L2302" class="blob-num js-line-number" data-line-number="2302"></td>
        <td id="LC2302" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2303" class="blob-num js-line-number" data-line-number="2303"></td>
        <td id="LC2303" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2304" class="blob-num js-line-number" data-line-number="2304"></td>
        <td id="LC2304" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_choose_cfqg</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L2305" class="blob-num js-line-number" data-line-number="2305"></td>
        <td id="LC2305" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2306" class="blob-num js-line-number" data-line-number="2306"></td>
        <td id="LC2306" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg = <span class="pl-c1">cfq_get_next_cfqg</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L2307" class="blob-num js-line-number" data-line-number="2307"></td>
        <td id="LC2307" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2308" class="blob-num js-line-number" data-line-number="2308"></td>
        <td id="LC2308" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqg)</td>
      </tr>
      <tr>
        <td id="L2309" class="blob-num js-line-number" data-line-number="2309"></td>
        <td id="LC2309" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2310" class="blob-num js-line-number" data-line-number="2310"></td>
        <td id="LC2310" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2311" class="blob-num js-line-number" data-line-number="2311"></td>
        <td id="LC2311" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;serving_group = cfqg;</td>
      </tr>
      <tr>
        <td id="L2312" class="blob-num js-line-number" data-line-number="2312"></td>
        <td id="LC2312" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2313" class="blob-num js-line-number" data-line-number="2313"></td>
        <td id="LC2313" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Restore the workload type data */</span></td>
      </tr>
      <tr>
        <td id="L2314" class="blob-num js-line-number" data-line-number="2314"></td>
        <td id="LC2314" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqg-&gt;saved_workload_slice) {</td>
      </tr>
      <tr>
        <td id="L2315" class="blob-num js-line-number" data-line-number="2315"></td>
        <td id="LC2315" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;workload_expires = jiffies + cfqg-&gt;saved_workload_slice;</td>
      </tr>
      <tr>
        <td id="L2316" class="blob-num js-line-number" data-line-number="2316"></td>
        <td id="LC2316" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;serving_type = cfqg-&gt;saved_workload;</td>
      </tr>
      <tr>
        <td id="L2317" class="blob-num js-line-number" data-line-number="2317"></td>
        <td id="LC2317" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;serving_prio = cfqg-&gt;saved_serving_prio;</td>
      </tr>
      <tr>
        <td id="L2318" class="blob-num js-line-number" data-line-number="2318"></td>
        <td id="LC2318" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2319" class="blob-num js-line-number" data-line-number="2319"></td>
        <td id="LC2319" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;workload_expires = jiffies - <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L2320" class="blob-num js-line-number" data-line-number="2320"></td>
        <td id="LC2320" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2321" class="blob-num js-line-number" data-line-number="2321"></td>
        <td id="LC2321" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">choose_service_tree</span>(cfqd, cfqg);</td>
      </tr>
      <tr>
        <td id="L2322" class="blob-num js-line-number" data-line-number="2322"></td>
        <td id="LC2322" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2323" class="blob-num js-line-number" data-line-number="2323"></td>
        <td id="LC2323" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2324" class="blob-num js-line-number" data-line-number="2324"></td>
        <td id="LC2324" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2325" class="blob-num js-line-number" data-line-number="2325"></td>
        <td id="LC2325" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Select a queue for service. If we have a current active queue,</span></td>
      </tr>
      <tr>
        <td id="L2326" class="blob-num js-line-number" data-line-number="2326"></td>
        <td id="LC2326" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * check whether to continue servicing it, or retrieve and set a new one.</span></td>
      </tr>
      <tr>
        <td id="L2327" class="blob-num js-line-number" data-line-number="2327"></td>
        <td id="LC2327" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L2328" class="blob-num js-line-number" data-line-number="2328"></td>
        <td id="LC2328" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *<span class="pl-en">cfq_select_queue</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L2329" class="blob-num js-line-number" data-line-number="2329"></td>
        <td id="LC2329" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2330" class="blob-num js-line-number" data-line-number="2330"></td>
        <td id="LC2330" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq, *new_cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2331" class="blob-num js-line-number" data-line-number="2331"></td>
        <td id="LC2331" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2332" class="blob-num js-line-number" data-line-number="2332"></td>
        <td id="LC2332" class="blob-code blob-code-inner js-file-line">	cfqq = cfqd-&gt;active_queue;</td>
      </tr>
      <tr>
        <td id="L2333" class="blob-num js-line-number" data-line-number="2333"></td>
        <td id="LC2333" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqq)</td>
      </tr>
      <tr>
        <td id="L2334" class="blob-num js-line-number" data-line-number="2334"></td>
        <td id="LC2334" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">goto</span> new_queue;</td>
      </tr>
      <tr>
        <td id="L2335" class="blob-num js-line-number" data-line-number="2335"></td>
        <td id="LC2335" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2336" class="blob-num js-line-number" data-line-number="2336"></td>
        <td id="LC2336" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqd-&gt;rq_queued)</td>
      </tr>
      <tr>
        <td id="L2337" class="blob-num js-line-number" data-line-number="2337"></td>
        <td id="LC2337" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2338" class="blob-num js-line-number" data-line-number="2338"></td>
        <td id="LC2338" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2339" class="blob-num js-line-number" data-line-number="2339"></td>
        <td id="LC2339" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2340" class="blob-num js-line-number" data-line-number="2340"></td>
        <td id="LC2340" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * We were waiting for group to get backlogged. Expire the queue</span></td>
      </tr>
      <tr>
        <td id="L2341" class="blob-num js-line-number" data-line-number="2341"></td>
        <td id="LC2341" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2342" class="blob-num js-line-number" data-line-number="2342"></td>
        <td id="LC2342" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_wait_busy</span>(cfqq) &amp;&amp; !<span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list))</td>
      </tr>
      <tr>
        <td id="L2343" class="blob-num js-line-number" data-line-number="2343"></td>
        <td id="LC2343" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">goto</span> expire;</td>
      </tr>
      <tr>
        <td id="L2344" class="blob-num js-line-number" data-line-number="2344"></td>
        <td id="LC2344" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2345" class="blob-num js-line-number" data-line-number="2345"></td>
        <td id="LC2345" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2346" class="blob-num js-line-number" data-line-number="2346"></td>
        <td id="LC2346" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * The active queue has run out of time, expire it and select new.</span></td>
      </tr>
      <tr>
        <td id="L2347" class="blob-num js-line-number" data-line-number="2347"></td>
        <td id="LC2347" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2348" class="blob-num js-line-number" data-line-number="2348"></td>
        <td id="LC2348" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_slice_used</span>(cfqq) &amp;&amp; !<span class="pl-c1">cfq_cfqq_must_dispatch</span>(cfqq)) {</td>
      </tr>
      <tr>
        <td id="L2349" class="blob-num js-line-number" data-line-number="2349"></td>
        <td id="LC2349" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2350" class="blob-num js-line-number" data-line-number="2350"></td>
        <td id="LC2350" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * If slice had not expired at the completion of last request</span></td>
      </tr>
      <tr>
        <td id="L2351" class="blob-num js-line-number" data-line-number="2351"></td>
        <td id="LC2351" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * we might not have turned on wait_busy flag. Don&#39;t expire</span></td>
      </tr>
      <tr>
        <td id="L2352" class="blob-num js-line-number" data-line-number="2352"></td>
        <td id="LC2352" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * the queue yet. Allow the group to get backlogged.</span></td>
      </tr>
      <tr>
        <td id="L2353" class="blob-num js-line-number" data-line-number="2353"></td>
        <td id="LC2353" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 *</span></td>
      </tr>
      <tr>
        <td id="L2354" class="blob-num js-line-number" data-line-number="2354"></td>
        <td id="LC2354" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * The very fact that we have used the slice, that means we</span></td>
      </tr>
      <tr>
        <td id="L2355" class="blob-num js-line-number" data-line-number="2355"></td>
        <td id="LC2355" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * have been idling all along on this queue and it should be</span></td>
      </tr>
      <tr>
        <td id="L2356" class="blob-num js-line-number" data-line-number="2356"></td>
        <td id="LC2356" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * ok to wait for this request to complete.</span></td>
      </tr>
      <tr>
        <td id="L2357" class="blob-num js-line-number" data-line-number="2357"></td>
        <td id="LC2357" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L2358" class="blob-num js-line-number" data-line-number="2358"></td>
        <td id="LC2358" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cfqq-&gt;cfqg-&gt;nr_cfqq == <span class="pl-c1">1</span> &amp;&amp; <span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list)</td>
      </tr>
      <tr>
        <td id="L2359" class="blob-num js-line-number" data-line-number="2359"></td>
        <td id="LC2359" class="blob-code blob-code-inner js-file-line">		    &amp;&amp; cfqq-&gt;dispatched &amp;&amp; <span class="pl-c1">cfq_should_idle</span>(cfqd, cfqq)) {</td>
      </tr>
      <tr>
        <td id="L2360" class="blob-num js-line-number" data-line-number="2360"></td>
        <td id="LC2360" class="blob-code blob-code-inner js-file-line">			cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2361" class="blob-num js-line-number" data-line-number="2361"></td>
        <td id="LC2361" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">goto</span> keep_queue;</td>
      </tr>
      <tr>
        <td id="L2362" class="blob-num js-line-number" data-line-number="2362"></td>
        <td id="LC2362" class="blob-code blob-code-inner js-file-line">		} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2363" class="blob-num js-line-number" data-line-number="2363"></td>
        <td id="LC2363" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">goto</span> check_group_idle;</td>
      </tr>
      <tr>
        <td id="L2364" class="blob-num js-line-number" data-line-number="2364"></td>
        <td id="LC2364" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2365" class="blob-num js-line-number" data-line-number="2365"></td>
        <td id="LC2365" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2366" class="blob-num js-line-number" data-line-number="2366"></td>
        <td id="LC2366" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2367" class="blob-num js-line-number" data-line-number="2367"></td>
        <td id="LC2367" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * The active queue has requests and isn&#39;t expired, allow it to</span></td>
      </tr>
      <tr>
        <td id="L2368" class="blob-num js-line-number" data-line-number="2368"></td>
        <td id="LC2368" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * dispatch.</span></td>
      </tr>
      <tr>
        <td id="L2369" class="blob-num js-line-number" data-line-number="2369"></td>
        <td id="LC2369" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2370" class="blob-num js-line-number" data-line-number="2370"></td>
        <td id="LC2370" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list))</td>
      </tr>
      <tr>
        <td id="L2371" class="blob-num js-line-number" data-line-number="2371"></td>
        <td id="LC2371" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">goto</span> keep_queue;</td>
      </tr>
      <tr>
        <td id="L2372" class="blob-num js-line-number" data-line-number="2372"></td>
        <td id="LC2372" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2373" class="blob-num js-line-number" data-line-number="2373"></td>
        <td id="LC2373" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2374" class="blob-num js-line-number" data-line-number="2374"></td>
        <td id="LC2374" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If another queue has a request waiting within our mean seek</span></td>
      </tr>
      <tr>
        <td id="L2375" class="blob-num js-line-number" data-line-number="2375"></td>
        <td id="LC2375" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * distance, let it run.  The expire code will check for close</span></td>
      </tr>
      <tr>
        <td id="L2376" class="blob-num js-line-number" data-line-number="2376"></td>
        <td id="LC2376" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * cooperators and put the close queue at the front of the service</span></td>
      </tr>
      <tr>
        <td id="L2377" class="blob-num js-line-number" data-line-number="2377"></td>
        <td id="LC2377" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * tree.  If possible, merge the expiring queue with the new cfqq.</span></td>
      </tr>
      <tr>
        <td id="L2378" class="blob-num js-line-number" data-line-number="2378"></td>
        <td id="LC2378" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2379" class="blob-num js-line-number" data-line-number="2379"></td>
        <td id="LC2379" class="blob-code blob-code-inner js-file-line">	new_cfqq = <span class="pl-c1">cfq_close_cooperator</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L2380" class="blob-num js-line-number" data-line-number="2380"></td>
        <td id="LC2380" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (new_cfqq) {</td>
      </tr>
      <tr>
        <td id="L2381" class="blob-num js-line-number" data-line-number="2381"></td>
        <td id="LC2381" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (!cfqq-&gt;new_cfqq)</td>
      </tr>
      <tr>
        <td id="L2382" class="blob-num js-line-number" data-line-number="2382"></td>
        <td id="LC2382" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_setup_merge</span>(cfqq, new_cfqq);</td>
      </tr>
      <tr>
        <td id="L2383" class="blob-num js-line-number" data-line-number="2383"></td>
        <td id="LC2383" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">goto</span> expire;</td>
      </tr>
      <tr>
        <td id="L2384" class="blob-num js-line-number" data-line-number="2384"></td>
        <td id="LC2384" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2385" class="blob-num js-line-number" data-line-number="2385"></td>
        <td id="LC2385" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2386" class="blob-num js-line-number" data-line-number="2386"></td>
        <td id="LC2386" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2387" class="blob-num js-line-number" data-line-number="2387"></td>
        <td id="LC2387" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * No requests pending. If the active queue still has requests in</span></td>
      </tr>
      <tr>
        <td id="L2388" class="blob-num js-line-number" data-line-number="2388"></td>
        <td id="LC2388" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * flight or is idling for a new request, allow either of these</span></td>
      </tr>
      <tr>
        <td id="L2389" class="blob-num js-line-number" data-line-number="2389"></td>
        <td id="LC2389" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * conditions to happen (or time out) before selecting a new queue.</span></td>
      </tr>
      <tr>
        <td id="L2390" class="blob-num js-line-number" data-line-number="2390"></td>
        <td id="LC2390" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2391" class="blob-num js-line-number" data-line-number="2391"></td>
        <td id="LC2391" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">timer_pending</span>(&amp;cfqd-&gt;idle_slice_timer)) {</td>
      </tr>
      <tr>
        <td id="L2392" class="blob-num js-line-number" data-line-number="2392"></td>
        <td id="LC2392" class="blob-code blob-code-inner js-file-line">		cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2393" class="blob-num js-line-number" data-line-number="2393"></td>
        <td id="LC2393" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">goto</span> keep_queue;</td>
      </tr>
      <tr>
        <td id="L2394" class="blob-num js-line-number" data-line-number="2394"></td>
        <td id="LC2394" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2395" class="blob-num js-line-number" data-line-number="2395"></td>
        <td id="LC2395" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2396" class="blob-num js-line-number" data-line-number="2396"></td>
        <td id="LC2396" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2397" class="blob-num js-line-number" data-line-number="2397"></td>
        <td id="LC2397" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * This is a deep seek queue, but the device is much faster than</span></td>
      </tr>
      <tr>
        <td id="L2398" class="blob-num js-line-number" data-line-number="2398"></td>
        <td id="LC2398" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * the queue can deliver, don&#39;t idle</span></td>
      </tr>
      <tr>
        <td id="L2399" class="blob-num js-line-number" data-line-number="2399"></td>
        <td id="LC2399" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 **/</span></td>
      </tr>
      <tr>
        <td id="L2400" class="blob-num js-line-number" data-line-number="2400"></td>
        <td id="LC2400" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">CFQQ_SEEKY</span>(cfqq) &amp;&amp; <span class="pl-c1">cfq_cfqq_idle_window</span>(cfqq) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L2401" class="blob-num js-line-number" data-line-number="2401"></td>
        <td id="LC2401" class="blob-code blob-code-inner js-file-line">	    (<span class="pl-c1">cfq_cfqq_slice_new</span>(cfqq) ||</td>
      </tr>
      <tr>
        <td id="L2402" class="blob-num js-line-number" data-line-number="2402"></td>
        <td id="LC2402" class="blob-code blob-code-inner js-file-line">	    (cfqq-&gt;slice_end - jiffies &gt; jiffies - cfqq-&gt;slice_start))) {</td>
      </tr>
      <tr>
        <td id="L2403" class="blob-num js-line-number" data-line-number="2403"></td>
        <td id="LC2403" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_clear_cfqq_deep</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2404" class="blob-num js-line-number" data-line-number="2404"></td>
        <td id="LC2404" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_clear_cfqq_idle_window</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2405" class="blob-num js-line-number" data-line-number="2405"></td>
        <td id="LC2405" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2406" class="blob-num js-line-number" data-line-number="2406"></td>
        <td id="LC2406" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2407" class="blob-num js-line-number" data-line-number="2407"></td>
        <td id="LC2407" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;dispatched &amp;&amp; <span class="pl-c1">cfq_should_idle</span>(cfqd, cfqq)) {</td>
      </tr>
      <tr>
        <td id="L2408" class="blob-num js-line-number" data-line-number="2408"></td>
        <td id="LC2408" class="blob-code blob-code-inner js-file-line">		cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2409" class="blob-num js-line-number" data-line-number="2409"></td>
        <td id="LC2409" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">goto</span> keep_queue;</td>
      </tr>
      <tr>
        <td id="L2410" class="blob-num js-line-number" data-line-number="2410"></td>
        <td id="LC2410" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2411" class="blob-num js-line-number" data-line-number="2411"></td>
        <td id="LC2411" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2412" class="blob-num js-line-number" data-line-number="2412"></td>
        <td id="LC2412" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2413" class="blob-num js-line-number" data-line-number="2413"></td>
        <td id="LC2413" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If group idle is enabled and there are requests dispatched from</span></td>
      </tr>
      <tr>
        <td id="L2414" class="blob-num js-line-number" data-line-number="2414"></td>
        <td id="LC2414" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * this group, wait for requests to complete.</span></td>
      </tr>
      <tr>
        <td id="L2415" class="blob-num js-line-number" data-line-number="2415"></td>
        <td id="LC2415" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2416" class="blob-num js-line-number" data-line-number="2416"></td>
        <td id="LC2416" class="blob-code blob-code-inner js-file-line">check_group_idle:</td>
      </tr>
      <tr>
        <td id="L2417" class="blob-num js-line-number" data-line-number="2417"></td>
        <td id="LC2417" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;cfq_group_idle &amp;&amp; cfqq-&gt;cfqg-&gt;nr_cfqq == <span class="pl-c1">1</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L2418" class="blob-num js-line-number" data-line-number="2418"></td>
        <td id="LC2418" class="blob-code blob-code-inner js-file-line">	    cfqq-&gt;cfqg-&gt;dispatched &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L2419" class="blob-num js-line-number" data-line-number="2419"></td>
        <td id="LC2419" class="blob-code blob-code-inner js-file-line">	    !<span class="pl-c1">cfq_io_thinktime_big</span>(cfqd, &amp;cfqq-&gt;cfqg-&gt;ttime, <span class="pl-c1">true</span>)) {</td>
      </tr>
      <tr>
        <td id="L2420" class="blob-num js-line-number" data-line-number="2420"></td>
        <td id="LC2420" class="blob-code blob-code-inner js-file-line">		cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2421" class="blob-num js-line-number" data-line-number="2421"></td>
        <td id="LC2421" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">goto</span> keep_queue;</td>
      </tr>
      <tr>
        <td id="L2422" class="blob-num js-line-number" data-line-number="2422"></td>
        <td id="LC2422" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2423" class="blob-num js-line-number" data-line-number="2423"></td>
        <td id="LC2423" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2424" class="blob-num js-line-number" data-line-number="2424"></td>
        <td id="LC2424" class="blob-code blob-code-inner js-file-line">expire:</td>
      </tr>
      <tr>
        <td id="L2425" class="blob-num js-line-number" data-line-number="2425"></td>
        <td id="LC2425" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_slice_expired</span>(cfqd, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2426" class="blob-num js-line-number" data-line-number="2426"></td>
        <td id="LC2426" class="blob-code blob-code-inner js-file-line">new_queue:</td>
      </tr>
      <tr>
        <td id="L2427" class="blob-num js-line-number" data-line-number="2427"></td>
        <td id="LC2427" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2428" class="blob-num js-line-number" data-line-number="2428"></td>
        <td id="LC2428" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Current queue expired. Check if we have to switch to a new</span></td>
      </tr>
      <tr>
        <td id="L2429" class="blob-num js-line-number" data-line-number="2429"></td>
        <td id="LC2429" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * service tree</span></td>
      </tr>
      <tr>
        <td id="L2430" class="blob-num js-line-number" data-line-number="2430"></td>
        <td id="LC2430" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2431" class="blob-num js-line-number" data-line-number="2431"></td>
        <td id="LC2431" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!new_cfqq)</td>
      </tr>
      <tr>
        <td id="L2432" class="blob-num js-line-number" data-line-number="2432"></td>
        <td id="LC2432" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_choose_cfqg</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L2433" class="blob-num js-line-number" data-line-number="2433"></td>
        <td id="LC2433" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2434" class="blob-num js-line-number" data-line-number="2434"></td>
        <td id="LC2434" class="blob-code blob-code-inner js-file-line">	cfqq = <span class="pl-c1">cfq_set_active_queue</span>(cfqd, new_cfqq);</td>
      </tr>
      <tr>
        <td id="L2435" class="blob-num js-line-number" data-line-number="2435"></td>
        <td id="LC2435" class="blob-code blob-code-inner js-file-line">keep_queue:</td>
      </tr>
      <tr>
        <td id="L2436" class="blob-num js-line-number" data-line-number="2436"></td>
        <td id="LC2436" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqq;</td>
      </tr>
      <tr>
        <td id="L2437" class="blob-num js-line-number" data-line-number="2437"></td>
        <td id="LC2437" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2438" class="blob-num js-line-number" data-line-number="2438"></td>
        <td id="LC2438" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2439" class="blob-num js-line-number" data-line-number="2439"></td>
        <td id="LC2439" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> <span class="pl-en">__cfq_forced_dispatch_cfqq</span>(<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L2440" class="blob-num js-line-number" data-line-number="2440"></td>
        <td id="LC2440" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2441" class="blob-num js-line-number" data-line-number="2441"></td>
        <td id="LC2441" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> dispatched = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2442" class="blob-num js-line-number" data-line-number="2442"></td>
        <td id="LC2442" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2443" class="blob-num js-line-number" data-line-number="2443"></td>
        <td id="LC2443" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">while</span> (cfqq-&gt;next_rq) {</td>
      </tr>
      <tr>
        <td id="L2444" class="blob-num js-line-number" data-line-number="2444"></td>
        <td id="LC2444" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_dispatch_insert</span>(cfqq-&gt;cfqd-&gt;queue, cfqq-&gt;next_rq);</td>
      </tr>
      <tr>
        <td id="L2445" class="blob-num js-line-number" data-line-number="2445"></td>
        <td id="LC2445" class="blob-code blob-code-inner js-file-line">		dispatched++;</td>
      </tr>
      <tr>
        <td id="L2446" class="blob-num js-line-number" data-line-number="2446"></td>
        <td id="LC2446" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2447" class="blob-num js-line-number" data-line-number="2447"></td>
        <td id="LC2447" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2448" class="blob-num js-line-number" data-line-number="2448"></td>
        <td id="LC2448" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(!<span class="pl-c1">list_empty</span>(&amp;cfqq-&gt;fifo));</td>
      </tr>
      <tr>
        <td id="L2449" class="blob-num js-line-number" data-line-number="2449"></td>
        <td id="LC2449" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2450" class="blob-num js-line-number" data-line-number="2450"></td>
        <td id="LC2450" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* By default cfqq is not expired if it is empty. Do it explicitly */</span></td>
      </tr>
      <tr>
        <td id="L2451" class="blob-num js-line-number" data-line-number="2451"></td>
        <td id="LC2451" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">__cfq_slice_expired</span>(cfqq-&gt;cfqd, cfqq, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2452" class="blob-num js-line-number" data-line-number="2452"></td>
        <td id="LC2452" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> dispatched;</td>
      </tr>
      <tr>
        <td id="L2453" class="blob-num js-line-number" data-line-number="2453"></td>
        <td id="LC2453" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2454" class="blob-num js-line-number" data-line-number="2454"></td>
        <td id="LC2454" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2455" class="blob-num js-line-number" data-line-number="2455"></td>
        <td id="LC2455" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2456" class="blob-num js-line-number" data-line-number="2456"></td>
        <td id="LC2456" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Drain our current requests. Used for barriers and when switching</span></td>
      </tr>
      <tr>
        <td id="L2457" class="blob-num js-line-number" data-line-number="2457"></td>
        <td id="LC2457" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * io schedulers on-the-fly.</span></td>
      </tr>
      <tr>
        <td id="L2458" class="blob-num js-line-number" data-line-number="2458"></td>
        <td id="LC2458" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L2459" class="blob-num js-line-number" data-line-number="2459"></td>
        <td id="LC2459" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> <span class="pl-en">cfq_forced_dispatch</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L2460" class="blob-num js-line-number" data-line-number="2460"></td>
        <td id="LC2460" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2461" class="blob-num js-line-number" data-line-number="2461"></td>
        <td id="LC2461" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L2462" class="blob-num js-line-number" data-line-number="2462"></td>
        <td id="LC2462" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> dispatched = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2463" class="blob-num js-line-number" data-line-number="2463"></td>
        <td id="LC2463" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2464" class="blob-num js-line-number" data-line-number="2464"></td>
        <td id="LC2464" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Expire the timeslice of the current active queue first */</span></td>
      </tr>
      <tr>
        <td id="L2465" class="blob-num js-line-number" data-line-number="2465"></td>
        <td id="LC2465" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_slice_expired</span>(cfqd, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2466" class="blob-num js-line-number" data-line-number="2466"></td>
        <td id="LC2466" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">while</span> ((cfqq = <span class="pl-c1">cfq_get_next_queue_forced</span>(cfqd)) != <span class="pl-c1">NULL</span>) {</td>
      </tr>
      <tr>
        <td id="L2467" class="blob-num js-line-number" data-line-number="2467"></td>
        <td id="LC2467" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">__cfq_set_active_queue</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L2468" class="blob-num js-line-number" data-line-number="2468"></td>
        <td id="LC2468" class="blob-code blob-code-inner js-file-line">		dispatched += <span class="pl-c1">__cfq_forced_dispatch_cfqq</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2469" class="blob-num js-line-number" data-line-number="2469"></td>
        <td id="LC2469" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2470" class="blob-num js-line-number" data-line-number="2470"></td>
        <td id="LC2470" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2471" class="blob-num js-line-number" data-line-number="2471"></td>
        <td id="LC2471" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(cfqd-&gt;busy_queues);</td>
      </tr>
      <tr>
        <td id="L2472" class="blob-num js-line-number" data-line-number="2472"></td>
        <td id="LC2472" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2473" class="blob-num js-line-number" data-line-number="2473"></td>
        <td id="LC2473" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log</span>(cfqd, <span class="pl-s"><span class="pl-pds">&quot;</span>forced_dispatch=<span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>, dispatched);</td>
      </tr>
      <tr>
        <td id="L2474" class="blob-num js-line-number" data-line-number="2474"></td>
        <td id="LC2474" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> dispatched;</td>
      </tr>
      <tr>
        <td id="L2475" class="blob-num js-line-number" data-line-number="2475"></td>
        <td id="LC2475" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2476" class="blob-num js-line-number" data-line-number="2476"></td>
        <td id="LC2476" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2477" class="blob-num js-line-number" data-line-number="2477"></td>
        <td id="LC2477" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">bool</span> <span class="pl-en">cfq_slice_used_soon</span>(<span class="pl-k">struct</span> cfq_data *cfqd,</td>
      </tr>
      <tr>
        <td id="L2478" class="blob-num js-line-number" data-line-number="2478"></td>
        <td id="LC2478" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L2479" class="blob-num js-line-number" data-line-number="2479"></td>
        <td id="LC2479" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2480" class="blob-num js-line-number" data-line-number="2480"></td>
        <td id="LC2480" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* the queue hasn&#39;t finished any request, can&#39;t estimate */</span></td>
      </tr>
      <tr>
        <td id="L2481" class="blob-num js-line-number" data-line-number="2481"></td>
        <td id="LC2481" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_slice_new</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L2482" class="blob-num js-line-number" data-line-number="2482"></td>
        <td id="LC2482" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2483" class="blob-num js-line-number" data-line-number="2483"></td>
        <td id="LC2483" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">time_after</span>(jiffies + cfqd-&gt;cfq_slice_idle * cfqq-&gt;dispatched,</td>
      </tr>
      <tr>
        <td id="L2484" class="blob-num js-line-number" data-line-number="2484"></td>
        <td id="LC2484" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;slice_end))</td>
      </tr>
      <tr>
        <td id="L2485" class="blob-num js-line-number" data-line-number="2485"></td>
        <td id="LC2485" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2486" class="blob-num js-line-number" data-line-number="2486"></td>
        <td id="LC2486" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2487" class="blob-num js-line-number" data-line-number="2487"></td>
        <td id="LC2487" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2488" class="blob-num js-line-number" data-line-number="2488"></td>
        <td id="LC2488" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2489" class="blob-num js-line-number" data-line-number="2489"></td>
        <td id="LC2489" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2490" class="blob-num js-line-number" data-line-number="2490"></td>
        <td id="LC2490" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">bool</span> <span class="pl-en">cfq_may_dispatch</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L2491" class="blob-num js-line-number" data-line-number="2491"></td>
        <td id="LC2491" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2492" class="blob-num js-line-number" data-line-number="2492"></td>
        <td id="LC2492" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> max_dispatch;</td>
      </tr>
      <tr>
        <td id="L2493" class="blob-num js-line-number" data-line-number="2493"></td>
        <td id="LC2493" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2494" class="blob-num js-line-number" data-line-number="2494"></td>
        <td id="LC2494" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2495" class="blob-num js-line-number" data-line-number="2495"></td>
        <td id="LC2495" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Drain async requests before we start sync IO</span></td>
      </tr>
      <tr>
        <td id="L2496" class="blob-num js-line-number" data-line-number="2496"></td>
        <td id="LC2496" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2497" class="blob-num js-line-number" data-line-number="2497"></td>
        <td id="LC2497" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_should_idle</span>(cfqd, cfqq) &amp;&amp; cfqd-&gt;rq_in_flight[BLK_RW_ASYNC])</td>
      </tr>
      <tr>
        <td id="L2498" class="blob-num js-line-number" data-line-number="2498"></td>
        <td id="LC2498" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2499" class="blob-num js-line-number" data-line-number="2499"></td>
        <td id="LC2499" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2500" class="blob-num js-line-number" data-line-number="2500"></td>
        <td id="LC2500" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2501" class="blob-num js-line-number" data-line-number="2501"></td>
        <td id="LC2501" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If this is an async queue and we have sync IO in flight, let it wait</span></td>
      </tr>
      <tr>
        <td id="L2502" class="blob-num js-line-number" data-line-number="2502"></td>
        <td id="LC2502" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2503" class="blob-num js-line-number" data-line-number="2503"></td>
        <td id="LC2503" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;rq_in_flight[BLK_RW_SYNC] &amp;&amp; !<span class="pl-c1">cfq_cfqq_sync</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L2504" class="blob-num js-line-number" data-line-number="2504"></td>
        <td id="LC2504" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2505" class="blob-num js-line-number" data-line-number="2505"></td>
        <td id="LC2505" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2506" class="blob-num js-line-number" data-line-number="2506"></td>
        <td id="LC2506" class="blob-code blob-code-inner js-file-line">	max_dispatch = <span class="pl-c1">max_t</span>(<span class="pl-k">unsigned</span> <span class="pl-k">int</span>, cfqd-&gt;cfq_quantum / <span class="pl-c1">2</span>, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2507" class="blob-num js-line-number" data-line-number="2507"></td>
        <td id="LC2507" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_idle</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L2508" class="blob-num js-line-number" data-line-number="2508"></td>
        <td id="LC2508" class="blob-code blob-code-inner js-file-line">		max_dispatch = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L2509" class="blob-num js-line-number" data-line-number="2509"></td>
        <td id="LC2509" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2510" class="blob-num js-line-number" data-line-number="2510"></td>
        <td id="LC2510" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2511" class="blob-num js-line-number" data-line-number="2511"></td>
        <td id="LC2511" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Does this cfqq already have too much IO in flight?</span></td>
      </tr>
      <tr>
        <td id="L2512" class="blob-num js-line-number" data-line-number="2512"></td>
        <td id="LC2512" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2513" class="blob-num js-line-number" data-line-number="2513"></td>
        <td id="LC2513" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;dispatched &gt;= max_dispatch) {</td>
      </tr>
      <tr>
        <td id="L2514" class="blob-num js-line-number" data-line-number="2514"></td>
        <td id="LC2514" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">bool</span> promote_sync = <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2515" class="blob-num js-line-number" data-line-number="2515"></td>
        <td id="LC2515" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2516" class="blob-num js-line-number" data-line-number="2516"></td>
        <td id="LC2516" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * idle queue must always only have a single IO in flight</span></td>
      </tr>
      <tr>
        <td id="L2517" class="blob-num js-line-number" data-line-number="2517"></td>
        <td id="LC2517" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L2518" class="blob-num js-line-number" data-line-number="2518"></td>
        <td id="LC2518" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_idle</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L2519" class="blob-num js-line-number" data-line-number="2519"></td>
        <td id="LC2519" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2520" class="blob-num js-line-number" data-line-number="2520"></td>
        <td id="LC2520" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2521" class="blob-num js-line-number" data-line-number="2521"></td>
        <td id="LC2521" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2522" class="blob-num js-line-number" data-line-number="2522"></td>
        <td id="LC2522" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * If there is only one sync queue</span></td>
      </tr>
      <tr>
        <td id="L2523" class="blob-num js-line-number" data-line-number="2523"></td>
        <td id="LC2523" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * we can ignore async queue here and give the sync</span></td>
      </tr>
      <tr>
        <td id="L2524" class="blob-num js-line-number" data-line-number="2524"></td>
        <td id="LC2524" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * queue no dispatch limit. The reason is a sync queue can</span></td>
      </tr>
      <tr>
        <td id="L2525" class="blob-num js-line-number" data-line-number="2525"></td>
        <td id="LC2525" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * preempt async queue, limiting the sync queue doesn&#39;t make</span></td>
      </tr>
      <tr>
        <td id="L2526" class="blob-num js-line-number" data-line-number="2526"></td>
        <td id="LC2526" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * sense. This is useful for aiostress test.</span></td>
      </tr>
      <tr>
        <td id="L2527" class="blob-num js-line-number" data-line-number="2527"></td>
        <td id="LC2527" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L2528" class="blob-num js-line-number" data-line-number="2528"></td>
        <td id="LC2528" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_sync</span>(cfqq) &amp;&amp; cfqd-&gt;busy_sync_queues == <span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L2529" class="blob-num js-line-number" data-line-number="2529"></td>
        <td id="LC2529" class="blob-code blob-code-inner js-file-line">			promote_sync = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2530" class="blob-num js-line-number" data-line-number="2530"></td>
        <td id="LC2530" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2531" class="blob-num js-line-number" data-line-number="2531"></td>
        <td id="LC2531" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2532" class="blob-num js-line-number" data-line-number="2532"></td>
        <td id="LC2532" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * We have other queues, don&#39;t allow more IO from this one</span></td>
      </tr>
      <tr>
        <td id="L2533" class="blob-num js-line-number" data-line-number="2533"></td>
        <td id="LC2533" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L2534" class="blob-num js-line-number" data-line-number="2534"></td>
        <td id="LC2534" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cfqd-&gt;busy_queues &gt; <span class="pl-c1">1</span> &amp;&amp; <span class="pl-c1">cfq_slice_used_soon</span>(cfqd, cfqq) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L2535" class="blob-num js-line-number" data-line-number="2535"></td>
        <td id="LC2535" class="blob-code blob-code-inner js-file-line">				!promote_sync)</td>
      </tr>
      <tr>
        <td id="L2536" class="blob-num js-line-number" data-line-number="2536"></td>
        <td id="LC2536" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2537" class="blob-num js-line-number" data-line-number="2537"></td>
        <td id="LC2537" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2538" class="blob-num js-line-number" data-line-number="2538"></td>
        <td id="LC2538" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2539" class="blob-num js-line-number" data-line-number="2539"></td>
        <td id="LC2539" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Sole queue user, no limit</span></td>
      </tr>
      <tr>
        <td id="L2540" class="blob-num js-line-number" data-line-number="2540"></td>
        <td id="LC2540" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L2541" class="blob-num js-line-number" data-line-number="2541"></td>
        <td id="LC2541" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cfqd-&gt;busy_queues == <span class="pl-c1">1</span> || promote_sync)</td>
      </tr>
      <tr>
        <td id="L2542" class="blob-num js-line-number" data-line-number="2542"></td>
        <td id="LC2542" class="blob-code blob-code-inner js-file-line">			max_dispatch = -<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L2543" class="blob-num js-line-number" data-line-number="2543"></td>
        <td id="LC2543" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2544" class="blob-num js-line-number" data-line-number="2544"></td>
        <td id="LC2544" class="blob-code blob-code-inner js-file-line">			<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2545" class="blob-num js-line-number" data-line-number="2545"></td>
        <td id="LC2545" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			 * Normally we start throttling cfqq when cfq_quantum/2</span></td>
      </tr>
      <tr>
        <td id="L2546" class="blob-num js-line-number" data-line-number="2546"></td>
        <td id="LC2546" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			 * requests have been dispatched. But we can drive</span></td>
      </tr>
      <tr>
        <td id="L2547" class="blob-num js-line-number" data-line-number="2547"></td>
        <td id="LC2547" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			 * deeper queue depths at the beginning of slice</span></td>
      </tr>
      <tr>
        <td id="L2548" class="blob-num js-line-number" data-line-number="2548"></td>
        <td id="LC2548" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			 * subjected to upper limit of cfq_quantum.</span></td>
      </tr>
      <tr>
        <td id="L2549" class="blob-num js-line-number" data-line-number="2549"></td>
        <td id="LC2549" class="blob-code blob-code-inner js-file-line"><span class="pl-c">			 * */</span></td>
      </tr>
      <tr>
        <td id="L2550" class="blob-num js-line-number" data-line-number="2550"></td>
        <td id="LC2550" class="blob-code blob-code-inner js-file-line">			max_dispatch = cfqd-&gt;cfq_quantum;</td>
      </tr>
      <tr>
        <td id="L2551" class="blob-num js-line-number" data-line-number="2551"></td>
        <td id="LC2551" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2552" class="blob-num js-line-number" data-line-number="2552"></td>
        <td id="LC2552" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2553" class="blob-num js-line-number" data-line-number="2553"></td>
        <td id="LC2553" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2554" class="blob-num js-line-number" data-line-number="2554"></td>
        <td id="LC2554" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Async queues must wait a bit before being allowed dispatch.</span></td>
      </tr>
      <tr>
        <td id="L2555" class="blob-num js-line-number" data-line-number="2555"></td>
        <td id="LC2555" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * We also ramp up the dispatch depth gradually for async IO,</span></td>
      </tr>
      <tr>
        <td id="L2556" class="blob-num js-line-number" data-line-number="2556"></td>
        <td id="LC2556" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * based on the last sync IO we serviced</span></td>
      </tr>
      <tr>
        <td id="L2557" class="blob-num js-line-number" data-line-number="2557"></td>
        <td id="LC2557" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2558" class="blob-num js-line-number" data-line-number="2558"></td>
        <td id="LC2558" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_cfqq_sync</span>(cfqq) &amp;&amp; cfqd-&gt;cfq_latency) {</td>
      </tr>
      <tr>
        <td id="L2559" class="blob-num js-line-number" data-line-number="2559"></td>
        <td id="LC2559" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> <span class="pl-k">long</span> last_sync = jiffies - cfqd-&gt;last_delayed_sync;</td>
      </tr>
      <tr>
        <td id="L2560" class="blob-num js-line-number" data-line-number="2560"></td>
        <td id="LC2560" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">unsigned</span> <span class="pl-k">int</span> depth;</td>
      </tr>
      <tr>
        <td id="L2561" class="blob-num js-line-number" data-line-number="2561"></td>
        <td id="LC2561" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2562" class="blob-num js-line-number" data-line-number="2562"></td>
        <td id="LC2562" class="blob-code blob-code-inner js-file-line">		depth = last_sync / cfqd-&gt;cfq_slice[<span class="pl-c1">1</span>];</td>
      </tr>
      <tr>
        <td id="L2563" class="blob-num js-line-number" data-line-number="2563"></td>
        <td id="LC2563" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (!depth &amp;&amp; !cfqq-&gt;dispatched)</td>
      </tr>
      <tr>
        <td id="L2564" class="blob-num js-line-number" data-line-number="2564"></td>
        <td id="LC2564" class="blob-code blob-code-inner js-file-line">			depth = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L2565" class="blob-num js-line-number" data-line-number="2565"></td>
        <td id="LC2565" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (depth &lt; max_dispatch)</td>
      </tr>
      <tr>
        <td id="L2566" class="blob-num js-line-number" data-line-number="2566"></td>
        <td id="LC2566" class="blob-code blob-code-inner js-file-line">			max_dispatch = depth;</td>
      </tr>
      <tr>
        <td id="L2567" class="blob-num js-line-number" data-line-number="2567"></td>
        <td id="LC2567" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2568" class="blob-num js-line-number" data-line-number="2568"></td>
        <td id="LC2568" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2569" class="blob-num js-line-number" data-line-number="2569"></td>
        <td id="LC2569" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2570" class="blob-num js-line-number" data-line-number="2570"></td>
        <td id="LC2570" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If we&#39;re below the current max, allow a dispatch</span></td>
      </tr>
      <tr>
        <td id="L2571" class="blob-num js-line-number" data-line-number="2571"></td>
        <td id="LC2571" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2572" class="blob-num js-line-number" data-line-number="2572"></td>
        <td id="LC2572" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqq-&gt;dispatched &lt; max_dispatch;</td>
      </tr>
      <tr>
        <td id="L2573" class="blob-num js-line-number" data-line-number="2573"></td>
        <td id="LC2573" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2574" class="blob-num js-line-number" data-line-number="2574"></td>
        <td id="LC2574" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2575" class="blob-num js-line-number" data-line-number="2575"></td>
        <td id="LC2575" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2576" class="blob-num js-line-number" data-line-number="2576"></td>
        <td id="LC2576" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Dispatch a request from cfqq, moving them to the request queue</span></td>
      </tr>
      <tr>
        <td id="L2577" class="blob-num js-line-number" data-line-number="2577"></td>
        <td id="LC2577" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * dispatch list.</span></td>
      </tr>
      <tr>
        <td id="L2578" class="blob-num js-line-number" data-line-number="2578"></td>
        <td id="LC2578" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L2579" class="blob-num js-line-number" data-line-number="2579"></td>
        <td id="LC2579" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">bool</span> <span class="pl-en">cfq_dispatch_request</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L2580" class="blob-num js-line-number" data-line-number="2580"></td>
        <td id="LC2580" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2581" class="blob-num js-line-number" data-line-number="2581"></td>
        <td id="LC2581" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request *rq;</td>
      </tr>
      <tr>
        <td id="L2582" class="blob-num js-line-number" data-line-number="2582"></td>
        <td id="LC2582" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2583" class="blob-num js-line-number" data-line-number="2583"></td>
        <td id="LC2583" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(<span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list));</td>
      </tr>
      <tr>
        <td id="L2584" class="blob-num js-line-number" data-line-number="2584"></td>
        <td id="LC2584" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2585" class="blob-num js-line-number" data-line-number="2585"></td>
        <td id="LC2585" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_may_dispatch</span>(cfqd, cfqq))</td>
      </tr>
      <tr>
        <td id="L2586" class="blob-num js-line-number" data-line-number="2586"></td>
        <td id="LC2586" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L2587" class="blob-num js-line-number" data-line-number="2587"></td>
        <td id="LC2587" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2588" class="blob-num js-line-number" data-line-number="2588"></td>
        <td id="LC2588" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2589" class="blob-num js-line-number" data-line-number="2589"></td>
        <td id="LC2589" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * follow expired path, else get first next available</span></td>
      </tr>
      <tr>
        <td id="L2590" class="blob-num js-line-number" data-line-number="2590"></td>
        <td id="LC2590" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2591" class="blob-num js-line-number" data-line-number="2591"></td>
        <td id="LC2591" class="blob-code blob-code-inner js-file-line">	rq = <span class="pl-c1">cfq_check_fifo</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2592" class="blob-num js-line-number" data-line-number="2592"></td>
        <td id="LC2592" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!rq)</td>
      </tr>
      <tr>
        <td id="L2593" class="blob-num js-line-number" data-line-number="2593"></td>
        <td id="LC2593" class="blob-code blob-code-inner js-file-line">		rq = cfqq-&gt;next_rq;</td>
      </tr>
      <tr>
        <td id="L2594" class="blob-num js-line-number" data-line-number="2594"></td>
        <td id="LC2594" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2595" class="blob-num js-line-number" data-line-number="2595"></td>
        <td id="LC2595" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2596" class="blob-num js-line-number" data-line-number="2596"></td>
        <td id="LC2596" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * insert request into driver dispatch list</span></td>
      </tr>
      <tr>
        <td id="L2597" class="blob-num js-line-number" data-line-number="2597"></td>
        <td id="LC2597" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2598" class="blob-num js-line-number" data-line-number="2598"></td>
        <td id="LC2598" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_dispatch_insert</span>(cfqd-&gt;queue, rq);</td>
      </tr>
      <tr>
        <td id="L2599" class="blob-num js-line-number" data-line-number="2599"></td>
        <td id="LC2599" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2600" class="blob-num js-line-number" data-line-number="2600"></td>
        <td id="LC2600" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqd-&gt;active_cic) {</td>
      </tr>
      <tr>
        <td id="L2601" class="blob-num js-line-number" data-line-number="2601"></td>
        <td id="LC2601" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">struct</span> cfq_io_cq *cic = <span class="pl-c1">RQ_CIC</span>(rq);</td>
      </tr>
      <tr>
        <td id="L2602" class="blob-num js-line-number" data-line-number="2602"></td>
        <td id="LC2602" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2603" class="blob-num js-line-number" data-line-number="2603"></td>
        <td id="LC2603" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">atomic_long_inc</span>(&amp;cic-&gt;icq.<span class="pl-smi">ioc</span>-&gt;refcount);</td>
      </tr>
      <tr>
        <td id="L2604" class="blob-num js-line-number" data-line-number="2604"></td>
        <td id="LC2604" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;active_cic = cic;</td>
      </tr>
      <tr>
        <td id="L2605" class="blob-num js-line-number" data-line-number="2605"></td>
        <td id="LC2605" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2606" class="blob-num js-line-number" data-line-number="2606"></td>
        <td id="LC2606" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2607" class="blob-num js-line-number" data-line-number="2607"></td>
        <td id="LC2607" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L2608" class="blob-num js-line-number" data-line-number="2608"></td>
        <td id="LC2608" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2609" class="blob-num js-line-number" data-line-number="2609"></td>
        <td id="LC2609" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2610" class="blob-num js-line-number" data-line-number="2610"></td>
        <td id="LC2610" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2611" class="blob-num js-line-number" data-line-number="2611"></td>
        <td id="LC2611" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Find the cfqq that we need to service and move a request from that to the</span></td>
      </tr>
      <tr>
        <td id="L2612" class="blob-num js-line-number" data-line-number="2612"></td>
        <td id="LC2612" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * dispatch list</span></td>
      </tr>
      <tr>
        <td id="L2613" class="blob-num js-line-number" data-line-number="2613"></td>
        <td id="LC2613" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L2614" class="blob-num js-line-number" data-line-number="2614"></td>
        <td id="LC2614" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> <span class="pl-en">cfq_dispatch_requests</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">int</span> force)</td>
      </tr>
      <tr>
        <td id="L2615" class="blob-num js-line-number" data-line-number="2615"></td>
        <td id="LC2615" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2616" class="blob-num js-line-number" data-line-number="2616"></td>
        <td id="LC2616" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = q-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L2617" class="blob-num js-line-number" data-line-number="2617"></td>
        <td id="LC2617" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L2618" class="blob-num js-line-number" data-line-number="2618"></td>
        <td id="LC2618" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2619" class="blob-num js-line-number" data-line-number="2619"></td>
        <td id="LC2619" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqd-&gt;busy_queues)</td>
      </tr>
      <tr>
        <td id="L2620" class="blob-num js-line-number" data-line-number="2620"></td>
        <td id="LC2620" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2621" class="blob-num js-line-number" data-line-number="2621"></td>
        <td id="LC2621" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2622" class="blob-num js-line-number" data-line-number="2622"></td>
        <td id="LC2622" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">unlikely</span>(force))</td>
      </tr>
      <tr>
        <td id="L2623" class="blob-num js-line-number" data-line-number="2623"></td>
        <td id="LC2623" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">cfq_forced_dispatch</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L2624" class="blob-num js-line-number" data-line-number="2624"></td>
        <td id="LC2624" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2625" class="blob-num js-line-number" data-line-number="2625"></td>
        <td id="LC2625" class="blob-code blob-code-inner js-file-line">	cfqq = <span class="pl-c1">cfq_select_queue</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L2626" class="blob-num js-line-number" data-line-number="2626"></td>
        <td id="LC2626" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqq)</td>
      </tr>
      <tr>
        <td id="L2627" class="blob-num js-line-number" data-line-number="2627"></td>
        <td id="LC2627" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2628" class="blob-num js-line-number" data-line-number="2628"></td>
        <td id="LC2628" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2629" class="blob-num js-line-number" data-line-number="2629"></td>
        <td id="LC2629" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2630" class="blob-num js-line-number" data-line-number="2630"></td>
        <td id="LC2630" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Dispatch a request from this cfqq, if it is allowed</span></td>
      </tr>
      <tr>
        <td id="L2631" class="blob-num js-line-number" data-line-number="2631"></td>
        <td id="LC2631" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2632" class="blob-num js-line-number" data-line-number="2632"></td>
        <td id="LC2632" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_dispatch_request</span>(cfqd, cfqq))</td>
      </tr>
      <tr>
        <td id="L2633" class="blob-num js-line-number" data-line-number="2633"></td>
        <td id="LC2633" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2634" class="blob-num js-line-number" data-line-number="2634"></td>
        <td id="LC2634" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2635" class="blob-num js-line-number" data-line-number="2635"></td>
        <td id="LC2635" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;slice_dispatch++;</td>
      </tr>
      <tr>
        <td id="L2636" class="blob-num js-line-number" data-line-number="2636"></td>
        <td id="LC2636" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_clear_cfqq_must_dispatch</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2637" class="blob-num js-line-number" data-line-number="2637"></td>
        <td id="LC2637" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2638" class="blob-num js-line-number" data-line-number="2638"></td>
        <td id="LC2638" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2639" class="blob-num js-line-number" data-line-number="2639"></td>
        <td id="LC2639" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * expire an async queue immediately if it has used up its slice. idle</span></td>
      </tr>
      <tr>
        <td id="L2640" class="blob-num js-line-number" data-line-number="2640"></td>
        <td id="LC2640" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * queue always expire after 1 dispatch round.</span></td>
      </tr>
      <tr>
        <td id="L2641" class="blob-num js-line-number" data-line-number="2641"></td>
        <td id="LC2641" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2642" class="blob-num js-line-number" data-line-number="2642"></td>
        <td id="LC2642" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;busy_queues &gt; <span class="pl-c1">1</span> &amp;&amp; ((!<span class="pl-c1">cfq_cfqq_sync</span>(cfqq) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L2643" class="blob-num js-line-number" data-line-number="2643"></td>
        <td id="LC2643" class="blob-code blob-code-inner js-file-line">	    cfqq-&gt;slice_dispatch &gt;= <span class="pl-c1">cfq_prio_to_maxrq</span>(cfqd, cfqq)) ||</td>
      </tr>
      <tr>
        <td id="L2644" class="blob-num js-line-number" data-line-number="2644"></td>
        <td id="LC2644" class="blob-code blob-code-inner js-file-line">	    <span class="pl-c1">cfq_class_idle</span>(cfqq))) {</td>
      </tr>
      <tr>
        <td id="L2645" class="blob-num js-line-number" data-line-number="2645"></td>
        <td id="LC2645" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;slice_end = jiffies + <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L2646" class="blob-num js-line-number" data-line-number="2646"></td>
        <td id="LC2646" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_slice_expired</span>(cfqd, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2647" class="blob-num js-line-number" data-line-number="2647"></td>
        <td id="LC2647" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2648" class="blob-num js-line-number" data-line-number="2648"></td>
        <td id="LC2648" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2649" class="blob-num js-line-number" data-line-number="2649"></td>
        <td id="LC2649" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>dispatched a request<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L2650" class="blob-num js-line-number" data-line-number="2650"></td>
        <td id="LC2650" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L2651" class="blob-num js-line-number" data-line-number="2651"></td>
        <td id="LC2651" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2652" class="blob-num js-line-number" data-line-number="2652"></td>
        <td id="LC2652" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2653" class="blob-num js-line-number" data-line-number="2653"></td>
        <td id="LC2653" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2654" class="blob-num js-line-number" data-line-number="2654"></td>
        <td id="LC2654" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * task holds one reference to the queue, dropped when task exits. each rq</span></td>
      </tr>
      <tr>
        <td id="L2655" class="blob-num js-line-number" data-line-number="2655"></td>
        <td id="LC2655" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * in-flight on this queue also holds a reference, dropped when rq is freed.</span></td>
      </tr>
      <tr>
        <td id="L2656" class="blob-num js-line-number" data-line-number="2656"></td>
        <td id="LC2656" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> *</span></td>
      </tr>
      <tr>
        <td id="L2657" class="blob-num js-line-number" data-line-number="2657"></td>
        <td id="LC2657" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Each cfq queue took a reference on the parent group. Drop it now.</span></td>
      </tr>
      <tr>
        <td id="L2658" class="blob-num js-line-number" data-line-number="2658"></td>
        <td id="LC2658" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * queue lock must be held here.</span></td>
      </tr>
      <tr>
        <td id="L2659" class="blob-num js-line-number" data-line-number="2659"></td>
        <td id="LC2659" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L2660" class="blob-num js-line-number" data-line-number="2660"></td>
        <td id="LC2660" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_put_queue</span>(<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L2661" class="blob-num js-line-number" data-line-number="2661"></td>
        <td id="LC2661" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2662" class="blob-num js-line-number" data-line-number="2662"></td>
        <td id="LC2662" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = cfqq-&gt;cfqd;</td>
      </tr>
      <tr>
        <td id="L2663" class="blob-num js-line-number" data-line-number="2663"></td>
        <td id="LC2663" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg;</td>
      </tr>
      <tr>
        <td id="L2664" class="blob-num js-line-number" data-line-number="2664"></td>
        <td id="LC2664" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2665" class="blob-num js-line-number" data-line-number="2665"></td>
        <td id="LC2665" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(cfqq-&gt;ref &lt;= <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2666" class="blob-num js-line-number" data-line-number="2666"></td>
        <td id="LC2666" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2667" class="blob-num js-line-number" data-line-number="2667"></td>
        <td id="LC2667" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;ref--;</td>
      </tr>
      <tr>
        <td id="L2668" class="blob-num js-line-number" data-line-number="2668"></td>
        <td id="LC2668" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;ref)</td>
      </tr>
      <tr>
        <td id="L2669" class="blob-num js-line-number" data-line-number="2669"></td>
        <td id="LC2669" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2670" class="blob-num js-line-number" data-line-number="2670"></td>
        <td id="LC2670" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2671" class="blob-num js-line-number" data-line-number="2671"></td>
        <td id="LC2671" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>put_queue<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L2672" class="blob-num js-line-number" data-line-number="2672"></td>
        <td id="LC2672" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(<span class="pl-c1">rb_first</span>(&amp;cfqq-&gt;sort_list));</td>
      </tr>
      <tr>
        <td id="L2673" class="blob-num js-line-number" data-line-number="2673"></td>
        <td id="LC2673" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(cfqq-&gt;allocated[READ] + cfqq-&gt;allocated[WRITE]);</td>
      </tr>
      <tr>
        <td id="L2674" class="blob-num js-line-number" data-line-number="2674"></td>
        <td id="LC2674" class="blob-code blob-code-inner js-file-line">	cfqg = cfqq-&gt;cfqg;</td>
      </tr>
      <tr>
        <td id="L2675" class="blob-num js-line-number" data-line-number="2675"></td>
        <td id="LC2675" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2676" class="blob-num js-line-number" data-line-number="2676"></td>
        <td id="LC2676" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">unlikely</span>(cfqd-&gt;active_queue == cfqq)) {</td>
      </tr>
      <tr>
        <td id="L2677" class="blob-num js-line-number" data-line-number="2677"></td>
        <td id="LC2677" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">__cfq_slice_expired</span>(cfqd, cfqq, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2678" class="blob-num js-line-number" data-line-number="2678"></td>
        <td id="LC2678" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_schedule_dispatch</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L2679" class="blob-num js-line-number" data-line-number="2679"></td>
        <td id="LC2679" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2680" class="blob-num js-line-number" data-line-number="2680"></td>
        <td id="LC2680" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2681" class="blob-num js-line-number" data-line-number="2681"></td>
        <td id="LC2681" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(<span class="pl-c1">cfq_cfqq_on_rr</span>(cfqq));</td>
      </tr>
      <tr>
        <td id="L2682" class="blob-num js-line-number" data-line-number="2682"></td>
        <td id="LC2682" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">kmem_cache_free</span>(cfq_pool, cfqq);</td>
      </tr>
      <tr>
        <td id="L2683" class="blob-num js-line-number" data-line-number="2683"></td>
        <td id="LC2683" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_put_cfqg</span>(cfqg);</td>
      </tr>
      <tr>
        <td id="L2684" class="blob-num js-line-number" data-line-number="2684"></td>
        <td id="LC2684" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2685" class="blob-num js-line-number" data-line-number="2685"></td>
        <td id="LC2685" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2686" class="blob-num js-line-number" data-line-number="2686"></td>
        <td id="LC2686" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_put_cooperator</span>(<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L2687" class="blob-num js-line-number" data-line-number="2687"></td>
        <td id="LC2687" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2688" class="blob-num js-line-number" data-line-number="2688"></td>
        <td id="LC2688" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *__cfqq, *next;</td>
      </tr>
      <tr>
        <td id="L2689" class="blob-num js-line-number" data-line-number="2689"></td>
        <td id="LC2689" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2690" class="blob-num js-line-number" data-line-number="2690"></td>
        <td id="LC2690" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2691" class="blob-num js-line-number" data-line-number="2691"></td>
        <td id="LC2691" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If this queue was scheduled to merge with another queue, be</span></td>
      </tr>
      <tr>
        <td id="L2692" class="blob-num js-line-number" data-line-number="2692"></td>
        <td id="LC2692" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * sure to drop the reference taken on that queue (and others in</span></td>
      </tr>
      <tr>
        <td id="L2693" class="blob-num js-line-number" data-line-number="2693"></td>
        <td id="LC2693" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * the merge chain).  See cfq_setup_merge and cfq_merge_cfqqs.</span></td>
      </tr>
      <tr>
        <td id="L2694" class="blob-num js-line-number" data-line-number="2694"></td>
        <td id="LC2694" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2695" class="blob-num js-line-number" data-line-number="2695"></td>
        <td id="LC2695" class="blob-code blob-code-inner js-file-line">	__cfqq = cfqq-&gt;new_cfqq;</td>
      </tr>
      <tr>
        <td id="L2696" class="blob-num js-line-number" data-line-number="2696"></td>
        <td id="LC2696" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">while</span> (__cfqq) {</td>
      </tr>
      <tr>
        <td id="L2697" class="blob-num js-line-number" data-line-number="2697"></td>
        <td id="LC2697" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (__cfqq == cfqq) {</td>
      </tr>
      <tr>
        <td id="L2698" class="blob-num js-line-number" data-line-number="2698"></td>
        <td id="LC2698" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">WARN</span>(<span class="pl-c1">1</span>, <span class="pl-s"><span class="pl-pds">&quot;</span>cfqq-&gt;new_cfqq loop detected<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L2699" class="blob-num js-line-number" data-line-number="2699"></td>
        <td id="LC2699" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2700" class="blob-num js-line-number" data-line-number="2700"></td>
        <td id="LC2700" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L2701" class="blob-num js-line-number" data-line-number="2701"></td>
        <td id="LC2701" class="blob-code blob-code-inner js-file-line">		next = __cfqq-&gt;new_cfqq;</td>
      </tr>
      <tr>
        <td id="L2702" class="blob-num js-line-number" data-line-number="2702"></td>
        <td id="LC2702" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_put_queue</span>(__cfqq);</td>
      </tr>
      <tr>
        <td id="L2703" class="blob-num js-line-number" data-line-number="2703"></td>
        <td id="LC2703" class="blob-code blob-code-inner js-file-line">		__cfqq = next;</td>
      </tr>
      <tr>
        <td id="L2704" class="blob-num js-line-number" data-line-number="2704"></td>
        <td id="LC2704" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2705" class="blob-num js-line-number" data-line-number="2705"></td>
        <td id="LC2705" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2706" class="blob-num js-line-number" data-line-number="2706"></td>
        <td id="LC2706" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2707" class="blob-num js-line-number" data-line-number="2707"></td>
        <td id="LC2707" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_exit_cfqq</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L2708" class="blob-num js-line-number" data-line-number="2708"></td>
        <td id="LC2708" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2709" class="blob-num js-line-number" data-line-number="2709"></td>
        <td id="LC2709" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">unlikely</span>(cfqq == cfqd-&gt;active_queue)) {</td>
      </tr>
      <tr>
        <td id="L2710" class="blob-num js-line-number" data-line-number="2710"></td>
        <td id="LC2710" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">__cfq_slice_expired</span>(cfqd, cfqq, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L2711" class="blob-num js-line-number" data-line-number="2711"></td>
        <td id="LC2711" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_schedule_dispatch</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L2712" class="blob-num js-line-number" data-line-number="2712"></td>
        <td id="LC2712" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2713" class="blob-num js-line-number" data-line-number="2713"></td>
        <td id="LC2713" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2714" class="blob-num js-line-number" data-line-number="2714"></td>
        <td id="LC2714" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_put_cooperator</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2715" class="blob-num js-line-number" data-line-number="2715"></td>
        <td id="LC2715" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2716" class="blob-num js-line-number" data-line-number="2716"></td>
        <td id="LC2716" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_put_queue</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2717" class="blob-num js-line-number" data-line-number="2717"></td>
        <td id="LC2717" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2718" class="blob-num js-line-number" data-line-number="2718"></td>
        <td id="LC2718" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2719" class="blob-num js-line-number" data-line-number="2719"></td>
        <td id="LC2719" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_init_icq</span>(<span class="pl-k">struct</span> io_cq *icq)</td>
      </tr>
      <tr>
        <td id="L2720" class="blob-num js-line-number" data-line-number="2720"></td>
        <td id="LC2720" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2721" class="blob-num js-line-number" data-line-number="2721"></td>
        <td id="LC2721" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *cic = <span class="pl-c1">icq_to_cic</span>(icq);</td>
      </tr>
      <tr>
        <td id="L2722" class="blob-num js-line-number" data-line-number="2722"></td>
        <td id="LC2722" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2723" class="blob-num js-line-number" data-line-number="2723"></td>
        <td id="LC2723" class="blob-code blob-code-inner js-file-line">	cic-&gt;ttime.<span class="pl-smi">last_end_request</span> = jiffies;</td>
      </tr>
      <tr>
        <td id="L2724" class="blob-num js-line-number" data-line-number="2724"></td>
        <td id="LC2724" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2725" class="blob-num js-line-number" data-line-number="2725"></td>
        <td id="LC2725" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2726" class="blob-num js-line-number" data-line-number="2726"></td>
        <td id="LC2726" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_exit_icq</span>(<span class="pl-k">struct</span> io_cq *icq)</td>
      </tr>
      <tr>
        <td id="L2727" class="blob-num js-line-number" data-line-number="2727"></td>
        <td id="LC2727" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2728" class="blob-num js-line-number" data-line-number="2728"></td>
        <td id="LC2728" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *cic = <span class="pl-c1">icq_to_cic</span>(icq);</td>
      </tr>
      <tr>
        <td id="L2729" class="blob-num js-line-number" data-line-number="2729"></td>
        <td id="LC2729" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = <span class="pl-c1">cic_to_cfqd</span>(cic);</td>
      </tr>
      <tr>
        <td id="L2730" class="blob-num js-line-number" data-line-number="2730"></td>
        <td id="LC2730" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2731" class="blob-num js-line-number" data-line-number="2731"></td>
        <td id="LC2731" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cic-&gt;cfqq[BLK_RW_ASYNC]) {</td>
      </tr>
      <tr>
        <td id="L2732" class="blob-num js-line-number" data-line-number="2732"></td>
        <td id="LC2732" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_exit_cfqq</span>(cfqd, cic-&gt;cfqq[BLK_RW_ASYNC]);</td>
      </tr>
      <tr>
        <td id="L2733" class="blob-num js-line-number" data-line-number="2733"></td>
        <td id="LC2733" class="blob-code blob-code-inner js-file-line">		cic-&gt;cfqq[BLK_RW_ASYNC] = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2734" class="blob-num js-line-number" data-line-number="2734"></td>
        <td id="LC2734" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2735" class="blob-num js-line-number" data-line-number="2735"></td>
        <td id="LC2735" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2736" class="blob-num js-line-number" data-line-number="2736"></td>
        <td id="LC2736" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cic-&gt;cfqq[BLK_RW_SYNC]) {</td>
      </tr>
      <tr>
        <td id="L2737" class="blob-num js-line-number" data-line-number="2737"></td>
        <td id="LC2737" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_exit_cfqq</span>(cfqd, cic-&gt;cfqq[BLK_RW_SYNC]);</td>
      </tr>
      <tr>
        <td id="L2738" class="blob-num js-line-number" data-line-number="2738"></td>
        <td id="LC2738" class="blob-code blob-code-inner js-file-line">		cic-&gt;cfqq[BLK_RW_SYNC] = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2739" class="blob-num js-line-number" data-line-number="2739"></td>
        <td id="LC2739" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2740" class="blob-num js-line-number" data-line-number="2740"></td>
        <td id="LC2740" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2741" class="blob-num js-line-number" data-line-number="2741"></td>
        <td id="LC2741" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2742" class="blob-num js-line-number" data-line-number="2742"></td>
        <td id="LC2742" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_init_prio_data</span>(<span class="pl-k">struct</span> cfq_queue *cfqq, <span class="pl-k">struct</span> io_context *ioc)</td>
      </tr>
      <tr>
        <td id="L2743" class="blob-num js-line-number" data-line-number="2743"></td>
        <td id="LC2743" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2744" class="blob-num js-line-number" data-line-number="2744"></td>
        <td id="LC2744" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> task_struct *tsk = current;</td>
      </tr>
      <tr>
        <td id="L2745" class="blob-num js-line-number" data-line-number="2745"></td>
        <td id="LC2745" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> ioprio_class;</td>
      </tr>
      <tr>
        <td id="L2746" class="blob-num js-line-number" data-line-number="2746"></td>
        <td id="LC2746" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2747" class="blob-num js-line-number" data-line-number="2747"></td>
        <td id="LC2747" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_cfqq_prio_changed</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L2748" class="blob-num js-line-number" data-line-number="2748"></td>
        <td id="LC2748" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2749" class="blob-num js-line-number" data-line-number="2749"></td>
        <td id="LC2749" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2750" class="blob-num js-line-number" data-line-number="2750"></td>
        <td id="LC2750" class="blob-code blob-code-inner js-file-line">	ioprio_class = <span class="pl-c1">IOPRIO_PRIO_CLASS</span>(ioc-&gt;ioprio);</td>
      </tr>
      <tr>
        <td id="L2751" class="blob-num js-line-number" data-line-number="2751"></td>
        <td id="LC2751" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">switch</span> (ioprio_class) {</td>
      </tr>
      <tr>
        <td id="L2752" class="blob-num js-line-number" data-line-number="2752"></td>
        <td id="LC2752" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="L2753" class="blob-num js-line-number" data-line-number="2753"></td>
        <td id="LC2753" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">printk</span>(KERN_ERR <span class="pl-s"><span class="pl-pds">&quot;</span>cfq: bad prio <span class="pl-c1">%x</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, ioprio_class);</td>
      </tr>
      <tr>
        <td id="L2754" class="blob-num js-line-number" data-line-number="2754"></td>
        <td id="LC2754" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">case</span> IOPRIO_CLASS_NONE:</td>
      </tr>
      <tr>
        <td id="L2755" class="blob-num js-line-number" data-line-number="2755"></td>
        <td id="LC2755" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2756" class="blob-num js-line-number" data-line-number="2756"></td>
        <td id="LC2756" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * no prio set, inherit CPU scheduling settings</span></td>
      </tr>
      <tr>
        <td id="L2757" class="blob-num js-line-number" data-line-number="2757"></td>
        <td id="LC2757" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L2758" class="blob-num js-line-number" data-line-number="2758"></td>
        <td id="LC2758" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;ioprio = <span class="pl-c1">task_nice_ioprio</span>(tsk);</td>
      </tr>
      <tr>
        <td id="L2759" class="blob-num js-line-number" data-line-number="2759"></td>
        <td id="LC2759" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;ioprio_class = <span class="pl-c1">task_nice_ioclass</span>(tsk);</td>
      </tr>
      <tr>
        <td id="L2760" class="blob-num js-line-number" data-line-number="2760"></td>
        <td id="LC2760" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2761" class="blob-num js-line-number" data-line-number="2761"></td>
        <td id="LC2761" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">case</span> IOPRIO_CLASS_RT:</td>
      </tr>
      <tr>
        <td id="L2762" class="blob-num js-line-number" data-line-number="2762"></td>
        <td id="LC2762" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;ioprio = <span class="pl-c1">task_ioprio</span>(ioc);</td>
      </tr>
      <tr>
        <td id="L2763" class="blob-num js-line-number" data-line-number="2763"></td>
        <td id="LC2763" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;ioprio_class = IOPRIO_CLASS_RT;</td>
      </tr>
      <tr>
        <td id="L2764" class="blob-num js-line-number" data-line-number="2764"></td>
        <td id="LC2764" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2765" class="blob-num js-line-number" data-line-number="2765"></td>
        <td id="LC2765" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">case</span> IOPRIO_CLASS_BE:</td>
      </tr>
      <tr>
        <td id="L2766" class="blob-num js-line-number" data-line-number="2766"></td>
        <td id="LC2766" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;ioprio = <span class="pl-c1">task_ioprio</span>(ioc);</td>
      </tr>
      <tr>
        <td id="L2767" class="blob-num js-line-number" data-line-number="2767"></td>
        <td id="LC2767" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;ioprio_class = IOPRIO_CLASS_BE;</td>
      </tr>
      <tr>
        <td id="L2768" class="blob-num js-line-number" data-line-number="2768"></td>
        <td id="LC2768" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2769" class="blob-num js-line-number" data-line-number="2769"></td>
        <td id="LC2769" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">case</span> IOPRIO_CLASS_IDLE:</td>
      </tr>
      <tr>
        <td id="L2770" class="blob-num js-line-number" data-line-number="2770"></td>
        <td id="LC2770" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;ioprio_class = IOPRIO_CLASS_IDLE;</td>
      </tr>
      <tr>
        <td id="L2771" class="blob-num js-line-number" data-line-number="2771"></td>
        <td id="LC2771" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;ioprio = <span class="pl-c1">7</span>;</td>
      </tr>
      <tr>
        <td id="L2772" class="blob-num js-line-number" data-line-number="2772"></td>
        <td id="LC2772" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_clear_cfqq_idle_window</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2773" class="blob-num js-line-number" data-line-number="2773"></td>
        <td id="LC2773" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">break</span>;</td>
      </tr>
      <tr>
        <td id="L2774" class="blob-num js-line-number" data-line-number="2774"></td>
        <td id="LC2774" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2775" class="blob-num js-line-number" data-line-number="2775"></td>
        <td id="LC2775" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2776" class="blob-num js-line-number" data-line-number="2776"></td>
        <td id="LC2776" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2777" class="blob-num js-line-number" data-line-number="2777"></td>
        <td id="LC2777" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * keep track of original prio settings in case we have to temporarily</span></td>
      </tr>
      <tr>
        <td id="L2778" class="blob-num js-line-number" data-line-number="2778"></td>
        <td id="LC2778" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * elevate the priority of this queue</span></td>
      </tr>
      <tr>
        <td id="L2779" class="blob-num js-line-number" data-line-number="2779"></td>
        <td id="LC2779" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2780" class="blob-num js-line-number" data-line-number="2780"></td>
        <td id="LC2780" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;org_ioprio = cfqq-&gt;ioprio;</td>
      </tr>
      <tr>
        <td id="L2781" class="blob-num js-line-number" data-line-number="2781"></td>
        <td id="LC2781" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_clear_cfqq_prio_changed</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2782" class="blob-num js-line-number" data-line-number="2782"></td>
        <td id="LC2782" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2783" class="blob-num js-line-number" data-line-number="2783"></td>
        <td id="LC2783" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2784" class="blob-num js-line-number" data-line-number="2784"></td>
        <td id="LC2784" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">changed_ioprio</span>(<span class="pl-k">struct</span> cfq_io_cq *cic)</td>
      </tr>
      <tr>
        <td id="L2785" class="blob-num js-line-number" data-line-number="2785"></td>
        <td id="LC2785" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2786" class="blob-num js-line-number" data-line-number="2786"></td>
        <td id="LC2786" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = <span class="pl-c1">cic_to_cfqd</span>(cic);</td>
      </tr>
      <tr>
        <td id="L2787" class="blob-num js-line-number" data-line-number="2787"></td>
        <td id="LC2787" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L2788" class="blob-num js-line-number" data-line-number="2788"></td>
        <td id="LC2788" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2789" class="blob-num js-line-number" data-line-number="2789"></td>
        <td id="LC2789" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">unlikely</span>(!cfqd))</td>
      </tr>
      <tr>
        <td id="L2790" class="blob-num js-line-number" data-line-number="2790"></td>
        <td id="LC2790" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2791" class="blob-num js-line-number" data-line-number="2791"></td>
        <td id="LC2791" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2792" class="blob-num js-line-number" data-line-number="2792"></td>
        <td id="LC2792" class="blob-code blob-code-inner js-file-line">	cfqq = cic-&gt;cfqq[BLK_RW_ASYNC];</td>
      </tr>
      <tr>
        <td id="L2793" class="blob-num js-line-number" data-line-number="2793"></td>
        <td id="LC2793" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq) {</td>
      </tr>
      <tr>
        <td id="L2794" class="blob-num js-line-number" data-line-number="2794"></td>
        <td id="LC2794" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">struct</span> cfq_queue *new_cfqq;</td>
      </tr>
      <tr>
        <td id="L2795" class="blob-num js-line-number" data-line-number="2795"></td>
        <td id="LC2795" class="blob-code blob-code-inner js-file-line">		new_cfqq = <span class="pl-c1">cfq_get_queue</span>(cfqd, BLK_RW_ASYNC, cic-&gt;icq.<span class="pl-smi">ioc</span>,</td>
      </tr>
      <tr>
        <td id="L2796" class="blob-num js-line-number" data-line-number="2796"></td>
        <td id="LC2796" class="blob-code blob-code-inner js-file-line">						GFP_ATOMIC);</td>
      </tr>
      <tr>
        <td id="L2797" class="blob-num js-line-number" data-line-number="2797"></td>
        <td id="LC2797" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (new_cfqq) {</td>
      </tr>
      <tr>
        <td id="L2798" class="blob-num js-line-number" data-line-number="2798"></td>
        <td id="LC2798" class="blob-code blob-code-inner js-file-line">			cic-&gt;cfqq[BLK_RW_ASYNC] = new_cfqq;</td>
      </tr>
      <tr>
        <td id="L2799" class="blob-num js-line-number" data-line-number="2799"></td>
        <td id="LC2799" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_put_queue</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2800" class="blob-num js-line-number" data-line-number="2800"></td>
        <td id="LC2800" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L2801" class="blob-num js-line-number" data-line-number="2801"></td>
        <td id="LC2801" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2802" class="blob-num js-line-number" data-line-number="2802"></td>
        <td id="LC2802" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2803" class="blob-num js-line-number" data-line-number="2803"></td>
        <td id="LC2803" class="blob-code blob-code-inner js-file-line">	cfqq = cic-&gt;cfqq[BLK_RW_SYNC];</td>
      </tr>
      <tr>
        <td id="L2804" class="blob-num js-line-number" data-line-number="2804"></td>
        <td id="LC2804" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq)</td>
      </tr>
      <tr>
        <td id="L2805" class="blob-num js-line-number" data-line-number="2805"></td>
        <td id="LC2805" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_mark_cfqq_prio_changed</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2806" class="blob-num js-line-number" data-line-number="2806"></td>
        <td id="LC2806" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2807" class="blob-num js-line-number" data-line-number="2807"></td>
        <td id="LC2807" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2808" class="blob-num js-line-number" data-line-number="2808"></td>
        <td id="LC2808" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_init_cfqq</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L2809" class="blob-num js-line-number" data-line-number="2809"></td>
        <td id="LC2809" class="blob-code blob-code-inner js-file-line">			  <span class="pl-c1">pid_t</span> pid, <span class="pl-k">bool</span> is_sync)</td>
      </tr>
      <tr>
        <td id="L2810" class="blob-num js-line-number" data-line-number="2810"></td>
        <td id="LC2810" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2811" class="blob-num js-line-number" data-line-number="2811"></td>
        <td id="LC2811" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">RB_CLEAR_NODE</span>(&amp;cfqq-&gt;rb_node);</td>
      </tr>
      <tr>
        <td id="L2812" class="blob-num js-line-number" data-line-number="2812"></td>
        <td id="LC2812" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">RB_CLEAR_NODE</span>(&amp;cfqq-&gt;p_node);</td>
      </tr>
      <tr>
        <td id="L2813" class="blob-num js-line-number" data-line-number="2813"></td>
        <td id="LC2813" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">INIT_LIST_HEAD</span>(&amp;cfqq-&gt;fifo);</td>
      </tr>
      <tr>
        <td id="L2814" class="blob-num js-line-number" data-line-number="2814"></td>
        <td id="LC2814" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2815" class="blob-num js-line-number" data-line-number="2815"></td>
        <td id="LC2815" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;ref = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2816" class="blob-num js-line-number" data-line-number="2816"></td>
        <td id="LC2816" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;cfqd = cfqd;</td>
      </tr>
      <tr>
        <td id="L2817" class="blob-num js-line-number" data-line-number="2817"></td>
        <td id="LC2817" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2818" class="blob-num js-line-number" data-line-number="2818"></td>
        <td id="LC2818" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_mark_cfqq_prio_changed</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2819" class="blob-num js-line-number" data-line-number="2819"></td>
        <td id="LC2819" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2820" class="blob-num js-line-number" data-line-number="2820"></td>
        <td id="LC2820" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (is_sync) {</td>
      </tr>
      <tr>
        <td id="L2821" class="blob-num js-line-number" data-line-number="2821"></td>
        <td id="LC2821" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (!<span class="pl-c1">cfq_class_idle</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L2822" class="blob-num js-line-number" data-line-number="2822"></td>
        <td id="LC2822" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_mark_cfqq_idle_window</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2823" class="blob-num js-line-number" data-line-number="2823"></td>
        <td id="LC2823" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_mark_cfqq_sync</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L2824" class="blob-num js-line-number" data-line-number="2824"></td>
        <td id="LC2824" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2825" class="blob-num js-line-number" data-line-number="2825"></td>
        <td id="LC2825" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;pid = pid;</td>
      </tr>
      <tr>
        <td id="L2826" class="blob-num js-line-number" data-line-number="2826"></td>
        <td id="LC2826" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2827" class="blob-num js-line-number" data-line-number="2827"></td>
        <td id="LC2827" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2828" class="blob-num js-line-number" data-line-number="2828"></td>
        <td id="LC2828" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L2829" class="blob-num js-line-number" data-line-number="2829"></td>
        <td id="LC2829" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">changed_cgroup</span>(<span class="pl-k">struct</span> cfq_io_cq *cic)</td>
      </tr>
      <tr>
        <td id="L2830" class="blob-num js-line-number" data-line-number="2830"></td>
        <td id="LC2830" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2831" class="blob-num js-line-number" data-line-number="2831"></td>
        <td id="LC2831" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *sync_cfqq = <span class="pl-c1">cic_to_cfqq</span>(cic, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2832" class="blob-num js-line-number" data-line-number="2832"></td>
        <td id="LC2832" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = <span class="pl-c1">cic_to_cfqd</span>(cic);</td>
      </tr>
      <tr>
        <td id="L2833" class="blob-num js-line-number" data-line-number="2833"></td>
        <td id="LC2833" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request_queue *q;</td>
      </tr>
      <tr>
        <td id="L2834" class="blob-num js-line-number" data-line-number="2834"></td>
        <td id="LC2834" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2835" class="blob-num js-line-number" data-line-number="2835"></td>
        <td id="LC2835" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">unlikely</span>(!cfqd))</td>
      </tr>
      <tr>
        <td id="L2836" class="blob-num js-line-number" data-line-number="2836"></td>
        <td id="LC2836" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L2837" class="blob-num js-line-number" data-line-number="2837"></td>
        <td id="LC2837" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2838" class="blob-num js-line-number" data-line-number="2838"></td>
        <td id="LC2838" class="blob-code blob-code-inner js-file-line">	q = cfqd-&gt;queue;</td>
      </tr>
      <tr>
        <td id="L2839" class="blob-num js-line-number" data-line-number="2839"></td>
        <td id="LC2839" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2840" class="blob-num js-line-number" data-line-number="2840"></td>
        <td id="LC2840" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (sync_cfqq) {</td>
      </tr>
      <tr>
        <td id="L2841" class="blob-num js-line-number" data-line-number="2841"></td>
        <td id="LC2841" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2842" class="blob-num js-line-number" data-line-number="2842"></td>
        <td id="LC2842" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Drop reference to sync queue. A new sync queue will be</span></td>
      </tr>
      <tr>
        <td id="L2843" class="blob-num js-line-number" data-line-number="2843"></td>
        <td id="LC2843" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * assigned in new group upon arrival of a fresh request.</span></td>
      </tr>
      <tr>
        <td id="L2844" class="blob-num js-line-number" data-line-number="2844"></td>
        <td id="LC2844" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L2845" class="blob-num js-line-number" data-line-number="2845"></td>
        <td id="LC2845" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_log_cfqq</span>(cfqd, sync_cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>changed cgroup<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L2846" class="blob-num js-line-number" data-line-number="2846"></td>
        <td id="LC2846" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cic_set_cfqq</span>(cic, <span class="pl-c1">NULL</span>, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L2847" class="blob-num js-line-number" data-line-number="2847"></td>
        <td id="LC2847" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_put_queue</span>(sync_cfqq);</td>
      </tr>
      <tr>
        <td id="L2848" class="blob-num js-line-number" data-line-number="2848"></td>
        <td id="LC2848" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2849" class="blob-num js-line-number" data-line-number="2849"></td>
        <td id="LC2849" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2850" class="blob-num js-line-number" data-line-number="2850"></td>
        <td id="LC2850" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span>  <span class="pl-c">/* CONFIG_CFQ_GROUP_IOSCHED */</span></td>
      </tr>
      <tr>
        <td id="L2851" class="blob-num js-line-number" data-line-number="2851"></td>
        <td id="LC2851" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2852" class="blob-num js-line-number" data-line-number="2852"></td>
        <td id="LC2852" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *</td>
      </tr>
      <tr>
        <td id="L2853" class="blob-num js-line-number" data-line-number="2853"></td>
        <td id="LC2853" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_find_alloc_queue</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">bool</span> is_sync,</td>
      </tr>
      <tr>
        <td id="L2854" class="blob-num js-line-number" data-line-number="2854"></td>
        <td id="LC2854" class="blob-code blob-code-inner js-file-line">		     <span class="pl-k">struct</span> io_context *ioc, <span class="pl-c1">gfp_t</span> gfp_mask)</td>
      </tr>
      <tr>
        <td id="L2855" class="blob-num js-line-number" data-line-number="2855"></td>
        <td id="LC2855" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2856" class="blob-num js-line-number" data-line-number="2856"></td>
        <td id="LC2856" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq, *new_cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2857" class="blob-num js-line-number" data-line-number="2857"></td>
        <td id="LC2857" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *cic;</td>
      </tr>
      <tr>
        <td id="L2858" class="blob-num js-line-number" data-line-number="2858"></td>
        <td id="LC2858" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg;</td>
      </tr>
      <tr>
        <td id="L2859" class="blob-num js-line-number" data-line-number="2859"></td>
        <td id="LC2859" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2860" class="blob-num js-line-number" data-line-number="2860"></td>
        <td id="LC2860" class="blob-code blob-code-inner js-file-line">retry:</td>
      </tr>
      <tr>
        <td id="L2861" class="blob-num js-line-number" data-line-number="2861"></td>
        <td id="LC2861" class="blob-code blob-code-inner js-file-line">	cfqg = <span class="pl-c1">cfq_get_cfqg</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L2862" class="blob-num js-line-number" data-line-number="2862"></td>
        <td id="LC2862" class="blob-code blob-code-inner js-file-line">	cic = <span class="pl-c1">cfq_cic_lookup</span>(cfqd, ioc);</td>
      </tr>
      <tr>
        <td id="L2863" class="blob-num js-line-number" data-line-number="2863"></td>
        <td id="LC2863" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* cic always exists here */</span></td>
      </tr>
      <tr>
        <td id="L2864" class="blob-num js-line-number" data-line-number="2864"></td>
        <td id="LC2864" class="blob-code blob-code-inner js-file-line">	cfqq = <span class="pl-c1">cic_to_cfqq</span>(cic, is_sync);</td>
      </tr>
      <tr>
        <td id="L2865" class="blob-num js-line-number" data-line-number="2865"></td>
        <td id="LC2865" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2866" class="blob-num js-line-number" data-line-number="2866"></td>
        <td id="LC2866" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2867" class="blob-num js-line-number" data-line-number="2867"></td>
        <td id="LC2867" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Always try a new alloc if we fell back to the OOM cfqq</span></td>
      </tr>
      <tr>
        <td id="L2868" class="blob-num js-line-number" data-line-number="2868"></td>
        <td id="LC2868" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * originally, since it should just be a temporary situation.</span></td>
      </tr>
      <tr>
        <td id="L2869" class="blob-num js-line-number" data-line-number="2869"></td>
        <td id="LC2869" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2870" class="blob-num js-line-number" data-line-number="2870"></td>
        <td id="LC2870" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqq || cfqq == &amp;cfqd-&gt;oom_cfqq) {</td>
      </tr>
      <tr>
        <td id="L2871" class="blob-num js-line-number" data-line-number="2871"></td>
        <td id="LC2871" class="blob-code blob-code-inner js-file-line">		cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2872" class="blob-num js-line-number" data-line-number="2872"></td>
        <td id="LC2872" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (new_cfqq) {</td>
      </tr>
      <tr>
        <td id="L2873" class="blob-num js-line-number" data-line-number="2873"></td>
        <td id="LC2873" class="blob-code blob-code-inner js-file-line">			cfqq = new_cfqq;</td>
      </tr>
      <tr>
        <td id="L2874" class="blob-num js-line-number" data-line-number="2874"></td>
        <td id="LC2874" class="blob-code blob-code-inner js-file-line">			new_cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2875" class="blob-num js-line-number" data-line-number="2875"></td>
        <td id="LC2875" class="blob-code blob-code-inner js-file-line">		} <span class="pl-k">else</span> <span class="pl-k">if</span> (gfp_mask &amp; __GFP_WAIT) {</td>
      </tr>
      <tr>
        <td id="L2876" class="blob-num js-line-number" data-line-number="2876"></td>
        <td id="LC2876" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">spin_unlock_irq</span>(cfqd-&gt;queue-&gt;queue_lock);</td>
      </tr>
      <tr>
        <td id="L2877" class="blob-num js-line-number" data-line-number="2877"></td>
        <td id="LC2877" class="blob-code blob-code-inner js-file-line">			new_cfqq = <span class="pl-c1">kmem_cache_alloc_node</span>(cfq_pool,</td>
      </tr>
      <tr>
        <td id="L2878" class="blob-num js-line-number" data-line-number="2878"></td>
        <td id="LC2878" class="blob-code blob-code-inner js-file-line">					gfp_mask | __GFP_ZERO,</td>
      </tr>
      <tr>
        <td id="L2879" class="blob-num js-line-number" data-line-number="2879"></td>
        <td id="LC2879" class="blob-code blob-code-inner js-file-line">					cfqd-&gt;queue-&gt;node);</td>
      </tr>
      <tr>
        <td id="L2880" class="blob-num js-line-number" data-line-number="2880"></td>
        <td id="LC2880" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">spin_lock_irq</span>(cfqd-&gt;queue-&gt;queue_lock);</td>
      </tr>
      <tr>
        <td id="L2881" class="blob-num js-line-number" data-line-number="2881"></td>
        <td id="LC2881" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (new_cfqq)</td>
      </tr>
      <tr>
        <td id="L2882" class="blob-num js-line-number" data-line-number="2882"></td>
        <td id="LC2882" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">goto</span> retry;</td>
      </tr>
      <tr>
        <td id="L2883" class="blob-num js-line-number" data-line-number="2883"></td>
        <td id="LC2883" class="blob-code blob-code-inner js-file-line">		} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L2884" class="blob-num js-line-number" data-line-number="2884"></td>
        <td id="LC2884" class="blob-code blob-code-inner js-file-line">			cfqq = <span class="pl-c1">kmem_cache_alloc_node</span>(cfq_pool,</td>
      </tr>
      <tr>
        <td id="L2885" class="blob-num js-line-number" data-line-number="2885"></td>
        <td id="LC2885" class="blob-code blob-code-inner js-file-line">					gfp_mask | __GFP_ZERO,</td>
      </tr>
      <tr>
        <td id="L2886" class="blob-num js-line-number" data-line-number="2886"></td>
        <td id="LC2886" class="blob-code blob-code-inner js-file-line">					cfqd-&gt;queue-&gt;node);</td>
      </tr>
      <tr>
        <td id="L2887" class="blob-num js-line-number" data-line-number="2887"></td>
        <td id="LC2887" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L2888" class="blob-num js-line-number" data-line-number="2888"></td>
        <td id="LC2888" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2889" class="blob-num js-line-number" data-line-number="2889"></td>
        <td id="LC2889" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cfqq) {</td>
      </tr>
      <tr>
        <td id="L2890" class="blob-num js-line-number" data-line-number="2890"></td>
        <td id="LC2890" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_init_cfqq</span>(cfqd, cfqq, current-&gt;pid, is_sync);</td>
      </tr>
      <tr>
        <td id="L2891" class="blob-num js-line-number" data-line-number="2891"></td>
        <td id="LC2891" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_init_prio_data</span>(cfqq, ioc);</td>
      </tr>
      <tr>
        <td id="L2892" class="blob-num js-line-number" data-line-number="2892"></td>
        <td id="LC2892" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_link_cfqq_cfqg</span>(cfqq, cfqg);</td>
      </tr>
      <tr>
        <td id="L2893" class="blob-num js-line-number" data-line-number="2893"></td>
        <td id="LC2893" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>alloced<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L2894" class="blob-num js-line-number" data-line-number="2894"></td>
        <td id="LC2894" class="blob-code blob-code-inner js-file-line">		} <span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2895" class="blob-num js-line-number" data-line-number="2895"></td>
        <td id="LC2895" class="blob-code blob-code-inner js-file-line">			cfqq = &amp;cfqd-&gt;oom_cfqq;</td>
      </tr>
      <tr>
        <td id="L2896" class="blob-num js-line-number" data-line-number="2896"></td>
        <td id="LC2896" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2897" class="blob-num js-line-number" data-line-number="2897"></td>
        <td id="LC2897" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2898" class="blob-num js-line-number" data-line-number="2898"></td>
        <td id="LC2898" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (new_cfqq)</td>
      </tr>
      <tr>
        <td id="L2899" class="blob-num js-line-number" data-line-number="2899"></td>
        <td id="LC2899" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">kmem_cache_free</span>(cfq_pool, new_cfqq);</td>
      </tr>
      <tr>
        <td id="L2900" class="blob-num js-line-number" data-line-number="2900"></td>
        <td id="LC2900" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2901" class="blob-num js-line-number" data-line-number="2901"></td>
        <td id="LC2901" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqq;</td>
      </tr>
      <tr>
        <td id="L2902" class="blob-num js-line-number" data-line-number="2902"></td>
        <td id="LC2902" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2903" class="blob-num js-line-number" data-line-number="2903"></td>
        <td id="LC2903" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2904" class="blob-num js-line-number" data-line-number="2904"></td>
        <td id="LC2904" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue **</td>
      </tr>
      <tr>
        <td id="L2905" class="blob-num js-line-number" data-line-number="2905"></td>
        <td id="LC2905" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_async_queue_prio</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">int</span> ioprio_class, <span class="pl-k">int</span> ioprio)</td>
      </tr>
      <tr>
        <td id="L2906" class="blob-num js-line-number" data-line-number="2906"></td>
        <td id="LC2906" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2907" class="blob-num js-line-number" data-line-number="2907"></td>
        <td id="LC2907" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">switch</span> (ioprio_class) {</td>
      </tr>
      <tr>
        <td id="L2908" class="blob-num js-line-number" data-line-number="2908"></td>
        <td id="LC2908" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">case</span> IOPRIO_CLASS_RT:</td>
      </tr>
      <tr>
        <td id="L2909" class="blob-num js-line-number" data-line-number="2909"></td>
        <td id="LC2909" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> &amp;cfqd-&gt;async_cfqq[<span class="pl-c1">0</span>][ioprio];</td>
      </tr>
      <tr>
        <td id="L2910" class="blob-num js-line-number" data-line-number="2910"></td>
        <td id="LC2910" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">case</span> IOPRIO_CLASS_BE:</td>
      </tr>
      <tr>
        <td id="L2911" class="blob-num js-line-number" data-line-number="2911"></td>
        <td id="LC2911" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> &amp;cfqd-&gt;async_cfqq[<span class="pl-c1">1</span>][ioprio];</td>
      </tr>
      <tr>
        <td id="L2912" class="blob-num js-line-number" data-line-number="2912"></td>
        <td id="LC2912" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">case</span> IOPRIO_CLASS_IDLE:</td>
      </tr>
      <tr>
        <td id="L2913" class="blob-num js-line-number" data-line-number="2913"></td>
        <td id="LC2913" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> &amp;cfqd-&gt;async_idle_cfqq;</td>
      </tr>
      <tr>
        <td id="L2914" class="blob-num js-line-number" data-line-number="2914"></td>
        <td id="LC2914" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">default</span>:</td>
      </tr>
      <tr>
        <td id="L2915" class="blob-num js-line-number" data-line-number="2915"></td>
        <td id="LC2915" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">BUG</span>();</td>
      </tr>
      <tr>
        <td id="L2916" class="blob-num js-line-number" data-line-number="2916"></td>
        <td id="LC2916" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2917" class="blob-num js-line-number" data-line-number="2917"></td>
        <td id="LC2917" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2918" class="blob-num js-line-number" data-line-number="2918"></td>
        <td id="LC2918" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2919" class="blob-num js-line-number" data-line-number="2919"></td>
        <td id="LC2919" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *</td>
      </tr>
      <tr>
        <td id="L2920" class="blob-num js-line-number" data-line-number="2920"></td>
        <td id="LC2920" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_get_queue</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">bool</span> is_sync, <span class="pl-k">struct</span> io_context *ioc,</td>
      </tr>
      <tr>
        <td id="L2921" class="blob-num js-line-number" data-line-number="2921"></td>
        <td id="LC2921" class="blob-code blob-code-inner js-file-line">	      <span class="pl-c1">gfp_t</span> gfp_mask)</td>
      </tr>
      <tr>
        <td id="L2922" class="blob-num js-line-number" data-line-number="2922"></td>
        <td id="LC2922" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2923" class="blob-num js-line-number" data-line-number="2923"></td>
        <td id="LC2923" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">const</span> <span class="pl-k">int</span> ioprio = <span class="pl-c1">task_ioprio</span>(ioc);</td>
      </tr>
      <tr>
        <td id="L2924" class="blob-num js-line-number" data-line-number="2924"></td>
        <td id="LC2924" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">const</span> <span class="pl-k">int</span> ioprio_class = <span class="pl-c1">task_ioprio_class</span>(ioc);</td>
      </tr>
      <tr>
        <td id="L2925" class="blob-num js-line-number" data-line-number="2925"></td>
        <td id="LC2925" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue **async_cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2926" class="blob-num js-line-number" data-line-number="2926"></td>
        <td id="LC2926" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L2927" class="blob-num js-line-number" data-line-number="2927"></td>
        <td id="LC2927" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2928" class="blob-num js-line-number" data-line-number="2928"></td>
        <td id="LC2928" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!is_sync) {</td>
      </tr>
      <tr>
        <td id="L2929" class="blob-num js-line-number" data-line-number="2929"></td>
        <td id="LC2929" class="blob-code blob-code-inner js-file-line">		async_cfqq = <span class="pl-c1">cfq_async_queue_prio</span>(cfqd, ioprio_class, ioprio);</td>
      </tr>
      <tr>
        <td id="L2930" class="blob-num js-line-number" data-line-number="2930"></td>
        <td id="LC2930" class="blob-code blob-code-inner js-file-line">		cfqq = *async_cfqq;</td>
      </tr>
      <tr>
        <td id="L2931" class="blob-num js-line-number" data-line-number="2931"></td>
        <td id="LC2931" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2932" class="blob-num js-line-number" data-line-number="2932"></td>
        <td id="LC2932" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2933" class="blob-num js-line-number" data-line-number="2933"></td>
        <td id="LC2933" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqq)</td>
      </tr>
      <tr>
        <td id="L2934" class="blob-num js-line-number" data-line-number="2934"></td>
        <td id="LC2934" class="blob-code blob-code-inner js-file-line">		cfqq = <span class="pl-c1">cfq_find_alloc_queue</span>(cfqd, is_sync, ioc, gfp_mask);</td>
      </tr>
      <tr>
        <td id="L2935" class="blob-num js-line-number" data-line-number="2935"></td>
        <td id="LC2935" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2936" class="blob-num js-line-number" data-line-number="2936"></td>
        <td id="LC2936" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2937" class="blob-num js-line-number" data-line-number="2937"></td>
        <td id="LC2937" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * pin the queue now that it&#39;s allocated, scheduler exit will prune it</span></td>
      </tr>
      <tr>
        <td id="L2938" class="blob-num js-line-number" data-line-number="2938"></td>
        <td id="LC2938" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L2939" class="blob-num js-line-number" data-line-number="2939"></td>
        <td id="LC2939" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!is_sync &amp;&amp; !(*async_cfqq)) {</td>
      </tr>
      <tr>
        <td id="L2940" class="blob-num js-line-number" data-line-number="2940"></td>
        <td id="LC2940" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;ref++;</td>
      </tr>
      <tr>
        <td id="L2941" class="blob-num js-line-number" data-line-number="2941"></td>
        <td id="LC2941" class="blob-code blob-code-inner js-file-line">		*async_cfqq = cfqq;</td>
      </tr>
      <tr>
        <td id="L2942" class="blob-num js-line-number" data-line-number="2942"></td>
        <td id="LC2942" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2943" class="blob-num js-line-number" data-line-number="2943"></td>
        <td id="LC2943" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2944" class="blob-num js-line-number" data-line-number="2944"></td>
        <td id="LC2944" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;ref++;</td>
      </tr>
      <tr>
        <td id="L2945" class="blob-num js-line-number" data-line-number="2945"></td>
        <td id="LC2945" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqq;</td>
      </tr>
      <tr>
        <td id="L2946" class="blob-num js-line-number" data-line-number="2946"></td>
        <td id="LC2946" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2947" class="blob-num js-line-number" data-line-number="2947"></td>
        <td id="LC2947" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2948" class="blob-num js-line-number" data-line-number="2948"></td>
        <td id="LC2948" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L2949" class="blob-num js-line-number" data-line-number="2949"></td>
        <td id="LC2949" class="blob-code blob-code-inner js-file-line"><span class="pl-en">__cfq_update_io_thinktime</span>(<span class="pl-k">struct</span> cfq_ttime *ttime, <span class="pl-k">unsigned</span> <span class="pl-k">long</span> slice_idle)</td>
      </tr>
      <tr>
        <td id="L2950" class="blob-num js-line-number" data-line-number="2950"></td>
        <td id="LC2950" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2951" class="blob-num js-line-number" data-line-number="2951"></td>
        <td id="LC2951" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> elapsed = jiffies - ttime-&gt;last_end_request;</td>
      </tr>
      <tr>
        <td id="L2952" class="blob-num js-line-number" data-line-number="2952"></td>
        <td id="LC2952" class="blob-code blob-code-inner js-file-line">	elapsed = <span class="pl-c1">min</span>(elapsed, <span class="pl-c1">2UL</span> * slice_idle);</td>
      </tr>
      <tr>
        <td id="L2953" class="blob-num js-line-number" data-line-number="2953"></td>
        <td id="LC2953" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2954" class="blob-num js-line-number" data-line-number="2954"></td>
        <td id="LC2954" class="blob-code blob-code-inner js-file-line">	ttime-&gt;ttime_samples = (<span class="pl-c1">7</span>*ttime-&gt;ttime_samples + <span class="pl-c1">256</span>) / <span class="pl-c1">8</span>;</td>
      </tr>
      <tr>
        <td id="L2955" class="blob-num js-line-number" data-line-number="2955"></td>
        <td id="LC2955" class="blob-code blob-code-inner js-file-line">	ttime-&gt;ttime_total = (<span class="pl-c1">7</span>*ttime-&gt;ttime_total + <span class="pl-c1">256</span>*elapsed) / <span class="pl-c1">8</span>;</td>
      </tr>
      <tr>
        <td id="L2956" class="blob-num js-line-number" data-line-number="2956"></td>
        <td id="LC2956" class="blob-code blob-code-inner js-file-line">	ttime-&gt;ttime_mean = (ttime-&gt;ttime_total + <span class="pl-c1">128</span>) / ttime-&gt;ttime_samples;</td>
      </tr>
      <tr>
        <td id="L2957" class="blob-num js-line-number" data-line-number="2957"></td>
        <td id="LC2957" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2958" class="blob-num js-line-number" data-line-number="2958"></td>
        <td id="LC2958" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2959" class="blob-num js-line-number" data-line-number="2959"></td>
        <td id="LC2959" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L2960" class="blob-num js-line-number" data-line-number="2960"></td>
        <td id="LC2960" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_update_io_thinktime</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L2961" class="blob-num js-line-number" data-line-number="2961"></td>
        <td id="LC2961" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">struct</span> cfq_io_cq *cic)</td>
      </tr>
      <tr>
        <td id="L2962" class="blob-num js-line-number" data-line-number="2962"></td>
        <td id="LC2962" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2963" class="blob-num js-line-number" data-line-number="2963"></td>
        <td id="LC2963" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_sync</span>(cfqq)) {</td>
      </tr>
      <tr>
        <td id="L2964" class="blob-num js-line-number" data-line-number="2964"></td>
        <td id="LC2964" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">__cfq_update_io_thinktime</span>(&amp;cic-&gt;ttime, cfqd-&gt;cfq_slice_idle);</td>
      </tr>
      <tr>
        <td id="L2965" class="blob-num js-line-number" data-line-number="2965"></td>
        <td id="LC2965" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">__cfq_update_io_thinktime</span>(&amp;cfqq-&gt;service_tree-&gt;ttime,</td>
      </tr>
      <tr>
        <td id="L2966" class="blob-num js-line-number" data-line-number="2966"></td>
        <td id="LC2966" class="blob-code blob-code-inner js-file-line">			cfqd-&gt;cfq_slice_idle);</td>
      </tr>
      <tr>
        <td id="L2967" class="blob-num js-line-number" data-line-number="2967"></td>
        <td id="LC2967" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2968" class="blob-num js-line-number" data-line-number="2968"></td>
        <td id="LC2968" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L2969" class="blob-num js-line-number" data-line-number="2969"></td>
        <td id="LC2969" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">__cfq_update_io_thinktime</span>(&amp;cfqq-&gt;cfqg-&gt;ttime, cfqd-&gt;cfq_group_idle);</td>
      </tr>
      <tr>
        <td id="L2970" class="blob-num js-line-number" data-line-number="2970"></td>
        <td id="LC2970" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L2971" class="blob-num js-line-number" data-line-number="2971"></td>
        <td id="LC2971" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2972" class="blob-num js-line-number" data-line-number="2972"></td>
        <td id="LC2972" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2973" class="blob-num js-line-number" data-line-number="2973"></td>
        <td id="LC2973" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L2974" class="blob-num js-line-number" data-line-number="2974"></td>
        <td id="LC2974" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_update_io_seektime</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L2975" class="blob-num js-line-number" data-line-number="2975"></td>
        <td id="LC2975" class="blob-code blob-code-inner js-file-line">		       <span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L2976" class="blob-num js-line-number" data-line-number="2976"></td>
        <td id="LC2976" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L2977" class="blob-num js-line-number" data-line-number="2977"></td>
        <td id="LC2977" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sector_t</span> sdist = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L2978" class="blob-num js-line-number" data-line-number="2978"></td>
        <td id="LC2978" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">sector_t</span> n_sec = <span class="pl-c1">blk_rq_sectors</span>(rq);</td>
      </tr>
      <tr>
        <td id="L2979" class="blob-num js-line-number" data-line-number="2979"></td>
        <td id="LC2979" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;last_request_pos) {</td>
      </tr>
      <tr>
        <td id="L2980" class="blob-num js-line-number" data-line-number="2980"></td>
        <td id="LC2980" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cfqq-&gt;last_request_pos &lt; <span class="pl-c1">blk_rq_pos</span>(rq))</td>
      </tr>
      <tr>
        <td id="L2981" class="blob-num js-line-number" data-line-number="2981"></td>
        <td id="LC2981" class="blob-code blob-code-inner js-file-line">			sdist = <span class="pl-c1">blk_rq_pos</span>(rq) - cfqq-&gt;last_request_pos;</td>
      </tr>
      <tr>
        <td id="L2982" class="blob-num js-line-number" data-line-number="2982"></td>
        <td id="LC2982" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2983" class="blob-num js-line-number" data-line-number="2983"></td>
        <td id="LC2983" class="blob-code blob-code-inner js-file-line">			sdist = cfqq-&gt;last_request_pos - <span class="pl-c1">blk_rq_pos</span>(rq);</td>
      </tr>
      <tr>
        <td id="L2984" class="blob-num js-line-number" data-line-number="2984"></td>
        <td id="LC2984" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L2985" class="blob-num js-line-number" data-line-number="2985"></td>
        <td id="LC2985" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2986" class="blob-num js-line-number" data-line-number="2986"></td>
        <td id="LC2986" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;seek_history &lt;&lt;= <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L2987" class="blob-num js-line-number" data-line-number="2987"></td>
        <td id="LC2987" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">blk_queue_nonrot</span>(cfqd-&gt;queue))</td>
      </tr>
      <tr>
        <td id="L2988" class="blob-num js-line-number" data-line-number="2988"></td>
        <td id="LC2988" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;seek_history |= (n_sec &lt; CFQQ_SECT_THR_NONROT);</td>
      </tr>
      <tr>
        <td id="L2989" class="blob-num js-line-number" data-line-number="2989"></td>
        <td id="LC2989" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L2990" class="blob-num js-line-number" data-line-number="2990"></td>
        <td id="LC2990" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;seek_history |= (sdist &gt; CFQQ_SEEK_THR);</td>
      </tr>
      <tr>
        <td id="L2991" class="blob-num js-line-number" data-line-number="2991"></td>
        <td id="LC2991" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L2992" class="blob-num js-line-number" data-line-number="2992"></td>
        <td id="LC2992" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L2993" class="blob-num js-line-number" data-line-number="2993"></td>
        <td id="LC2993" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L2994" class="blob-num js-line-number" data-line-number="2994"></td>
        <td id="LC2994" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Disable idle window if the process thinks too long or seeks so much that</span></td>
      </tr>
      <tr>
        <td id="L2995" class="blob-num js-line-number" data-line-number="2995"></td>
        <td id="LC2995" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * it doesn&#39;t matter</span></td>
      </tr>
      <tr>
        <td id="L2996" class="blob-num js-line-number" data-line-number="2996"></td>
        <td id="LC2996" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L2997" class="blob-num js-line-number" data-line-number="2997"></td>
        <td id="LC2997" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L2998" class="blob-num js-line-number" data-line-number="2998"></td>
        <td id="LC2998" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_update_idle_window</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L2999" class="blob-num js-line-number" data-line-number="2999"></td>
        <td id="LC2999" class="blob-code blob-code-inner js-file-line">		       <span class="pl-k">struct</span> cfq_io_cq *cic)</td>
      </tr>
      <tr>
        <td id="L3000" class="blob-num js-line-number" data-line-number="3000"></td>
        <td id="LC3000" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3001" class="blob-num js-line-number" data-line-number="3001"></td>
        <td id="LC3001" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> old_idle, enable_idle;</td>
      </tr>
      <tr>
        <td id="L3002" class="blob-num js-line-number" data-line-number="3002"></td>
        <td id="LC3002" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3003" class="blob-num js-line-number" data-line-number="3003"></td>
        <td id="LC3003" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3004" class="blob-num js-line-number" data-line-number="3004"></td>
        <td id="LC3004" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Don&#39;t idle for async or idle io prio class</span></td>
      </tr>
      <tr>
        <td id="L3005" class="blob-num js-line-number" data-line-number="3005"></td>
        <td id="LC3005" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3006" class="blob-num js-line-number" data-line-number="3006"></td>
        <td id="LC3006" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">cfq_cfqq_sync</span>(cfqq) || <span class="pl-c1">cfq_class_idle</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3007" class="blob-num js-line-number" data-line-number="3007"></td>
        <td id="LC3007" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L3008" class="blob-num js-line-number" data-line-number="3008"></td>
        <td id="LC3008" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3009" class="blob-num js-line-number" data-line-number="3009"></td>
        <td id="LC3009" class="blob-code blob-code-inner js-file-line">	enable_idle = old_idle = <span class="pl-c1">cfq_cfqq_idle_window</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3010" class="blob-num js-line-number" data-line-number="3010"></td>
        <td id="LC3010" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3011" class="blob-num js-line-number" data-line-number="3011"></td>
        <td id="LC3011" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;queued[<span class="pl-c1">0</span>] + cfqq-&gt;queued[<span class="pl-c1">1</span>] &gt;= <span class="pl-c1">4</span>)</td>
      </tr>
      <tr>
        <td id="L3012" class="blob-num js-line-number" data-line-number="3012"></td>
        <td id="LC3012" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_mark_cfqq_deep</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3013" class="blob-num js-line-number" data-line-number="3013"></td>
        <td id="LC3013" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3014" class="blob-num js-line-number" data-line-number="3014"></td>
        <td id="LC3014" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;next_rq &amp;&amp; (cfqq-&gt;next_rq-&gt;cmd_flags &amp; REQ_NOIDLE))</td>
      </tr>
      <tr>
        <td id="L3015" class="blob-num js-line-number" data-line-number="3015"></td>
        <td id="LC3015" class="blob-code blob-code-inner js-file-line">		enable_idle = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L3016" class="blob-num js-line-number" data-line-number="3016"></td>
        <td id="LC3016" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span> <span class="pl-k">if</span> (!<span class="pl-c1">atomic_read</span>(&amp;cic-&gt;icq.<span class="pl-smi">ioc</span>-&gt;nr_tasks) ||</td>
      </tr>
      <tr>
        <td id="L3017" class="blob-num js-line-number" data-line-number="3017"></td>
        <td id="LC3017" class="blob-code blob-code-inner js-file-line">		 !cfqd-&gt;cfq_slice_idle ||</td>
      </tr>
      <tr>
        <td id="L3018" class="blob-num js-line-number" data-line-number="3018"></td>
        <td id="LC3018" class="blob-code blob-code-inner js-file-line">		 (!<span class="pl-c1">cfq_cfqq_deep</span>(cfqq) &amp;&amp; <span class="pl-c1">CFQQ_SEEKY</span>(cfqq)))</td>
      </tr>
      <tr>
        <td id="L3019" class="blob-num js-line-number" data-line-number="3019"></td>
        <td id="LC3019" class="blob-code blob-code-inner js-file-line">		enable_idle = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L3020" class="blob-num js-line-number" data-line-number="3020"></td>
        <td id="LC3020" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-c1">sample_valid</span>(cic-&gt;ttime.<span class="pl-smi">ttime_samples</span>)) {</td>
      </tr>
      <tr>
        <td id="L3021" class="blob-num js-line-number" data-line-number="3021"></td>
        <td id="LC3021" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cic-&gt;ttime.<span class="pl-smi">ttime_mean</span> &gt; cfqd-&gt;cfq_slice_idle)</td>
      </tr>
      <tr>
        <td id="L3022" class="blob-num js-line-number" data-line-number="3022"></td>
        <td id="LC3022" class="blob-code blob-code-inner js-file-line">			enable_idle = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L3023" class="blob-num js-line-number" data-line-number="3023"></td>
        <td id="LC3023" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L3024" class="blob-num js-line-number" data-line-number="3024"></td>
        <td id="LC3024" class="blob-code blob-code-inner js-file-line">			enable_idle = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L3025" class="blob-num js-line-number" data-line-number="3025"></td>
        <td id="LC3025" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3026" class="blob-num js-line-number" data-line-number="3026"></td>
        <td id="LC3026" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3027" class="blob-num js-line-number" data-line-number="3027"></td>
        <td id="LC3027" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (old_idle != enable_idle) {</td>
      </tr>
      <tr>
        <td id="L3028" class="blob-num js-line-number" data-line-number="3028"></td>
        <td id="LC3028" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>idle=<span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>, enable_idle);</td>
      </tr>
      <tr>
        <td id="L3029" class="blob-num js-line-number" data-line-number="3029"></td>
        <td id="LC3029" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (enable_idle)</td>
      </tr>
      <tr>
        <td id="L3030" class="blob-num js-line-number" data-line-number="3030"></td>
        <td id="LC3030" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_mark_cfqq_idle_window</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3031" class="blob-num js-line-number" data-line-number="3031"></td>
        <td id="LC3031" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L3032" class="blob-num js-line-number" data-line-number="3032"></td>
        <td id="LC3032" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_clear_cfqq_idle_window</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3033" class="blob-num js-line-number" data-line-number="3033"></td>
        <td id="LC3033" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3034" class="blob-num js-line-number" data-line-number="3034"></td>
        <td id="LC3034" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3035" class="blob-num js-line-number" data-line-number="3035"></td>
        <td id="LC3035" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3036" class="blob-num js-line-number" data-line-number="3036"></td>
        <td id="LC3036" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3037" class="blob-num js-line-number" data-line-number="3037"></td>
        <td id="LC3037" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Check if new_cfqq should preempt the currently active queue. Return 0 for</span></td>
      </tr>
      <tr>
        <td id="L3038" class="blob-num js-line-number" data-line-number="3038"></td>
        <td id="LC3038" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * no or if we aren&#39;t sure, a 1 will cause a preempt.</span></td>
      </tr>
      <tr>
        <td id="L3039" class="blob-num js-line-number" data-line-number="3039"></td>
        <td id="LC3039" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L3040" class="blob-num js-line-number" data-line-number="3040"></td>
        <td id="LC3040" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">bool</span></td>
      </tr>
      <tr>
        <td id="L3041" class="blob-num js-line-number" data-line-number="3041"></td>
        <td id="LC3041" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_should_preempt</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *new_cfqq,</td>
      </tr>
      <tr>
        <td id="L3042" class="blob-num js-line-number" data-line-number="3042"></td>
        <td id="LC3042" class="blob-code blob-code-inner js-file-line">		   <span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L3043" class="blob-num js-line-number" data-line-number="3043"></td>
        <td id="LC3043" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3044" class="blob-num js-line-number" data-line-number="3044"></td>
        <td id="LC3044" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L3045" class="blob-num js-line-number" data-line-number="3045"></td>
        <td id="LC3045" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3046" class="blob-num js-line-number" data-line-number="3046"></td>
        <td id="LC3046" class="blob-code blob-code-inner js-file-line">	cfqq = cfqd-&gt;active_queue;</td>
      </tr>
      <tr>
        <td id="L3047" class="blob-num js-line-number" data-line-number="3047"></td>
        <td id="LC3047" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqq)</td>
      </tr>
      <tr>
        <td id="L3048" class="blob-num js-line-number" data-line-number="3048"></td>
        <td id="LC3048" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3049" class="blob-num js-line-number" data-line-number="3049"></td>
        <td id="LC3049" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3050" class="blob-num js-line-number" data-line-number="3050"></td>
        <td id="LC3050" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_idle</span>(new_cfqq))</td>
      </tr>
      <tr>
        <td id="L3051" class="blob-num js-line-number" data-line-number="3051"></td>
        <td id="LC3051" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3052" class="blob-num js-line-number" data-line-number="3052"></td>
        <td id="LC3052" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3053" class="blob-num js-line-number" data-line-number="3053"></td>
        <td id="LC3053" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_idle</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3054" class="blob-num js-line-number" data-line-number="3054"></td>
        <td id="LC3054" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3055" class="blob-num js-line-number" data-line-number="3055"></td>
        <td id="LC3055" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3056" class="blob-num js-line-number" data-line-number="3056"></td>
        <td id="LC3056" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3057" class="blob-num js-line-number" data-line-number="3057"></td>
        <td id="LC3057" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Don&#39;t allow a non-RT request to preempt an ongoing RT cfqq timeslice.</span></td>
      </tr>
      <tr>
        <td id="L3058" class="blob-num js-line-number" data-line-number="3058"></td>
        <td id="LC3058" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3059" class="blob-num js-line-number" data-line-number="3059"></td>
        <td id="LC3059" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_rt</span>(cfqq) &amp;&amp; !<span class="pl-c1">cfq_class_rt</span>(new_cfqq))</td>
      </tr>
      <tr>
        <td id="L3060" class="blob-num js-line-number" data-line-number="3060"></td>
        <td id="LC3060" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3061" class="blob-num js-line-number" data-line-number="3061"></td>
        <td id="LC3061" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3062" class="blob-num js-line-number" data-line-number="3062"></td>
        <td id="LC3062" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3063" class="blob-num js-line-number" data-line-number="3063"></td>
        <td id="LC3063" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * if the new request is sync, but the currently running queue is</span></td>
      </tr>
      <tr>
        <td id="L3064" class="blob-num js-line-number" data-line-number="3064"></td>
        <td id="LC3064" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * not, let the sync request have priority.</span></td>
      </tr>
      <tr>
        <td id="L3065" class="blob-num js-line-number" data-line-number="3065"></td>
        <td id="LC3065" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3066" class="blob-num js-line-number" data-line-number="3066"></td>
        <td id="LC3066" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">rq_is_sync</span>(rq) &amp;&amp; !<span class="pl-c1">cfq_cfqq_sync</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3067" class="blob-num js-line-number" data-line-number="3067"></td>
        <td id="LC3067" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3068" class="blob-num js-line-number" data-line-number="3068"></td>
        <td id="LC3068" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3069" class="blob-num js-line-number" data-line-number="3069"></td>
        <td id="LC3069" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (new_cfqq-&gt;cfqg != cfqq-&gt;cfqg)</td>
      </tr>
      <tr>
        <td id="L3070" class="blob-num js-line-number" data-line-number="3070"></td>
        <td id="LC3070" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3071" class="blob-num js-line-number" data-line-number="3071"></td>
        <td id="LC3071" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3072" class="blob-num js-line-number" data-line-number="3072"></td>
        <td id="LC3072" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_slice_used</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3073" class="blob-num js-line-number" data-line-number="3073"></td>
        <td id="LC3073" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3074" class="blob-num js-line-number" data-line-number="3074"></td>
        <td id="LC3074" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3075" class="blob-num js-line-number" data-line-number="3075"></td>
        <td id="LC3075" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Allow preemption only if we are idling on sync-noidle tree */</span></td>
      </tr>
      <tr>
        <td id="L3076" class="blob-num js-line-number" data-line-number="3076"></td>
        <td id="LC3076" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;serving_type == SYNC_NOIDLE_WORKLOAD &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L3077" class="blob-num js-line-number" data-line-number="3077"></td>
        <td id="LC3077" class="blob-code blob-code-inner js-file-line">	    <span class="pl-c1">cfqq_type</span>(new_cfqq) == SYNC_NOIDLE_WORKLOAD &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L3078" class="blob-num js-line-number" data-line-number="3078"></td>
        <td id="LC3078" class="blob-code blob-code-inner js-file-line">	    new_cfqq-&gt;service_tree-&gt;count == <span class="pl-c1">2</span> &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L3079" class="blob-num js-line-number" data-line-number="3079"></td>
        <td id="LC3079" class="blob-code blob-code-inner js-file-line">	    <span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list))</td>
      </tr>
      <tr>
        <td id="L3080" class="blob-num js-line-number" data-line-number="3080"></td>
        <td id="LC3080" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3081" class="blob-num js-line-number" data-line-number="3081"></td>
        <td id="LC3081" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3082" class="blob-num js-line-number" data-line-number="3082"></td>
        <td id="LC3082" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3083" class="blob-num js-line-number" data-line-number="3083"></td>
        <td id="LC3083" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * So both queues are sync. Let the new request get disk time if</span></td>
      </tr>
      <tr>
        <td id="L3084" class="blob-num js-line-number" data-line-number="3084"></td>
        <td id="LC3084" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * it&#39;s a metadata request and the current queue is doing regular IO.</span></td>
      </tr>
      <tr>
        <td id="L3085" class="blob-num js-line-number" data-line-number="3085"></td>
        <td id="LC3085" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3086" class="blob-num js-line-number" data-line-number="3086"></td>
        <td id="LC3086" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> ((rq-&gt;cmd_flags &amp; REQ_PRIO) &amp;&amp; !cfqq-&gt;prio_pending)</td>
      </tr>
      <tr>
        <td id="L3087" class="blob-num js-line-number" data-line-number="3087"></td>
        <td id="LC3087" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3088" class="blob-num js-line-number" data-line-number="3088"></td>
        <td id="LC3088" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3089" class="blob-num js-line-number" data-line-number="3089"></td>
        <td id="LC3089" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3090" class="blob-num js-line-number" data-line-number="3090"></td>
        <td id="LC3090" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Allow an RT request to pre-empt an ongoing non-RT cfqq timeslice.</span></td>
      </tr>
      <tr>
        <td id="L3091" class="blob-num js-line-number" data-line-number="3091"></td>
        <td id="LC3091" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3092" class="blob-num js-line-number" data-line-number="3092"></td>
        <td id="LC3092" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_class_rt</span>(new_cfqq) &amp;&amp; !<span class="pl-c1">cfq_class_rt</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3093" class="blob-num js-line-number" data-line-number="3093"></td>
        <td id="LC3093" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3094" class="blob-num js-line-number" data-line-number="3094"></td>
        <td id="LC3094" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3095" class="blob-num js-line-number" data-line-number="3095"></td>
        <td id="LC3095" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* An idle queue should not be idle now for some reason */</span></td>
      </tr>
      <tr>
        <td id="L3096" class="blob-num js-line-number" data-line-number="3096"></td>
        <td id="LC3096" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list) &amp;&amp; !<span class="pl-c1">cfq_should_idle</span>(cfqd, cfqq))</td>
      </tr>
      <tr>
        <td id="L3097" class="blob-num js-line-number" data-line-number="3097"></td>
        <td id="LC3097" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3098" class="blob-num js-line-number" data-line-number="3098"></td>
        <td id="LC3098" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3099" class="blob-num js-line-number" data-line-number="3099"></td>
        <td id="LC3099" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqd-&gt;active_cic || !<span class="pl-c1">cfq_cfqq_wait_request</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3100" class="blob-num js-line-number" data-line-number="3100"></td>
        <td id="LC3100" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3101" class="blob-num js-line-number" data-line-number="3101"></td>
        <td id="LC3101" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3102" class="blob-num js-line-number" data-line-number="3102"></td>
        <td id="LC3102" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3103" class="blob-num js-line-number" data-line-number="3103"></td>
        <td id="LC3103" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * if this request is as-good as one we would expect from the</span></td>
      </tr>
      <tr>
        <td id="L3104" class="blob-num js-line-number" data-line-number="3104"></td>
        <td id="LC3104" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * current cfqq, let it preempt</span></td>
      </tr>
      <tr>
        <td id="L3105" class="blob-num js-line-number" data-line-number="3105"></td>
        <td id="LC3105" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3106" class="blob-num js-line-number" data-line-number="3106"></td>
        <td id="LC3106" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_rq_close</span>(cfqd, cfqq, rq))</td>
      </tr>
      <tr>
        <td id="L3107" class="blob-num js-line-number" data-line-number="3107"></td>
        <td id="LC3107" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3108" class="blob-num js-line-number" data-line-number="3108"></td>
        <td id="LC3108" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3109" class="blob-num js-line-number" data-line-number="3109"></td>
        <td id="LC3109" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3110" class="blob-num js-line-number" data-line-number="3110"></td>
        <td id="LC3110" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3111" class="blob-num js-line-number" data-line-number="3111"></td>
        <td id="LC3111" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3112" class="blob-num js-line-number" data-line-number="3112"></td>
        <td id="LC3112" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3113" class="blob-num js-line-number" data-line-number="3113"></td>
        <td id="LC3113" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * cfqq preempts the active queue. if we allowed preempt with no slice left,</span></td>
      </tr>
      <tr>
        <td id="L3114" class="blob-num js-line-number" data-line-number="3114"></td>
        <td id="LC3114" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * let it have half of its nominal slice.</span></td>
      </tr>
      <tr>
        <td id="L3115" class="blob-num js-line-number" data-line-number="3115"></td>
        <td id="LC3115" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L3116" class="blob-num js-line-number" data-line-number="3116"></td>
        <td id="LC3116" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_preempt_queue</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L3117" class="blob-num js-line-number" data-line-number="3117"></td>
        <td id="LC3117" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3118" class="blob-num js-line-number" data-line-number="3118"></td>
        <td id="LC3118" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">enum</span> <span class="pl-c1">wl_type_t</span> old_type = <span class="pl-c1">cfqq_type</span>(cfqd-&gt;active_queue);</td>
      </tr>
      <tr>
        <td id="L3119" class="blob-num js-line-number" data-line-number="3119"></td>
        <td id="LC3119" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3120" class="blob-num js-line-number" data-line-number="3120"></td>
        <td id="LC3120" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>preempt<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L3121" class="blob-num js-line-number" data-line-number="3121"></td>
        <td id="LC3121" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_slice_expired</span>(cfqd, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3122" class="blob-num js-line-number" data-line-number="3122"></td>
        <td id="LC3122" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3123" class="blob-num js-line-number" data-line-number="3123"></td>
        <td id="LC3123" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3124" class="blob-num js-line-number" data-line-number="3124"></td>
        <td id="LC3124" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * workload type is changed, don&#39;t save slice, otherwise preempt</span></td>
      </tr>
      <tr>
        <td id="L3125" class="blob-num js-line-number" data-line-number="3125"></td>
        <td id="LC3125" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * doesn&#39;t happen</span></td>
      </tr>
      <tr>
        <td id="L3126" class="blob-num js-line-number" data-line-number="3126"></td>
        <td id="LC3126" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3127" class="blob-num js-line-number" data-line-number="3127"></td>
        <td id="LC3127" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (old_type != <span class="pl-c1">cfqq_type</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3128" class="blob-num js-line-number" data-line-number="3128"></td>
        <td id="LC3128" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;cfqg-&gt;saved_workload_slice = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L3129" class="blob-num js-line-number" data-line-number="3129"></td>
        <td id="LC3129" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3130" class="blob-num js-line-number" data-line-number="3130"></td>
        <td id="LC3130" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3131" class="blob-num js-line-number" data-line-number="3131"></td>
        <td id="LC3131" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Put the new queue at the front of the of the current list,</span></td>
      </tr>
      <tr>
        <td id="L3132" class="blob-num js-line-number" data-line-number="3132"></td>
        <td id="LC3132" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * so we know that it will be selected next.</span></td>
      </tr>
      <tr>
        <td id="L3133" class="blob-num js-line-number" data-line-number="3133"></td>
        <td id="LC3133" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3134" class="blob-num js-line-number" data-line-number="3134"></td>
        <td id="LC3134" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">BUG_ON</span>(!<span class="pl-c1">cfq_cfqq_on_rr</span>(cfqq));</td>
      </tr>
      <tr>
        <td id="L3135" class="blob-num js-line-number" data-line-number="3135"></td>
        <td id="LC3135" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3136" class="blob-num js-line-number" data-line-number="3136"></td>
        <td id="LC3136" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_service_tree_add</span>(cfqd, cfqq, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3137" class="blob-num js-line-number" data-line-number="3137"></td>
        <td id="LC3137" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3138" class="blob-num js-line-number" data-line-number="3138"></td>
        <td id="LC3138" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;slice_end = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L3139" class="blob-num js-line-number" data-line-number="3139"></td>
        <td id="LC3139" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_mark_cfqq_slice_new</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3140" class="blob-num js-line-number" data-line-number="3140"></td>
        <td id="LC3140" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3141" class="blob-num js-line-number" data-line-number="3141"></td>
        <td id="LC3141" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3142" class="blob-num js-line-number" data-line-number="3142"></td>
        <td id="LC3142" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3143" class="blob-num js-line-number" data-line-number="3143"></td>
        <td id="LC3143" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Called when a new fs request (rq) is added (to cfqq). Check if there&#39;s</span></td>
      </tr>
      <tr>
        <td id="L3144" class="blob-num js-line-number" data-line-number="3144"></td>
        <td id="LC3144" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * something we should do about it</span></td>
      </tr>
      <tr>
        <td id="L3145" class="blob-num js-line-number" data-line-number="3145"></td>
        <td id="LC3145" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L3146" class="blob-num js-line-number" data-line-number="3146"></td>
        <td id="LC3146" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span></td>
      </tr>
      <tr>
        <td id="L3147" class="blob-num js-line-number" data-line-number="3147"></td>
        <td id="LC3147" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_rq_enqueued</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq,</td>
      </tr>
      <tr>
        <td id="L3148" class="blob-num js-line-number" data-line-number="3148"></td>
        <td id="LC3148" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L3149" class="blob-num js-line-number" data-line-number="3149"></td>
        <td id="LC3149" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3150" class="blob-num js-line-number" data-line-number="3150"></td>
        <td id="LC3150" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *cic = <span class="pl-c1">RQ_CIC</span>(rq);</td>
      </tr>
      <tr>
        <td id="L3151" class="blob-num js-line-number" data-line-number="3151"></td>
        <td id="LC3151" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3152" class="blob-num js-line-number" data-line-number="3152"></td>
        <td id="LC3152" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;rq_queued++;</td>
      </tr>
      <tr>
        <td id="L3153" class="blob-num js-line-number" data-line-number="3153"></td>
        <td id="LC3153" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (rq-&gt;cmd_flags &amp; REQ_PRIO)</td>
      </tr>
      <tr>
        <td id="L3154" class="blob-num js-line-number" data-line-number="3154"></td>
        <td id="LC3154" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;prio_pending++;</td>
      </tr>
      <tr>
        <td id="L3155" class="blob-num js-line-number" data-line-number="3155"></td>
        <td id="LC3155" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3156" class="blob-num js-line-number" data-line-number="3156"></td>
        <td id="LC3156" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_update_io_thinktime</span>(cfqd, cfqq, cic);</td>
      </tr>
      <tr>
        <td id="L3157" class="blob-num js-line-number" data-line-number="3157"></td>
        <td id="LC3157" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_update_io_seektime</span>(cfqd, cfqq, rq);</td>
      </tr>
      <tr>
        <td id="L3158" class="blob-num js-line-number" data-line-number="3158"></td>
        <td id="LC3158" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_update_idle_window</span>(cfqd, cfqq, cic);</td>
      </tr>
      <tr>
        <td id="L3159" class="blob-num js-line-number" data-line-number="3159"></td>
        <td id="LC3159" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3160" class="blob-num js-line-number" data-line-number="3160"></td>
        <td id="LC3160" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;last_request_pos = <span class="pl-c1">blk_rq_pos</span>(rq) + <span class="pl-c1">blk_rq_sectors</span>(rq);</td>
      </tr>
      <tr>
        <td id="L3161" class="blob-num js-line-number" data-line-number="3161"></td>
        <td id="LC3161" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3162" class="blob-num js-line-number" data-line-number="3162"></td>
        <td id="LC3162" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq == cfqd-&gt;active_queue) {</td>
      </tr>
      <tr>
        <td id="L3163" class="blob-num js-line-number" data-line-number="3163"></td>
        <td id="LC3163" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3164" class="blob-num js-line-number" data-line-number="3164"></td>
        <td id="LC3164" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Remember that we saw a request from this process, but</span></td>
      </tr>
      <tr>
        <td id="L3165" class="blob-num js-line-number" data-line-number="3165"></td>
        <td id="LC3165" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * don&#39;t start queuing just yet. Otherwise we risk seeing lots</span></td>
      </tr>
      <tr>
        <td id="L3166" class="blob-num js-line-number" data-line-number="3166"></td>
        <td id="LC3166" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * of tiny requests, because we disrupt the normal plugging</span></td>
      </tr>
      <tr>
        <td id="L3167" class="blob-num js-line-number" data-line-number="3167"></td>
        <td id="LC3167" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * and merging. If the request is already larger than a single</span></td>
      </tr>
      <tr>
        <td id="L3168" class="blob-num js-line-number" data-line-number="3168"></td>
        <td id="LC3168" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * page, let it rip immediately. For that case we assume that</span></td>
      </tr>
      <tr>
        <td id="L3169" class="blob-num js-line-number" data-line-number="3169"></td>
        <td id="LC3169" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * merging is already done. Ditto for a busy system that</span></td>
      </tr>
      <tr>
        <td id="L3170" class="blob-num js-line-number" data-line-number="3170"></td>
        <td id="LC3170" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * has other work pending, don&#39;t risk delaying until the</span></td>
      </tr>
      <tr>
        <td id="L3171" class="blob-num js-line-number" data-line-number="3171"></td>
        <td id="LC3171" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * idle timer unplug to continue working.</span></td>
      </tr>
      <tr>
        <td id="L3172" class="blob-num js-line-number" data-line-number="3172"></td>
        <td id="LC3172" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3173" class="blob-num js-line-number" data-line-number="3173"></td>
        <td id="LC3173" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_wait_request</span>(cfqq)) {</td>
      </tr>
      <tr>
        <td id="L3174" class="blob-num js-line-number" data-line-number="3174"></td>
        <td id="LC3174" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (<span class="pl-c1">blk_rq_bytes</span>(rq) &gt; PAGE_CACHE_SIZE ||</td>
      </tr>
      <tr>
        <td id="L3175" class="blob-num js-line-number" data-line-number="3175"></td>
        <td id="LC3175" class="blob-code blob-code-inner js-file-line">			    cfqd-&gt;busy_queues &gt; <span class="pl-c1">1</span>) {</td>
      </tr>
      <tr>
        <td id="L3176" class="blob-num js-line-number" data-line-number="3176"></td>
        <td id="LC3176" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">cfq_del_timer</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L3177" class="blob-num js-line-number" data-line-number="3177"></td>
        <td id="LC3177" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">cfq_clear_cfqq_wait_request</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3178" class="blob-num js-line-number" data-line-number="3178"></td>
        <td id="LC3178" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">__blk_run_queue</span>(cfqd-&gt;queue);</td>
      </tr>
      <tr>
        <td id="L3179" class="blob-num js-line-number" data-line-number="3179"></td>
        <td id="LC3179" class="blob-code blob-code-inner js-file-line">			} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L3180" class="blob-num js-line-number" data-line-number="3180"></td>
        <td id="LC3180" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">cfq_blkiocg_update_idle_time_stats</span>(</td>
      </tr>
      <tr>
        <td id="L3181" class="blob-num js-line-number" data-line-number="3181"></td>
        <td id="LC3181" class="blob-code blob-code-inner js-file-line">						&amp;cfqq-&gt;cfqg-&gt;blkg);</td>
      </tr>
      <tr>
        <td id="L3182" class="blob-num js-line-number" data-line-number="3182"></td>
        <td id="LC3182" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">cfq_mark_cfqq_must_dispatch</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3183" class="blob-num js-line-number" data-line-number="3183"></td>
        <td id="LC3183" class="blob-code blob-code-inner js-file-line">			}</td>
      </tr>
      <tr>
        <td id="L3184" class="blob-num js-line-number" data-line-number="3184"></td>
        <td id="LC3184" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L3185" class="blob-num js-line-number" data-line-number="3185"></td>
        <td id="LC3185" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-c1">cfq_should_preempt</span>(cfqd, cfqq, rq)) {</td>
      </tr>
      <tr>
        <td id="L3186" class="blob-num js-line-number" data-line-number="3186"></td>
        <td id="LC3186" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3187" class="blob-num js-line-number" data-line-number="3187"></td>
        <td id="LC3187" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * not the active queue - expire current slice if it is</span></td>
      </tr>
      <tr>
        <td id="L3188" class="blob-num js-line-number" data-line-number="3188"></td>
        <td id="LC3188" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * idle and has expired it&#39;s mean thinktime or this new queue</span></td>
      </tr>
      <tr>
        <td id="L3189" class="blob-num js-line-number" data-line-number="3189"></td>
        <td id="LC3189" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * has some old slice time left and is of higher priority or</span></td>
      </tr>
      <tr>
        <td id="L3190" class="blob-num js-line-number" data-line-number="3190"></td>
        <td id="LC3190" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * this new queue is RT and the current one is BE</span></td>
      </tr>
      <tr>
        <td id="L3191" class="blob-num js-line-number" data-line-number="3191"></td>
        <td id="LC3191" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3192" class="blob-num js-line-number" data-line-number="3192"></td>
        <td id="LC3192" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_preempt_queue</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L3193" class="blob-num js-line-number" data-line-number="3193"></td>
        <td id="LC3193" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">__blk_run_queue</span>(cfqd-&gt;queue);</td>
      </tr>
      <tr>
        <td id="L3194" class="blob-num js-line-number" data-line-number="3194"></td>
        <td id="LC3194" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3195" class="blob-num js-line-number" data-line-number="3195"></td>
        <td id="LC3195" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3196" class="blob-num js-line-number" data-line-number="3196"></td>
        <td id="LC3196" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3197" class="blob-num js-line-number" data-line-number="3197"></td>
        <td id="LC3197" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_insert_request</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L3198" class="blob-num js-line-number" data-line-number="3198"></td>
        <td id="LC3198" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3199" class="blob-num js-line-number" data-line-number="3199"></td>
        <td id="LC3199" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = q-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L3200" class="blob-num js-line-number" data-line-number="3200"></td>
        <td id="LC3200" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">RQ_CFQQ</span>(rq);</td>
      </tr>
      <tr>
        <td id="L3201" class="blob-num js-line-number" data-line-number="3201"></td>
        <td id="LC3201" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3202" class="blob-num js-line-number" data-line-number="3202"></td>
        <td id="LC3202" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>insert_request<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L3203" class="blob-num js-line-number" data-line-number="3203"></td>
        <td id="LC3203" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_init_prio_data</span>(cfqq, <span class="pl-c1">RQ_CIC</span>(rq)-&gt;icq.<span class="pl-smi">ioc</span>);</td>
      </tr>
      <tr>
        <td id="L3204" class="blob-num js-line-number" data-line-number="3204"></td>
        <td id="LC3204" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3205" class="blob-num js-line-number" data-line-number="3205"></td>
        <td id="LC3205" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rq_set_fifo_time</span>(rq, jiffies + cfqd-&gt;cfq_fifo_expire[<span class="pl-c1">rq_is_sync</span>(rq)]);</td>
      </tr>
      <tr>
        <td id="L3206" class="blob-num js-line-number" data-line-number="3206"></td>
        <td id="LC3206" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">list_add_tail</span>(&amp;rq-&gt;queuelist, &amp;cfqq-&gt;fifo);</td>
      </tr>
      <tr>
        <td id="L3207" class="blob-num js-line-number" data-line-number="3207"></td>
        <td id="LC3207" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_add_rq_rb</span>(rq);</td>
      </tr>
      <tr>
        <td id="L3208" class="blob-num js-line-number" data-line-number="3208"></td>
        <td id="LC3208" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_io_add_stats</span>(&amp;(<span class="pl-c1">RQ_CFQG</span>(rq))-&gt;blkg,</td>
      </tr>
      <tr>
        <td id="L3209" class="blob-num js-line-number" data-line-number="3209"></td>
        <td id="LC3209" class="blob-code blob-code-inner js-file-line">			&amp;cfqd-&gt;serving_group-&gt;blkg, <span class="pl-c1">rq_data_dir</span>(rq),</td>
      </tr>
      <tr>
        <td id="L3210" class="blob-num js-line-number" data-line-number="3210"></td>
        <td id="LC3210" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">rq_is_sync</span>(rq));</td>
      </tr>
      <tr>
        <td id="L3211" class="blob-num js-line-number" data-line-number="3211"></td>
        <td id="LC3211" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_rq_enqueued</span>(cfqd, cfqq, rq);</td>
      </tr>
      <tr>
        <td id="L3212" class="blob-num js-line-number" data-line-number="3212"></td>
        <td id="LC3212" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3213" class="blob-num js-line-number" data-line-number="3213"></td>
        <td id="LC3213" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3214" class="blob-num js-line-number" data-line-number="3214"></td>
        <td id="LC3214" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3215" class="blob-num js-line-number" data-line-number="3215"></td>
        <td id="LC3215" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Update hw_tag based on peak queue depth over 50 samples under</span></td>
      </tr>
      <tr>
        <td id="L3216" class="blob-num js-line-number" data-line-number="3216"></td>
        <td id="LC3216" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * sufficient load.</span></td>
      </tr>
      <tr>
        <td id="L3217" class="blob-num js-line-number" data-line-number="3217"></td>
        <td id="LC3217" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L3218" class="blob-num js-line-number" data-line-number="3218"></td>
        <td id="LC3218" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_update_hw_tag</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L3219" class="blob-num js-line-number" data-line-number="3219"></td>
        <td id="LC3219" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3220" class="blob-num js-line-number" data-line-number="3220"></td>
        <td id="LC3220" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = cfqd-&gt;active_queue;</td>
      </tr>
      <tr>
        <td id="L3221" class="blob-num js-line-number" data-line-number="3221"></td>
        <td id="LC3221" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3222" class="blob-num js-line-number" data-line-number="3222"></td>
        <td id="LC3222" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;rq_in_driver &gt; cfqd-&gt;hw_tag_est_depth)</td>
      </tr>
      <tr>
        <td id="L3223" class="blob-num js-line-number" data-line-number="3223"></td>
        <td id="LC3223" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;hw_tag_est_depth = cfqd-&gt;rq_in_driver;</td>
      </tr>
      <tr>
        <td id="L3224" class="blob-num js-line-number" data-line-number="3224"></td>
        <td id="LC3224" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3225" class="blob-num js-line-number" data-line-number="3225"></td>
        <td id="LC3225" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;hw_tag == <span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L3226" class="blob-num js-line-number" data-line-number="3226"></td>
        <td id="LC3226" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L3227" class="blob-num js-line-number" data-line-number="3227"></td>
        <td id="LC3227" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3228" class="blob-num js-line-number" data-line-number="3228"></td>
        <td id="LC3228" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;rq_queued &lt;= CFQ_HW_QUEUE_MIN &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L3229" class="blob-num js-line-number" data-line-number="3229"></td>
        <td id="LC3229" class="blob-code blob-code-inner js-file-line">	    cfqd-&gt;rq_in_driver &lt;= CFQ_HW_QUEUE_MIN)</td>
      </tr>
      <tr>
        <td id="L3230" class="blob-num js-line-number" data-line-number="3230"></td>
        <td id="LC3230" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L3231" class="blob-num js-line-number" data-line-number="3231"></td>
        <td id="LC3231" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3232" class="blob-num js-line-number" data-line-number="3232"></td>
        <td id="LC3232" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3233" class="blob-num js-line-number" data-line-number="3233"></td>
        <td id="LC3233" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If active queue hasn&#39;t enough requests and can idle, cfq might not</span></td>
      </tr>
      <tr>
        <td id="L3234" class="blob-num js-line-number" data-line-number="3234"></td>
        <td id="LC3234" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * dispatch sufficient requests to hardware. Don&#39;t zero hw_tag in this</span></td>
      </tr>
      <tr>
        <td id="L3235" class="blob-num js-line-number" data-line-number="3235"></td>
        <td id="LC3235" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * case</span></td>
      </tr>
      <tr>
        <td id="L3236" class="blob-num js-line-number" data-line-number="3236"></td>
        <td id="LC3236" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3237" class="blob-num js-line-number" data-line-number="3237"></td>
        <td id="LC3237" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq &amp;&amp; <span class="pl-c1">cfq_cfqq_idle_window</span>(cfqq) &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L3238" class="blob-num js-line-number" data-line-number="3238"></td>
        <td id="LC3238" class="blob-code blob-code-inner js-file-line">	    cfqq-&gt;dispatched + cfqq-&gt;queued[<span class="pl-c1">0</span>] + cfqq-&gt;queued[<span class="pl-c1">1</span>] &lt;</td>
      </tr>
      <tr>
        <td id="L3239" class="blob-num js-line-number" data-line-number="3239"></td>
        <td id="LC3239" class="blob-code blob-code-inner js-file-line">	    CFQ_HW_QUEUE_MIN &amp;&amp; cfqd-&gt;rq_in_driver &lt; CFQ_HW_QUEUE_MIN)</td>
      </tr>
      <tr>
        <td id="L3240" class="blob-num js-line-number" data-line-number="3240"></td>
        <td id="LC3240" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L3241" class="blob-num js-line-number" data-line-number="3241"></td>
        <td id="LC3241" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3242" class="blob-num js-line-number" data-line-number="3242"></td>
        <td id="LC3242" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;hw_tag_samples++ &lt; <span class="pl-c1">50</span>)</td>
      </tr>
      <tr>
        <td id="L3243" class="blob-num js-line-number" data-line-number="3243"></td>
        <td id="LC3243" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span>;</td>
      </tr>
      <tr>
        <td id="L3244" class="blob-num js-line-number" data-line-number="3244"></td>
        <td id="LC3244" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3245" class="blob-num js-line-number" data-line-number="3245"></td>
        <td id="LC3245" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;hw_tag_est_depth &gt;= CFQ_HW_QUEUE_MIN)</td>
      </tr>
      <tr>
        <td id="L3246" class="blob-num js-line-number" data-line-number="3246"></td>
        <td id="LC3246" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;hw_tag = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L3247" class="blob-num js-line-number" data-line-number="3247"></td>
        <td id="LC3247" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L3248" class="blob-num js-line-number" data-line-number="3248"></td>
        <td id="LC3248" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;hw_tag = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L3249" class="blob-num js-line-number" data-line-number="3249"></td>
        <td id="LC3249" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3250" class="blob-num js-line-number" data-line-number="3250"></td>
        <td id="LC3250" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3251" class="blob-num js-line-number" data-line-number="3251"></td>
        <td id="LC3251" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">bool</span> <span class="pl-en">cfq_should_wait_busy</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L3252" class="blob-num js-line-number" data-line-number="3252"></td>
        <td id="LC3252" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3253" class="blob-num js-line-number" data-line-number="3253"></td>
        <td id="LC3253" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *cic = cfqd-&gt;active_cic;</td>
      </tr>
      <tr>
        <td id="L3254" class="blob-num js-line-number" data-line-number="3254"></td>
        <td id="LC3254" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3255" class="blob-num js-line-number" data-line-number="3255"></td>
        <td id="LC3255" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* If the queue already has requests, don&#39;t wait */</span></td>
      </tr>
      <tr>
        <td id="L3256" class="blob-num js-line-number" data-line-number="3256"></td>
        <td id="LC3256" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!<span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list))</td>
      </tr>
      <tr>
        <td id="L3257" class="blob-num js-line-number" data-line-number="3257"></td>
        <td id="LC3257" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3258" class="blob-num js-line-number" data-line-number="3258"></td>
        <td id="LC3258" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3259" class="blob-num js-line-number" data-line-number="3259"></td>
        <td id="LC3259" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* If there are other queues in the group, don&#39;t wait */</span></td>
      </tr>
      <tr>
        <td id="L3260" class="blob-num js-line-number" data-line-number="3260"></td>
        <td id="LC3260" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;cfqg-&gt;nr_cfqq &gt; <span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L3261" class="blob-num js-line-number" data-line-number="3261"></td>
        <td id="LC3261" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3262" class="blob-num js-line-number" data-line-number="3262"></td>
        <td id="LC3262" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3263" class="blob-num js-line-number" data-line-number="3263"></td>
        <td id="LC3263" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* the only queue in the group, but think time is big */</span></td>
      </tr>
      <tr>
        <td id="L3264" class="blob-num js-line-number" data-line-number="3264"></td>
        <td id="LC3264" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_io_thinktime_big</span>(cfqd, &amp;cfqq-&gt;cfqg-&gt;ttime, <span class="pl-c1">true</span>))</td>
      </tr>
      <tr>
        <td id="L3265" class="blob-num js-line-number" data-line-number="3265"></td>
        <td id="LC3265" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3266" class="blob-num js-line-number" data-line-number="3266"></td>
        <td id="LC3266" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3267" class="blob-num js-line-number" data-line-number="3267"></td>
        <td id="LC3267" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_slice_used</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3268" class="blob-num js-line-number" data-line-number="3268"></td>
        <td id="LC3268" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3269" class="blob-num js-line-number" data-line-number="3269"></td>
        <td id="LC3269" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3270" class="blob-num js-line-number" data-line-number="3270"></td>
        <td id="LC3270" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* if slice left is less than think time, wait busy */</span></td>
      </tr>
      <tr>
        <td id="L3271" class="blob-num js-line-number" data-line-number="3271"></td>
        <td id="LC3271" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cic &amp;&amp; <span class="pl-c1">sample_valid</span>(cic-&gt;ttime.<span class="pl-smi">ttime_samples</span>)</td>
      </tr>
      <tr>
        <td id="L3272" class="blob-num js-line-number" data-line-number="3272"></td>
        <td id="LC3272" class="blob-code blob-code-inner js-file-line">	    &amp;&amp; (cfqq-&gt;slice_end - jiffies &lt; cic-&gt;ttime.<span class="pl-smi">ttime_mean</span>))</td>
      </tr>
      <tr>
        <td id="L3273" class="blob-num js-line-number" data-line-number="3273"></td>
        <td id="LC3273" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3274" class="blob-num js-line-number" data-line-number="3274"></td>
        <td id="LC3274" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3275" class="blob-num js-line-number" data-line-number="3275"></td>
        <td id="LC3275" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3276" class="blob-num js-line-number" data-line-number="3276"></td>
        <td id="LC3276" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If think times is less than a jiffy than ttime_mean=0 and above</span></td>
      </tr>
      <tr>
        <td id="L3277" class="blob-num js-line-number" data-line-number="3277"></td>
        <td id="LC3277" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * will not be true. It might happen that slice has not expired yet</span></td>
      </tr>
      <tr>
        <td id="L3278" class="blob-num js-line-number" data-line-number="3278"></td>
        <td id="LC3278" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * but will expire soon (4-5 ns) during select_queue(). To cover the</span></td>
      </tr>
      <tr>
        <td id="L3279" class="blob-num js-line-number" data-line-number="3279"></td>
        <td id="LC3279" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * case where think time is less than a jiffy, mark the queue wait</span></td>
      </tr>
      <tr>
        <td id="L3280" class="blob-num js-line-number" data-line-number="3280"></td>
        <td id="LC3280" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * busy if only 1 jiffy is left in the slice.</span></td>
      </tr>
      <tr>
        <td id="L3281" class="blob-num js-line-number" data-line-number="3281"></td>
        <td id="LC3281" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3282" class="blob-num js-line-number" data-line-number="3282"></td>
        <td id="LC3282" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq-&gt;slice_end - jiffies == <span class="pl-c1">1</span>)</td>
      </tr>
      <tr>
        <td id="L3283" class="blob-num js-line-number" data-line-number="3283"></td>
        <td id="LC3283" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3284" class="blob-num js-line-number" data-line-number="3284"></td>
        <td id="LC3284" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3285" class="blob-num js-line-number" data-line-number="3285"></td>
        <td id="LC3285" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3286" class="blob-num js-line-number" data-line-number="3286"></td>
        <td id="LC3286" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3287" class="blob-num js-line-number" data-line-number="3287"></td>
        <td id="LC3287" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3288" class="blob-num js-line-number" data-line-number="3288"></td>
        <td id="LC3288" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_completed_request</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L3289" class="blob-num js-line-number" data-line-number="3289"></td>
        <td id="LC3289" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3290" class="blob-num js-line-number" data-line-number="3290"></td>
        <td id="LC3290" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">RQ_CFQQ</span>(rq);</td>
      </tr>
      <tr>
        <td id="L3291" class="blob-num js-line-number" data-line-number="3291"></td>
        <td id="LC3291" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = cfqq-&gt;cfqd;</td>
      </tr>
      <tr>
        <td id="L3292" class="blob-num js-line-number" data-line-number="3292"></td>
        <td id="LC3292" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">const</span> <span class="pl-k">int</span> <span class="pl-c1">sync</span> = <span class="pl-c1">rq_is_sync</span>(rq);</td>
      </tr>
      <tr>
        <td id="L3293" class="blob-num js-line-number" data-line-number="3293"></td>
        <td id="LC3293" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> now;</td>
      </tr>
      <tr>
        <td id="L3294" class="blob-num js-line-number" data-line-number="3294"></td>
        <td id="LC3294" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3295" class="blob-num js-line-number" data-line-number="3295"></td>
        <td id="LC3295" class="blob-code blob-code-inner js-file-line">	now = jiffies;</td>
      </tr>
      <tr>
        <td id="L3296" class="blob-num js-line-number" data-line-number="3296"></td>
        <td id="LC3296" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>complete rqnoidle <span class="pl-c1">%d</span><span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L3297" class="blob-num js-line-number" data-line-number="3297"></td>
        <td id="LC3297" class="blob-code blob-code-inner js-file-line">		     !!(rq-&gt;cmd_flags &amp; REQ_NOIDLE));</td>
      </tr>
      <tr>
        <td id="L3298" class="blob-num js-line-number" data-line-number="3298"></td>
        <td id="LC3298" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3299" class="blob-num js-line-number" data-line-number="3299"></td>
        <td id="LC3299" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_update_hw_tag</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L3300" class="blob-num js-line-number" data-line-number="3300"></td>
        <td id="LC3300" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3301" class="blob-num js-line-number" data-line-number="3301"></td>
        <td id="LC3301" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">WARN_ON</span>(!cfqd-&gt;rq_in_driver);</td>
      </tr>
      <tr>
        <td id="L3302" class="blob-num js-line-number" data-line-number="3302"></td>
        <td id="LC3302" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">WARN_ON</span>(!cfqq-&gt;dispatched);</td>
      </tr>
      <tr>
        <td id="L3303" class="blob-num js-line-number" data-line-number="3303"></td>
        <td id="LC3303" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;rq_in_driver--;</td>
      </tr>
      <tr>
        <td id="L3304" class="blob-num js-line-number" data-line-number="3304"></td>
        <td id="LC3304" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;dispatched--;</td>
      </tr>
      <tr>
        <td id="L3305" class="blob-num js-line-number" data-line-number="3305"></td>
        <td id="LC3305" class="blob-code blob-code-inner js-file-line">	(<span class="pl-c1">RQ_CFQG</span>(rq))-&gt;dispatched--;</td>
      </tr>
      <tr>
        <td id="L3306" class="blob-num js-line-number" data-line-number="3306"></td>
        <td id="LC3306" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_update_completion_stats</span>(&amp;cfqq-&gt;cfqg-&gt;blkg,</td>
      </tr>
      <tr>
        <td id="L3307" class="blob-num js-line-number" data-line-number="3307"></td>
        <td id="LC3307" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">rq_start_time_ns</span>(rq), <span class="pl-c1">rq_io_start_time_ns</span>(rq),</td>
      </tr>
      <tr>
        <td id="L3308" class="blob-num js-line-number" data-line-number="3308"></td>
        <td id="LC3308" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">rq_data_dir</span>(rq), <span class="pl-c1">rq_is_sync</span>(rq));</td>
      </tr>
      <tr>
        <td id="L3309" class="blob-num js-line-number" data-line-number="3309"></td>
        <td id="LC3309" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3310" class="blob-num js-line-number" data-line-number="3310"></td>
        <td id="LC3310" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;rq_in_flight[<span class="pl-c1">cfq_cfqq_sync</span>(cfqq)]--;</td>
      </tr>
      <tr>
        <td id="L3311" class="blob-num js-line-number" data-line-number="3311"></td>
        <td id="LC3311" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3312" class="blob-num js-line-number" data-line-number="3312"></td>
        <td id="LC3312" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">sync</span>) {</td>
      </tr>
      <tr>
        <td id="L3313" class="blob-num js-line-number" data-line-number="3313"></td>
        <td id="LC3313" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">struct</span> cfq_rb_root *service_tree;</td>
      </tr>
      <tr>
        <td id="L3314" class="blob-num js-line-number" data-line-number="3314"></td>
        <td id="LC3314" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3315" class="blob-num js-line-number" data-line-number="3315"></td>
        <td id="LC3315" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">RQ_CIC</span>(rq)-&gt;ttime.<span class="pl-smi">last_end_request</span> = now;</td>
      </tr>
      <tr>
        <td id="L3316" class="blob-num js-line-number" data-line-number="3316"></td>
        <td id="LC3316" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3317" class="blob-num js-line-number" data-line-number="3317"></td>
        <td id="LC3317" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_on_rr</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3318" class="blob-num js-line-number" data-line-number="3318"></td>
        <td id="LC3318" class="blob-code blob-code-inner js-file-line">			service_tree = cfqq-&gt;service_tree;</td>
      </tr>
      <tr>
        <td id="L3319" class="blob-num js-line-number" data-line-number="3319"></td>
        <td id="LC3319" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L3320" class="blob-num js-line-number" data-line-number="3320"></td>
        <td id="LC3320" class="blob-code blob-code-inner js-file-line">			service_tree = <span class="pl-c1">service_tree_for</span>(cfqq-&gt;cfqg,</td>
      </tr>
      <tr>
        <td id="L3321" class="blob-num js-line-number" data-line-number="3321"></td>
        <td id="LC3321" class="blob-code blob-code-inner js-file-line">				<span class="pl-c1">cfqq_prio</span>(cfqq), <span class="pl-c1">cfqq_type</span>(cfqq));</td>
      </tr>
      <tr>
        <td id="L3322" class="blob-num js-line-number" data-line-number="3322"></td>
        <td id="LC3322" class="blob-code blob-code-inner js-file-line">		service_tree-&gt;ttime.<span class="pl-smi">last_end_request</span> = now;</td>
      </tr>
      <tr>
        <td id="L3323" class="blob-num js-line-number" data-line-number="3323"></td>
        <td id="LC3323" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (!<span class="pl-c1">time_after</span>(rq-&gt;start_time + cfqd-&gt;cfq_fifo_expire[<span class="pl-c1">1</span>], now))</td>
      </tr>
      <tr>
        <td id="L3324" class="blob-num js-line-number" data-line-number="3324"></td>
        <td id="LC3324" class="blob-code blob-code-inner js-file-line">			cfqd-&gt;last_delayed_sync = now;</td>
      </tr>
      <tr>
        <td id="L3325" class="blob-num js-line-number" data-line-number="3325"></td>
        <td id="LC3325" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3326" class="blob-num js-line-number" data-line-number="3326"></td>
        <td id="LC3326" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3327" class="blob-num js-line-number" data-line-number="3327"></td>
        <td id="LC3327" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L3328" class="blob-num js-line-number" data-line-number="3328"></td>
        <td id="LC3328" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;cfqg-&gt;ttime.<span class="pl-smi">last_end_request</span> = now;</td>
      </tr>
      <tr>
        <td id="L3329" class="blob-num js-line-number" data-line-number="3329"></td>
        <td id="LC3329" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L3330" class="blob-num js-line-number" data-line-number="3330"></td>
        <td id="LC3330" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3331" class="blob-num js-line-number" data-line-number="3331"></td>
        <td id="LC3331" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3332" class="blob-num js-line-number" data-line-number="3332"></td>
        <td id="LC3332" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If this is the active queue, check if it needs to be expired,</span></td>
      </tr>
      <tr>
        <td id="L3333" class="blob-num js-line-number" data-line-number="3333"></td>
        <td id="LC3333" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * or if we want to idle in case it has no pending requests.</span></td>
      </tr>
      <tr>
        <td id="L3334" class="blob-num js-line-number" data-line-number="3334"></td>
        <td id="LC3334" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3335" class="blob-num js-line-number" data-line-number="3335"></td>
        <td id="LC3335" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;active_queue == cfqq) {</td>
      </tr>
      <tr>
        <td id="L3336" class="blob-num js-line-number" data-line-number="3336"></td>
        <td id="LC3336" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">const</span> <span class="pl-k">bool</span> cfqq_empty = <span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list);</td>
      </tr>
      <tr>
        <td id="L3337" class="blob-num js-line-number" data-line-number="3337"></td>
        <td id="LC3337" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3338" class="blob-num js-line-number" data-line-number="3338"></td>
        <td id="LC3338" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_slice_new</span>(cfqq)) {</td>
      </tr>
      <tr>
        <td id="L3339" class="blob-num js-line-number" data-line-number="3339"></td>
        <td id="LC3339" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_set_prio_slice</span>(cfqd, cfqq);</td>
      </tr>
      <tr>
        <td id="L3340" class="blob-num js-line-number" data-line-number="3340"></td>
        <td id="LC3340" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_clear_cfqq_slice_new</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3341" class="blob-num js-line-number" data-line-number="3341"></td>
        <td id="LC3341" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L3342" class="blob-num js-line-number" data-line-number="3342"></td>
        <td id="LC3342" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3343" class="blob-num js-line-number" data-line-number="3343"></td>
        <td id="LC3343" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3344" class="blob-num js-line-number" data-line-number="3344"></td>
        <td id="LC3344" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Should we wait for next request to come in before we expire</span></td>
      </tr>
      <tr>
        <td id="L3345" class="blob-num js-line-number" data-line-number="3345"></td>
        <td id="LC3345" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * the queue.</span></td>
      </tr>
      <tr>
        <td id="L3346" class="blob-num js-line-number" data-line-number="3346"></td>
        <td id="LC3346" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3347" class="blob-num js-line-number" data-line-number="3347"></td>
        <td id="LC3347" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_should_wait_busy</span>(cfqd, cfqq)) {</td>
      </tr>
      <tr>
        <td id="L3348" class="blob-num js-line-number" data-line-number="3348"></td>
        <td id="LC3348" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">unsigned</span> <span class="pl-k">long</span> extend_sl = cfqd-&gt;cfq_slice_idle;</td>
      </tr>
      <tr>
        <td id="L3349" class="blob-num js-line-number" data-line-number="3349"></td>
        <td id="LC3349" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (!cfqd-&gt;cfq_slice_idle)</td>
      </tr>
      <tr>
        <td id="L3350" class="blob-num js-line-number" data-line-number="3350"></td>
        <td id="LC3350" class="blob-code blob-code-inner js-file-line">				extend_sl = cfqd-&gt;cfq_group_idle;</td>
      </tr>
      <tr>
        <td id="L3351" class="blob-num js-line-number" data-line-number="3351"></td>
        <td id="LC3351" class="blob-code blob-code-inner js-file-line">			cfqq-&gt;slice_end = jiffies + extend_sl;</td>
      </tr>
      <tr>
        <td id="L3352" class="blob-num js-line-number" data-line-number="3352"></td>
        <td id="LC3352" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_mark_cfqq_wait_busy</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3353" class="blob-num js-line-number" data-line-number="3353"></td>
        <td id="LC3353" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>will busy wait<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L3354" class="blob-num js-line-number" data-line-number="3354"></td>
        <td id="LC3354" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L3355" class="blob-num js-line-number" data-line-number="3355"></td>
        <td id="LC3355" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3356" class="blob-num js-line-number" data-line-number="3356"></td>
        <td id="LC3356" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3357" class="blob-num js-line-number" data-line-number="3357"></td>
        <td id="LC3357" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Idling is not enabled on:</span></td>
      </tr>
      <tr>
        <td id="L3358" class="blob-num js-line-number" data-line-number="3358"></td>
        <td id="LC3358" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * - expired queues</span></td>
      </tr>
      <tr>
        <td id="L3359" class="blob-num js-line-number" data-line-number="3359"></td>
        <td id="LC3359" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * - idle-priority queues</span></td>
      </tr>
      <tr>
        <td id="L3360" class="blob-num js-line-number" data-line-number="3360"></td>
        <td id="LC3360" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * - async queues</span></td>
      </tr>
      <tr>
        <td id="L3361" class="blob-num js-line-number" data-line-number="3361"></td>
        <td id="LC3361" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * - queues with still some requests queued</span></td>
      </tr>
      <tr>
        <td id="L3362" class="blob-num js-line-number" data-line-number="3362"></td>
        <td id="LC3362" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * - when there is a close cooperator</span></td>
      </tr>
      <tr>
        <td id="L3363" class="blob-num js-line-number" data-line-number="3363"></td>
        <td id="LC3363" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3364" class="blob-num js-line-number" data-line-number="3364"></td>
        <td id="LC3364" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_slice_used</span>(cfqq) || <span class="pl-c1">cfq_class_idle</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3365" class="blob-num js-line-number" data-line-number="3365"></td>
        <td id="LC3365" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_slice_expired</span>(cfqd, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3366" class="blob-num js-line-number" data-line-number="3366"></td>
        <td id="LC3366" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-c1">sync</span> &amp;&amp; cfqq_empty &amp;&amp;</td>
      </tr>
      <tr>
        <td id="L3367" class="blob-num js-line-number" data-line-number="3367"></td>
        <td id="LC3367" class="blob-code blob-code-inner js-file-line">			 !<span class="pl-c1">cfq_close_cooperator</span>(cfqd, cfqq)) {</td>
      </tr>
      <tr>
        <td id="L3368" class="blob-num js-line-number" data-line-number="3368"></td>
        <td id="LC3368" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_arm_slice_timer</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L3369" class="blob-num js-line-number" data-line-number="3369"></td>
        <td id="LC3369" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L3370" class="blob-num js-line-number" data-line-number="3370"></td>
        <td id="LC3370" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3371" class="blob-num js-line-number" data-line-number="3371"></td>
        <td id="LC3371" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3372" class="blob-num js-line-number" data-line-number="3372"></td>
        <td id="LC3372" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqd-&gt;rq_in_driver)</td>
      </tr>
      <tr>
        <td id="L3373" class="blob-num js-line-number" data-line-number="3373"></td>
        <td id="LC3373" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_schedule_dispatch</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L3374" class="blob-num js-line-number" data-line-number="3374"></td>
        <td id="LC3374" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3375" class="blob-num js-line-number" data-line-number="3375"></td>
        <td id="LC3375" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3376" class="blob-num js-line-number" data-line-number="3376"></td>
        <td id="LC3376" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">inline</span> <span class="pl-k">int</span> <span class="pl-en">__cfq_may_queue</span>(<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L3377" class="blob-num js-line-number" data-line-number="3377"></td>
        <td id="LC3377" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3378" class="blob-num js-line-number" data-line-number="3378"></td>
        <td id="LC3378" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_wait_request</span>(cfqq) &amp;&amp; !<span class="pl-c1">cfq_cfqq_must_alloc_slice</span>(cfqq)) {</td>
      </tr>
      <tr>
        <td id="L3379" class="blob-num js-line-number" data-line-number="3379"></td>
        <td id="LC3379" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_mark_cfqq_must_alloc_slice</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3380" class="blob-num js-line-number" data-line-number="3380"></td>
        <td id="LC3380" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> ELV_MQUEUE_MUST;</td>
      </tr>
      <tr>
        <td id="L3381" class="blob-num js-line-number" data-line-number="3381"></td>
        <td id="LC3381" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3382" class="blob-num js-line-number" data-line-number="3382"></td>
        <td id="LC3382" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3383" class="blob-num js-line-number" data-line-number="3383"></td>
        <td id="LC3383" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> ELV_MQUEUE_MAY;</td>
      </tr>
      <tr>
        <td id="L3384" class="blob-num js-line-number" data-line-number="3384"></td>
        <td id="LC3384" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3385" class="blob-num js-line-number" data-line-number="3385"></td>
        <td id="LC3385" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3386" class="blob-num js-line-number" data-line-number="3386"></td>
        <td id="LC3386" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> <span class="pl-en">cfq_may_queue</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">int</span> rw)</td>
      </tr>
      <tr>
        <td id="L3387" class="blob-num js-line-number" data-line-number="3387"></td>
        <td id="LC3387" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3388" class="blob-num js-line-number" data-line-number="3388"></td>
        <td id="LC3388" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = q-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L3389" class="blob-num js-line-number" data-line-number="3389"></td>
        <td id="LC3389" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> task_struct *tsk = current;</td>
      </tr>
      <tr>
        <td id="L3390" class="blob-num js-line-number" data-line-number="3390"></td>
        <td id="LC3390" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *cic;</td>
      </tr>
      <tr>
        <td id="L3391" class="blob-num js-line-number" data-line-number="3391"></td>
        <td id="LC3391" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L3392" class="blob-num js-line-number" data-line-number="3392"></td>
        <td id="LC3392" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3393" class="blob-num js-line-number" data-line-number="3393"></td>
        <td id="LC3393" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3394" class="blob-num js-line-number" data-line-number="3394"></td>
        <td id="LC3394" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * don&#39;t force setup of a queue from here, as a call to may_queue</span></td>
      </tr>
      <tr>
        <td id="L3395" class="blob-num js-line-number" data-line-number="3395"></td>
        <td id="LC3395" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * does not necessarily imply that a request actually will be queued.</span></td>
      </tr>
      <tr>
        <td id="L3396" class="blob-num js-line-number" data-line-number="3396"></td>
        <td id="LC3396" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * so just lookup a possibly existing queue, or return &#39;may queue&#39;</span></td>
      </tr>
      <tr>
        <td id="L3397" class="blob-num js-line-number" data-line-number="3397"></td>
        <td id="LC3397" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * if that fails</span></td>
      </tr>
      <tr>
        <td id="L3398" class="blob-num js-line-number" data-line-number="3398"></td>
        <td id="LC3398" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3399" class="blob-num js-line-number" data-line-number="3399"></td>
        <td id="LC3399" class="blob-code blob-code-inner js-file-line">	cic = <span class="pl-c1">cfq_cic_lookup</span>(cfqd, tsk-&gt;io_context);</td>
      </tr>
      <tr>
        <td id="L3400" class="blob-num js-line-number" data-line-number="3400"></td>
        <td id="LC3400" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cic)</td>
      </tr>
      <tr>
        <td id="L3401" class="blob-num js-line-number" data-line-number="3401"></td>
        <td id="LC3401" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> ELV_MQUEUE_MAY;</td>
      </tr>
      <tr>
        <td id="L3402" class="blob-num js-line-number" data-line-number="3402"></td>
        <td id="LC3402" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3403" class="blob-num js-line-number" data-line-number="3403"></td>
        <td id="LC3403" class="blob-code blob-code-inner js-file-line">	cfqq = <span class="pl-c1">cic_to_cfqq</span>(cic, <span class="pl-c1">rw_is_sync</span>(rw));</td>
      </tr>
      <tr>
        <td id="L3404" class="blob-num js-line-number" data-line-number="3404"></td>
        <td id="LC3404" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq) {</td>
      </tr>
      <tr>
        <td id="L3405" class="blob-num js-line-number" data-line-number="3405"></td>
        <td id="LC3405" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_init_prio_data</span>(cfqq, cic-&gt;icq.<span class="pl-smi">ioc</span>);</td>
      </tr>
      <tr>
        <td id="L3406" class="blob-num js-line-number" data-line-number="3406"></td>
        <td id="LC3406" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3407" class="blob-num js-line-number" data-line-number="3407"></td>
        <td id="LC3407" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">__cfq_may_queue</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3408" class="blob-num js-line-number" data-line-number="3408"></td>
        <td id="LC3408" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3409" class="blob-num js-line-number" data-line-number="3409"></td>
        <td id="LC3409" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3410" class="blob-num js-line-number" data-line-number="3410"></td>
        <td id="LC3410" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> ELV_MQUEUE_MAY;</td>
      </tr>
      <tr>
        <td id="L3411" class="blob-num js-line-number" data-line-number="3411"></td>
        <td id="LC3411" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3412" class="blob-num js-line-number" data-line-number="3412"></td>
        <td id="LC3412" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3413" class="blob-num js-line-number" data-line-number="3413"></td>
        <td id="LC3413" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3414" class="blob-num js-line-number" data-line-number="3414"></td>
        <td id="LC3414" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * queue lock held here</span></td>
      </tr>
      <tr>
        <td id="L3415" class="blob-num js-line-number" data-line-number="3415"></td>
        <td id="LC3415" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L3416" class="blob-num js-line-number" data-line-number="3416"></td>
        <td id="LC3416" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_put_request</span>(<span class="pl-k">struct</span> request *rq)</td>
      </tr>
      <tr>
        <td id="L3417" class="blob-num js-line-number" data-line-number="3417"></td>
        <td id="LC3417" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3418" class="blob-num js-line-number" data-line-number="3418"></td>
        <td id="LC3418" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq = <span class="pl-c1">RQ_CFQQ</span>(rq);</td>
      </tr>
      <tr>
        <td id="L3419" class="blob-num js-line-number" data-line-number="3419"></td>
        <td id="LC3419" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3420" class="blob-num js-line-number" data-line-number="3420"></td>
        <td id="LC3420" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq) {</td>
      </tr>
      <tr>
        <td id="L3421" class="blob-num js-line-number" data-line-number="3421"></td>
        <td id="LC3421" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">const</span> <span class="pl-k">int</span> rw = <span class="pl-c1">rq_data_dir</span>(rq);</td>
      </tr>
      <tr>
        <td id="L3422" class="blob-num js-line-number" data-line-number="3422"></td>
        <td id="LC3422" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3423" class="blob-num js-line-number" data-line-number="3423"></td>
        <td id="LC3423" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">BUG_ON</span>(!cfqq-&gt;allocated[rw]);</td>
      </tr>
      <tr>
        <td id="L3424" class="blob-num js-line-number" data-line-number="3424"></td>
        <td id="LC3424" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;allocated[rw]--;</td>
      </tr>
      <tr>
        <td id="L3425" class="blob-num js-line-number" data-line-number="3425"></td>
        <td id="LC3425" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3426" class="blob-num js-line-number" data-line-number="3426"></td>
        <td id="LC3426" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/* Put down rq reference on cfqg */</span></td>
      </tr>
      <tr>
        <td id="L3427" class="blob-num js-line-number" data-line-number="3427"></td>
        <td id="LC3427" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_put_cfqg</span>(<span class="pl-c1">RQ_CFQG</span>(rq));</td>
      </tr>
      <tr>
        <td id="L3428" class="blob-num js-line-number" data-line-number="3428"></td>
        <td id="LC3428" class="blob-code blob-code-inner js-file-line">		rq-&gt;elv.<span class="pl-smi">priv</span>[<span class="pl-c1">0</span>] = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L3429" class="blob-num js-line-number" data-line-number="3429"></td>
        <td id="LC3429" class="blob-code blob-code-inner js-file-line">		rq-&gt;elv.<span class="pl-smi">priv</span>[<span class="pl-c1">1</span>] = <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L3430" class="blob-num js-line-number" data-line-number="3430"></td>
        <td id="LC3430" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3431" class="blob-num js-line-number" data-line-number="3431"></td>
        <td id="LC3431" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_put_queue</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3432" class="blob-num js-line-number" data-line-number="3432"></td>
        <td id="LC3432" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3433" class="blob-num js-line-number" data-line-number="3433"></td>
        <td id="LC3433" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3434" class="blob-num js-line-number" data-line-number="3434"></td>
        <td id="LC3434" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3435" class="blob-num js-line-number" data-line-number="3435"></td>
        <td id="LC3435" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *</td>
      </tr>
      <tr>
        <td id="L3436" class="blob-num js-line-number" data-line-number="3436"></td>
        <td id="LC3436" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_merge_cfqqs</span>(<span class="pl-k">struct</span> cfq_data *cfqd, <span class="pl-k">struct</span> cfq_io_cq *cic,</td>
      </tr>
      <tr>
        <td id="L3437" class="blob-num js-line-number" data-line-number="3437"></td>
        <td id="LC3437" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L3438" class="blob-num js-line-number" data-line-number="3438"></td>
        <td id="LC3438" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3439" class="blob-num js-line-number" data-line-number="3439"></td>
        <td id="LC3439" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>merging with queue <span class="pl-c1">%p</span><span class="pl-pds">&quot;</span></span>, cfqq-&gt;new_cfqq);</td>
      </tr>
      <tr>
        <td id="L3440" class="blob-num js-line-number" data-line-number="3440"></td>
        <td id="LC3440" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cic_set_cfqq</span>(cic, cfqq-&gt;new_cfqq, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3441" class="blob-num js-line-number" data-line-number="3441"></td>
        <td id="LC3441" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_mark_cfqq_coop</span>(cfqq-&gt;new_cfqq);</td>
      </tr>
      <tr>
        <td id="L3442" class="blob-num js-line-number" data-line-number="3442"></td>
        <td id="LC3442" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_put_queue</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3443" class="blob-num js-line-number" data-line-number="3443"></td>
        <td id="LC3443" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">cic_to_cfqq</span>(cic, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3444" class="blob-num js-line-number" data-line-number="3444"></td>
        <td id="LC3444" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3445" class="blob-num js-line-number" data-line-number="3445"></td>
        <td id="LC3445" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3446" class="blob-num js-line-number" data-line-number="3446"></td>
        <td id="LC3446" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3447" class="blob-num js-line-number" data-line-number="3447"></td>
        <td id="LC3447" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Returns NULL if a new cfqq should be allocated, or the old cfqq if this</span></td>
      </tr>
      <tr>
        <td id="L3448" class="blob-num js-line-number" data-line-number="3448"></td>
        <td id="LC3448" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * was the last process referring to said cfqq.</span></td>
      </tr>
      <tr>
        <td id="L3449" class="blob-num js-line-number" data-line-number="3449"></td>
        <td id="LC3449" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L3450" class="blob-num js-line-number" data-line-number="3450"></td>
        <td id="LC3450" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> cfq_queue *</td>
      </tr>
      <tr>
        <td id="L3451" class="blob-num js-line-number" data-line-number="3451"></td>
        <td id="LC3451" class="blob-code blob-code-inner js-file-line"><span class="pl-en">split_cfqq</span>(<span class="pl-k">struct</span> cfq_io_cq *cic, <span class="pl-k">struct</span> cfq_queue *cfqq)</td>
      </tr>
      <tr>
        <td id="L3452" class="blob-num js-line-number" data-line-number="3452"></td>
        <td id="LC3452" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3453" class="blob-num js-line-number" data-line-number="3453"></td>
        <td id="LC3453" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">cfqq_process_refs</span>(cfqq) == <span class="pl-c1">1</span>) {</td>
      </tr>
      <tr>
        <td id="L3454" class="blob-num js-line-number" data-line-number="3454"></td>
        <td id="LC3454" class="blob-code blob-code-inner js-file-line">		cfqq-&gt;pid = current-&gt;pid;</td>
      </tr>
      <tr>
        <td id="L3455" class="blob-num js-line-number" data-line-number="3455"></td>
        <td id="LC3455" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_clear_cfqq_coop</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3456" class="blob-num js-line-number" data-line-number="3456"></td>
        <td id="LC3456" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_clear_cfqq_split_coop</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3457" class="blob-num js-line-number" data-line-number="3457"></td>
        <td id="LC3457" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> cfqq;</td>
      </tr>
      <tr>
        <td id="L3458" class="blob-num js-line-number" data-line-number="3458"></td>
        <td id="LC3458" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3459" class="blob-num js-line-number" data-line-number="3459"></td>
        <td id="LC3459" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3460" class="blob-num js-line-number" data-line-number="3460"></td>
        <td id="LC3460" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cic_set_cfqq</span>(cic, <span class="pl-c1">NULL</span>, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3461" class="blob-num js-line-number" data-line-number="3461"></td>
        <td id="LC3461" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3462" class="blob-num js-line-number" data-line-number="3462"></td>
        <td id="LC3462" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_put_cooperator</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3463" class="blob-num js-line-number" data-line-number="3463"></td>
        <td id="LC3463" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3464" class="blob-num js-line-number" data-line-number="3464"></td>
        <td id="LC3464" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_put_queue</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3465" class="blob-num js-line-number" data-line-number="3465"></td>
        <td id="LC3465" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L3466" class="blob-num js-line-number" data-line-number="3466"></td>
        <td id="LC3466" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3467" class="blob-num js-line-number" data-line-number="3467"></td>
        <td id="LC3467" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3468" class="blob-num js-line-number" data-line-number="3468"></td>
        <td id="LC3468" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Allocate cfq data structures associated with this request.</span></td>
      </tr>
      <tr>
        <td id="L3469" class="blob-num js-line-number" data-line-number="3469"></td>
        <td id="LC3469" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L3470" class="blob-num js-line-number" data-line-number="3470"></td>
        <td id="LC3470" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span></td>
      </tr>
      <tr>
        <td id="L3471" class="blob-num js-line-number" data-line-number="3471"></td>
        <td id="LC3471" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_set_request</span>(<span class="pl-k">struct</span> request_queue *q, <span class="pl-k">struct</span> request *rq, <span class="pl-c1">gfp_t</span> gfp_mask)</td>
      </tr>
      <tr>
        <td id="L3472" class="blob-num js-line-number" data-line-number="3472"></td>
        <td id="LC3472" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3473" class="blob-num js-line-number" data-line-number="3473"></td>
        <td id="LC3473" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = q-&gt;elevator-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L3474" class="blob-num js-line-number" data-line-number="3474"></td>
        <td id="LC3474" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_io_cq *cic = <span class="pl-c1">icq_to_cic</span>(rq-&gt;elv.<span class="pl-smi">icq</span>);</td>
      </tr>
      <tr>
        <td id="L3475" class="blob-num js-line-number" data-line-number="3475"></td>
        <td id="LC3475" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">const</span> <span class="pl-k">int</span> rw = <span class="pl-c1">rq_data_dir</span>(rq);</td>
      </tr>
      <tr>
        <td id="L3476" class="blob-num js-line-number" data-line-number="3476"></td>
        <td id="LC3476" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">const</span> <span class="pl-k">bool</span> is_sync = <span class="pl-c1">rq_is_sync</span>(rq);</td>
      </tr>
      <tr>
        <td id="L3477" class="blob-num js-line-number" data-line-number="3477"></td>
        <td id="LC3477" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L3478" class="blob-num js-line-number" data-line-number="3478"></td>
        <td id="LC3478" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> changed;</td>
      </tr>
      <tr>
        <td id="L3479" class="blob-num js-line-number" data-line-number="3479"></td>
        <td id="LC3479" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3480" class="blob-num js-line-number" data-line-number="3480"></td>
        <td id="LC3480" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">might_sleep_if</span>(gfp_mask &amp; __GFP_WAIT);</td>
      </tr>
      <tr>
        <td id="L3481" class="blob-num js-line-number" data-line-number="3481"></td>
        <td id="LC3481" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3482" class="blob-num js-line-number" data-line-number="3482"></td>
        <td id="LC3482" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_lock_irq</span>(q-&gt;queue_lock);</td>
      </tr>
      <tr>
        <td id="L3483" class="blob-num js-line-number" data-line-number="3483"></td>
        <td id="LC3483" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3484" class="blob-num js-line-number" data-line-number="3484"></td>
        <td id="LC3484" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* handle changed notifications */</span></td>
      </tr>
      <tr>
        <td id="L3485" class="blob-num js-line-number" data-line-number="3485"></td>
        <td id="LC3485" class="blob-code blob-code-inner js-file-line">	changed = <span class="pl-c1">icq_get_changed</span>(&amp;cic-&gt;icq);</td>
      </tr>
      <tr>
        <td id="L3486" class="blob-num js-line-number" data-line-number="3486"></td>
        <td id="LC3486" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">unlikely</span>(changed &amp; ICQ_IOPRIO_CHANGED))</td>
      </tr>
      <tr>
        <td id="L3487" class="blob-num js-line-number" data-line-number="3487"></td>
        <td id="LC3487" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">changed_ioprio</span>(cic);</td>
      </tr>
      <tr>
        <td id="L3488" class="blob-num js-line-number" data-line-number="3488"></td>
        <td id="LC3488" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L3489" class="blob-num js-line-number" data-line-number="3489"></td>
        <td id="LC3489" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">unlikely</span>(changed &amp; ICQ_CGROUP_CHANGED))</td>
      </tr>
      <tr>
        <td id="L3490" class="blob-num js-line-number" data-line-number="3490"></td>
        <td id="LC3490" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">changed_cgroup</span>(cic);</td>
      </tr>
      <tr>
        <td id="L3491" class="blob-num js-line-number" data-line-number="3491"></td>
        <td id="LC3491" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L3492" class="blob-num js-line-number" data-line-number="3492"></td>
        <td id="LC3492" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3493" class="blob-num js-line-number" data-line-number="3493"></td>
        <td id="LC3493" class="blob-code blob-code-inner js-file-line">new_queue:</td>
      </tr>
      <tr>
        <td id="L3494" class="blob-num js-line-number" data-line-number="3494"></td>
        <td id="LC3494" class="blob-code blob-code-inner js-file-line">	cfqq = <span class="pl-c1">cic_to_cfqq</span>(cic, is_sync);</td>
      </tr>
      <tr>
        <td id="L3495" class="blob-num js-line-number" data-line-number="3495"></td>
        <td id="LC3495" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqq || cfqq == &amp;cfqd-&gt;oom_cfqq) {</td>
      </tr>
      <tr>
        <td id="L3496" class="blob-num js-line-number" data-line-number="3496"></td>
        <td id="LC3496" class="blob-code blob-code-inner js-file-line">		cfqq = <span class="pl-c1">cfq_get_queue</span>(cfqd, is_sync, cic-&gt;icq.<span class="pl-smi">ioc</span>, gfp_mask);</td>
      </tr>
      <tr>
        <td id="L3497" class="blob-num js-line-number" data-line-number="3497"></td>
        <td id="LC3497" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cic_set_cfqq</span>(cic, cfqq, is_sync);</td>
      </tr>
      <tr>
        <td id="L3498" class="blob-num js-line-number" data-line-number="3498"></td>
        <td id="LC3498" class="blob-code blob-code-inner js-file-line">	} <span class="pl-k">else</span> {</td>
      </tr>
      <tr>
        <td id="L3499" class="blob-num js-line-number" data-line-number="3499"></td>
        <td id="LC3499" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3500" class="blob-num js-line-number" data-line-number="3500"></td>
        <td id="LC3500" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * If the queue was seeky for too long, break it apart.</span></td>
      </tr>
      <tr>
        <td id="L3501" class="blob-num js-line-number" data-line-number="3501"></td>
        <td id="LC3501" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3502" class="blob-num js-line-number" data-line-number="3502"></td>
        <td id="LC3502" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_coop</span>(cfqq) &amp;&amp; <span class="pl-c1">cfq_cfqq_split_coop</span>(cfqq)) {</td>
      </tr>
      <tr>
        <td id="L3503" class="blob-num js-line-number" data-line-number="3503"></td>
        <td id="LC3503" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_log_cfqq</span>(cfqd, cfqq, <span class="pl-s"><span class="pl-pds">&quot;</span>breaking apart cfqq<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L3504" class="blob-num js-line-number" data-line-number="3504"></td>
        <td id="LC3504" class="blob-code blob-code-inner js-file-line">			cfqq = <span class="pl-c1">split_cfqq</span>(cic, cfqq);</td>
      </tr>
      <tr>
        <td id="L3505" class="blob-num js-line-number" data-line-number="3505"></td>
        <td id="LC3505" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">if</span> (!cfqq)</td>
      </tr>
      <tr>
        <td id="L3506" class="blob-num js-line-number" data-line-number="3506"></td>
        <td id="LC3506" class="blob-code blob-code-inner js-file-line">				<span class="pl-k">goto</span> new_queue;</td>
      </tr>
      <tr>
        <td id="L3507" class="blob-num js-line-number" data-line-number="3507"></td>
        <td id="LC3507" class="blob-code blob-code-inner js-file-line">		}</td>
      </tr>
      <tr>
        <td id="L3508" class="blob-num js-line-number" data-line-number="3508"></td>
        <td id="LC3508" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3509" class="blob-num js-line-number" data-line-number="3509"></td>
        <td id="LC3509" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3510" class="blob-num js-line-number" data-line-number="3510"></td>
        <td id="LC3510" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Check to see if this queue is scheduled to merge with</span></td>
      </tr>
      <tr>
        <td id="L3511" class="blob-num js-line-number" data-line-number="3511"></td>
        <td id="LC3511" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * another, closely cooperating queue.  The merging of</span></td>
      </tr>
      <tr>
        <td id="L3512" class="blob-num js-line-number" data-line-number="3512"></td>
        <td id="LC3512" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * queues happens here as it must be done in process context.</span></td>
      </tr>
      <tr>
        <td id="L3513" class="blob-num js-line-number" data-line-number="3513"></td>
        <td id="LC3513" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * The reference on new_cfqq was taken in merge_cfqqs.</span></td>
      </tr>
      <tr>
        <td id="L3514" class="blob-num js-line-number" data-line-number="3514"></td>
        <td id="LC3514" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3515" class="blob-num js-line-number" data-line-number="3515"></td>
        <td id="LC3515" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cfqq-&gt;new_cfqq)</td>
      </tr>
      <tr>
        <td id="L3516" class="blob-num js-line-number" data-line-number="3516"></td>
        <td id="LC3516" class="blob-code blob-code-inner js-file-line">			cfqq = <span class="pl-c1">cfq_merge_cfqqs</span>(cfqd, cic, cfqq);</td>
      </tr>
      <tr>
        <td id="L3517" class="blob-num js-line-number" data-line-number="3517"></td>
        <td id="LC3517" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3518" class="blob-num js-line-number" data-line-number="3518"></td>
        <td id="LC3518" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3519" class="blob-num js-line-number" data-line-number="3519"></td>
        <td id="LC3519" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;allocated[rw]++;</td>
      </tr>
      <tr>
        <td id="L3520" class="blob-num js-line-number" data-line-number="3520"></td>
        <td id="LC3520" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3521" class="blob-num js-line-number" data-line-number="3521"></td>
        <td id="LC3521" class="blob-code blob-code-inner js-file-line">	cfqq-&gt;ref++;</td>
      </tr>
      <tr>
        <td id="L3522" class="blob-num js-line-number" data-line-number="3522"></td>
        <td id="LC3522" class="blob-code blob-code-inner js-file-line">	rq-&gt;elv.<span class="pl-smi">priv</span>[<span class="pl-c1">0</span>] = cfqq;</td>
      </tr>
      <tr>
        <td id="L3523" class="blob-num js-line-number" data-line-number="3523"></td>
        <td id="LC3523" class="blob-code blob-code-inner js-file-line">	rq-&gt;elv.<span class="pl-smi">priv</span>[<span class="pl-c1">1</span>] = <span class="pl-c1">cfq_ref_get_cfqg</span>(cfqq-&gt;cfqg);</td>
      </tr>
      <tr>
        <td id="L3524" class="blob-num js-line-number" data-line-number="3524"></td>
        <td id="LC3524" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_unlock_irq</span>(q-&gt;queue_lock);</td>
      </tr>
      <tr>
        <td id="L3525" class="blob-num js-line-number" data-line-number="3525"></td>
        <td id="LC3525" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L3526" class="blob-num js-line-number" data-line-number="3526"></td>
        <td id="LC3526" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3527" class="blob-num js-line-number" data-line-number="3527"></td>
        <td id="LC3527" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3528" class="blob-num js-line-number" data-line-number="3528"></td>
        <td id="LC3528" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_kick_queue</span>(<span class="pl-k">struct</span> work_struct *work)</td>
      </tr>
      <tr>
        <td id="L3529" class="blob-num js-line-number" data-line-number="3529"></td>
        <td id="LC3529" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3530" class="blob-num js-line-number" data-line-number="3530"></td>
        <td id="LC3530" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd =</td>
      </tr>
      <tr>
        <td id="L3531" class="blob-num js-line-number" data-line-number="3531"></td>
        <td id="LC3531" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">container_of</span>(work, <span class="pl-k">struct</span> cfq_data, unplug_work);</td>
      </tr>
      <tr>
        <td id="L3532" class="blob-num js-line-number" data-line-number="3532"></td>
        <td id="LC3532" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request_queue *q = cfqd-&gt;queue;</td>
      </tr>
      <tr>
        <td id="L3533" class="blob-num js-line-number" data-line-number="3533"></td>
        <td id="LC3533" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3534" class="blob-num js-line-number" data-line-number="3534"></td>
        <td id="LC3534" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_lock_irq</span>(q-&gt;queue_lock);</td>
      </tr>
      <tr>
        <td id="L3535" class="blob-num js-line-number" data-line-number="3535"></td>
        <td id="LC3535" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">__blk_run_queue</span>(cfqd-&gt;queue);</td>
      </tr>
      <tr>
        <td id="L3536" class="blob-num js-line-number" data-line-number="3536"></td>
        <td id="LC3536" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_unlock_irq</span>(q-&gt;queue_lock);</td>
      </tr>
      <tr>
        <td id="L3537" class="blob-num js-line-number" data-line-number="3537"></td>
        <td id="LC3537" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3538" class="blob-num js-line-number" data-line-number="3538"></td>
        <td id="LC3538" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3539" class="blob-num js-line-number" data-line-number="3539"></td>
        <td id="LC3539" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3540" class="blob-num js-line-number" data-line-number="3540"></td>
        <td id="LC3540" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * Timer running if the active_queue is currently idling inside its time slice</span></td>
      </tr>
      <tr>
        <td id="L3541" class="blob-num js-line-number" data-line-number="3541"></td>
        <td id="LC3541" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L3542" class="blob-num js-line-number" data-line-number="3542"></td>
        <td id="LC3542" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_idle_slice_timer</span>(<span class="pl-k">unsigned</span> <span class="pl-k">long</span> data)</td>
      </tr>
      <tr>
        <td id="L3543" class="blob-num js-line-number" data-line-number="3543"></td>
        <td id="LC3543" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3544" class="blob-num js-line-number" data-line-number="3544"></td>
        <td id="LC3544" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = (<span class="pl-k">struct</span> cfq_data *) data;</td>
      </tr>
      <tr>
        <td id="L3545" class="blob-num js-line-number" data-line-number="3545"></td>
        <td id="LC3545" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_queue *cfqq;</td>
      </tr>
      <tr>
        <td id="L3546" class="blob-num js-line-number" data-line-number="3546"></td>
        <td id="LC3546" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">long</span> flags;</td>
      </tr>
      <tr>
        <td id="L3547" class="blob-num js-line-number" data-line-number="3547"></td>
        <td id="LC3547" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> timed_out = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L3548" class="blob-num js-line-number" data-line-number="3548"></td>
        <td id="LC3548" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3549" class="blob-num js-line-number" data-line-number="3549"></td>
        <td id="LC3549" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_log</span>(cfqd, <span class="pl-s"><span class="pl-pds">&quot;</span>idle timer fired<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L3550" class="blob-num js-line-number" data-line-number="3550"></td>
        <td id="LC3550" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3551" class="blob-num js-line-number" data-line-number="3551"></td>
        <td id="LC3551" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_lock_irqsave</span>(cfqd-&gt;queue-&gt;queue_lock, flags);</td>
      </tr>
      <tr>
        <td id="L3552" class="blob-num js-line-number" data-line-number="3552"></td>
        <td id="LC3552" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3553" class="blob-num js-line-number" data-line-number="3553"></td>
        <td id="LC3553" class="blob-code blob-code-inner js-file-line">	cfqq = cfqd-&gt;active_queue;</td>
      </tr>
      <tr>
        <td id="L3554" class="blob-num js-line-number" data-line-number="3554"></td>
        <td id="LC3554" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqq) {</td>
      </tr>
      <tr>
        <td id="L3555" class="blob-num js-line-number" data-line-number="3555"></td>
        <td id="LC3555" class="blob-code blob-code-inner js-file-line">		timed_out = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L3556" class="blob-num js-line-number" data-line-number="3556"></td>
        <td id="LC3556" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3557" class="blob-num js-line-number" data-line-number="3557"></td>
        <td id="LC3557" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3558" class="blob-num js-line-number" data-line-number="3558"></td>
        <td id="LC3558" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * We saw a request before the queue expired, let it through</span></td>
      </tr>
      <tr>
        <td id="L3559" class="blob-num js-line-number" data-line-number="3559"></td>
        <td id="LC3559" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3560" class="blob-num js-line-number" data-line-number="3560"></td>
        <td id="LC3560" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_cfqq_must_dispatch</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3561" class="blob-num js-line-number" data-line-number="3561"></td>
        <td id="LC3561" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">goto</span> out_kick;</td>
      </tr>
      <tr>
        <td id="L3562" class="blob-num js-line-number" data-line-number="3562"></td>
        <td id="LC3562" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3563" class="blob-num js-line-number" data-line-number="3563"></td>
        <td id="LC3563" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3564" class="blob-num js-line-number" data-line-number="3564"></td>
        <td id="LC3564" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * expired</span></td>
      </tr>
      <tr>
        <td id="L3565" class="blob-num js-line-number" data-line-number="3565"></td>
        <td id="LC3565" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3566" class="blob-num js-line-number" data-line-number="3566"></td>
        <td id="LC3566" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (<span class="pl-c1">cfq_slice_used</span>(cfqq))</td>
      </tr>
      <tr>
        <td id="L3567" class="blob-num js-line-number" data-line-number="3567"></td>
        <td id="LC3567" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">goto</span> expire;</td>
      </tr>
      <tr>
        <td id="L3568" class="blob-num js-line-number" data-line-number="3568"></td>
        <td id="LC3568" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3569" class="blob-num js-line-number" data-line-number="3569"></td>
        <td id="LC3569" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3570" class="blob-num js-line-number" data-line-number="3570"></td>
        <td id="LC3570" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * only expire and reinvoke request handler, if there are</span></td>
      </tr>
      <tr>
        <td id="L3571" class="blob-num js-line-number" data-line-number="3571"></td>
        <td id="LC3571" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * other queues with pending requests</span></td>
      </tr>
      <tr>
        <td id="L3572" class="blob-num js-line-number" data-line-number="3572"></td>
        <td id="LC3572" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3573" class="blob-num js-line-number" data-line-number="3573"></td>
        <td id="LC3573" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (!cfqd-&gt;busy_queues)</td>
      </tr>
      <tr>
        <td id="L3574" class="blob-num js-line-number" data-line-number="3574"></td>
        <td id="LC3574" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">goto</span> out_cont;</td>
      </tr>
      <tr>
        <td id="L3575" class="blob-num js-line-number" data-line-number="3575"></td>
        <td id="LC3575" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3576" class="blob-num js-line-number" data-line-number="3576"></td>
        <td id="LC3576" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3577" class="blob-num js-line-number" data-line-number="3577"></td>
        <td id="LC3577" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * not expired and it has a request pending, let it dispatch</span></td>
      </tr>
      <tr>
        <td id="L3578" class="blob-num js-line-number" data-line-number="3578"></td>
        <td id="LC3578" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3579" class="blob-num js-line-number" data-line-number="3579"></td>
        <td id="LC3579" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (!<span class="pl-c1">RB_EMPTY_ROOT</span>(&amp;cfqq-&gt;sort_list))</td>
      </tr>
      <tr>
        <td id="L3580" class="blob-num js-line-number" data-line-number="3580"></td>
        <td id="LC3580" class="blob-code blob-code-inner js-file-line">			<span class="pl-k">goto</span> out_kick;</td>
      </tr>
      <tr>
        <td id="L3581" class="blob-num js-line-number" data-line-number="3581"></td>
        <td id="LC3581" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3582" class="blob-num js-line-number" data-line-number="3582"></td>
        <td id="LC3582" class="blob-code blob-code-inner js-file-line">		<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3583" class="blob-num js-line-number" data-line-number="3583"></td>
        <td id="LC3583" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 * Queue depth flag is reset only when the idle didn&#39;t succeed</span></td>
      </tr>
      <tr>
        <td id="L3584" class="blob-num js-line-number" data-line-number="3584"></td>
        <td id="LC3584" class="blob-code blob-code-inner js-file-line"><span class="pl-c">		 */</span></td>
      </tr>
      <tr>
        <td id="L3585" class="blob-num js-line-number" data-line-number="3585"></td>
        <td id="LC3585" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_clear_cfqq_deep</span>(cfqq);</td>
      </tr>
      <tr>
        <td id="L3586" class="blob-num js-line-number" data-line-number="3586"></td>
        <td id="LC3586" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3587" class="blob-num js-line-number" data-line-number="3587"></td>
        <td id="LC3587" class="blob-code blob-code-inner js-file-line">expire:</td>
      </tr>
      <tr>
        <td id="L3588" class="blob-num js-line-number" data-line-number="3588"></td>
        <td id="LC3588" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_slice_expired</span>(cfqd, timed_out);</td>
      </tr>
      <tr>
        <td id="L3589" class="blob-num js-line-number" data-line-number="3589"></td>
        <td id="LC3589" class="blob-code blob-code-inner js-file-line">out_kick:</td>
      </tr>
      <tr>
        <td id="L3590" class="blob-num js-line-number" data-line-number="3590"></td>
        <td id="LC3590" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_schedule_dispatch</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L3591" class="blob-num js-line-number" data-line-number="3591"></td>
        <td id="LC3591" class="blob-code blob-code-inner js-file-line">out_cont:</td>
      </tr>
      <tr>
        <td id="L3592" class="blob-num js-line-number" data-line-number="3592"></td>
        <td id="LC3592" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_unlock_irqrestore</span>(cfqd-&gt;queue-&gt;queue_lock, flags);</td>
      </tr>
      <tr>
        <td id="L3593" class="blob-num js-line-number" data-line-number="3593"></td>
        <td id="LC3593" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3594" class="blob-num js-line-number" data-line-number="3594"></td>
        <td id="LC3594" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3595" class="blob-num js-line-number" data-line-number="3595"></td>
        <td id="LC3595" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_shutdown_timer_wq</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L3596" class="blob-num js-line-number" data-line-number="3596"></td>
        <td id="LC3596" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3597" class="blob-num js-line-number" data-line-number="3597"></td>
        <td id="LC3597" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">del_timer_sync</span>(&amp;cfqd-&gt;idle_slice_timer);</td>
      </tr>
      <tr>
        <td id="L3598" class="blob-num js-line-number" data-line-number="3598"></td>
        <td id="LC3598" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cancel_work_sync</span>(&amp;cfqd-&gt;unplug_work);</td>
      </tr>
      <tr>
        <td id="L3599" class="blob-num js-line-number" data-line-number="3599"></td>
        <td id="LC3599" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3600" class="blob-num js-line-number" data-line-number="3600"></td>
        <td id="LC3600" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3601" class="blob-num js-line-number" data-line-number="3601"></td>
        <td id="LC3601" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_put_async_queues</span>(<span class="pl-k">struct</span> cfq_data *cfqd)</td>
      </tr>
      <tr>
        <td id="L3602" class="blob-num js-line-number" data-line-number="3602"></td>
        <td id="LC3602" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3603" class="blob-num js-line-number" data-line-number="3603"></td>
        <td id="LC3603" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> i;</td>
      </tr>
      <tr>
        <td id="L3604" class="blob-num js-line-number" data-line-number="3604"></td>
        <td id="LC3604" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3605" class="blob-num js-line-number" data-line-number="3605"></td>
        <td id="LC3605" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (i = <span class="pl-c1">0</span>; i &lt; IOPRIO_BE_NR; i++) {</td>
      </tr>
      <tr>
        <td id="L3606" class="blob-num js-line-number" data-line-number="3606"></td>
        <td id="LC3606" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cfqd-&gt;async_cfqq[<span class="pl-c1">0</span>][i])</td>
      </tr>
      <tr>
        <td id="L3607" class="blob-num js-line-number" data-line-number="3607"></td>
        <td id="LC3607" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_put_queue</span>(cfqd-&gt;async_cfqq[<span class="pl-c1">0</span>][i]);</td>
      </tr>
      <tr>
        <td id="L3608" class="blob-num js-line-number" data-line-number="3608"></td>
        <td id="LC3608" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">if</span> (cfqd-&gt;async_cfqq[<span class="pl-c1">1</span>][i])</td>
      </tr>
      <tr>
        <td id="L3609" class="blob-num js-line-number" data-line-number="3609"></td>
        <td id="LC3609" class="blob-code blob-code-inner js-file-line">			<span class="pl-c1">cfq_put_queue</span>(cfqd-&gt;async_cfqq[<span class="pl-c1">1</span>][i]);</td>
      </tr>
      <tr>
        <td id="L3610" class="blob-num js-line-number" data-line-number="3610"></td>
        <td id="LC3610" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3611" class="blob-num js-line-number" data-line-number="3611"></td>
        <td id="LC3611" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3612" class="blob-num js-line-number" data-line-number="3612"></td>
        <td id="LC3612" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;async_idle_cfqq)</td>
      </tr>
      <tr>
        <td id="L3613" class="blob-num js-line-number" data-line-number="3613"></td>
        <td id="LC3613" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">cfq_put_queue</span>(cfqd-&gt;async_idle_cfqq);</td>
      </tr>
      <tr>
        <td id="L3614" class="blob-num js-line-number" data-line-number="3614"></td>
        <td id="LC3614" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3615" class="blob-num js-line-number" data-line-number="3615"></td>
        <td id="LC3615" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3616" class="blob-num js-line-number" data-line-number="3616"></td>
        <td id="LC3616" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> <span class="pl-en">cfq_exit_queue</span>(<span class="pl-k">struct</span> elevator_queue *e)</td>
      </tr>
      <tr>
        <td id="L3617" class="blob-num js-line-number" data-line-number="3617"></td>
        <td id="LC3617" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3618" class="blob-num js-line-number" data-line-number="3618"></td>
        <td id="LC3618" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = e-&gt;elevator_data;</td>
      </tr>
      <tr>
        <td id="L3619" class="blob-num js-line-number" data-line-number="3619"></td>
        <td id="LC3619" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> request_queue *q = cfqd-&gt;queue;</td>
      </tr>
      <tr>
        <td id="L3620" class="blob-num js-line-number" data-line-number="3620"></td>
        <td id="LC3620" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">bool</span> <span class="pl-c1">wait</span> = <span class="pl-c1">false</span>;</td>
      </tr>
      <tr>
        <td id="L3621" class="blob-num js-line-number" data-line-number="3621"></td>
        <td id="LC3621" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3622" class="blob-num js-line-number" data-line-number="3622"></td>
        <td id="LC3622" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_shutdown_timer_wq</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L3623" class="blob-num js-line-number" data-line-number="3623"></td>
        <td id="LC3623" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3624" class="blob-num js-line-number" data-line-number="3624"></td>
        <td id="LC3624" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_lock_irq</span>(q-&gt;queue_lock);</td>
      </tr>
      <tr>
        <td id="L3625" class="blob-num js-line-number" data-line-number="3625"></td>
        <td id="LC3625" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3626" class="blob-num js-line-number" data-line-number="3626"></td>
        <td id="LC3626" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;active_queue)</td>
      </tr>
      <tr>
        <td id="L3627" class="blob-num js-line-number" data-line-number="3627"></td>
        <td id="LC3627" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">__cfq_slice_expired</span>(cfqd, cfqd-&gt;active_queue, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3628" class="blob-num js-line-number" data-line-number="3628"></td>
        <td id="LC3628" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3629" class="blob-num js-line-number" data-line-number="3629"></td>
        <td id="LC3629" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_put_async_queues</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L3630" class="blob-num js-line-number" data-line-number="3630"></td>
        <td id="LC3630" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_release_cfq_groups</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L3631" class="blob-num js-line-number" data-line-number="3631"></td>
        <td id="LC3631" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3632" class="blob-num js-line-number" data-line-number="3632"></td>
        <td id="LC3632" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3633" class="blob-num js-line-number" data-line-number="3633"></td>
        <td id="LC3633" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * If there are groups which we could not unlink from blkcg list,</span></td>
      </tr>
      <tr>
        <td id="L3634" class="blob-num js-line-number" data-line-number="3634"></td>
        <td id="LC3634" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * wait for a rcu period for them to be freed.</span></td>
      </tr>
      <tr>
        <td id="L3635" class="blob-num js-line-number" data-line-number="3635"></td>
        <td id="LC3635" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3636" class="blob-num js-line-number" data-line-number="3636"></td>
        <td id="LC3636" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (cfqd-&gt;nr_blkcg_linked_grps)</td>
      </tr>
      <tr>
        <td id="L3637" class="blob-num js-line-number" data-line-number="3637"></td>
        <td id="LC3637" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">wait</span> = <span class="pl-c1">true</span>;</td>
      </tr>
      <tr>
        <td id="L3638" class="blob-num js-line-number" data-line-number="3638"></td>
        <td id="LC3638" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3639" class="blob-num js-line-number" data-line-number="3639"></td>
        <td id="LC3639" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">spin_unlock_irq</span>(q-&gt;queue_lock);</td>
      </tr>
      <tr>
        <td id="L3640" class="blob-num js-line-number" data-line-number="3640"></td>
        <td id="LC3640" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3641" class="blob-num js-line-number" data-line-number="3641"></td>
        <td id="LC3641" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_shutdown_timer_wq</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L3642" class="blob-num js-line-number" data-line-number="3642"></td>
        <td id="LC3642" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3643" class="blob-num js-line-number" data-line-number="3643"></td>
        <td id="LC3643" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3644" class="blob-num js-line-number" data-line-number="3644"></td>
        <td id="LC3644" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Wait for cfqg-&gt;blkg-&gt;key accessors to exit their grace periods.</span></td>
      </tr>
      <tr>
        <td id="L3645" class="blob-num js-line-number" data-line-number="3645"></td>
        <td id="LC3645" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Do this wait only if there are other unlinked groups out</span></td>
      </tr>
      <tr>
        <td id="L3646" class="blob-num js-line-number" data-line-number="3646"></td>
        <td id="LC3646" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * there. This can happen if cgroup deletion path claimed the</span></td>
      </tr>
      <tr>
        <td id="L3647" class="blob-num js-line-number" data-line-number="3647"></td>
        <td id="LC3647" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * responsibility of cleaning up a group before queue cleanup code</span></td>
      </tr>
      <tr>
        <td id="L3648" class="blob-num js-line-number" data-line-number="3648"></td>
        <td id="LC3648" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * get to the group.</span></td>
      </tr>
      <tr>
        <td id="L3649" class="blob-num js-line-number" data-line-number="3649"></td>
        <td id="LC3649" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 *</span></td>
      </tr>
      <tr>
        <td id="L3650" class="blob-num js-line-number" data-line-number="3650"></td>
        <td id="LC3650" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Do not call synchronize_rcu() unconditionally as there are drivers</span></td>
      </tr>
      <tr>
        <td id="L3651" class="blob-num js-line-number" data-line-number="3651"></td>
        <td id="LC3651" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * which create/delete request queue hundreds of times during scan/boot</span></td>
      </tr>
      <tr>
        <td id="L3652" class="blob-num js-line-number" data-line-number="3652"></td>
        <td id="LC3652" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * and synchronize_rcu() can take significant time and slow down boot.</span></td>
      </tr>
      <tr>
        <td id="L3653" class="blob-num js-line-number" data-line-number="3653"></td>
        <td id="LC3653" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3654" class="blob-num js-line-number" data-line-number="3654"></td>
        <td id="LC3654" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">wait</span>)</td>
      </tr>
      <tr>
        <td id="L3655" class="blob-num js-line-number" data-line-number="3655"></td>
        <td id="LC3655" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">synchronize_rcu</span>();</td>
      </tr>
      <tr>
        <td id="L3656" class="blob-num js-line-number" data-line-number="3656"></td>
        <td id="LC3656" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3657" class="blob-num js-line-number" data-line-number="3657"></td>
        <td id="LC3657" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L3658" class="blob-num js-line-number" data-line-number="3658"></td>
        <td id="LC3658" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Free up per cpu stats for root group */</span></td>
      </tr>
      <tr>
        <td id="L3659" class="blob-num js-line-number" data-line-number="3659"></td>
        <td id="LC3659" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">free_percpu</span>(cfqd-&gt;root_group.<span class="pl-smi">blkg</span>.<span class="pl-smi">stats_cpu</span>);</td>
      </tr>
      <tr>
        <td id="L3660" class="blob-num js-line-number" data-line-number="3660"></td>
        <td id="LC3660" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L3661" class="blob-num js-line-number" data-line-number="3661"></td>
        <td id="LC3661" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">kfree</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L3662" class="blob-num js-line-number" data-line-number="3662"></td>
        <td id="LC3662" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3663" class="blob-num js-line-number" data-line-number="3663"></td>
        <td id="LC3663" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3664" class="blob-num js-line-number" data-line-number="3664"></td>
        <td id="LC3664" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> *<span class="pl-en">cfq_init_queue</span>(<span class="pl-k">struct</span> request_queue *q)</td>
      </tr>
      <tr>
        <td id="L3665" class="blob-num js-line-number" data-line-number="3665"></td>
        <td id="LC3665" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3666" class="blob-num js-line-number" data-line-number="3666"></td>
        <td id="LC3666" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd;</td>
      </tr>
      <tr>
        <td id="L3667" class="blob-num js-line-number" data-line-number="3667"></td>
        <td id="LC3667" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> i, j;</td>
      </tr>
      <tr>
        <td id="L3668" class="blob-num js-line-number" data-line-number="3668"></td>
        <td id="LC3668" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_group *cfqg;</td>
      </tr>
      <tr>
        <td id="L3669" class="blob-num js-line-number" data-line-number="3669"></td>
        <td id="LC3669" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_rb_root *st;</td>
      </tr>
      <tr>
        <td id="L3670" class="blob-num js-line-number" data-line-number="3670"></td>
        <td id="LC3670" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3671" class="blob-num js-line-number" data-line-number="3671"></td>
        <td id="LC3671" class="blob-code blob-code-inner js-file-line">	cfqd = <span class="pl-c1">kmalloc_node</span>(<span class="pl-k">sizeof</span>(*cfqd), GFP_KERNEL | __GFP_ZERO, q-&gt;node);</td>
      </tr>
      <tr>
        <td id="L3672" class="blob-num js-line-number" data-line-number="3672"></td>
        <td id="LC3672" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfqd)</td>
      </tr>
      <tr>
        <td id="L3673" class="blob-num js-line-number" data-line-number="3673"></td>
        <td id="LC3673" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L3674" class="blob-num js-line-number" data-line-number="3674"></td>
        <td id="LC3674" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3675" class="blob-num js-line-number" data-line-number="3675"></td>
        <td id="LC3675" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Init root service tree */</span></td>
      </tr>
      <tr>
        <td id="L3676" class="blob-num js-line-number" data-line-number="3676"></td>
        <td id="LC3676" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;grp_service_tree = CFQ_RB_ROOT;</td>
      </tr>
      <tr>
        <td id="L3677" class="blob-num js-line-number" data-line-number="3677"></td>
        <td id="LC3677" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3678" class="blob-num js-line-number" data-line-number="3678"></td>
        <td id="LC3678" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Init root group */</span></td>
      </tr>
      <tr>
        <td id="L3679" class="blob-num js-line-number" data-line-number="3679"></td>
        <td id="LC3679" class="blob-code blob-code-inner js-file-line">	cfqg = &amp;cfqd-&gt;root_group;</td>
      </tr>
      <tr>
        <td id="L3680" class="blob-num js-line-number" data-line-number="3680"></td>
        <td id="LC3680" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">for_each_cfqg_st</span>(cfqg, i, j, st)</td>
      </tr>
      <tr>
        <td id="L3681" class="blob-num js-line-number" data-line-number="3681"></td>
        <td id="LC3681" class="blob-code blob-code-inner js-file-line">		*st = CFQ_RB_ROOT;</td>
      </tr>
      <tr>
        <td id="L3682" class="blob-num js-line-number" data-line-number="3682"></td>
        <td id="LC3682" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">RB_CLEAR_NODE</span>(&amp;cfqg-&gt;rb_node);</td>
      </tr>
      <tr>
        <td id="L3683" class="blob-num js-line-number" data-line-number="3683"></td>
        <td id="LC3683" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3684" class="blob-num js-line-number" data-line-number="3684"></td>
        <td id="LC3684" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Give preference to root group over other groups */</span></td>
      </tr>
      <tr>
        <td id="L3685" class="blob-num js-line-number" data-line-number="3685"></td>
        <td id="LC3685" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;weight = <span class="pl-c1">2</span>*BLKIO_WEIGHT_DEFAULT;</td>
      </tr>
      <tr>
        <td id="L3686" class="blob-num js-line-number" data-line-number="3686"></td>
        <td id="LC3686" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3687" class="blob-num js-line-number" data-line-number="3687"></td>
        <td id="LC3687" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L3688" class="blob-num js-line-number" data-line-number="3688"></td>
        <td id="LC3688" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3689" class="blob-num js-line-number" data-line-number="3689"></td>
        <td id="LC3689" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Set root group reference to 2. One reference will be dropped when</span></td>
      </tr>
      <tr>
        <td id="L3690" class="blob-num js-line-number" data-line-number="3690"></td>
        <td id="LC3690" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * all groups on cfqd-&gt;cfqg_list are being deleted during queue exit.</span></td>
      </tr>
      <tr>
        <td id="L3691" class="blob-num js-line-number" data-line-number="3691"></td>
        <td id="LC3691" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Other reference will remain there as we don&#39;t want to delete this</span></td>
      </tr>
      <tr>
        <td id="L3692" class="blob-num js-line-number" data-line-number="3692"></td>
        <td id="LC3692" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * group as it is statically allocated and gets destroyed when</span></td>
      </tr>
      <tr>
        <td id="L3693" class="blob-num js-line-number" data-line-number="3693"></td>
        <td id="LC3693" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * throtl_data goes away.</span></td>
      </tr>
      <tr>
        <td id="L3694" class="blob-num js-line-number" data-line-number="3694"></td>
        <td id="LC3694" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3695" class="blob-num js-line-number" data-line-number="3695"></td>
        <td id="LC3695" class="blob-code blob-code-inner js-file-line">	cfqg-&gt;ref = <span class="pl-c1">2</span>;</td>
      </tr>
      <tr>
        <td id="L3696" class="blob-num js-line-number" data-line-number="3696"></td>
        <td id="LC3696" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3697" class="blob-num js-line-number" data-line-number="3697"></td>
        <td id="LC3697" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (<span class="pl-c1">blkio_alloc_blkg_stats</span>(&amp;cfqg-&gt;blkg)) {</td>
      </tr>
      <tr>
        <td id="L3698" class="blob-num js-line-number" data-line-number="3698"></td>
        <td id="LC3698" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">kfree</span>(cfqg);</td>
      </tr>
      <tr>
        <td id="L3699" class="blob-num js-line-number" data-line-number="3699"></td>
        <td id="LC3699" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">kfree</span>(cfqd);</td>
      </tr>
      <tr>
        <td id="L3700" class="blob-num js-line-number" data-line-number="3700"></td>
        <td id="LC3700" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> <span class="pl-c1">NULL</span>;</td>
      </tr>
      <tr>
        <td id="L3701" class="blob-num js-line-number" data-line-number="3701"></td>
        <td id="LC3701" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3702" class="blob-num js-line-number" data-line-number="3702"></td>
        <td id="LC3702" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3703" class="blob-num js-line-number" data-line-number="3703"></td>
        <td id="LC3703" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rcu_read_lock</span>();</td>
      </tr>
      <tr>
        <td id="L3704" class="blob-num js-line-number" data-line-number="3704"></td>
        <td id="LC3704" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3705" class="blob-num js-line-number" data-line-number="3705"></td>
        <td id="LC3705" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_blkiocg_add_blkio_group</span>(&amp;blkio_root_cgroup, &amp;cfqg-&gt;blkg,</td>
      </tr>
      <tr>
        <td id="L3706" class="blob-num js-line-number" data-line-number="3706"></td>
        <td id="LC3706" class="blob-code blob-code-inner js-file-line">					(<span class="pl-k">void</span> *)cfqd, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3707" class="blob-num js-line-number" data-line-number="3707"></td>
        <td id="LC3707" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">rcu_read_unlock</span>();</td>
      </tr>
      <tr>
        <td id="L3708" class="blob-num js-line-number" data-line-number="3708"></td>
        <td id="LC3708" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;nr_blkcg_linked_grps++;</td>
      </tr>
      <tr>
        <td id="L3709" class="blob-num js-line-number" data-line-number="3709"></td>
        <td id="LC3709" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3710" class="blob-num js-line-number" data-line-number="3710"></td>
        <td id="LC3710" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/* Add group on cfqd-&gt;cfqg_list */</span></td>
      </tr>
      <tr>
        <td id="L3711" class="blob-num js-line-number" data-line-number="3711"></td>
        <td id="LC3711" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">hlist_add_head</span>(&amp;cfqg-&gt;cfqd_node, &amp;cfqd-&gt;cfqg_list);</td>
      </tr>
      <tr>
        <td id="L3712" class="blob-num js-line-number" data-line-number="3712"></td>
        <td id="LC3712" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L3713" class="blob-num js-line-number" data-line-number="3713"></td>
        <td id="LC3713" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3714" class="blob-num js-line-number" data-line-number="3714"></td>
        <td id="LC3714" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Not strictly needed (since RB_ROOT just clears the node and we</span></td>
      </tr>
      <tr>
        <td id="L3715" class="blob-num js-line-number" data-line-number="3715"></td>
        <td id="LC3715" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * zeroed cfqd on alloc), but better be safe in case someone decides</span></td>
      </tr>
      <tr>
        <td id="L3716" class="blob-num js-line-number" data-line-number="3716"></td>
        <td id="LC3716" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * to add magic to the rb code</span></td>
      </tr>
      <tr>
        <td id="L3717" class="blob-num js-line-number" data-line-number="3717"></td>
        <td id="LC3717" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3718" class="blob-num js-line-number" data-line-number="3718"></td>
        <td id="LC3718" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">for</span> (i = <span class="pl-c1">0</span>; i &lt; CFQ_PRIO_LISTS; i++)</td>
      </tr>
      <tr>
        <td id="L3719" class="blob-num js-line-number" data-line-number="3719"></td>
        <td id="LC3719" class="blob-code blob-code-inner js-file-line">		cfqd-&gt;prio_trees[i] = RB_ROOT;</td>
      </tr>
      <tr>
        <td id="L3720" class="blob-num js-line-number" data-line-number="3720"></td>
        <td id="LC3720" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3721" class="blob-num js-line-number" data-line-number="3721"></td>
        <td id="LC3721" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3722" class="blob-num js-line-number" data-line-number="3722"></td>
        <td id="LC3722" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Our fallback cfqq if cfq_find_alloc_queue() runs into OOM issues.</span></td>
      </tr>
      <tr>
        <td id="L3723" class="blob-num js-line-number" data-line-number="3723"></td>
        <td id="LC3723" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * Grab a permanent reference to it, so that the normal code flow</span></td>
      </tr>
      <tr>
        <td id="L3724" class="blob-num js-line-number" data-line-number="3724"></td>
        <td id="LC3724" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * will not attempt to free it.</span></td>
      </tr>
      <tr>
        <td id="L3725" class="blob-num js-line-number" data-line-number="3725"></td>
        <td id="LC3725" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3726" class="blob-num js-line-number" data-line-number="3726"></td>
        <td id="LC3726" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_init_cfqq</span>(cfqd, &amp;cfqd-&gt;oom_cfqq, <span class="pl-c1">1</span>, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3727" class="blob-num js-line-number" data-line-number="3727"></td>
        <td id="LC3727" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;oom_cfqq.<span class="pl-smi">ref</span>++;</td>
      </tr>
      <tr>
        <td id="L3728" class="blob-num js-line-number" data-line-number="3728"></td>
        <td id="LC3728" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">cfq_link_cfqq_cfqg</span>(&amp;cfqd-&gt;oom_cfqq, &amp;cfqd-&gt;root_group);</td>
      </tr>
      <tr>
        <td id="L3729" class="blob-num js-line-number" data-line-number="3729"></td>
        <td id="LC3729" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3730" class="blob-num js-line-number" data-line-number="3730"></td>
        <td id="LC3730" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;queue = q;</td>
      </tr>
      <tr>
        <td id="L3731" class="blob-num js-line-number" data-line-number="3731"></td>
        <td id="LC3731" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3732" class="blob-num js-line-number" data-line-number="3732"></td>
        <td id="LC3732" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">init_timer</span>(&amp;cfqd-&gt;idle_slice_timer);</td>
      </tr>
      <tr>
        <td id="L3733" class="blob-num js-line-number" data-line-number="3733"></td>
        <td id="LC3733" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;idle_slice_timer.<span class="pl-smi">function</span> = cfq_idle_slice_timer;</td>
      </tr>
      <tr>
        <td id="L3734" class="blob-num js-line-number" data-line-number="3734"></td>
        <td id="LC3734" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;idle_slice_timer.<span class="pl-smi">data</span> = (<span class="pl-k">unsigned</span> <span class="pl-k">long</span>) cfqd;</td>
      </tr>
      <tr>
        <td id="L3735" class="blob-num js-line-number" data-line-number="3735"></td>
        <td id="LC3735" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3736" class="blob-num js-line-number" data-line-number="3736"></td>
        <td id="LC3736" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">INIT_WORK</span>(&amp;cfqd-&gt;unplug_work, cfq_kick_queue);</td>
      </tr>
      <tr>
        <td id="L3737" class="blob-num js-line-number" data-line-number="3737"></td>
        <td id="LC3737" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3738" class="blob-num js-line-number" data-line-number="3738"></td>
        <td id="LC3738" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_quantum = cfq_quantum;</td>
      </tr>
      <tr>
        <td id="L3739" class="blob-num js-line-number" data-line-number="3739"></td>
        <td id="LC3739" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_fifo_expire[<span class="pl-c1">0</span>] = cfq_fifo_expire[<span class="pl-c1">0</span>];</td>
      </tr>
      <tr>
        <td id="L3740" class="blob-num js-line-number" data-line-number="3740"></td>
        <td id="LC3740" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_fifo_expire[<span class="pl-c1">1</span>] = cfq_fifo_expire[<span class="pl-c1">1</span>];</td>
      </tr>
      <tr>
        <td id="L3741" class="blob-num js-line-number" data-line-number="3741"></td>
        <td id="LC3741" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_back_max = cfq_back_max;</td>
      </tr>
      <tr>
        <td id="L3742" class="blob-num js-line-number" data-line-number="3742"></td>
        <td id="LC3742" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_back_penalty = cfq_back_penalty;</td>
      </tr>
      <tr>
        <td id="L3743" class="blob-num js-line-number" data-line-number="3743"></td>
        <td id="LC3743" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_slice[<span class="pl-c1">0</span>] = cfq_slice_async;</td>
      </tr>
      <tr>
        <td id="L3744" class="blob-num js-line-number" data-line-number="3744"></td>
        <td id="LC3744" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_slice[<span class="pl-c1">1</span>] = cfq_slice_sync;</td>
      </tr>
      <tr>
        <td id="L3745" class="blob-num js-line-number" data-line-number="3745"></td>
        <td id="LC3745" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_target_latency = cfq_target_latency;</td>
      </tr>
      <tr>
        <td id="L3746" class="blob-num js-line-number" data-line-number="3746"></td>
        <td id="LC3746" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_slice_async_rq = cfq_slice_async_rq;</td>
      </tr>
      <tr>
        <td id="L3747" class="blob-num js-line-number" data-line-number="3747"></td>
        <td id="LC3747" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_slice_idle = cfq_slice_idle;</td>
      </tr>
      <tr>
        <td id="L3748" class="blob-num js-line-number" data-line-number="3748"></td>
        <td id="LC3748" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_group_idle = cfq_group_idle;</td>
      </tr>
      <tr>
        <td id="L3749" class="blob-num js-line-number" data-line-number="3749"></td>
        <td id="LC3749" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;cfq_latency = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L3750" class="blob-num js-line-number" data-line-number="3750"></td>
        <td id="LC3750" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;hw_tag = -<span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L3751" class="blob-num js-line-number" data-line-number="3751"></td>
        <td id="LC3751" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3752" class="blob-num js-line-number" data-line-number="3752"></td>
        <td id="LC3752" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * we optimistically start assuming sync ops weren&#39;t delayed in last</span></td>
      </tr>
      <tr>
        <td id="L3753" class="blob-num js-line-number" data-line-number="3753"></td>
        <td id="LC3753" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * second, in order to have larger depth for async operations.</span></td>
      </tr>
      <tr>
        <td id="L3754" class="blob-num js-line-number" data-line-number="3754"></td>
        <td id="LC3754" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3755" class="blob-num js-line-number" data-line-number="3755"></td>
        <td id="LC3755" class="blob-code blob-code-inner js-file-line">	cfqd-&gt;last_delayed_sync = jiffies - HZ;</td>
      </tr>
      <tr>
        <td id="L3756" class="blob-num js-line-number" data-line-number="3756"></td>
        <td id="LC3756" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> cfqd;</td>
      </tr>
      <tr>
        <td id="L3757" class="blob-num js-line-number" data-line-number="3757"></td>
        <td id="LC3757" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3758" class="blob-num js-line-number" data-line-number="3758"></td>
        <td id="LC3758" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3759" class="blob-num js-line-number" data-line-number="3759"></td>
        <td id="LC3759" class="blob-code blob-code-inner js-file-line"><span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3760" class="blob-num js-line-number" data-line-number="3760"></td>
        <td id="LC3760" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> * sysfs parts below --&gt;</span></td>
      </tr>
      <tr>
        <td id="L3761" class="blob-num js-line-number" data-line-number="3761"></td>
        <td id="LC3761" class="blob-code blob-code-inner js-file-line"><span class="pl-c"> */</span></td>
      </tr>
      <tr>
        <td id="L3762" class="blob-num js-line-number" data-line-number="3762"></td>
        <td id="LC3762" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-c1">ssize_t</span></td>
      </tr>
      <tr>
        <td id="L3763" class="blob-num js-line-number" data-line-number="3763"></td>
        <td id="LC3763" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_var_show</span>(<span class="pl-k">unsigned</span> <span class="pl-k">int</span> var, <span class="pl-k">char</span> *page)</td>
      </tr>
      <tr>
        <td id="L3764" class="blob-num js-line-number" data-line-number="3764"></td>
        <td id="LC3764" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3765" class="blob-num js-line-number" data-line-number="3765"></td>
        <td id="LC3765" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">sprintf</span>(page, <span class="pl-s"><span class="pl-pds">&quot;</span><span class="pl-c1">%d</span><span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>, var);</td>
      </tr>
      <tr>
        <td id="L3766" class="blob-num js-line-number" data-line-number="3766"></td>
        <td id="LC3766" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3767" class="blob-num js-line-number" data-line-number="3767"></td>
        <td id="LC3767" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3768" class="blob-num js-line-number" data-line-number="3768"></td>
        <td id="LC3768" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-c1">ssize_t</span></td>
      </tr>
      <tr>
        <td id="L3769" class="blob-num js-line-number" data-line-number="3769"></td>
        <td id="LC3769" class="blob-code blob-code-inner js-file-line"><span class="pl-en">cfq_var_store</span>(<span class="pl-k">unsigned</span> <span class="pl-k">int</span> *var, <span class="pl-k">const</span> <span class="pl-k">char</span> *page, <span class="pl-c1">size_t</span> count)</td>
      </tr>
      <tr>
        <td id="L3770" class="blob-num js-line-number" data-line-number="3770"></td>
        <td id="LC3770" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3771" class="blob-num js-line-number" data-line-number="3771"></td>
        <td id="LC3771" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">char</span> *p = (<span class="pl-k">char</span> *) page;</td>
      </tr>
      <tr>
        <td id="L3772" class="blob-num js-line-number" data-line-number="3772"></td>
        <td id="LC3772" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3773" class="blob-num js-line-number" data-line-number="3773"></td>
        <td id="LC3773" class="blob-code blob-code-inner js-file-line">	*var = <span class="pl-c1">simple_strtoul</span>(p, &amp;p, <span class="pl-c1">10</span>);</td>
      </tr>
      <tr>
        <td id="L3774" class="blob-num js-line-number" data-line-number="3774"></td>
        <td id="LC3774" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> count;</td>
      </tr>
      <tr>
        <td id="L3775" class="blob-num js-line-number" data-line-number="3775"></td>
        <td id="LC3775" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3776" class="blob-num js-line-number" data-line-number="3776"></td>
        <td id="LC3776" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3777" class="blob-num js-line-number" data-line-number="3777"></td>
        <td id="LC3777" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">SHOW_FUNCTION</span>(<span class="pl-v">__FUNC, __VAR, __CONV</span>)				\</td>
      </tr>
      <tr>
        <td id="L3778" class="blob-num js-line-number" data-line-number="3778"></td>
        <td id="LC3778" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-c1">ssize_t</span> <span class="pl-en">__FUNC</span>(<span class="pl-k">struct</span> elevator_queue *e, <span class="pl-k">char</span> *page)		\</td>
      </tr>
      <tr>
        <td id="L3779" class="blob-num js-line-number" data-line-number="3779"></td>
        <td id="LC3779" class="blob-code blob-code-inner js-file-line">{									\</td>
      </tr>
      <tr>
        <td id="L3780" class="blob-num js-line-number" data-line-number="3780"></td>
        <td id="LC3780" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = e-&gt;elevator_data;			\</td>
      </tr>
      <tr>
        <td id="L3781" class="blob-num js-line-number" data-line-number="3781"></td>
        <td id="LC3781" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> __data = __VAR;					\</td>
      </tr>
      <tr>
        <td id="L3782" class="blob-num js-line-number" data-line-number="3782"></td>
        <td id="LC3782" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (__CONV)							\</td>
      </tr>
      <tr>
        <td id="L3783" class="blob-num js-line-number" data-line-number="3783"></td>
        <td id="LC3783" class="blob-code blob-code-inner js-file-line">		__data = <span class="pl-c1">jiffies_to_msecs</span>(__data);			\</td>
      </tr>
      <tr>
        <td id="L3784" class="blob-num js-line-number" data-line-number="3784"></td>
        <td id="LC3784" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">cfq_var_show</span>(__data, (page));				\</td>
      </tr>
      <tr>
        <td id="L3785" class="blob-num js-line-number" data-line-number="3785"></td>
        <td id="LC3785" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3786" class="blob-num js-line-number" data-line-number="3786"></td>
        <td id="LC3786" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_quantum_show, cfqd-&gt;cfq_quantum, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3787" class="blob-num js-line-number" data-line-number="3787"></td>
        <td id="LC3787" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_fifo_expire_sync_show, cfqd-&gt;cfq_fifo_expire[<span class="pl-c1">1</span>], <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3788" class="blob-num js-line-number" data-line-number="3788"></td>
        <td id="LC3788" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_fifo_expire_async_show, cfqd-&gt;cfq_fifo_expire[<span class="pl-c1">0</span>], <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3789" class="blob-num js-line-number" data-line-number="3789"></td>
        <td id="LC3789" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_back_seek_max_show, cfqd-&gt;cfq_back_max, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3790" class="blob-num js-line-number" data-line-number="3790"></td>
        <td id="LC3790" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_back_seek_penalty_show, cfqd-&gt;cfq_back_penalty, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3791" class="blob-num js-line-number" data-line-number="3791"></td>
        <td id="LC3791" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_slice_idle_show, cfqd-&gt;cfq_slice_idle, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3792" class="blob-num js-line-number" data-line-number="3792"></td>
        <td id="LC3792" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_group_idle_show, cfqd-&gt;cfq_group_idle, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3793" class="blob-num js-line-number" data-line-number="3793"></td>
        <td id="LC3793" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_slice_sync_show, cfqd-&gt;cfq_slice[<span class="pl-c1">1</span>], <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3794" class="blob-num js-line-number" data-line-number="3794"></td>
        <td id="LC3794" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_slice_async_show, cfqd-&gt;cfq_slice[<span class="pl-c1">0</span>], <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3795" class="blob-num js-line-number" data-line-number="3795"></td>
        <td id="LC3795" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_slice_async_rq_show, cfqd-&gt;cfq_slice_async_rq, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3796" class="blob-num js-line-number" data-line-number="3796"></td>
        <td id="LC3796" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_low_latency_show, cfqd-&gt;cfq_latency, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3797" class="blob-num js-line-number" data-line-number="3797"></td>
        <td id="LC3797" class="blob-code blob-code-inner js-file-line"><span class="pl-en">SHOW_FUNCTION</span>(cfq_target_latency_show, cfqd-&gt;cfq_target_latency, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3798" class="blob-num js-line-number" data-line-number="3798"></td>
        <td id="LC3798" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">undef</span> SHOW_FUNCTION</td>
      </tr>
      <tr>
        <td id="L3799" class="blob-num js-line-number" data-line-number="3799"></td>
        <td id="LC3799" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3800" class="blob-num js-line-number" data-line-number="3800"></td>
        <td id="LC3800" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">STORE_FUNCTION</span>(<span class="pl-v">__FUNC, __PTR, MIN, MAX, __CONV</span>)			\</td>
      </tr>
      <tr>
        <td id="L3801" class="blob-num js-line-number" data-line-number="3801"></td>
        <td id="LC3801" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-c1">ssize_t</span> <span class="pl-en">__FUNC</span>(<span class="pl-k">struct</span> elevator_queue *e, <span class="pl-k">const</span> <span class="pl-k">char</span> *page, <span class="pl-c1">size_t</span> count)	\</td>
      </tr>
      <tr>
        <td id="L3802" class="blob-num js-line-number" data-line-number="3802"></td>
        <td id="LC3802" class="blob-code blob-code-inner js-file-line">{									\</td>
      </tr>
      <tr>
        <td id="L3803" class="blob-num js-line-number" data-line-number="3803"></td>
        <td id="LC3803" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">struct</span> cfq_data *cfqd = e-&gt;elevator_data;			\</td>
      </tr>
      <tr>
        <td id="L3804" class="blob-num js-line-number" data-line-number="3804"></td>
        <td id="LC3804" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">unsigned</span> <span class="pl-k">int</span> __data;						\</td>
      </tr>
      <tr>
        <td id="L3805" class="blob-num js-line-number" data-line-number="3805"></td>
        <td id="LC3805" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> ret = <span class="pl-c1">cfq_var_store</span>(&amp;__data, (page), count);		\</td>
      </tr>
      <tr>
        <td id="L3806" class="blob-num js-line-number" data-line-number="3806"></td>
        <td id="LC3806" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (__data &lt; (MIN))						\</td>
      </tr>
      <tr>
        <td id="L3807" class="blob-num js-line-number" data-line-number="3807"></td>
        <td id="LC3807" class="blob-code blob-code-inner js-file-line">		__data = (MIN);						\</td>
      </tr>
      <tr>
        <td id="L3808" class="blob-num js-line-number" data-line-number="3808"></td>
        <td id="LC3808" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span> <span class="pl-k">if</span> (__data &gt; (MAX))					\</td>
      </tr>
      <tr>
        <td id="L3809" class="blob-num js-line-number" data-line-number="3809"></td>
        <td id="LC3809" class="blob-code blob-code-inner js-file-line">		__data = (MAX);						\</td>
      </tr>
      <tr>
        <td id="L3810" class="blob-num js-line-number" data-line-number="3810"></td>
        <td id="LC3810" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (__CONV)							\</td>
      </tr>
      <tr>
        <td id="L3811" class="blob-num js-line-number" data-line-number="3811"></td>
        <td id="LC3811" class="blob-code blob-code-inner js-file-line">		*(__PTR) = <span class="pl-c1">msecs_to_jiffies</span>(__data);			\</td>
      </tr>
      <tr>
        <td id="L3812" class="blob-num js-line-number" data-line-number="3812"></td>
        <td id="LC3812" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">else</span>								\</td>
      </tr>
      <tr>
        <td id="L3813" class="blob-num js-line-number" data-line-number="3813"></td>
        <td id="LC3813" class="blob-code blob-code-inner js-file-line">		*(__PTR) = __data;					\</td>
      </tr>
      <tr>
        <td id="L3814" class="blob-num js-line-number" data-line-number="3814"></td>
        <td id="LC3814" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> ret;							\</td>
      </tr>
      <tr>
        <td id="L3815" class="blob-num js-line-number" data-line-number="3815"></td>
        <td id="LC3815" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3816" class="blob-num js-line-number" data-line-number="3816"></td>
        <td id="LC3816" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_quantum_store, &amp;cfqd-&gt;cfq_quantum, <span class="pl-c1">1</span>, UINT_MAX, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3817" class="blob-num js-line-number" data-line-number="3817"></td>
        <td id="LC3817" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_fifo_expire_sync_store, &amp;cfqd-&gt;cfq_fifo_expire[<span class="pl-c1">1</span>], <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L3818" class="blob-num js-line-number" data-line-number="3818"></td>
        <td id="LC3818" class="blob-code blob-code-inner js-file-line">		UINT_MAX, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3819" class="blob-num js-line-number" data-line-number="3819"></td>
        <td id="LC3819" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_fifo_expire_async_store, &amp;cfqd-&gt;cfq_fifo_expire[<span class="pl-c1">0</span>], <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L3820" class="blob-num js-line-number" data-line-number="3820"></td>
        <td id="LC3820" class="blob-code blob-code-inner js-file-line">		UINT_MAX, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3821" class="blob-num js-line-number" data-line-number="3821"></td>
        <td id="LC3821" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_back_seek_max_store, &amp;cfqd-&gt;cfq_back_max, <span class="pl-c1">0</span>, UINT_MAX, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3822" class="blob-num js-line-number" data-line-number="3822"></td>
        <td id="LC3822" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_back_seek_penalty_store, &amp;cfqd-&gt;cfq_back_penalty, <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L3823" class="blob-num js-line-number" data-line-number="3823"></td>
        <td id="LC3823" class="blob-code blob-code-inner js-file-line">		UINT_MAX, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3824" class="blob-num js-line-number" data-line-number="3824"></td>
        <td id="LC3824" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_slice_idle_store, &amp;cfqd-&gt;cfq_slice_idle, <span class="pl-c1">0</span>, UINT_MAX, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3825" class="blob-num js-line-number" data-line-number="3825"></td>
        <td id="LC3825" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_group_idle_store, &amp;cfqd-&gt;cfq_group_idle, <span class="pl-c1">0</span>, UINT_MAX, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3826" class="blob-num js-line-number" data-line-number="3826"></td>
        <td id="LC3826" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_slice_sync_store, &amp;cfqd-&gt;cfq_slice[<span class="pl-c1">1</span>], <span class="pl-c1">1</span>, UINT_MAX, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3827" class="blob-num js-line-number" data-line-number="3827"></td>
        <td id="LC3827" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_slice_async_store, &amp;cfqd-&gt;cfq_slice[<span class="pl-c1">0</span>], <span class="pl-c1">1</span>, UINT_MAX, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3828" class="blob-num js-line-number" data-line-number="3828"></td>
        <td id="LC3828" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_slice_async_rq_store, &amp;cfqd-&gt;cfq_slice_async_rq, <span class="pl-c1">1</span>,</td>
      </tr>
      <tr>
        <td id="L3829" class="blob-num js-line-number" data-line-number="3829"></td>
        <td id="LC3829" class="blob-code blob-code-inner js-file-line">		UINT_MAX, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3830" class="blob-num js-line-number" data-line-number="3830"></td>
        <td id="LC3830" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_low_latency_store, &amp;cfqd-&gt;cfq_latency, <span class="pl-c1">0</span>, <span class="pl-c1">1</span>, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3831" class="blob-num js-line-number" data-line-number="3831"></td>
        <td id="LC3831" class="blob-code blob-code-inner js-file-line"><span class="pl-en">STORE_FUNCTION</span>(cfq_target_latency_store, &amp;cfqd-&gt;cfq_target_latency, <span class="pl-c1">1</span>, UINT_MAX, <span class="pl-c1">1</span>);</td>
      </tr>
      <tr>
        <td id="L3832" class="blob-num js-line-number" data-line-number="3832"></td>
        <td id="LC3832" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">undef</span> STORE_FUNCTION</td>
      </tr>
      <tr>
        <td id="L3833" class="blob-num js-line-number" data-line-number="3833"></td>
        <td id="LC3833" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3834" class="blob-num js-line-number" data-line-number="3834"></td>
        <td id="LC3834" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">define</span> <span class="pl-en">CFQ_ATTR</span>(<span class="pl-v">name</span>) \</td>
      </tr>
      <tr>
        <td id="L3835" class="blob-num js-line-number" data-line-number="3835"></td>
        <td id="LC3835" class="blob-code blob-code-inner js-file-line">	<span class="pl-en">__ATTR</span>(name, S_IRUGO|S_IWUSR, cfq_##name##_show, cfq_##name##_store)</td>
      </tr>
      <tr>
        <td id="L3836" class="blob-num js-line-number" data-line-number="3836"></td>
        <td id="LC3836" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3837" class="blob-num js-line-number" data-line-number="3837"></td>
        <td id="LC3837" class="blob-code blob-code-inner js-file-line">static struct elv_fs_entry cfq_attrs[] = {</td>
      </tr>
      <tr>
        <td id="L3838" class="blob-num js-line-number" data-line-number="3838"></td>
        <td id="LC3838" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(quantum),</td>
      </tr>
      <tr>
        <td id="L3839" class="blob-num js-line-number" data-line-number="3839"></td>
        <td id="LC3839" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(fifo_expire_sync),</td>
      </tr>
      <tr>
        <td id="L3840" class="blob-num js-line-number" data-line-number="3840"></td>
        <td id="LC3840" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(fifo_expire_async),</td>
      </tr>
      <tr>
        <td id="L3841" class="blob-num js-line-number" data-line-number="3841"></td>
        <td id="LC3841" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(back_seek_max),</td>
      </tr>
      <tr>
        <td id="L3842" class="blob-num js-line-number" data-line-number="3842"></td>
        <td id="LC3842" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(back_seek_penalty),</td>
      </tr>
      <tr>
        <td id="L3843" class="blob-num js-line-number" data-line-number="3843"></td>
        <td id="LC3843" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(slice_sync),</td>
      </tr>
      <tr>
        <td id="L3844" class="blob-num js-line-number" data-line-number="3844"></td>
        <td id="LC3844" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(slice_async),</td>
      </tr>
      <tr>
        <td id="L3845" class="blob-num js-line-number" data-line-number="3845"></td>
        <td id="LC3845" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(slice_async_rq),</td>
      </tr>
      <tr>
        <td id="L3846" class="blob-num js-line-number" data-line-number="3846"></td>
        <td id="LC3846" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(slice_idle),</td>
      </tr>
      <tr>
        <td id="L3847" class="blob-num js-line-number" data-line-number="3847"></td>
        <td id="LC3847" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(group_idle),</td>
      </tr>
      <tr>
        <td id="L3848" class="blob-num js-line-number" data-line-number="3848"></td>
        <td id="LC3848" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(low_latency),</td>
      </tr>
      <tr>
        <td id="L3849" class="blob-num js-line-number" data-line-number="3849"></td>
        <td id="LC3849" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">CFQ_ATTR</span>(target_latency),</td>
      </tr>
      <tr>
        <td id="L3850" class="blob-num js-line-number" data-line-number="3850"></td>
        <td id="LC3850" class="blob-code blob-code-inner js-file-line">	__ATTR_NULL</td>
      </tr>
      <tr>
        <td id="L3851" class="blob-num js-line-number" data-line-number="3851"></td>
        <td id="LC3851" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3852" class="blob-num js-line-number" data-line-number="3852"></td>
        <td id="LC3852" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3853" class="blob-num js-line-number" data-line-number="3853"></td>
        <td id="LC3853" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> elevator_type iosched_cfq = {</td>
      </tr>
      <tr>
        <td id="L3854" class="blob-num js-line-number" data-line-number="3854"></td>
        <td id="LC3854" class="blob-code blob-code-inner js-file-line">	.<span class="pl-smi">ops</span> = {</td>
      </tr>
      <tr>
        <td id="L3855" class="blob-num js-line-number" data-line-number="3855"></td>
        <td id="LC3855" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_merge_fn</span> = 		cfq_merge,</td>
      </tr>
      <tr>
        <td id="L3856" class="blob-num js-line-number" data-line-number="3856"></td>
        <td id="LC3856" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_merged_fn</span> =		cfq_merged_request,</td>
      </tr>
      <tr>
        <td id="L3857" class="blob-num js-line-number" data-line-number="3857"></td>
        <td id="LC3857" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_merge_req_fn</span> =	cfq_merged_requests,</td>
      </tr>
      <tr>
        <td id="L3858" class="blob-num js-line-number" data-line-number="3858"></td>
        <td id="LC3858" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_allow_merge_fn</span> =	cfq_allow_merge,</td>
      </tr>
      <tr>
        <td id="L3859" class="blob-num js-line-number" data-line-number="3859"></td>
        <td id="LC3859" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_bio_merged_fn</span> =	cfq_bio_merged,</td>
      </tr>
      <tr>
        <td id="L3860" class="blob-num js-line-number" data-line-number="3860"></td>
        <td id="LC3860" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_dispatch_fn</span> =		cfq_dispatch_requests,</td>
      </tr>
      <tr>
        <td id="L3861" class="blob-num js-line-number" data-line-number="3861"></td>
        <td id="LC3861" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_add_req_fn</span> =		cfq_insert_request,</td>
      </tr>
      <tr>
        <td id="L3862" class="blob-num js-line-number" data-line-number="3862"></td>
        <td id="LC3862" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_activate_req_fn</span> =	cfq_activate_request,</td>
      </tr>
      <tr>
        <td id="L3863" class="blob-num js-line-number" data-line-number="3863"></td>
        <td id="LC3863" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_deactivate_req_fn</span> =	cfq_deactivate_request,</td>
      </tr>
      <tr>
        <td id="L3864" class="blob-num js-line-number" data-line-number="3864"></td>
        <td id="LC3864" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_completed_req_fn</span> =	cfq_completed_request,</td>
      </tr>
      <tr>
        <td id="L3865" class="blob-num js-line-number" data-line-number="3865"></td>
        <td id="LC3865" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_former_req_fn</span> =	elv_rb_former_request,</td>
      </tr>
      <tr>
        <td id="L3866" class="blob-num js-line-number" data-line-number="3866"></td>
        <td id="LC3866" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_latter_req_fn</span> =	elv_rb_latter_request,</td>
      </tr>
      <tr>
        <td id="L3867" class="blob-num js-line-number" data-line-number="3867"></td>
        <td id="LC3867" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_init_icq_fn</span> =		cfq_init_icq,</td>
      </tr>
      <tr>
        <td id="L3868" class="blob-num js-line-number" data-line-number="3868"></td>
        <td id="LC3868" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_exit_icq_fn</span> =		cfq_exit_icq,</td>
      </tr>
      <tr>
        <td id="L3869" class="blob-num js-line-number" data-line-number="3869"></td>
        <td id="LC3869" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_set_req_fn</span> =		cfq_set_request,</td>
      </tr>
      <tr>
        <td id="L3870" class="blob-num js-line-number" data-line-number="3870"></td>
        <td id="LC3870" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_put_req_fn</span> =		cfq_put_request,</td>
      </tr>
      <tr>
        <td id="L3871" class="blob-num js-line-number" data-line-number="3871"></td>
        <td id="LC3871" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_may_queue_fn</span> =	cfq_may_queue,</td>
      </tr>
      <tr>
        <td id="L3872" class="blob-num js-line-number" data-line-number="3872"></td>
        <td id="LC3872" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_init_fn</span> =		cfq_init_queue,</td>
      </tr>
      <tr>
        <td id="L3873" class="blob-num js-line-number" data-line-number="3873"></td>
        <td id="LC3873" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">elevator_exit_fn</span> =		cfq_exit_queue,</td>
      </tr>
      <tr>
        <td id="L3874" class="blob-num js-line-number" data-line-number="3874"></td>
        <td id="LC3874" class="blob-code blob-code-inner js-file-line">	},</td>
      </tr>
      <tr>
        <td id="L3875" class="blob-num js-line-number" data-line-number="3875"></td>
        <td id="LC3875" class="blob-code blob-code-inner js-file-line">	.<span class="pl-smi">icq_size</span>	=	<span class="pl-k">sizeof</span>(<span class="pl-k">struct</span> cfq_io_cq),</td>
      </tr>
      <tr>
        <td id="L3876" class="blob-num js-line-number" data-line-number="3876"></td>
        <td id="LC3876" class="blob-code blob-code-inner js-file-line">	.<span class="pl-smi">icq_align</span>	=	<span class="pl-c1">__alignof__</span>(<span class="pl-k">struct</span> cfq_io_cq),</td>
      </tr>
      <tr>
        <td id="L3877" class="blob-num js-line-number" data-line-number="3877"></td>
        <td id="LC3877" class="blob-code blob-code-inner js-file-line">	.<span class="pl-smi">elevator_attrs</span> =	cfq_attrs,</td>
      </tr>
      <tr>
        <td id="L3878" class="blob-num js-line-number" data-line-number="3878"></td>
        <td id="LC3878" class="blob-code blob-code-inner js-file-line">	.<span class="pl-smi">elevator_name</span>	=	<span class="pl-s"><span class="pl-pds">&quot;</span>cfq<span class="pl-pds">&quot;</span></span>,</td>
      </tr>
      <tr>
        <td id="L3879" class="blob-num js-line-number" data-line-number="3879"></td>
        <td id="LC3879" class="blob-code blob-code-inner js-file-line">	.<span class="pl-smi">elevator_owner</span> =	THIS_MODULE,</td>
      </tr>
      <tr>
        <td id="L3880" class="blob-num js-line-number" data-line-number="3880"></td>
        <td id="LC3880" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3881" class="blob-num js-line-number" data-line-number="3881"></td>
        <td id="LC3881" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3882" class="blob-num js-line-number" data-line-number="3882"></td>
        <td id="LC3882" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L3883" class="blob-num js-line-number" data-line-number="3883"></td>
        <td id="LC3883" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> blkio_policy_type blkio_policy_cfq = {</td>
      </tr>
      <tr>
        <td id="L3884" class="blob-num js-line-number" data-line-number="3884"></td>
        <td id="LC3884" class="blob-code blob-code-inner js-file-line">	.<span class="pl-smi">ops</span> = {</td>
      </tr>
      <tr>
        <td id="L3885" class="blob-num js-line-number" data-line-number="3885"></td>
        <td id="LC3885" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">blkio_unlink_group_fn</span> =	cfq_unlink_blkio_group,</td>
      </tr>
      <tr>
        <td id="L3886" class="blob-num js-line-number" data-line-number="3886"></td>
        <td id="LC3886" class="blob-code blob-code-inner js-file-line">		.<span class="pl-smi">blkio_update_group_weight_fn</span> =	cfq_update_blkio_group_weight,</td>
      </tr>
      <tr>
        <td id="L3887" class="blob-num js-line-number" data-line-number="3887"></td>
        <td id="LC3887" class="blob-code blob-code-inner js-file-line">	},</td>
      </tr>
      <tr>
        <td id="L3888" class="blob-num js-line-number" data-line-number="3888"></td>
        <td id="LC3888" class="blob-code blob-code-inner js-file-line">	.<span class="pl-smi">plid</span> = BLKIO_POLICY_PROP,</td>
      </tr>
      <tr>
        <td id="L3889" class="blob-num js-line-number" data-line-number="3889"></td>
        <td id="LC3889" class="blob-code blob-code-inner js-file-line">};</td>
      </tr>
      <tr>
        <td id="L3890" class="blob-num js-line-number" data-line-number="3890"></td>
        <td id="LC3890" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L3891" class="blob-num js-line-number" data-line-number="3891"></td>
        <td id="LC3891" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">struct</span> blkio_policy_type blkio_policy_cfq;</td>
      </tr>
      <tr>
        <td id="L3892" class="blob-num js-line-number" data-line-number="3892"></td>
        <td id="LC3892" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L3893" class="blob-num js-line-number" data-line-number="3893"></td>
        <td id="LC3893" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3894" class="blob-num js-line-number" data-line-number="3894"></td>
        <td id="LC3894" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">int</span> __init <span class="pl-en">cfq_init</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L3895" class="blob-num js-line-number" data-line-number="3895"></td>
        <td id="LC3895" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3896" class="blob-num js-line-number" data-line-number="3896"></td>
        <td id="LC3896" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">int</span> ret;</td>
      </tr>
      <tr>
        <td id="L3897" class="blob-num js-line-number" data-line-number="3897"></td>
        <td id="LC3897" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3898" class="blob-num js-line-number" data-line-number="3898"></td>
        <td id="LC3898" class="blob-code blob-code-inner js-file-line">	<span class="pl-c">/*</span></td>
      </tr>
      <tr>
        <td id="L3899" class="blob-num js-line-number" data-line-number="3899"></td>
        <td id="LC3899" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 * could be 0 on HZ &lt; 1000 setups</span></td>
      </tr>
      <tr>
        <td id="L3900" class="blob-num js-line-number" data-line-number="3900"></td>
        <td id="LC3900" class="blob-code blob-code-inner js-file-line"><span class="pl-c">	 */</span></td>
      </tr>
      <tr>
        <td id="L3901" class="blob-num js-line-number" data-line-number="3901"></td>
        <td id="LC3901" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfq_slice_async)</td>
      </tr>
      <tr>
        <td id="L3902" class="blob-num js-line-number" data-line-number="3902"></td>
        <td id="LC3902" class="blob-code blob-code-inner js-file-line">		cfq_slice_async = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L3903" class="blob-num js-line-number" data-line-number="3903"></td>
        <td id="LC3903" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfq_slice_idle)</td>
      </tr>
      <tr>
        <td id="L3904" class="blob-num js-line-number" data-line-number="3904"></td>
        <td id="LC3904" class="blob-code blob-code-inner js-file-line">		cfq_slice_idle = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L3905" class="blob-num js-line-number" data-line-number="3905"></td>
        <td id="LC3905" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3906" class="blob-num js-line-number" data-line-number="3906"></td>
        <td id="LC3906" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">ifdef</span> CONFIG_CFQ_GROUP_IOSCHED</td>
      </tr>
      <tr>
        <td id="L3907" class="blob-num js-line-number" data-line-number="3907"></td>
        <td id="LC3907" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfq_group_idle)</td>
      </tr>
      <tr>
        <td id="L3908" class="blob-num js-line-number" data-line-number="3908"></td>
        <td id="LC3908" class="blob-code blob-code-inner js-file-line">		cfq_group_idle = <span class="pl-c1">1</span>;</td>
      </tr>
      <tr>
        <td id="L3909" class="blob-num js-line-number" data-line-number="3909"></td>
        <td id="LC3909" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L3910" class="blob-num js-line-number" data-line-number="3910"></td>
        <td id="LC3910" class="blob-code blob-code-inner js-file-line">		cfq_group_idle = <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L3911" class="blob-num js-line-number" data-line-number="3911"></td>
        <td id="LC3911" class="blob-code blob-code-inner js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L3912" class="blob-num js-line-number" data-line-number="3912"></td>
        <td id="LC3912" class="blob-code blob-code-inner js-file-line">	cfq_pool = <span class="pl-c1">KMEM_CACHE</span>(cfq_queue, <span class="pl-c1">0</span>);</td>
      </tr>
      <tr>
        <td id="L3913" class="blob-num js-line-number" data-line-number="3913"></td>
        <td id="LC3913" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (!cfq_pool)</td>
      </tr>
      <tr>
        <td id="L3914" class="blob-num js-line-number" data-line-number="3914"></td>
        <td id="LC3914" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> -ENOMEM;</td>
      </tr>
      <tr>
        <td id="L3915" class="blob-num js-line-number" data-line-number="3915"></td>
        <td id="LC3915" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3916" class="blob-num js-line-number" data-line-number="3916"></td>
        <td id="LC3916" class="blob-code blob-code-inner js-file-line">	ret = <span class="pl-c1">elv_register</span>(&amp;iosched_cfq);</td>
      </tr>
      <tr>
        <td id="L3917" class="blob-num js-line-number" data-line-number="3917"></td>
        <td id="LC3917" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">if</span> (ret) {</td>
      </tr>
      <tr>
        <td id="L3918" class="blob-num js-line-number" data-line-number="3918"></td>
        <td id="LC3918" class="blob-code blob-code-inner js-file-line">		<span class="pl-c1">kmem_cache_destroy</span>(cfq_pool);</td>
      </tr>
      <tr>
        <td id="L3919" class="blob-num js-line-number" data-line-number="3919"></td>
        <td id="LC3919" class="blob-code blob-code-inner js-file-line">		<span class="pl-k">return</span> ret;</td>
      </tr>
      <tr>
        <td id="L3920" class="blob-num js-line-number" data-line-number="3920"></td>
        <td id="LC3920" class="blob-code blob-code-inner js-file-line">	}</td>
      </tr>
      <tr>
        <td id="L3921" class="blob-num js-line-number" data-line-number="3921"></td>
        <td id="LC3921" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3922" class="blob-num js-line-number" data-line-number="3922"></td>
        <td id="LC3922" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">blkio_policy_register</span>(&amp;blkio_policy_cfq);</td>
      </tr>
      <tr>
        <td id="L3923" class="blob-num js-line-number" data-line-number="3923"></td>
        <td id="LC3923" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3924" class="blob-num js-line-number" data-line-number="3924"></td>
        <td id="LC3924" class="blob-code blob-code-inner js-file-line">	<span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L3925" class="blob-num js-line-number" data-line-number="3925"></td>
        <td id="LC3925" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3926" class="blob-num js-line-number" data-line-number="3926"></td>
        <td id="LC3926" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3927" class="blob-num js-line-number" data-line-number="3927"></td>
        <td id="LC3927" class="blob-code blob-code-inner js-file-line"><span class="pl-k">static</span> <span class="pl-k">void</span> __exit <span class="pl-en">cfq_exit</span>(<span class="pl-k">void</span>)</td>
      </tr>
      <tr>
        <td id="L3928" class="blob-num js-line-number" data-line-number="3928"></td>
        <td id="LC3928" class="blob-code blob-code-inner js-file-line">{</td>
      </tr>
      <tr>
        <td id="L3929" class="blob-num js-line-number" data-line-number="3929"></td>
        <td id="LC3929" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">blkio_policy_unregister</span>(&amp;blkio_policy_cfq);</td>
      </tr>
      <tr>
        <td id="L3930" class="blob-num js-line-number" data-line-number="3930"></td>
        <td id="LC3930" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">elv_unregister</span>(&amp;iosched_cfq);</td>
      </tr>
      <tr>
        <td id="L3931" class="blob-num js-line-number" data-line-number="3931"></td>
        <td id="LC3931" class="blob-code blob-code-inner js-file-line">	<span class="pl-c1">kmem_cache_destroy</span>(cfq_pool);</td>
      </tr>
      <tr>
        <td id="L3932" class="blob-num js-line-number" data-line-number="3932"></td>
        <td id="LC3932" class="blob-code blob-code-inner js-file-line">}</td>
      </tr>
      <tr>
        <td id="L3933" class="blob-num js-line-number" data-line-number="3933"></td>
        <td id="LC3933" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3934" class="blob-num js-line-number" data-line-number="3934"></td>
        <td id="LC3934" class="blob-code blob-code-inner js-file-line"><span class="pl-en">module_init</span>(cfq_init);</td>
      </tr>
      <tr>
        <td id="L3935" class="blob-num js-line-number" data-line-number="3935"></td>
        <td id="LC3935" class="blob-code blob-code-inner js-file-line"><span class="pl-en">module_exit</span>(cfq_exit);</td>
      </tr>
      <tr>
        <td id="L3936" class="blob-num js-line-number" data-line-number="3936"></td>
        <td id="LC3936" class="blob-code blob-code-inner js-file-line">
</td>
      </tr>
      <tr>
        <td id="L3937" class="blob-num js-line-number" data-line-number="3937"></td>
        <td id="LC3937" class="blob-code blob-code-inner js-file-line"><span class="pl-en">MODULE_AUTHOR</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>Jens Axboe<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L3938" class="blob-num js-line-number" data-line-number="3938"></td>
        <td id="LC3938" class="blob-code blob-code-inner js-file-line"><span class="pl-en">MODULE_LICENSE</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>GPL<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L3939" class="blob-num js-line-number" data-line-number="3939"></td>
        <td id="LC3939" class="blob-code blob-code-inner js-file-line"><span class="pl-en">MODULE_DESCRIPTION</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>Completely Fair Queueing IO scheduler<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
</table>

  </div>

</div>

<button type="button" data-facebox="#jump-to-line" data-facebox-class="linejump" data-hotkey="l" class="hidden">Jump to Line</button>
<div id="jump-to-line" style="display:none">
  <!-- </textarea> --><!-- '"` --><form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="form-control linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" aria-label="Jump to line" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

  </div>
  <div class="modal-backdrop js-touch-events"></div>
</div>


    </div>
  </div>

    </div>

        <div class="container site-footer-container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage" class="site-footer-mark" title="GitHub">
      <svg aria-hidden="true" class="octicon octicon-mark-github" height="24" version="1.1" viewBox="0 0 16 16" width="24"><path d="M8 0C3.58 0 0 3.58 0 8c0 3.54 2.29 6.53 5.47 7.59.4.07.55-.17.55-.38 0-.19-.01-.82-.01-1.49-2.01.37-2.53-.49-2.69-.94-.09-.23-.48-.94-.82-1.13-.28-.15-.68-.52-.01-.53.63-.01 1.08.58 1.23.82.72 1.21 1.87.87 2.33.66.07-.52.28-.87.51-1.07-1.78-.2-3.64-.89-3.64-3.95 0-.87.31-1.59.82-2.15-.08-.2-.36-1.02.08-2.12 0 0 .67-.21 2.2.82.64-.18 1.32-.27 2-.27.68 0 1.36.09 2 .27 1.53-1.04 2.2-.82 2.2-.82.44 1.1.16 1.92.08 2.12.51.56.82 1.27.82 2.15 0 3.07-1.87 3.75-3.65 3.95.29.25.54.73.54 1.48 0 1.07-.01 1.93-.01 2.2 0 .21.15.46.55.38A8.013 8.013 0 0 0 16 8c0-4.42-3.58-8-8-8z"></path></svg>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2016 <span title="0.15531s from github-fe153-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact</a></li>
        <li><a href="https://help.github.com" data-ga-click="Footer, go to help, text:help">Help</a></li>
    </ul>
  </div>
</div>



    

    <div id="ajax-error-message" class="ajax-error-message flash flash-error">
      <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"></path></svg>
      <button type="button" class="flash-close js-flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
        <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"></path></svg>
      </button>
      Something went wrong with that request. Please try again.
    </div>


      
      <script crossorigin="anonymous" integrity="sha256-8t5MhjpIeodxUJifllIyus/eF4q/nBlj2fhMXBmRbww=" src="https://assets-cdn.github.com/assets/frameworks-f2de4c863a487a877150989f965232bacfde178abf9c1963d9f84c5c19916f0c.js"></script>
      <script async="async" crossorigin="anonymous" integrity="sha256-PaEfsdTWaz+yDGk55yhoSDK3OXVhXj/QUt+CdMnTSEo=" src="https://assets-cdn.github.com/assets/github-3da11fb1d4d66b3fb20c6939e728684832b73975615e3fd052df8274c9d3484a.js"></script>
      
      
      
      
      
      
    <div class="js-stale-session-flash stale-session-flash flash flash-warn flash-banner hidden">
      <svg aria-hidden="true" class="octicon octicon-alert" height="16" version="1.1" viewBox="0 0 16 16" width="16"><path d="M8.865 1.52c-.18-.31-.51-.5-.87-.5s-.69.19-.87.5L.275 13.5c-.18.31-.18.69 0 1 .19.31.52.5.87.5h13.7c.36 0 .69-.19.86-.5.17-.31.18-.69.01-1L8.865 1.52zM8.995 13h-2v-2h2v2zm0-3h-2V6h2v4z"></path></svg>
      <span class="signed-in-tab-flash">You signed in with another tab or window. <a href="">Reload</a> to refresh your session.</span>
      <span class="signed-out-tab-flash">You signed out in another tab or window. <a href="">Reload</a> to refresh your session.</span>
    </div>
    <div class="facebox" id="facebox" style="display:none;">
  <div class="facebox-popup">
    <div class="facebox-content" role="dialog" aria-labelledby="facebox-header" aria-describedby="facebox-description">
    </div>
    <button type="button" class="facebox-close js-facebox-close" aria-label="Close modal">
      <svg aria-hidden="true" class="octicon octicon-x" height="16" version="1.1" viewBox="0 0 12 16" width="12"><path d="M7.48 8l3.75 3.75-1.48 1.48L6 9.48l-3.75 3.75-1.48-1.48L4.52 8 .77 4.25l1.48-1.48L6 6.52l3.75-3.75 1.48 1.48z"></path></svg>
    </button>
  </div>
</div>

  </body>
</html>

