function wcplObj(ptr) {
  try {
    if (typeof ObjC === 'undefined') return null;
    return new ObjC.Object(ptr);
  } catch (_) {
    return null;
  }
}

function wcplDumpArray(ptr) {
  const arrObj = wcplObj(ptr);
  if (!arrObj) return 'arr=nil';
  try {
    const count = Number(arrObj.count());
    const out = [];
    for (let i = 0; i < count; i++) {
      const vc = arrObj.objectAtIndex_(i);
      out.push(`${i}:${vc.$className}`);
    }
    return `newStackCount=${count} newStack=[${out.join(' | ')}]`;
  } catch (e) {
    return `arr-dump-error=${e}`;
  }
}

function wcplDumpNavStack(navPtr) {
  const navObj = wcplObj(navPtr);
  if (!navObj) return 'nav=nil';
  try {
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
    const animated = args[3].toInt32();
    log(`-[UINavigationController setViewControllers:animated:] animated=${animated}`);
    log(`[setVCs-arg] ${wcplDumpArray(args[2])}`);
    log(`[setVCs-before] ${wcplDumpNavStack(state.nav)}`);
  },

  onLeave(log, retval, state) {
    log(`[setVCs-after] ${wcplDumpNavStack(state.nav)}`);
  }
});
