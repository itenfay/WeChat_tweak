//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableSet, NSString, SessionSelectController;

@interface NewLifeSelectChatRoomHandler
{
    _Bool _confirmed;
    NSMutableArray *_selectChatRoomList;
    SessionSelectController *_viewController;
    NSMutableArray *_recentChatRoomList;
    NSMutableSet *_recentChatRoomSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *recentChatRoomSet; // @synthesize recentChatRoomSet=_recentChatRoomSet;
@property(retain, nonatomic) NSMutableArray *recentChatRoomList; // @synthesize recentChatRoomList=_recentChatRoomList;
@property(nonatomic) _Bool confirmed; // @synthesize confirmed=_confirmed;
@property(retain, nonatomic) SessionSelectController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSMutableArray *selectChatRoomList; // @synthesize selectChatRoomList=_selectChatRoomList;
- (_Bool)onShouldFilterContact:(id)arg1;
- (id)contactInBizChatSessionAtRow:(unsigned long long)arg1;
- (long long)numberOfRowInBizChatSession;
- (id)sectionTitleForBizChatSession;
- (void)onSessionSelectControllerPageSheetWillClose:(id)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (id)sessionSelectController:(id)arg1 alertMessageForExceedingMaxSelectionCount:(unsigned long long)arg2;
- (_Bool)sessionSelectControllerHideSelectFromContactList:(id)arg1;
- (void)handleRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

