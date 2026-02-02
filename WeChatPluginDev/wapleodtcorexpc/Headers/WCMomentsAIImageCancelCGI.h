//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSError, NSString;

@interface WCMomentsAIImageCancelCGI
{
    NSString *_taskID;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
@property(copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;
@property(readonly, copy, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)start;
- (void)_initRequest;
- (id)initWithTaskID:(id)arg1;

@end

