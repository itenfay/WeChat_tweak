//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCCanvasAdVideoProgressBarDelegate <NSObject>
- (_Bool)shouldHideVoiceBtn;
- (_Bool)needIgnoreEdgeInset;
- (_Bool)isBtnClickable;
- (_Bool)isVideoExist;
- (void)onVideoOperationBtnCLick:(_Bool)arg1;
- (void)onFullscreenBtnClick:(_Bool)arg1;
- (void)onVoiceBtnClick:(_Bool)arg1;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
@end

