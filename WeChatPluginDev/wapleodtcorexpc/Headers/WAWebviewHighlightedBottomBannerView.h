//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class MMWebImageView, NSString, UIImageView, UILabel, UIView;

@interface WAWebviewHighlightedBottomBannerView : UIButton
{
    NSString *_title;
    NSString *_iconUrl;
    UIView *_highlightMaskView;
    MMWebImageView *_iconImgView;
    UILabel *_nicknameLabel;
    UILabel *_descLabel;
    UIImageView *_descArrowImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *descArrowImgView; // @synthesize descArrowImgView=_descArrowImgView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) MMWebImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIView *highlightMaskView; // @synthesize highlightMaskView=_highlightMaskView;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (void)reloadData;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

