//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSDictionary, NSString;

@protocol GameCenterBannerNavBarProtocol <NSObject>
- (void)hideTabBar:(_Bool)arg1;
- (void)switchViewUnderNav:(_Bool)arg1 forViewController:(MMUIViewController *)arg2;
- (void)onViewController:(MMUIViewController *)arg1 recieveNavigationBarEvent:(NSString *)arg2 params:(NSDictionary *)arg3;
@end

