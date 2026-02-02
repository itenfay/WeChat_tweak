//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, UIImageView, UIView;

@interface WCWebImageSourceInfoButton
{
    UIView *_roundBackView;
    UIView *_coverBackView;
    MMWebImageView *_iconImgView;
    UIImageView *_arrowImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) MMWebImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIView *coverBackView; // @synthesize coverBackView=_coverBackView;
@property(retain, nonatomic) UIView *roundBackView; // @synthesize roundBackView=_roundBackView;
- (void)layoutSubviews;
- (void)updateButtonContentWithImageURL:(id)arg1 title:(id)arg2 maxWidth:(double)arg3;
- (void)initArrowView;
- (void)initIconImgView;
- (id)init;

@end

