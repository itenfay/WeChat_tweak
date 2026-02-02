//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemoryMappedKV, NSData, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, StoreEmotionFetchFollowedDesignersUpdateLogicDelegate;

@interface StoreEmotionFetchFollowedDesignersUpdateLogic : NSObject
{
    _Bool _active;
    int _cgiFreq;
    id <StoreEmotionFetchFollowedDesignersUpdateLogicDelegate> _delegate;
    NSMutableArray *_peddingPackageDesignerInfos;
    NSMutableArray *_peddingDesignerPidRequest;
    NSMutableArray *_currentDesignerPids;
    NSData *_currReqBuf;
    unsigned long long _timeStart;
    NSObject<OS_dispatch_queue> *_worker;
    NSMutableDictionary *_eventIdMap;
    MemoryMappedKV *_mappedKV;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MemoryMappedKV *mappedKV; // @synthesize mappedKV=_mappedKV;
@property(retain, nonatomic) NSMutableDictionary *eventIdMap; // @synthesize eventIdMap=_eventIdMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *worker; // @synthesize worker=_worker;
@property(nonatomic) unsigned long long timeStart; // @synthesize timeStart=_timeStart;
@property(retain, nonatomic) NSData *currReqBuf; // @synthesize currReqBuf=_currReqBuf;
@property(retain, nonatomic) NSMutableArray *currentDesignerPids; // @synthesize currentDesignerPids=_currentDesignerPids;
@property(retain, nonatomic) NSMutableArray *peddingDesignerPidRequest; // @synthesize peddingDesignerPidRequest=_peddingDesignerPidRequest;
@property(retain, nonatomic) NSMutableArray *peddingPackageDesignerInfos; // @synthesize peddingPackageDesignerInfos=_peddingPackageDesignerInfos;
@property(nonatomic) int cgiFreq; // @synthesize cgiFreq=_cgiFreq;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <StoreEmotionFetchFollowedDesignersUpdateLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)recordLastTimeOnFinish;
- (_Bool)shouldSkipCurrentFetch;
- (unsigned int)getFetchLogicMinTimeInterval;
- (unsigned int)getFetchCgiFreq;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onFetchAllDesignerPidsFinish;
- (void)onFetchDesignerPidsFailed;
- (void)onFetchDesignerPidsSuccess:(id)arg1;
- (void)onGotPersonalDesignerResponse:(id)arg1;
- (void)onGotPersonalDesignerMessageReturn:(id)arg1;
- (void)tryUpdateNextDesignerPids;
- (void)onUpdateAllUserFollowedDesignerInfoSuccess;
- (void)onStoreEmotionGetDetailBack:(id)arg1;
- (void)OnEmoticonStoreItemGetDetailFailed:(id)arg1;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)tryUpdateNextDesingerInfo;
- (void)startLogic;
- (id)initWithServerPids:(id)arg1 andDelegate:(id)arg2;

@end

