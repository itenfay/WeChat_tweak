//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class EditImageCropGridView, MMUIButton, MMUIView, RichTextView;
@protocol WCFinderFullScreenEditFrameBlurViewDelegate;

@interface WCFinderFullScreenEditFrameBlurView : UIView
{
    _Bool _hiddenEditTipsRichTextView;
    MMUIButton *_cropFrameDownButton;
    id <WCFinderFullScreenEditFrameBlurViewDelegate> _delegate;
    MMUIView *_headBlurView;
    MMUIView *_bottomBlurView;
    EditImageCropGridView *_cropGridView;
    RichTextView *_editTipsRichTextView;
    struct CGSize _mediaSize;
    struct CGRect _initialRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RichTextView *editTipsRichTextView; // @synthesize editTipsRichTextView=_editTipsRichTextView;
@property(nonatomic) _Bool hiddenEditTipsRichTextView; // @synthesize hiddenEditTipsRichTextView=_hiddenEditTipsRichTextView;
@property(retain, nonatomic) EditImageCropGridView *cropGridView; // @synthesize cropGridView=_cropGridView;
@property(nonatomic) struct CGRect initialRect; // @synthesize initialRect=_initialRect;
@property(retain, nonatomic) MMUIView *bottomBlurView; // @synthesize bottomBlurView=_bottomBlurView;
@property(retain, nonatomic) MMUIView *headBlurView; // @synthesize headBlurView=_headBlurView;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
@property(nonatomic) __weak id <WCFinderFullScreenEditFrameBlurViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MMUIButton *cropFrameDownButton; // @synthesize cropFrameDownButton=_cropFrameDownButton;
- (void)updateScrollViewLayoutViews;
- (void)panCropFrameButton:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)getFullScreenCropRect;
- (struct CGRect)getCurrentCropRectInScreen;
- (id)createBlurView;
- (void)updateEditTipsRichTextCenterY:(double)arg1 margin:(double)arg2 hidden:(_Bool)arg3;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1 cropGridViewFrame:(struct CGRect)arg2 mediaSize:(struct CGSize)arg3 hiddenEditTipsRichTextView:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 cropThumbSize:(struct CGSize)arg2 mediaSize:(struct CGSize)arg3 hiddenEditTipsRichTextView:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

