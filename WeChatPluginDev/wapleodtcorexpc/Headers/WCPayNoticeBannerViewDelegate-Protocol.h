//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayNoticeBannerView;

@protocol WCPayNoticeBannerViewDelegate <NSObject>
- (void)onWCPayNoticeBannerView:(WCPayNoticeBannerView *)arg1 clickWithUrl:(NSString *)arg2;
@end

