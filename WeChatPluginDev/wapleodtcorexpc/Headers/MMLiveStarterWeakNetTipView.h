//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, UIScrollView, UIView;

@interface MMLiveStarterWeakNetTipView
{
    MMUILabel *_firstTipNumLabel;
    MMUILabel *_firstTipTitleLabel;
    MMUILabel *_firstTipDetailLabel;
    MMUILabel *_secTipNumLabel;
    MMUILabel *_secTipTitleLabel;
    MMUILabel *_secTipDetailLabel;
    MMUILabel *_bottomTipTitleLabel;
    MMUILabel *_bottomTipDetailLabel;
    _Bool _isShowing;
    unsigned long long _type;
    UIView *_contentView;
    MMUILabel *_titleLabel;
    MMUILabel *_otherTitleLabel;
    MMUIButton *_actionButton;
    UIScrollView *_contentScrollView;
}

+ (_Bool)isOverShowInterval;
+ (_Bool)needTestSpeed;
+ (_Bool)isCurrentNetNormal;
- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMUILabel *otherTitleLabel; // @synthesize otherTitleLabel=_otherTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidAppear;
- (void)actionButtonClick:(id)arg1;
@property(readonly, nonatomic) MMUILabel *bottomTipDetailLabel;
@property(readonly, nonatomic) MMUILabel *bottomTipTitleLabel;
@property(readonly, nonatomic) MMUILabel *secTipDetailLabel;
@property(readonly, nonatomic) MMUILabel *secTipTitleLabel;
@property(readonly, nonatomic) MMUILabel *secTipNumLabel;
@property(readonly, nonatomic) MMUILabel *firstTipDetailLabel;
@property(readonly, nonatomic) MMUILabel *firstTipTitleLabel;
@property(readonly, nonatomic) MMUILabel *firstTipNumLabel;
- (double)calcContentHeight;
- (double)contentViewHeight;
- (double)caculateBottomDeatilHeightWithText:(id)arg1 font:(id)arg2;
- (void)layoutCommentUI;
- (void)layoutLiveWeakNetUI;
- (void)layoutLiveBreakSound;
- (void)layoutStaterLiveWeakNet;
- (void)layoutLiveSilent;
- (void)layoutLiveWeakNet;
- (void)layoutUI;
- (void)initUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

