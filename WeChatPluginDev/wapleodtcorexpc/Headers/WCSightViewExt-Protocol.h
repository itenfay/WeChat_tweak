//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCSightView;

@protocol WCSightViewExt <NSObject>

@optional
- (void)onWCSightViewWillExitFullScreen:(WCSightView *)arg1;
- (void)onWCSightViewWillEnterFullScreen:(WCSightView *)arg1;
- (void)onViewSightOutFullScreen;
- (void)onViewSightInFullScreen;
@end

