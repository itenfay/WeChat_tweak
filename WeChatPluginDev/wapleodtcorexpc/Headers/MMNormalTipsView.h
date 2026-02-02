//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMNormalTipsViewCloseButtonConfig, MMUIButton, MMUILabel, NSAttributedString, NSString, UIColor, UIImageView;

@interface MMNormalTipsView
{
    _Bool _showCloseButton;
    _Bool _showArrowImage;
    unsigned int _payment;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMUILabel *_giftDescLabel;
    MMUIButton *_closeButton;
    UIImageView *_arrowImageView;
    UIColor *_titleColor;
    UIColor *_descColor;
    double _edgeTop;
    double _edgeLR;
    id _userInfo;
    CDUnknownBlockType _tapAction;
    MMNormalTipsViewCloseButtonConfig *_closeButtonConfig;
}

+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 withCloseButton:(_Bool)arg5 minWidth:(double)arg6 maxWidth:(double)arg7 titleFont:(id)arg8 edgeTop:(double)arg9 edgeLR:(double)arg10;
+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 withCloseButton:(_Bool)arg5 minWidth:(double)arg6 maxWidth:(double)arg7 titleFont:(id)arg8;
+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 withCloseButton:(_Bool)arg5 minWidth:(double)arg6 maxWidth:(double)arg7;
+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 withCloseButton:(_Bool)arg3 minWidth:(double)arg4 maxWidth:(double)arg5 titleFont:(id)arg6;
+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 withCloseButton:(_Bool)arg3 minWidth:(double)arg4 maxWidth:(double)arg5;
+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 payment:(unsigned int)arg3 giftDesc:(id)arg4 minWidth:(double)arg5 maxWidth:(double)arg6;
+ (struct CGSize)viewSizeByTitle:(id)arg1 desc:(id)arg2 minWidth:(double)arg3 maxWidth:(double)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) MMNormalTipsViewCloseButtonConfig *closeButtonConfig; // @synthesize closeButtonConfig=_closeButtonConfig;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double edgeLR; // @synthesize edgeLR=_edgeLR;
@property(nonatomic) double edgeTop; // @synthesize edgeTop=_edgeTop;
@property(nonatomic) _Bool showArrowImage; // @synthesize showArrowImage=_showArrowImage;
@property(nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(retain, nonatomic) UIColor *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) unsigned int payment; // @synthesize payment=_payment;
@property(readonly, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(readonly, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) MMUILabel *giftDescLabel; // @synthesize giftDescLabel=_giftDescLabel;
@property(readonly, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(readonly, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (double)selfCornerRadius;
- (double)triangeArrowHeight;
- (double)triangeArrowWidth;
@property(retain, nonatomic) NSAttributedString *attriButedDesc;
- (void)removeAllSubViews;
@property(retain, nonatomic) NSString *giftDesc;
@property(retain, nonatomic) NSString *desc;
- (void)setAttributeTitle:(id)arg1;
@property(retain, nonatomic) NSString *title;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 withCloseButton:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 withCloseButtonConfig:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 titleColor:(id)arg3 edgeTop:(double)arg4 edgeLR:(double)arg5 withCloseButtonConfig:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(long long)arg2 titleColor:(id)arg3 withCloseButtonConfig:(id)arg4;

@end

