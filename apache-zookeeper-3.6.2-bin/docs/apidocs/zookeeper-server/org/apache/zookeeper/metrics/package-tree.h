<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<!-- Generated by javadoc (1.8.0_242) on Fri Sep 04 14:44:42 CEST 2020 -->
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>org.apache.zookeeper.metrics Class Hierarchy (Apache ZooKeeper - Server 3.6.2 API)</title>
<meta name="date" content="2020-09-04">
<link rel="stylesheet" type="text/css" href="../../../../stylesheet.css" title="Style">
<script type="text/javascript" src="../../../../script.js"></script>
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="org.apache.zookeeper.metrics Class Hierarchy (Apache ZooKeeper - Server 3.6.2 API)";
        }
    }
    catch(err) {
    }
//-->
</script>
<noscript>
<div>JavaScript is disabled on your browser.</div>
</noscript>
<!-- ========= START OF TOP NAVBAR ======= -->
<div class="topNav"><a name="navbar.top">
<!--   -->
</a>
<div class="skipNav"><a href="#skip.navbar.top" title="Skip navigation links">Skip navigation links</a></div>
<a name="navbar.top.firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li>Class</li>
<li>Use</li>
<li class="navBarCell1Rev">Tree</li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/zookeeper/jmx/package-tree.html">Prev</a></li>
<li><a href="../../../../org/apache/zookeeper/metrics/impl/package-tree.html">Next</a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/zookeeper/metrics/package-tree.html" target="_top">Frames</a></li>
<li><a href="package-tree.html" target="_top">No&nbsp;Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../allclasses-noframe.html">All&nbsp;Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_top");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<a name="skip.navbar.top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<div class="header">
<h1 class="title">Hierarchy For Package org.apache.zookeeper.metrics</h1>
<span class="packageHierarchyLabel">Package Hierarchies:</span>
<ul class="horizontal">
<li><a href="../../../../overview-tree.html">All Packages</a></li>
</ul>
</div>
<div class="contentContainer">
<h2 title="Class Hierarchy">Class Hierarchy</h2>
<ul>
<li type="circle">java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang"><span class="typeNameLink">Object</span></a>
<ul>
<li type="circle">java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Throwable.html?is-external=true" title="class or interface in java.lang"><span class="typeNameLink">Throwable</span></a> (implements java.io.<a href="https://docs.oracle.com/javase/8/docs/api/java/io/Serializable.html?is-external=true" title="class or interface in java.io">Serializable</a>)
<ul>
<li type="circle">java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Exception.html?is-external=true" title="class or interface in java.lang"><span class="typeNameLink">Exception</span></a>
<ul>
<li type="circle">org.apache.zookeeper.metrics.<a href="../../../../org/apache/zookeeper/metrics/MetricsProviderLifeCycleException.html" title="class in org.apache.zookeeper.metrics"><span class="typeNameLink">MetricsProviderLifeCycleException</span></a></li>
</ul>
</li>
</ul>
</li>
</ul>
</li>
</ul>
<h2 title="Interface Hierarchy">Interface Hierarchy</h2>
<ul>
<li type="circle">org.apache.zookeeper.metrics.<a href="../../../../org/apache/zookeeper/metrics/Counter.html" title="interface in org.apache.zookeeper.metrics"><span class="typeNameLink">Counter</span></a></li>
<li type="circle">org.apache.zookeeper.metrics.<a href="../../../../org/apache/zookeeper/metrics/Gauge.html" title="interface in org.apache.zookeeper.metrics"><span class="typeNameLink">Gauge</span></a></li>
<li type="circle">org.apache.zookeeper.metrics.<a href="../../../../org/apache/zookeeper/metrics/MetricsContext.html" title="interface in org.apache.zookeeper.metrics"><span class="typeNameLink">MetricsContext</span></a></li>
<li type="circle">org.apache.zookeeper.metrics.<a href="../../../../org/apache/zookeeper/metrics/MetricsProvider.html" title="interface in org.apache.zookeeper.metrics"><span class="typeNameLink">MetricsProvider</span></a></li>
<li type="circle">org.apache.zookeeper.metrics.<a href="../../../../org/apache/zookeeper/metrics/Summary.html" title="interface in org.apache.zookeeper.metrics"><span class="typeNameLink">Summary</span></a></li>
<li type="circle">org.apache.zookeeper.metrics.<a href="../../../../org/apache/zookeeper/metrics/SummarySet.html" title="interface in org.apache.zookeeper.metrics"><span class="typeNameLink">SummarySet</span></a></li>
</ul>
<h2 title="Enum Hierarchy">Enum Hierarchy</h2>
<ul>
<li type="circle">java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang"><span class="typeNameLink">Object</span></a>
<ul>
<li type="circle">java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Enum.html?is-external=true" title="class or interface in java.lang"><span class="typeNameLink">Enum</span></a>&lt;E&gt; (implements java.lang.<a href="https://docs.oracle.com/javase/8/docs/api/java/lang/Comparable.html?is-external=true" title="class or interface in java.lang">Comparable</a>&lt;T&gt;, java.io.<a href="https://docs.oracle.com/javase/8/docs/api/java/io/Serializable.html?is-external=true" title="class or interface in java.io">Serializable</a>)
<ul>
<li type="circle">org.apache.zookeeper.metrics.<a href="../../../../org/apache/zookeeper/metrics/MetricsContext.DetailLevel.html" title="enum in org.apache.zookeeper.metrics"><span class="typeNameLink">MetricsContext.DetailLevel</span></a></li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
<!-- ======= START OF BOTTOM NAVBAR ====== -->
<div class="bottomNav"><a name="navbar.bottom">
<!--   -->
</a>
<div class="skipNav"><a href="#skip.navbar.bottom" title="Skip navigation links">Skip navigation links</a></div>
<a name="navbar.bottom.firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li>Class</li>
<li>Use</li>
<li class="navBarCell1Rev">Tree</li>
<li><a href="../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../index-all.html">Index</a></li>
<li><a href="../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../org/apache/zookeeper/jmx/package-tree.html">Prev</a></li>
<li><a href="../../../../org/apache/zookeeper/metrics/impl/package-tree.html">Next</a></li>
</ul>
<ul class="navList">
<li><a href="../../../../index.html?org/apache/zookeeper/metrics/package-tree.html" target="_top">Frames</a></li>
<li><a href="package-tree.html" target="_top">No&nbsp;Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../allclasses-noframe.html">All&nbsp;Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_bottom");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<a name="skip.navbar.bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small>Copyright &#169; 2008&#x2013;2020 <a href="https://www.apache.org/">The Apache Software Foundation</a>. All rights reserved.</small></p>
</body>
</html>