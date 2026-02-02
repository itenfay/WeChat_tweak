//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SnsTopListResponse;

@interface WCHomepageStarCGI
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    unsigned long long _currentContinueReqCount;
    SnsTopListResponse *_responseToProcess;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SnsTopListResponse *responseToProcess; // @synthesize responseToProcess=_responseToProcess;
@property(nonatomic) unsigned long long currentContinueReqCount; // @synthesize currentContinueReqCount=_currentContinueReqCount;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)getMergeResponse:(id)arg1;
- (void)startRequest:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)continueRequestWithMaxID:(unsigned long long)arg1;
- (id)init;

@end

