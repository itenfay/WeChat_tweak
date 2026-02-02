//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString, OrderedDictionary, TextStateDBTransfer;
@protocol OS_dispatch_queue, OS_dispatch_source, TextStateDataLogicDelegate;

@interface TextStateDataLogic : NSObject
{
    _Bool _dataLoaded;
    _Bool _affDataLoaded;
    _Bool _useAffDB;
    _Bool _affDBFinishTransfer;
    id <TextStateDataLogicDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSRecursiveLock *_recursiveLock;
    NSMutableDictionary *_cache;
    OrderedDictionary *_orderedIdToTextState;
    NSObject<OS_dispatch_source> *_expireTimer;
    TextStateDBTransfer *_dbTransfer;
}

+ (id)generateTextStateFromContactWithUsername:(id)arg1;
+ (id)generateTextStateFromContact:(id)arg1;
+ (_Bool)isTextStateValidForUsername:(id)arg1;
+ (void)insertOrUpdateTextState:(id)arg1 forOrderedIdToTextState:(id)arg2 index:(unsigned long long *)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool affDBFinishTransfer; // @synthesize affDBFinishTransfer=_affDBFinishTransfer;
@property(nonatomic) _Bool useAffDB; // @synthesize useAffDB=_useAffDB;
@property(retain, nonatomic) TextStateDBTransfer *dbTransfer; // @synthesize dbTransfer=_dbTransfer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *expireTimer; // @synthesize expireTimer=_expireTimer;
@property _Bool affDataLoaded; // @synthesize affDataLoaded=_affDataLoaded;
@property _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(retain, nonatomic) OrderedDictionary *orderedIdToTextState; // @synthesize orderedIdToTextState=_orderedIdToTextState;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <TextStateDataLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTextStateTransferFinish;
- (void)onProfileChange;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)didBecomeActive;
- (void)handleUpdateContact:(id)arg1;
- (void)privateUpdateContact:(id)arg1;
- (void)doAffModTextStatueFinish:(id)arg1;
- (_Bool)useAffdb;
- (_Bool)affStatusMainDBTransferFinish;
- (void)checkAffExpire;
- (void)checkExpire;
- (void)restartExpireTimer;
- (void)prefetchTextState:(id)arg1;
- (void)onTextStateUpdateForUsername:(id)arg1;
- (id)entryForUsername:(id)arg1;
- (void)constructCacheInAffDB;
- (void)constructCache;
- (void)constructCacheIfNeeded;
- (id)usernameToTextState;
- (id)mostRecentTextStateForUsername:(id)arg1;
- (id)textStateListForUsername:(id)arg1;
- (id)textStateForId:(id)arg1;
- (void)deleteTextStateForUsername:(id)arg1 sequence:(unsigned int)arg2;
- (void)deleteTextStateForId:(id)arg1 sequence:(unsigned int)arg2;
- (void)deleteTextStateForId:(id)arg1;
- (void)addOrModifyTextState:(id)arg1 checkSequence:(_Bool)arg2;
- (void)dealloc;
- (_Bool)isDataLoaded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

