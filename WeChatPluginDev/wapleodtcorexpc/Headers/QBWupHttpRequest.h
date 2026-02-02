//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSHTTPURLResponse, NSMutableData, NSMutableURLRequest;

@interface QBWupHttpRequest : NSObject
{
    NSMutableURLRequest *_request;
    NSMutableData *_data;
    long long _retryTimes;
    NSHTTPURLResponse *_rsp;
    NSData *_rspData;
    CDUnknownBlockType _CompletionBlock;
    CDUnknownBlockType _FailedBlock;
}

@property(copy) CDUnknownBlockType FailedBlock; // @synthesize FailedBlock=_FailedBlock;
@property(copy) CDUnknownBlockType CompletionBlock; // @synthesize CompletionBlock=_CompletionBlock;
- (void).cxx_destruct;
- (void)requestFinished;
- (void)failWithError:(id)arg1;
- (void)appendPostData:(id)arg1;
- (void)addRequestHeader:(id)arg1 value:(id)arg2;
- (void)setRequestMethod:(id)arg1;
- (long long)responseStatusCode;
- (id)responseHeaders;
- (id)responseData;
- (void)startAsynchronous;
- (id)initWithURL:(id)arg1;

@end

