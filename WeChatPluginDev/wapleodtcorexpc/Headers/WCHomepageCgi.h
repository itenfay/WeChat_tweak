//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SnsUserPageRequest, SnsUserPageResponse;

@interface WCHomepageCgi
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    unsigned long long _currentContinueReqCount;
    SnsUserPageRequest *_originalRequest;
    SnsUserPageResponse *_responseToProcess;
    double _startTime;
    double _endTime;
}

- (void).cxx_destruct;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) SnsUserPageResponse *responseToProcess; // @synthesize responseToProcess=_responseToProcess;
@property(retain, nonatomic) SnsUserPageRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(nonatomic) unsigned long long currentContinueReqCount; // @synthesize currentContinueReqCount=_currentContinueReqCount;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void)exceptionReportThatReceivesNoFeedWithContinueIDWithResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)getMergeResponse:(id)arg1;
- (void)startRequest:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)continueRequestWithMaxID:(unsigned long long)arg1;
- (id)init;

@end

