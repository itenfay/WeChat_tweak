//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ContactsDataLogic, MMTimer, NSMutableDictionary, NSString;

@interface WCStoryEntranceVM : NSObject
{
    _Bool _shouldShowStoryEntrace;
    ContactsDataLogic *_dataLogic;
    NSMutableDictionary *_userContactDict;
    MMTimer *_reloadNotifyThrottle;
}

+ (_Bool)hasUnreadStory;
+ (id)entranceViewModel;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowStoryEntrace; // @synthesize shouldShowStoryEntrace=_shouldShowStoryEntrace;
@property(retain, nonatomic) MMTimer *reloadNotifyThrottle; // @synthesize reloadNotifyThrottle=_reloadNotifyThrottle;
@property(retain, nonatomic) NSMutableDictionary *userContactDict; // @synthesize userContactDict=_userContactDict;
@property(retain, nonatomic) ContactsDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
- (void)onPermissionsHasChanged;
- (void)onUserRelatedCommentReadWithTid:(id)arg1;
- (void)onMakeAllUserRelatedCommentRead;
- (void)onMakeAllUserRelatedCommentWithUsername:(id)arg1;
- (void)onRelatedCommentAdd:(id)arg1;
- (void)onRelatedCommentDel:(id)arg1;
- (void)updateUnreadStatus;
- (void)onMarkStoryReadWithUserName:(id)arg1 Tid:(id)arg2;
- (void)onContactHasChange;
- (void)onSetNewLastReadMaxTid;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)userDeleteStoryWithUserName:(id)arg1;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (id)getTimestampUnreadUserNameArray;
- (id)getStoryUnreadUserNameArray;
- (void)reloadShouldShowStoryEntrace;
- (void)sendReloadNotify;
- (void)notifyReloadEntrance;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

