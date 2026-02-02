//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCCanvasAdControlViewDelegate <NSObject>

@optional
- (_Bool)shouldHideVoiceBtn;
- (_Bool)shouldAdaptProgressBarFrame;
- (void)onControlViewDoubleTap;
- (void)onControlViewSingleTap;
- (void)onFullscreenBtnClick:(_Bool)arg1;
- (void)onProgressBarActionBtnClick:(_Bool)arg1;
- (void)onAudioButtonClick:(_Bool)arg1;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onGetVideoSize:(struct CGSize)arg1;
- (void)onToolViewAutoClose;
- (void)onLoopPlayToEnd;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onTapSightIconView;
- (void)onSightIconProgressEnd;
@end

