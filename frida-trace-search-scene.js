// frida-trace-search-scene.js
// 用法: frida -H 127.0.0.1:37043 -p <WeChatPID> -l frida-trace-search-scene.js
// 然后在微信中：进群聊设置 → 点"查找聊天内容" → 观察控制台输出的 scene 值

var resolver = new ApiResolver('objc');

// Hook ChatRoomInfoViewController.onEditAndSearch
var matches1 = resolver.enumerateMatches('-[ChatRoomInfoViewController onEditAndSearch]');
if (matches1.length > 0) {
    Interceptor.attach(matches1[0].address, {
        onEnter: function(args) {
            console.log('[TRACE] ChatRoomInfoViewController.onEditAndSearch called');
        }
    });
}

// Hook ChatRoomInfoViewController.initMsgSearchHelper: (captures scene arg)
var matches2 = resolver.enumerateMatches('-[ChatRoomInfoViewController initMsgSearchHelper:]');
if (matches2.length > 0) {
    Interceptor.attach(matches2[0].address, {
        onEnter: function(args) {
            var scene = args[2].toInt32();
            console.log('[TRACE] ChatRoomInfoViewController.initMsgSearchHelper: scene=' + scene);
        }
    });
}

// Also hook BaseMsgContentViewController.initMsgSearchHelper:
var matches3 = resolver.enumerateMatches('-[BaseMsgContentViewController initMsgSearchHelper:]');
if (matches3.length > 0) {
    Interceptor.attach(matches3[0].address, {
        onEnter: function(args) {
            var scene = args[2].toInt32();
            console.log('[TRACE] BaseMsgContentViewController.initMsgSearchHelper: scene=' + scene);
        }
    });
}

// Hook AddContactToChatRoomViewController.onEditAndSearch
var matches4 = resolver.enumerateMatches('-[AddContactToChatRoomViewController onEditAndSearch]');
if (matches4.length > 0) {
    Interceptor.attach(matches4[0].address, {
        onEnter: function(args) {
            console.log('[TRACE] AddContactToChatRoomViewController.onEditAndSearch called');
        }
    });
}

// Hook AddContactToChatRoomViewController.initMsgSearchHelper:
var matches5 = resolver.enumerateMatches('-[AddContactToChatRoomViewController initMsgSearchHelper:]');
if (matches5.length > 0) {
    Interceptor.attach(matches5[0].address, {
        onEnter: function(args) {
            var scene = args[2].toInt32();
            console.log('[TRACE] AddContactToChatRoomViewController.initMsgSearchHelper: scene=' + scene);
        }
    });
}

// Hook msgSearchDidPresent on both
var matches6 = resolver.enumerateMatches('-[ChatRoomInfoViewController msgSearchDidPresent]');
if (matches6.length > 0) {
    Interceptor.attach(matches6[0].address, {
        onEnter: function(args) {
            console.log('[TRACE] ChatRoomInfoViewController.msgSearchDidPresent');
        }
    });
}

// Hook MsgSearchHelper.initWithContentsController:
var matches7 = resolver.enumerateMatches('-[MsgSearchHelper initWithContentsController:]');
if (matches7.length > 0) {
    Interceptor.attach(matches7[0].address, {
        onEnter: function(args) {
            var controller = ObjC.Object(args[2]);
            console.log('[TRACE] MsgSearchHelper.initWithContentsController: ' + controller.$className);
        }
    });
}

// Hook setIsShowMsgSearch: on BaseMsgContentViewController
var matches8 = resolver.enumerateMatches('-[BaseMsgContentViewController setIsShowMsgSearch:]');
if (matches8.length > 0) {
    Interceptor.attach(matches8[0].address, {
        onEnter: function(args) {
            var val = args[2].toInt32();
            console.log('[TRACE] BaseMsgContentViewController.setIsShowMsgSearch: ' + val);
        }
    });
}

console.log('[OK] All hooks installed. Now go to a group chat -> settings -> tap "查找聊天内容"');
