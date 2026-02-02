//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MJPublisherMovieCompositionTask, UIImageView;

@interface MJClipBundlePresentationView : UIView
{
    _Bool _isPreviousTansAnimationDone;
    MJPublisherMovieCompositionTask *_compositeTask;
    long long _imageIndex;
    UIImageView *_backgroundImageView;
    UIImageView *_transitionImageViewOne;
    UIImageView *_transitionImageViewTwo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *transitionImageViewTwo; // @synthesize transitionImageViewTwo=_transitionImageViewTwo;
@property(retain, nonatomic) UIImageView *transitionImageViewOne; // @synthesize transitionImageViewOne=_transitionImageViewOne;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) _Bool isPreviousTansAnimationDone; // @synthesize isPreviousTansAnimationDone=_isPreviousTansAnimationDone;
@property(nonatomic) long long imageIndex; // @synthesize imageIndex=_imageIndex;
@property(readonly, nonatomic) MJPublisherMovieCompositionTask *compositeTask; // @synthesize compositeTask=_compositeTask;
- (void)handleBackingExportTaskHasFinishedNoti:(id)arg1;
- (void)setupNotifications;
- (void)updatePreviewImageAnimated:(id)arg1;
- (void)setupVideoFrameCallback;
- (void)commonInit;
- (id)initWithCompositeTask:(id)arg1;

@end

