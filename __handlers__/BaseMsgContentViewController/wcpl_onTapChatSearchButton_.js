function wcplObj(ptr) {
  try {
    if (typeof ObjC === 'undefined') return null;
    return new ObjC.Object(ptr);
  } catch (_) {
    return null;
  }
}

function wcplDumpNavStackFromVC(vcPtr) {
  const vc = wcplObj(vcPtr);
  if (!vc) return 'vc=nil';
  try {
    const nav = vc.navigationController();
    if (!nav) return `self=${vc.$className} nav=nil`;
    const arr = nav.viewControllers();
    const count = Number(arr.count());
    const out = [];
    for (let i = 0; i < count; i++) {
      const item = arr.objectAtIndex_(i);
      out.push(`${i}:${item.$className}`);
    }
    return `self=${vc.$className} nav=${nav.$className} count=${count} stack=[${out.join(' | ')}]`;
  } catch (e) {
    return `dump-error=${e}`;
  }
}

defineHandler({
  onEnter(log, args, state) {
    log(`-[BaseMsgContentViewController wcpl_onTapChatSearchButton:] arg=${args[2]}`);
    log(`[tap] ${wcplDumpNavStackFromVC(args[0])}`);
  },

  onLeave(log, retval, state) {
  }
});
