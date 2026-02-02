//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSURLSession;

@interface CRRequestSession : NSObject
{
    NSURLSession *_session;
    NSOperationQueue *_queue;
    NSMutableDictionary *_headers;
}

+ (id)sessionWithURLSession:(id)arg1 queue:(id)arg2;
+ (id)sessionWithURLSession:(id)arg1;
+ (id)session;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (id)operationWithRequest:(id)arg1 retryCount:(long long)arg2 retryWhere:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelAllRequests;
- (void)dataTaskWithRequest:(id)arg1 retryCount:(long long)arg2 retryWhere:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forHeader:(id)arg2;
- (id)initWithURLSession:(id)arg1 queue:(id)arg2;

@end

