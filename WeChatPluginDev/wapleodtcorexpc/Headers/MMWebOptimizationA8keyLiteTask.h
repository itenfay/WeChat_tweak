//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebOptimizationA8keyLiteTaskRequest, NSMutableSet;

@interface MMWebOptimizationA8keyLiteTask
{
    _Bool _isCancel;
    MMWebOptimizationA8keyLiteTaskRequest *_request;
    CDUnknownBlockType _completionHandler;
    NSMutableSet *_setA8keyLiteRequestingUrlString;
}

+ (id)netTypeString;
+ (unsigned int)generateSendSequence;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(retain, nonatomic) NSMutableSet *setA8keyLiteRequestingUrlString; // @synthesize setA8keyLiteRequestingUrlString=_setA8keyLiteRequestingUrlString;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) MMWebOptimizationA8keyLiteTaskRequest *request; // @synthesize request=_request;
- (void)onResponseGetA8KeyLite:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)parsePrefetchDomainInfoFromResponse:(id)arg1 requestId2Params:(id)arg2;
- (id)parseUrlControlDataFromResponse:(id)arg1 requestId2Params:(id)arg2;
- (id)parseDomainControlDataFromResponse:(id)arg1;
- (void)processGetA8KeyLiteResponse:(id)arg1 requestId2Params:(id)arg2;
- (void)processGetA8KeyLiteResponseFailWithRequestId2Params:(id)arg1;
- (void)mainThread_callBackSuccessWithResult:(id)arg1;
- (void)mainThread_callBackFailWithResult:(id)arg1;
- (_Bool)isInRequestingWithUrlString:(id)arg1;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

