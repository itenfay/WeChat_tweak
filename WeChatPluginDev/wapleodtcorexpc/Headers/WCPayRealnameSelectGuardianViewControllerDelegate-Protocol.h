//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, RouteInfo, TinyAppUri;

@protocol WCPayRealnameSelectGuardianViewControllerDelegate <NSObject>

@optional
- (void)selectGuardianViewControllerDidVerifyParentFromLiteApp:(_Bool)arg1 appid:(NSString *)arg2 path:(NSString *)arg3 query:(NSString *)arg4;
- (void)selectGuardianViewControllerRequestToHandleRouteInfo:(RouteInfo *)arg1;
- (void)selectGuardianViewControllerDidFinishWithTinyAppUri:(TinyAppUri *)arg1;
- (void)selectGuardianViewControllerDidCancel;
@end

