//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FBSDKBridgeAPIProtocolNativeV1, NSString;

@interface FBSDKBridgeAPIProtocolWebV2 : NSObject
{
    FBSDKBridgeAPIProtocolNativeV1 *_nativeProtocol;
}

- (void).cxx_destruct;
- (id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(_Bool *)arg3 error:(id *)arg4;
- (id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id *)arg6;
- (id)_requestURLForDialogConfiguration:(id)arg1 error:(id *)arg2;
- (id)_redirectURLWithActionID:(id)arg1 methodName:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

