//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderJumpInfoViewBaseDelegate-Protocol.h"

@class NSString, WCFinderHotSpotBannerView;

@protocol WCFinderHotSpotBannerViewDelegate <WCFinderJumpInfoViewBaseDelegate>

@optional
- (NSString *)videoTid;
- (_Bool)videoPauseState;
- (void)onClickClipVideoTemplate;
- (void)onClickEnterLiving:(WCFinderHotSpotBannerView *)arg1;
- (void)onClickHotSpotView:(WCFinderHotSpotBannerView *)arg1;
@end

