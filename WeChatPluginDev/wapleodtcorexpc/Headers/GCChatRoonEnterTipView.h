//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMWebImageView, UIButton, UILabel;

@interface GCChatRoonEnterTipView : UIView
{
    UIButton *_confirmBtn;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    MMWebImageView *_imgView;
    UILabel *_condtionTipLabel;
    MMWebImageView *_backGroundImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *backGroundImgView; // @synthesize backGroundImgView=_backGroundImgView;
@property(retain, nonatomic) UILabel *condtionTipLabel; // @synthesize condtionTipLabel=_condtionTipLabel;
@property(retain, nonatomic) MMWebImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
- (void)layoutLabel:(id)arg1 isAttributeText:(_Bool)arg2;
- (void)configureWithConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

