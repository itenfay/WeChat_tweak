#import "WCPLContactAdapter.h"
#import "WCPLLogger.h"
#import "WCPLQuitMonitorService.h"
#import "WCPLWeChatContactHeaders.h"

static NSString *wcpl_qm_captureOldMemberList(id oldContact, id fallbackContact) {
    NSString *oldMemberList = WCPLContactAdapterChatRoomMemberList(oldContact);
    if (oldMemberList.length == 0) {
        oldMemberList = WCPLContactAdapterChatRoomMemberList(fallbackContact);
    }
    return oldMemberList;
}

%group WCPLQuitMonitorMergeHookGroup

%hook CContactMgr

- (void)mergeChatRoomData:(id)contact oldContact:(id)oldContact {
    NSString *oldMemberList = wcpl_qm_captureOldMemberList(oldContact, contact);
    id roomContact = oldContact ?: contact;

    %orig;

    WCPLQuitMonitorHandleContactChange((CContactMgr *)self,
                                       roomContact,
                                       oldMemberList,
                                       contact,
                                       nil,
                                       @"mergeChatRoomData");
}

%end

%end

%group WCPLQuitMonitorSetMemListHookGroup

%hook CContactMgr

- (_Bool)setContact:(id)contact chatRoomMemList:(id)memList isNotify:(_Bool)isNotify {
    NSString *oldMemberList = WCPLContactAdapterChatRoomMemberList(contact);

    _Bool ret = %orig;
    (void)isNotify;

    WCPLQuitMonitorHandleContactChange((CContactMgr *)self,
                                       contact,
                                       oldMemberList,
                                       contact,
                                       memList,
                                       @"setContact:chatRoomMemList:isNotify:");
    return ret;
}

%end

%end

%group WCPLQuitMonitorSetMemberListHookGroup

%hook CContactMgr

- (_Bool)setContact:(id)contact nsAdminList:(id)adminList nsMemberList:(id)memberList {
    NSString *oldMemberList = WCPLContactAdapterChatRoomMemberList(contact);

    _Bool ret = %orig;
    (void)adminList;

    WCPLQuitMonitorHandleContactChange((CContactMgr *)self,
                                       contact,
                                       oldMemberList,
                                       contact,
                                       memberList,
                                       @"setContact:nsAdminList:nsMemberList:");
    return ret;
}

%end

%end

%group WCPLQuitMonitorPrintChangeHookGroup

%hook CContactMgr

- (void)printContactImportantChangeData:(id)contact oldContact:(id)oldContact {
    NSString *oldMemberList = wcpl_qm_captureOldMemberList(oldContact, contact);
    id roomContact = oldContact ?: contact;

    %orig;

    WCPLQuitMonitorHandleContactChange((CContactMgr *)self,
                                       roomContact,
                                       oldMemberList,
                                       contact,
                                       nil,
                                       @"printContactImportantChangeData:oldContact:");
}

%end

%end

%ctor {
    @autoreleasepool {
        Class contactManagerClass = %c(CContactMgr);
        if (!contactManagerClass) {
            WCPLLogWarning(@"[退群监控] 未找到 CContactMgr（已跳过 Hook 初始化）");
            return;
        }

        if ([contactManagerClass instancesRespondToSelector:@selector(mergeChatRoomData:oldContact:)]) {
            %init(WCPLQuitMonitorMergeHookGroup);
        }
        if ([contactManagerClass instancesRespondToSelector:@selector(setContact:chatRoomMemList:isNotify:)]) {
            %init(WCPLQuitMonitorSetMemListHookGroup);
        }
        if ([contactManagerClass instancesRespondToSelector:@selector(setContact:nsAdminList:nsMemberList:)]) {
            %init(WCPLQuitMonitorSetMemberListHookGroup);
        }
        if ([contactManagerClass instancesRespondToSelector:@selector(printContactImportantChangeData:oldContact:)]) {
            %init(WCPLQuitMonitorPrintChangeHookGroup);
        }
        WCPLLogInfo(@"[退群监控] Hook 初始化完成");
    }
}
