//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EditImageCropGridView, MMUIButton, MMUIView;
@protocol WCFinderHalfScreenEditFrameBlurViewDelegate;

@interface WCFinderHalfScreenEditFrameBlurView : UIView
{
    _Bool _hiddenCropGridView;
    MMUIButton *_cropFrameDownButton;
    id <WCFinderHalfScreenEditFrameBlurViewDelegate> _delegate;
    MMUIView *_headBlurView;
    MMUIView *_bottomBlurView;
    EditImageCropGridView *_cropGridView;
    struct CGSize _mediaSize;
    struct CGRect _initialRect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hiddenCropGridView; // @synthesize hiddenCropGridView=_hiddenCropGridView;
@property(retain, nonatomic) EditImageCropGridView *cropGridView; // @synthesize cropGridView=_cropGridView;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) struct CGRect initialRect; // @synthesize initialRect=_initialRect;
@property(retain, nonatomic) MMUIView *bottomBlurView; // @synthesize bottomBlurView=_bottomBlurView;
@property(retain, nonatomic) MMUIView *headBlurView; // @synthesize headBlurView=_headBlurView;
@property(nonatomic) __weak id <WCFinderHalfScreenEditFrameBlurViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MMUIButton *cropFrameDownButton; // @synthesize cropFrameDownButton=_cropFrameDownButton;
- (void)updateScrollViewLayoutViews;
- (void)panCropFrameButton:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)getCurrentCropRect;
- (id)createBlurView;
- (void)layoutViews;
- (void)layoutSubviews;
- (void)setupSubViews;
- (void)setupInitRectAndHiddenCropGridView:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 mediaSize:(struct CGSize)arg2;

@end

