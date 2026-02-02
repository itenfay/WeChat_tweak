//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetQRCodeInfoLogic, MMScrollableActionSheetVerticalRowInfo, MMWebImageView, NSString, UIButton, UIImageView, UILabel;
@protocol MMActionSheetQRCodeRowViewDelegate;

@interface MMActionSheetQRCodeRowView
{
    _Bool _isUrlInfoHasUpdated;
    unsigned int _businessType;
    MMScrollableActionSheetVerticalRowInfo *_rowInfo;
    id <MMActionSheetQRCodeRowViewDelegate> _delegate;
    UIButton *_backgroundButton;
    UIImageView *_loadingView;
    MMWebImageView *_iconImageView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    GetQRCodeInfoLogic *_qrCodeInfoLogic;
    NSString *_codeStr;
    NSString *_title;
}

+ (double)rowViewHeight;
- (void).cxx_destruct;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *codeStr; // @synthesize codeStr=_codeStr;
@property(nonatomic) _Bool isUrlInfoHasUpdated; // @synthesize isUrlInfoHasUpdated=_isUrlInfoHasUpdated;
@property(retain, nonatomic) GetQRCodeInfoLogic *qrCodeInfoLogic; // @synthesize qrCodeInfoLogic=_qrCodeInfoLogic;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIButton *backgroundButton; // @synthesize backgroundButton=_backgroundButton;
@property(nonatomic) __weak id <MMActionSheetQRCodeRowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMScrollableActionSheetVerticalRowInfo *rowInfo; // @synthesize rowInfo=_rowInfo;
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)arg1 qrCodeInfoItem:(id)arg2;
- (void)onGetQRCodeInfoResultFailure:(unsigned int)arg1;
- (void)updateRowInfoUseDefaultInfo:(unsigned int)arg1;
- (void)onTimeout:(id)arg1;
- (void)cancelQRCodeInfoCallback;
- (void)getQRCodeInfoWithSession:(id)arg1;
- (void)onTappedRowInfo;
- (void)layoutSubviews;
- (void)setupAllSubviews;
- (void)updateQRCodeInfoWithSession:(id)arg1;
- (id)initWithCodeType:(unsigned int)arg1 codeStr:(id)arg2 title:(id)arg3 getUrlInfoReqSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

