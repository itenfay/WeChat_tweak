//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton;
@protocol WCFinderEditFrameBlurViewDelegate;

@interface WCFinderEditFrameBlurView : UIView
{
    _Bool _forbiddenFrameCrop;
    MMUIButton *_cropFrameDownButton;
    id <WCFinderEditFrameBlurViewDelegate> _delegate;
    MMUIButton *_headBlurView;
    MMUIButton *_bottomBlurView;
    MMUIButton *_cropFrameUpButton;
    struct CGRect _visibleFrame;
    struct CGRect _initialRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forbiddenFrameCrop; // @synthesize forbiddenFrameCrop=_forbiddenFrameCrop;
@property(nonatomic) struct CGRect initialRect; // @synthesize initialRect=_initialRect;
@property(retain, nonatomic) MMUIButton *cropFrameUpButton; // @synthesize cropFrameUpButton=_cropFrameUpButton;
@property(retain, nonatomic) MMUIButton *bottomBlurView; // @synthesize bottomBlurView=_bottomBlurView;
@property(retain, nonatomic) MMUIButton *headBlurView; // @synthesize headBlurView=_headBlurView;
@property(nonatomic) struct CGRect visibleFrame; // @synthesize visibleFrame=_visibleFrame;
@property(nonatomic) __weak id <WCFinderEditFrameBlurViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMUIButton *cropFrameDownButton; // @synthesize cropFrameDownButton=_cropFrameDownButton;
- (void)updateScrollViewLayoutViews;
- (void)panCropFrameButton:(id)arg1;
- (void)setCropFrameButtonHidden:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)getCurrentCropRect;
- (id)createBlurView;
- (void)onTap;
- (void)layoutSubviews;
- (void)setupSubViews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 visibleFrame:(struct CGRect)arg2 forbiddenFrameCrop:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 visibleFrame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

