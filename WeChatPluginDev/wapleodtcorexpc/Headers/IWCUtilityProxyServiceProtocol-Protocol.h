//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCUtilityProxyServiceProtocol <NSObject>
+ (_Bool)isWmpfProject;

@optional
+ (NSString *)hostAppId;
+ (unsigned int)wmpfSdkVersion;
+ (NSString *)wmpfWechatBundleVersion;
+ (NSString *)customDocumentRootDir;
@end

