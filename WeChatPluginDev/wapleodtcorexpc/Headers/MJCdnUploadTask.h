//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJCdnUploadRequest, MJCdnUploadResult, NSError, NSString;

@interface MJCdnUploadTask : NSObject
{
    NSString *_taskKey;
    MJCdnUploadRequest *_request;
    long long _state;
    MJCdnUploadResult *_result;
    NSError *_error;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) MJCdnUploadResult *result; // @synthesize result=_result;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) MJCdnUploadRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
- (void)callCompletionHandler;
- (void)didFailWithError:(id)arg1;
- (void)didCompleteWithTaskInfo:(id)arg1;
- (struct C2CUploadRequest)createCdnReqeust;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1;
- (id)init;

@end

