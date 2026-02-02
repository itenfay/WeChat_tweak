//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WCPayNativeCgiTunnelImplDelegate <NSObject>
- (void)onNativeCgiTunnelFail:(NSString *)arg1;
- (void)onNativeCgiTunnelSuccess:(NSDictionary *)arg1;
@end

