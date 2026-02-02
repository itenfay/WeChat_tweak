//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UINavigationController;

@protocol WCWeAppBizTempSessionHelperDelegate <NSObject>

@optional
- (UINavigationController *)getTempSessionNavigationController;
- (void)bizTempSessionEndWithError:(NSString *)arg1;
- (void)bizTempSessionEndWithSuccess:(NSDictionary *)arg1;
- (void)bizTempSessionJumpWithSuccess:(NSDictionary *)arg1;
- (void)stopBizTempSessionLoadingView;
- (void)startBizTempSessionLoadingView;
@end

