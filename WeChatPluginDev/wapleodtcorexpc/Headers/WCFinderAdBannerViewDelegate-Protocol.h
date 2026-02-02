//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderAdBannerView;

@protocol WCFinderAdBannerViewDelegate <NSObject>

@optional
- (NSString *)videoTid;
- (_Bool)videoPauseState;
- (void)onClickAdBannerView:(WCFinderAdBannerView *)arg1;
@end

