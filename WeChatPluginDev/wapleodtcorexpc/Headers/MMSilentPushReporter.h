//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURLSession;

@interface MMSilentPushReporter : NSObject
{
    NSURLSession *session;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

