//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MultiRoomContactSelectViewController, NSMutableArray, NSString;

@interface WebviewJSEventHandler_chooseChatRoomMember
{
    NSMutableArray *m_customMemberList;
    MultiRoomContactSelectViewController *_m_viewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MultiRoomContactSelectViewController *m_viewController; // @synthesize m_viewController=_m_viewController;
- (_Bool)useCustomMemberList;
- (void)onMultiSelectContactCancel;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)addContactToList:(id)arg1 toArray:(id)arg2 dicEncryptSecret:(id)arg3 isCanSelectSelf:(_Bool)arg4;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

