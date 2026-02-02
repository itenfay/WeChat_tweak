//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, NFCCardTipsModalViewData, UIButton, UIImageView, UILabel;

@interface WCPayNFCCardTipsModal : UIView
{
    _Bool _isShowing;
    MMUIActivityIndicatorView *_loadingView;
    NFCCardTipsModalViewData *_viewData;
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_iconImageView;
    UIButton *_doneButton;
    CDUnknownBlockType _onDoneBlk;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    double _originHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onDoneBlk; // @synthesize onDoneBlk=_onDoneBlk;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NFCCardTipsModalViewData *viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
- (void)dissmiss;
- (void)showInView:(id)arg1;
- (void)onClickConfirmButton:(id)arg1;
- (void)updateContentView;
- (id)getStatusImage:(id)arg1;
- (void)updateBackgroundView;
- (void)updateView;
- (void)layoutSubviews;
- (void)updateViewWithData:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)setOnDoneCallBack:(CDUnknownBlockType)arg1;

@end

