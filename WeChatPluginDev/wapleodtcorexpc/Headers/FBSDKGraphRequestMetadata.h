//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKGraphRequest, NSDictionary;

@interface FBSDKGraphRequestMetadata : NSObject
{
    FBSDKGraphRequest *_request;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_batchParameters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *batchParameters; // @synthesize batchParameters=_batchParameters;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) FBSDKGraphRequest *request; // @synthesize request=_request;
- (id)description;
- (void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3;

@end

