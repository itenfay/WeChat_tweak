//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableSet, NSString, WCFinderCGIProfile, WCFinderPrefetchCache, WXPBGeneratedMessage;

@interface WCFinderBaseCgi
{
    _Bool _needMonitorCGIProfile;
    _Bool _attachCGIProfileToResp;
    _Bool _cancelTask;
    _Bool _reportWithoutSessionBuffer;
    int _innerScene;
    WXPBGeneratedMessage *_request;
    double _startTime;
    WCFinderPrefetchCache *_prefetchCache;
    unsigned long long _requestId;
    NSMutableSet *_baseProcessingToastErrorCodeSet;
    NSArray *_objectBaseInfoKeys;
    WCFinderCGIProfile *_bizCGIProfile;
}

+ (unsigned long long)genCurrentTimeStamp;
+ (_Bool)shouldAutoProcessingToastWithErrorCode:(long long)arg1;
+ (_Bool)_canUse266;
+ (_Bool)_canUse265;
+ (id)supportedCodingFormatList;
+ (id)baseProcessingToastErrorCodeSet;
+ (id)baseJsonDict;
+ (void)updateExptBufferForBaseRequest:(id)arg1 withCmdId:(unsigned int)arg2;
+ (void)updateBaseInfosForBaseRequest:(id)arg1 tidList:(id)arg2 scene:(int)arg3 extraKey:(id)arg4 useSessionBuffer:(_Bool)arg5;
+ (unsigned int)getBaseRequestExtFlag;
+ (id)genBaseRequest;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCGIProfile *bizCGIProfile; // @synthesize bizCGIProfile=_bizCGIProfile;
@property(nonatomic) _Bool reportWithoutSessionBuffer; // @synthesize reportWithoutSessionBuffer=_reportWithoutSessionBuffer;
@property(nonatomic) int innerScene; // @synthesize innerScene=_innerScene;
@property(copy, nonatomic) NSArray *objectBaseInfoKeys; // @synthesize objectBaseInfoKeys=_objectBaseInfoKeys;
@property(retain, nonatomic) NSMutableSet *baseProcessingToastErrorCodeSet; // @synthesize baseProcessingToastErrorCodeSet=_baseProcessingToastErrorCodeSet;
@property(nonatomic, getter=isCancelTask) _Bool cancelTask; // @synthesize cancelTask=_cancelTask;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(nonatomic) _Bool attachCGIProfileToResp; // @synthesize attachCGIProfileToResp=_attachCGIProfileToResp;
@property(nonatomic) _Bool needMonitorCGIProfile; // @synthesize needMonitorCGIProfile=_needMonitorCGIProfile;
@property(retain, nonatomic) WCFinderPrefetchCache *prefetchCache; // @synthesize prefetchCache=_prefetchCache;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (id)request;
- (void)showToastWithMsg:(id)arg1 cancel:(id)arg2 confirm:(id)arg3 confirmLink:(id)arg4;
- (void)addObjectBaseInfoWithSessionBufferModel:(id)arg1;
- (void)cancel;
- (void)reportCGIProfileWithWrap:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (_Bool)shouldAutoProcessingToastWithError:(id)arg1;
- (void)_updateClientFlagWithScene:(int)arg1;
- (unsigned int)additionalExptFlag;
- (id)additionalUdfKVInfo;
- (void)_updateTidInfos;
- (void)setFeedObjectBaseInfoKeysWithoutSessionBuffer:(id)arg1 scene:(int)arg2;
- (void)setFeedIDArrayWithoutSessionBuffer:(id)arg1 scene:(int)arg2;
- (void)setFeedObjectBaseInfoKeys:(id)arg1 scene:(int)arg2;
- (void)setFeedIDArray:(id)arg1 scene:(int)arg2 extraKey:(id)arg3;
- (void)setFeedIDArray:(id)arg1 scene:(int)arg2;
- (id)customSuccessfulRetCodeArray;
- (void)setRequest:(id)arg1;
- (void)start;
- (void)reportDropPrefetchCache:(id)arg1 reason:(unsigned long long)arg2;
- (_Bool)needADDeviceInfo;
- (void)clearPrefetchCache;
- (_Bool)checkIfConsumeRequestUseCache:(int)arg1;
- (_Bool)checkIfPrefetchRequestUseCache;
- (_Bool)checkIfUsePrefetch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

