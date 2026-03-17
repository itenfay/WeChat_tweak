//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSData, NSString, WAContact;

@protocol WAWebViewPluginContextProtocol <NSObject>
- (NSData *)getFileData:(NSString *)arg1;
- (NSString *)getCurrentPageQuery;
- (NSString *)getCurrentPageRelativePath;
- (NSString *)getCurrentPagePath;
- (MMUIViewController *)getParentViewController;
- (_Bool)isNormalWeAppWithGameRuntime;
- (_Bool)isNormalWeApp;
- (_Bool)isSimulatedNativeWeApp;
- (_Bool)isGameApp;
- (WAContact *)getWAContact;
- (NSString *)getAppId;
- (unsigned long long)webviewPlugin_getEnvironmentType;
@end

