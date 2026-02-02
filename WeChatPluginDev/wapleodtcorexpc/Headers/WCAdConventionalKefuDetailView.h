//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, ColorGradientView, MMHeadImageView, UILabel, WCAdCustomerServiceConfirmInfo;

@interface WCAdConventionalKefuDetailView
{
    _Bool _isInHalfScreenMode;
    WCAdCustomerServiceConfirmInfo *_confirmInfo;
    CContact *_contact;
    UILabel *_kefuTitle;
    UILabel *_kefuDesc;
    MMHeadImageView *_kefuIconView;
    UILabel *_kefuNickname;
    UILabel *_kefuTailName;
    ColorGradientView *_bottomMaskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ColorGradientView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UILabel *kefuTailName; // @synthesize kefuTailName=_kefuTailName;
@property(retain, nonatomic) UILabel *kefuNickname; // @synthesize kefuNickname=_kefuNickname;
@property(retain, nonatomic) MMHeadImageView *kefuIconView; // @synthesize kefuIconView=_kefuIconView;
@property(retain, nonatomic) UILabel *kefuDesc; // @synthesize kefuDesc=_kefuDesc;
@property(retain, nonatomic) UILabel *kefuTitle; // @synthesize kefuTitle=_kefuTitle;
@property(nonatomic) _Bool isInHalfScreenMode; // @synthesize isInHalfScreenMode=_isInHalfScreenMode;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) WCAdCustomerServiceConfirmInfo *confirmInfo; // @synthesize confirmInfo=_confirmInfo;
- (void)updateTailNameWithAppid:(id)arg1;
- (void)layoutUIContents;
- (void)setupUIContents;
- (id)generateComplicatedLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 confirmInfo:(id)arg2 contact:(id)arg3 isInHalfScreenMode:(_Bool)arg4;

@end

