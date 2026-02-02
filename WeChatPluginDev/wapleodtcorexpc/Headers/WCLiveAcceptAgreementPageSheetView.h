//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface WCLiveAcceptAgreementPageSheetView
{
    UIView *_contentView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSString *_title;
    NSString *_message;
    UIImage *_iconImage;
    CDUnknownBlockType _confirmCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType confirmCallback; // @synthesize confirmCallback=_confirmCallback;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)contentViewHeight;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initViews;
- (id)initWithTitle:(id)arg1 message:(id)arg2 iconImage:(id)arg3 confirmCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

