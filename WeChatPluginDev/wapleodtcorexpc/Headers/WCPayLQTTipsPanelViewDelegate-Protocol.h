//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinancialInfo_StaticVideo, FinancialInfo_VideoFeed, WCPlayerPlayArgs;

@protocol WCPayLQTTipsPanelViewDelegate <NSObject>
- (WCPlayerPlayArgs *)genStaticVideoPlayInfo:(FinancialInfo_StaticVideo *)arg1;
- (void)handleStaticVideoThumbImageClick:(FinancialInfo_StaticVideo *)arg1;
- (void)handleVideoFeedThumbImageClick:(FinancialInfo_VideoFeed *)arg1;

@optional
- (void)onLQTTipsPanelViewDismiss;
@end

