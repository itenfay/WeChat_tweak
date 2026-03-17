function wcplObj(ptr) {
  try {
    if (typeof ObjC === 'undefined') return null;
    return new ObjC.Object(ptr);
  } catch (_) {
    return null;
  }
}

function wcplClass(ptr) {
  const obj = wcplObj(ptr);
  if (!obj) return String(ptr);
  try { return obj.$className || String(ptr); } catch (_) { return String(ptr); }
}

function wcplDumpNavStack(navPtr) {
  const navObj = wcplObj(navPtr);
  if (!navObj) return 'nav=nil';
  try {
    if (!navObj.respondsToSelector_('viewControllers')) return `nav=${navObj.$className} no-viewControllers`;
    const arr = navObj.viewControllers();
    const count = Number(arr.count());
    const out = [];
    for (let i = 0; i < count; i++) {
      const vc = arr.objectAtIndex_(i);
      let title = '';
      try {
        if (vc && vc.respondsToSelector_('title')) {
          const t = vc.title();
          if (t) title = String(t);
        }
      } catch (_) {}
      out.push(`${i}:${vc.$className}${title ? `(title=${title})` : ''}`);
    }
    return `nav=${navObj.$className} count=${count} stack=[${out.join(' | ')}]`;
  } catch (e) {
    return `nav-dump-error=${e}`;
  }
}

defineHandler({
  onEnter(log, args, state) {
    state.nav = args[0];
    const vcCls = wcplClass(args[2]);
    const animated = args[3].toInt32();
    log(`-[UINavigationController pushViewController:animated:] vc=${vcCls} animated=${animated}`);
    log(`[push-before] ${wcplDumpNavStack(state.nav)}`);
  },

  onLeave(log, retval, state) {
    log(`[push-after] ${wcplDumpNavStack(state.nav)}`);
  }
});
