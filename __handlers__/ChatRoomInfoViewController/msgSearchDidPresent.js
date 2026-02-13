function wcplObj(ptr) {
  try {
    if (typeof ObjC === 'undefined') return null;
    return new ObjC.Object(ptr);
  } catch (_) {
    return null;
  }
}

defineHandler({
  onEnter(log, args, state) {
    const selfObj = wcplObj(args[0]);
    let navClass = 'nil';
    try { navClass = selfObj && selfObj.navigationController() ? selfObj.navigationController().$className : 'nil'; } catch (_) {}
    log(`-[ChatRoomInfoViewController msgSearchDidPresent] self=${selfObj ? selfObj.$className : 'nil'} nav=${navClass}`);
  },

  onLeave(log, retval, state) {
  }
});
