//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSRecursiveLock, NSString, WXGChatLogSessionUtility;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface WXGRoamBackupPackageRangeHandler : NSObject
{
    unsigned long long _totalSize;
    NSObject<OS_dispatch_queue> *_rangeQueue;
    CDUnknownBlockType _completeBlock;
    NSObject<OS_dispatch_semaphore> *_calculateSema;
    NSArray *_convTimeRangeList;
    NSArray *_usernameList;
    WXGChatLogSessionUtility *_sessionUtility;
    unsigned long long _rangeCulculateTaskCount;
    NSRecursiveLock *_taskCountLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *taskCountLock; // @synthesize taskCountLock=_taskCountLock;
@property(nonatomic) unsigned long long rangeCulculateTaskCount; // @synthesize rangeCulculateTaskCount=_rangeCulculateTaskCount;
@property(retain, nonatomic) WXGChatLogSessionUtility *sessionUtility; // @synthesize sessionUtility=_sessionUtility;
@property(retain, nonatomic) NSArray *usernameList; // @synthesize usernameList=_usernameList;
@property(retain, nonatomic) NSArray *convTimeRangeList; // @synthesize convTimeRangeList=_convTimeRangeList;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *calculateSema; // @synthesize calculateSema=_calculateSema;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *rangeQueue; // @synthesize rangeQueue=_rangeQueue;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
- (void)onChatLogDataLoadFinished;
- (void)onChatLogDataLoad:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onChatLogCalculateBackupChatLogFilter:(id)arg1 totalSize:(unsigned long long)arg2;
- (void)onChatLogCalculateBackupChatLogEnd:(unsigned long long)arg1;
- (void)asyncGetUsersChatLogSize:(id)arg1;
- (void)mergeOrDeleteUserNamesIntoMap:(id)arg1 isMerge:(_Bool)arg2 map:(id)arg3 beginTime:(unsigned long long)arg4 endTime:(unsigned long long)arg5;
- (void)mergeOrDeleteUserNamesFromGroup:(id)arg1 isMerge:(_Bool)arg2 map:(id)arg3;
- (void)mergeOrDeleteUserNamesFromInSpecialLabel:(id)arg1 isMerge:(_Bool)arg2 map:(id)arg3;
- (void)mergeOrDeleteUserNamesFromHasSpecialFriend:(id)arg1 isMerge:(_Bool)arg2 map:(id)arg3;
- (void)parseRangeToConversationList:(id)arg1 usernameMap:(id)arg2;
- (void)parseRangeToConversationList:(id)arg1;
- (id)parseRangeToUsernameList:(id)arg1;
- (void)asyncParseRangeToConvsAndSize:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)parseRangeUsersCount:(id)arg1;
- (id)parseUserNameToSessionName:(id)arg1;
- (id)parseRangeItemExcludeToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeExactUserToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeItemIncludeLabelToString:(id)arg1 atIndex:(long long)arg2;
- (id)parseRangeToSymbolString:(id)arg1;
- (id)parseRangeItemToString:(id)arg1;
- (id)getSessionNameByUserName:(id)arg1;
- (void)appendComma:(id)arg1;
- (unsigned long long)getRangeTypeCount:(int)arg1;
- (void)loadRangeTypeSessionsWithRange:(id)arg1;
- (id)getRangeTypeName:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

