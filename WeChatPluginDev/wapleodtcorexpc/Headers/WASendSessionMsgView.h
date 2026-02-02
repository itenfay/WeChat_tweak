//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMWebImageView, NSData, NSString, UIButton, UIImageView, UILabel;
@protocol WASendSessionMsgViewDelegate;

@interface WASendSessionMsgView : UIView
{
    UILabel *_titleLabel;
    MMWebImageView *_imageView;
    MMUIActivityIndicatorView *_imageIndicatorView;
    UIImageView *_backgroundImageView;
    UIButton *_coverButton;
    NSString *_imageURL;
    NSData *_imageData;
    unsigned long long _scene;
    id <WASendSessionMsgViewDelegate> _viewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WASendSessionMsgViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
- (void)onLoadImageOK:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)onClickCoverButton;
- (id)getHighlightImageWithImageViewFrame:(struct CGRect)arg1;
- (void)initCoverButton;
- (void)initImageView;
- (void)initTitleLabel;
- (void)initBackgroundImage;
- (void)initView;
- (id)getLoadedImageData;
- (void)updateImageURL:(id)arg1 imageData:(id)arg2 hintTitle:(id)arg3;
- (void)updateImageURL:(id)arg1 imageData:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

