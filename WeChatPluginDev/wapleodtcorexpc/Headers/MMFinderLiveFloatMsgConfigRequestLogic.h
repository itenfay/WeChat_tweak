//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveFloatMsgResourceManager, MMFinderLiveTask, MMFinderLiveTaskId;

@interface MMFinderLiveFloatMsgConfigRequestLogic : NSObject
{
    _Bool _isFetching;
    _Bool _isFetchingWecoinBalance;
    _Bool _isWecoinBalanceUpdated;
    CDUnknownBlockType _floatMsgConfigUpdateCallback;
    MMFinderLiveTaskId *_taskId;
    unsigned long long _requestSeq;
    unsigned long long _wecoinBalance;
    MMFinderLiveFloatMsgResourceManager *_resourceMgr;
}

+ (unsigned long long)getExtraInfoContent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveFloatMsgResourceManager *resourceMgr; // @synthesize resourceMgr=_resourceMgr;
@property(nonatomic) _Bool isWecoinBalanceUpdated; // @synthesize isWecoinBalanceUpdated=_isWecoinBalanceUpdated;
@property(nonatomic) _Bool isFetchingWecoinBalance; // @synthesize isFetchingWecoinBalance=_isFetchingWecoinBalance;
@property(nonatomic) unsigned long long wecoinBalance; // @synthesize wecoinBalance=_wecoinBalance;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) unsigned long long requestSeq; // @synthesize requestSeq=_requestSeq;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType floatMsgConfigUpdateCallback; // @synthesize floatMsgConfigUpdateCallback=_floatMsgConfigUpdateCallback;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)downloadFloatMsgDecorationResourcesWithSuccessCompletion:(CDUnknownBlockType)arg1;
- (void)syncLocalFileStateFromFloatMsgList:(id)arg1 toList:(id)arg2;
- (id)getSortedFloatMsgList:(id)arg1;
- (void)increaseRequestSeq;
- (long long)canSendFloatMsg:(id)arg1;
- (void)refreshWecoinBalanceIfNeeded;
- (void)clearExpiredStayTimeFloatMsgAndRefetchIfNeeded;
- (void)fetchFloatMsgConfig:(long long)arg1;
- (id)initWithTaskId:(id)arg1;

@end

