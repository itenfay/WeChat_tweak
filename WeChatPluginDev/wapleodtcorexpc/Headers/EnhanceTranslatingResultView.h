//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView;

@interface EnhanceTranslatingResultView : UIView
{
    UIButton *_cancelButton;
    UIImageView *_contentImageView;
    UIImage *_originCaptureImage;
    UIImage *_originEnhanceImage;
    CDUnknownBlockType _cancelHandler;
    CDUnknownBlockType _imageClickHandler;
    CDUnknownBlockType _autoTranslatingFinishedHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType autoTranslatingFinishedHandler; // @synthesize autoTranslatingFinishedHandler=_autoTranslatingFinishedHandler;
@property(copy, nonatomic) CDUnknownBlockType imageClickHandler; // @synthesize imageClickHandler=_imageClickHandler;
@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(retain, nonatomic) UIImage *originEnhanceImage; // @synthesize originEnhanceImage=_originEnhanceImage;
@property(retain, nonatomic) UIImage *originCaptureImage; // @synthesize originCaptureImage=_originCaptureImage;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)translateImageClicked;
- (void)cancelButtonClicked;
- (void)setDisplayImage:(id)arg1 imgSize:(struct CGSize)arg2;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

