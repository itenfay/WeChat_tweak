//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface GCInviteTipView : UIView
{
    UIButton *_confirmBtn;
    UIImageView *_topIconView;
    UILabel *_titleView;
    UILabel *_descView;
    UIImageView *_contentImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *contentImgView; // @synthesize contentImgView=_contentImgView;
@property(retain, nonatomic) UILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *topIconView; // @synthesize topIconView=_topIconView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
- (void)configureWithConfig:(id)arg1;

@end

