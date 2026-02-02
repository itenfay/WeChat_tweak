//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol BannerToastExt <NSObject>

@optional
- (void)onReceiveSecurityBannerMsg:(NSString *)arg1 withData:(NSDictionary *)arg2;
- (void)onReceiveNewFriendRecommandMsg:(NSString *)arg1;
- (void)onBannerUpdate;
@end

