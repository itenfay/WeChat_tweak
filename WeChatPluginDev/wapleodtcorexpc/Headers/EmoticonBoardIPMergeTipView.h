//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSMutableArray, UIButton, UIImageView, UILabel;
@protocol EmoticonBoardIPMergeTipViewDelegate;

@interface EmoticonBoardIPMergeTipView
{
    id <EmoticonBoardIPMergeTipViewDelegate> _delegate;
    double _bottomInset;
    UILabel *_tipsLabel;
    NSMutableArray *_iconViewArray;
    UIImageView *_arrowView;
    MMWebImageView *_ipIconView;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMWebImageView *ipIconView; // @synthesize ipIconView=_ipIconView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) NSMutableArray *iconViewArray; // @synthesize iconViewArray=_iconViewArray;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) __weak id <EmoticonBoardIPMergeTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onTapConfirm;
- (void)createOrUpdateLayout;
- (void)layoutSubviews;
- (id)genIconViewFromIPSetKey:(id)arg1;
- (id)genIconViewFromPageWrap:(id)arg1;
- (id)genConfirmButtonWithDarkMode;
- (void)updateOriginPackages:(id)arg1 ipSetKey:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

