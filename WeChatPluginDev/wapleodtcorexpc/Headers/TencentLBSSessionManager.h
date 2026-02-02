//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURLSession, NSURLSessionConfiguration;

@interface TencentLBSSessionManager : NSObject
{
    NSURLSession *_session;
    NSURLSessionConfiguration *_sessionConfiguration;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;

@end

