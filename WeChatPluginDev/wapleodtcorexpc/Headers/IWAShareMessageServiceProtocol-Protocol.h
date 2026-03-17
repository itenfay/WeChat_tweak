//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAWebViewController;

@protocol IWAShareMessageServiceProtocol <NSObject>
+ (void)shareScreenshotWithAssetId:(NSString *)arg1 webVC:(WAWebViewController *)arg2 completion:(void (^)(_Bool))arg3;
@end

