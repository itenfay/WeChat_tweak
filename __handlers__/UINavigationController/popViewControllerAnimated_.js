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
      out.push(`${i}:${vc.$className}`);
    }
    return `nav=${navObj.$className} count=${count} stack=[${out.join(' | ')}]`;
  } catch (e) {
    return `nav-dump-error=${e}`;
  }
}

defineHandler({
  onEnter(log, args, state) {
    state.nav = args[0];
    const animated = args[2].toInt32();
    log(`-[UINavigationController popViewControllerAnimated:] animated=${animated}`);
    log(`[pop-before] ${wcplDumpNavStack(state.nav)}`);
  },

  onLeave(log, retval, state) {
    log(`[pop-ret] vc=${wcplClass(retval)}`);
    log(`[pop-after] ${wcplDumpNavStack(state.nav)}`);
  }
});
