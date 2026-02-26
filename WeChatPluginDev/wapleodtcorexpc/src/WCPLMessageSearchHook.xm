%group WCPLMessageSearchHookGroup

%hook SyncCmdHandler

- (_Bool)BatchAddMsg:(_Bool)arg1 ShowPush:(_Bool)arg2 {
    id handler = (id)self;
    NSMutableArray *msgList = [handler valueForKey:@"m_arrMsgList"];
    NSUInteger originCount = [msgList isKindOfClass:[NSArray class]] ? ((NSArray *)msgList).count : 0;
    NSMutableArray *msgListResult = [WCPLFuncService filtMessageFromMsgList:msgList];
    NSUInteger filteredCount = [msgListResult isKindOfClass:[NSArray class]] ? ((NSArray *)msgListResult).count : 0;
    [handler setValue:msgListResult forKey:@"m_arrMsgList"];

    BOOL showPush = arg2;
    if (originCount > 0 && filteredCount == 0) {
        showPush = NO;
    }

    return %orig(arg1, showPush);
}

%end

%hook CMessageMgr

- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 {
    static NSString *const kHookSelector = @"GetMsgByCreateTime:FromID:FromCreateTime:Limit:LeftCount:FromSequence:";
    static const WCPLHookOrigPolicy kOrigPolicy = WCPLHookOrigPolicyPre;

    id result = %orig;

    WCPLIgnoreConfig *config = [WCPLConfigCenter shared].ignore;

    if (!config.userIgnoreEnable) {
        wcpl_messageHookLog(@"CMessageMgr",
                            kHookSelector,
                            @"pre_filter",
                            @"skip_feature",
                            kOrigPolicy,
                            @"reason=user_ignore_disabled");
        return result;
    }

    if ([result isKindOfClass:[NSArray class]] || [result isKindOfClass:[NSMutableArray class]]) {
        NSUInteger originCount = ((NSArray *)result).count;
        NSMutableArray *filtered = [WCPLFuncService filtMessageFromMsgList:(NSMutableArray *)result];
        NSUInteger filteredCount = [filtered isKindOfClass:[NSArray class]] ? ((NSArray *)filtered).count : 0;
        wcpl_messageHookLog(@"CMessageMgr",
                            kHookSelector,
                            @"feature",
                            @"filtered",
                            kOrigPolicy,
                            [NSString stringWithFormat:@"origin=%lu filtered=%lu",
                                                       (unsigned long)originCount,
                                                       (unsigned long)filteredCount]);
        return filtered;
    }

    return result;
}

%end

%hook BaseMsgContentViewController

- (void)viewDidLoad {
    %orig;
    wcpl_updateChatSearchButtonForViewController(self);
    wcpl_scheduleChatSearchButtonRepair(self, @"viewDidLoad");
}

- (void)viewWillAppear:(_Bool)arg1 {
    %orig;
    wcpl_updateChatSearchButtonForViewController(self);
    wcpl_scheduleChatSearchButtonRepair(self, @"viewWillAppear");
}

- (void)viewDidAppear:(_Bool)arg1 {
    %orig;
    wcpl_updateChatSearchButtonForViewController(self);
    wcpl_scheduleChatSearchButtonRepair(self, @"viewDidAppear");

    id contact = [self GetContact];
    NSString *usrName = wcpl_safeUserNameFromObject(contact);
    if (usrName.length > 0) {
        [WCPLConfigCenter shared].ignore.curUsrName = usrName;
    }

    WCPLAVConfig *config = [WCPLConfigCenter shared].av;
    if (config.thirdPartyPlaybackEnabled) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    }
}

- (void)viewDidLayoutSubviews {
    %orig;
    // 对齐密友：在布局完成后再补一次右上角按钮注入，减少“出现-消失-再出现”的闪烁。
    wcpl_updateChatSearchButtonForViewController(self);
}

- (void)viewWillDisappear:(_Bool)arg1 {
    %orig;

    UINavigationController *navCon = [self valueForKey:@"navigationController"];
    if ([navCon.viewControllers indexOfObject:(UIViewController *)self] == NSNotFound) {
        [[WCPLAVManager shareManager] stop];
    }

    if (self.isMovingFromParentViewController || self.isBeingDismissed) {
        wcpl_clearLocalReplaceMap(self);
    }
}

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 {
    %orig;

    WCPLAVConfig *config = [WCPLConfigCenter shared].av;
    if (config.thirdPartyPlaybackEnabled) {
        [[WCPLAVManager shareManager] stop];
    }
}

