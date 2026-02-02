//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol FBSDKBridgeAPIProtocol <NSObject>
- (NSDictionary *)responseParametersForActionID:(NSString *)arg1 queryParameters:(NSDictionary *)arg2 cancelled:(_Bool *)arg3 error:(id *)arg4;
- (NSURL *)requestURLWithActionID:(NSString *)arg1 scheme:(NSString *)arg2 methodName:(NSString *)arg3 methodVersion:(NSString *)arg4 parameters:(NSDictionary *)arg5 error:(id *)arg6;
@end

