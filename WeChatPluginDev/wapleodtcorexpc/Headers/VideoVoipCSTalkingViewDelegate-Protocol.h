//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol VideoVoipCSTalkingViewDelegate <NSObject>

@optional
- (void)onVideoVoipCSTalkingViewHideStatusBar;
- (void)onVideoVoipCSTalkingViewShowStatusBar;
- (_Bool)onVideoVoipCSTalkingViewRequestMinimizeStatus;
- (_Bool)hasVideoVoipCSTalkingViewClickChangeToAudioMode;
- (void)onVideoVoipCSTalkingViewSwitchToSmall;
- (_Bool)isVideoVoipCSTalkingViewInitWithVideoMode;
- (void)onVideoVoipCSTalkingViewHangUp;
- (void)onVideoVoipCSTalkingViewEndCall;
@end

