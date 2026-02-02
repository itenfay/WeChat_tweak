//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveOnlineUserLogic, MMFinderLiveTaskId, NSDictionary, NSMutableArray, NSSet, NSString, WCFinderGetLiveOnlineMemberResult;
@protocol MMFinderLiveMicInviteAudienceViewModelDelegate;

@interface MMFinderLiveMicInviteAudienceViewModel : NSObject
{
    id <MMFinderLiveMicInviteAudienceViewModelDelegate> _actionDelegate;
    NSMutableArray *_displayedUserList;
    NSString *_currentMicConditionTitle;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _lastFetchOnlineUserListTime;
    MMFinderLiveOnlineUserLogic *_onlineUserLogic;
    WCFinderGetLiveOnlineMemberResult *_onlineMemberResult;
    NSDictionary *_invitedMicAudienceDict;
    NSSet *_waitConnectAudienceSet;
    NSSet *_removedAudienceSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *removedAudienceSet; // @synthesize removedAudienceSet=_removedAudienceSet;
@property(retain, nonatomic) NSSet *waitConnectAudienceSet; // @synthesize waitConnectAudienceSet=_waitConnectAudienceSet;
@property(retain, nonatomic) NSDictionary *invitedMicAudienceDict; // @synthesize invitedMicAudienceDict=_invitedMicAudienceDict;
@property(retain, nonatomic) WCFinderGetLiveOnlineMemberResult *onlineMemberResult; // @synthesize onlineMemberResult=_onlineMemberResult;
@property(retain, nonatomic) MMFinderLiveOnlineUserLogic *onlineUserLogic; // @synthesize onlineUserLogic=_onlineUserLogic;
@property(nonatomic) unsigned long long lastFetchOnlineUserListTime; // @synthesize lastFetchOnlineUserListTime=_lastFetchOnlineUserListTime;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *currentMicConditionTitle; // @synthesize currentMicConditionTitle=_currentMicConditionTitle;
@property(retain, nonatomic) NSMutableArray *displayedUserList; // @synthesize displayedUserList=_displayedUserList;
@property(nonatomic) __weak id <MMFinderLiveMicInviteAudienceViewModelDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onGetLiveGloryList:(id)arg1 error:(id)arg2;
- (void)onFetchFinderOnlineUserListWithError:(id)arg1 onlineMemberResult:(id)arg2;
- (void)updateCurrentMicConditionTitle;
- (void)tryFetchOnlineUserListAfterMicConditionChanged;
- (void)fetchOnlineUserList;
- (_Bool)updateListWithInvitedMicAudienceDict:(id)arg1 waitConnectAudienceSet:(id)arg2 removedAudienceSet:(id)arg3;
- (_Bool)updateDisplayedUserListWithNotifyFlag:(_Bool)arg1;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

