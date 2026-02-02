//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJTemplateFullScreenControlViewParams, NSString, WCPlayerConfigFullScreenProgressBar, WCPlayerShareableButton;
@protocol MJTemplateFullScreenControlViewDelegate;

@interface MJTemplateFullScreenControlView : UIView
{
    id <MJTemplateFullScreenControlViewDelegate> _delegate;
    MJTemplateFullScreenControlViewParams *_params;
    WCPlayerShareableButton *_shareButton;
    WCPlayerConfigFullScreenProgressBar *_progressBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerConfigFullScreenProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) WCPlayerShareableButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) MJTemplateFullScreenControlViewParams *params; // @synthesize params=_params;
@property(nonatomic) __weak id <MJTemplateFullScreenControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSetPlayBackRate:(double)arg1;
- (CDStruct_1b6d18a9)getCurrentPlaybackTime;
- (void)onSliderSeekToTime:(float)arg1;
- (void)onSliderScrubbBegin;
- (void)onSliderChangeTo:(float)arg1;
- (void)onSliderPlayVideo;
- (void)onSliderPauseVideo;
- (void)onProgressBarHidden;
- (void)onClickShareButton:(id)arg1;
- (void)layoutSubviews;
- (void)initProgressBarIfNeeded;
- (void)initShareButtonIfNeeded;
- (void)initView;
- (void)onPlayStop;
- (void)onPlayStart;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