- (void)didRotateFromInterfaceOrientation:(long long)arg1 {
    %orig;

    WCPLAVConfig *config = [WCPLConfigCenter shared].av;
    if (config.thirdPartyPlaybackEnabled) {
        UIView *view = [self valueForKey:@"view"];
        [[WCPLAVManager shareManager] startCaptureInView:view];
    }
}

- (void)reloadMessages {
    wcpl_clearLocalReplaceMap(self);
    %orig;
}

- (void)reloadWholePage {
    wcpl_clearLocalReplaceMap(self);
    %orig;
}

- (void)updateRightBar {
    %orig;
    wcpl_updateChatSearchButtonForViewController(self);
    wcpl_scheduleChatSearchButtonRepair(self, @"updateRightBar");
}

- (void)handleMsgUpdateRightBar {
    %orig;
    wcpl_updateChatSearchButtonForViewController(self);
    wcpl_scheduleChatSearchButtonRepair(self, @"handleMsgUpdateRightBar");
}

- (unsigned int)getMsgSearchBusinessType {
    return %orig;
}

- (void)initMsgSearchHelper:(int)type {
    %orig(type);
}

- (void)msgSearchBarCancel {
    wcpl_miyouHideSearchBarContainer(self, @"[搜索] cancel/pre");
    %orig;
    wcpl_miyouHideSearchBarContainer(self, @"[搜索] cancel/post");
    wcpl_miyouFinishSearch(self, @"[搜索] cancel/post");
}

- (void)msgSearchBarCancelForSpecialMsg {
    wcpl_miyouHideSearchBarContainer(self, @"[搜索] special cancel/pre");
    %orig;
    wcpl_miyouHideSearchBarContainer(self, @"[搜索] special cancel/post");
    wcpl_miyouFinishSearch(self, @"[搜索] special cancel/post");
}

- (void)msgSearchDidDismissForSpecialMsg {
    %orig;
}

- (void)msgSearchDidDismiss {
    %orig;
}

- (void)onSearchButton:(id)sender {
    // 原生入口保持原生行为，避免二次改写导致导航 titleView 残留搜索框。
    %orig;
}

%new
- (void)onSearchItem {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ((void (*)(id, SEL))objc_msgSend)(self, @selector(onSearchItem));
        });
        return;
    }

    WCPLLogInfo(@"[搜索] onSearchItem 命中，进入密友同款链路");

    SEL panSel = @selector(setBUsePanCancelGesture:);
    if ([self respondsToSelector:panSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(self, panSel, YES);
    }

    wcpl_miyouPrepareSearchBarContainerForSearchEntry(self, @"[搜索] onSearchItem");
    BOOL launched = wcpl_miyouPushSearchController(self);
    if (!launched) {
        SEL initSel = @selector(initMsgSearchHelper:);
        if ([self respondsToSelector:initSel]) {
            @try {
                ((void (*)(id, SEL, int))objc_msgSend)(self, initSel, 1);
            } @catch (__unused NSException *exception) {
            }
        }
        wcpl_miyouPrepareSearchBarContainerForSearchEntry(self, @"[搜索] onSearchItem/retry");
        launched = wcpl_miyouPushSearchController(self);
    }
    WCPLLogInfo(@"[搜索] onSearchItem 密友链路 pushSearchControllerWithCompletion result=%@",
                launched ? @"YES" : @"NO");
}

%new
- (void)searchItemAction {
    ((void (*)(id, SEL))objc_msgSend)(self, @selector(onSearchItem));
}

%new
- (void)wcpl_onTapChatSearchButton:(id)sender {
    (void)sender;
    if ([self respondsToSelector:@selector(onSearchItem)]) {
        ((void (*)(id, SEL))objc_msgSend)(self, @selector(onSearchItem));
    }
}

%end

%hook UIControl

- (void)sendAction:(SEL)action to:(id)target forEvent:(id)event {
    (void)action;
    (void)target;
    (void)event;
    %orig;
}

%end

%hook ChatRoomInfoViewController

- (void)msgSearchDidPresent {
    %orig;
}

- (void)viewWillDisappear:(_Bool)arg1 {
    %orig;
}

%end

%end

%ctor {
    if (WCPL_ENABLE_MESSAGE_SEARCH_HOOK) {
        %init(WCPLMessageSearchHookGroup);
    }
}
