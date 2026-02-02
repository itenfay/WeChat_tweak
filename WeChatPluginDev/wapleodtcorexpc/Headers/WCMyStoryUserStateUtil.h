//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSArray, NSMutableSet, NSString, WCStoryNotifyHandler;

@interface WCMyStoryUserStateUtil
{
    _Bool _waitingForShowPreview;
    NSString *_selectedMember;
    MMUIViewController *_parentVC;
    NSArray *_currentUnReadStoryArray;
    WCStoryNotifyHandler *_syncNotifyHandler;
    NSMutableSet *_unreadStoryUsers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *unreadStoryUsers; // @synthesize unreadStoryUsers=_unreadStoryUsers;
@property(retain, nonatomic) WCStoryNotifyHandler *syncNotifyHandler; // @synthesize syncNotifyHandler=_syncNotifyHandler;
@property(nonatomic) _Bool waitingForShowPreview; // @synthesize waitingForShowPreview=_waitingForShowPreview;
@property(copy, nonatomic) NSArray *currentUnReadStoryArray; // @synthesize currentUnReadStoryArray=_currentUnReadStoryArray;
@property(nonatomic) __weak MMUIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) NSString *selectedMember; // @synthesize selectedMember=_selectedMember;
- (int)getTimeZoneHourOffset;
- (void)reloadUnreadCacheForUser:(id)arg1;
- (void)loadUnreadStoryUsersCache;
- (_Bool)isUserNameInBlackList:(id)arg1;
- (_Bool)isContactInBlackList:(id)arg1;
- (void)onCleanUnReadStorys:(id)arg1;
- (void)fetchNewStoryBubble;
- (void)fetchNewStoryComment;
- (void)notifyCheckSelector;
- (void)markUserStoryHasRead:(id)arg1 maxTid:(id)arg2;
- (void)showStoryMovieWithUserName:(id)arg1 previewReportObj:(id)arg2 inViewController:(id)arg3;
- (_Bool)checkUserInUnReadStoryListWithUserNameInCache:(id)arg1;
- (_Bool)checkUserInUnReadStoryListWithUserName:(id)arg1;
- (void)notifyUserDeleteStoryVideoWithUserName:(id)arg1;
- (void)notifyClearSyncWithUserName:(id)arg1;
- (void)notifyRecoverStoryWithUsername:(id)arg1;
- (void)notifyAddSyncWithUsername:(id)arg1;
- (void)refreshUnReadStoryWithAddArray:(id)arg1 deleteArray:(id)arg2;
- (void)onServiceTerminate;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

