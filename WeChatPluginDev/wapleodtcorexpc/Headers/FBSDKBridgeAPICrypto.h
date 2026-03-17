//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKBridgeAPICrypto : NSObject
{
}

+ (id)_resetCipherKey;
+ (id)_cipherKey;
+ (void)reset;
+ (id)decryptResponseForRequest:(id)arg1 queryParameters:(id)arg2 error:(id *)arg3;
+ (void)addCipherKeyToQueryParameters:(id)arg1;

@end

