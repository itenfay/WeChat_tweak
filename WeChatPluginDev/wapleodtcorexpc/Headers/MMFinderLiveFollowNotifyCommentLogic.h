//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSMutableArray, NSMutableOrderedSet;
@protocol MMFinderLiveFollowNotifyCommentDelegate;

@interface MMFinderLiveFollowNotifyCommentLogic : NSObject
{
    _Bool _isAsyncSorting;
    id <MMFinderLiveFollowNotifyCommentDelegate> _notifyDelegate;
    MMFinderLiveTaskId *_finderTaskId;
    NSMutableOrderedSet *_prepareDisplayFollowContactSet;
    NSMutableArray *_pendingFollowContactList;
    NSMutableArray *_removedFollowContactList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAsyncSorting; // @synthesize isAsyncSorting=_isAsyncSorting;
@property(retain, nonatomic) NSMutableArray *removedFollowContactList; // @synthesize removedFollowContactList=_removedFollowContactList;
@property(retain, nonatomic) NSMutableArray *pendingFollowContactList; // @synthesize pendingFollowContactList=_pendingFollowContactList;
@property(retain, nonatomic) NSMutableOrderedSet *prepareDisplayFollowContactSet; // @synthesize prepareDisplayFollowContactSet=_prepareDisplayFollowContactSet;
@property(retain, nonatomic) MMFinderLiveTaskId *finderTaskId; // @synthesize finderTaskId=_finderTaskId;
@property(nonatomic) __weak id <MMFinderLiveFollowNotifyCommentDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (void)onGetFinderLiveFollowAppMsgWithTaskId:(id)arg1 followAppMsg:(id)arg2;
- (_Bool)clearPreparingDisplayFollowNotifyMsgInSet:(id)arg1;
- (_Bool)clearPreparingDisplayFollowNotifyMsgInList:(id)arg1;
- (void)cancelDelayClearFollowNotifyMsg;
- (double)getClearDelayTime;
- (void)invokeClearPreparingDisplayFollowNotifyMsg;
- (void)delayClearPreparingDisplayFollowNotifyMsg;
- (void)notifyPreparingDisplayFollowNotifyUpdate;
- (void)onPreparingDisplayFollowNotifyUpdate;
- (void)asyncSortPrepareDisplayFollowContacts;
- (void)syncSortPrepareDisplayFollowContacts;
- (void)innerAddFollowContactWithSort:(id)arg1;
- (void)addFollowLiveContact:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)onFollowNotifyMsgInfoDisplay:(id)arg1;
- (void)onExitLive;
- (void)onEnterLive;
- (id)initWithTaskId:(id)arg1;

@end

