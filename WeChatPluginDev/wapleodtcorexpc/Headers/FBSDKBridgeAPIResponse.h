//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKBridgeAPIRequest, NSDictionary, NSError, NSString;

@interface FBSDKBridgeAPIResponse : NSObject
{
    _Bool _cancelled;
    NSError *_error;
    FBSDKBridgeAPIRequest *_request;
    NSDictionary *_responseParameters;
}

+ (id)bridgeAPIResponseCancelledWithRequest:(id)arg1;
+ (id)bridgeAPIResponseWithRequest:(id)arg1 responseURL:(id)arg2 sourceApplication:(id)arg3 error:(id *)arg4;
+ (id)bridgeAPIResponseWithRequest:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *responseParameters; // @synthesize responseParameters=_responseParameters;
@property(readonly, copy, nonatomic) FBSDKBridgeAPIRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 responseParameters:(id)arg2 cancelled:(_Bool)arg3 error:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

