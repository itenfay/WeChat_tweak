//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLivePauseView, NSString, UIButton;

@protocol MMLivePauseViewDelegate <NSObject>
- (void)pauseViewPushWebViewController:(MMLivePauseView *)arg1 url:(NSString *)arg2;
- (void)pauseButtonCountdownEnded:(UIButton *)arg1;
- (void)pauseViewCountdownEnded:(MMLivePauseView *)arg1;
- (void)pauseViewStopPauseTimer:(MMLivePauseView *)arg1;
- (void)pauseView:(MMLivePauseView *)arg1 resumeButtonDidClick:(UIButton *)arg2;
@end

