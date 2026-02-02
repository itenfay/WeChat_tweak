//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSError, NSString;

@interface WCMomentsAIImageGenerateCGI
{
    unsigned int _nextQueryInterval;
    unsigned int _maxRetryTimes;
    NSString *_clientID;
    NSArray *_originalURLs;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    NSError *_error;
    NSString *_taskID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int maxRetryTimes; // @synthesize maxRetryTimes=_maxRetryTimes;
@property(nonatomic) unsigned int nextQueryInterval; // @synthesize nextQueryInterval=_nextQueryInterval;
@property(copy, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(readonly, copy, nonatomic) NSArray *originalURLs; // @synthesize originalURLs=_originalURLs;
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (void)_initRequest;
- (id)initWithClientID:(id)arg1 originalURLs:(id)arg2;

@end

