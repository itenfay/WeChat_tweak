//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, WCPayNumberTipsModalViewData;
@protocol WCPayNumberTipsModalDelegate;

@interface WCPayNumberTipsModal : UIView
{
    id <WCPayNumberTipsModalDelegate> _delegate;
    UIView *_backgroundView;
    WCPayNumberTipsModalViewData *_viewModel;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIView *_upLine;
    UIView *_bottomLine;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIView *_btnsContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *btnsContentView; // @synthesize btnsContentView=_btnsContentView;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *upLine; // @synthesize upLine=_upLine;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WCPayNumberTipsModalViewData *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <WCPayNumberTipsModalDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dissmissView;
- (void)handleTap:(id)arg1;
- (void)showInView;
- (void)onTapConfirmBtn;
- (void)onTapCancelBtn;
- (void)updateView;
- (void)layoutSubviews;
- (id)initWithViewData:(id)arg1;

@end

