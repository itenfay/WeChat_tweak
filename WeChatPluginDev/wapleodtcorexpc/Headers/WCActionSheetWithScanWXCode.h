//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetQRCodeInfoLogic, MMUIImageView, MMWebImageView, NSString, UILabel, UIView;

@interface WCActionSheetWithScanWXCode
{
    NSString *_appId;
    NSString *_codeNickname;
    NSString *_codeHeadImgUrl;
    NSString *_codeCompanyName;
    UILabel *_weAppOpLabel;
    UILabel *_titleLabel;
    UIView *_weAppSheetView;
    MMWebImageView *_codeHeadImgView;
    MMUIImageView *_loadingView;
    UILabel *_companyNameLabel;
    GetQRCodeInfoLogic *_getQRCodeInfoLogic;
    unsigned long long _actionSheetLastShowTimeStamp;
}

+ (_Bool)isItemTitleForCode:(id)arg1;
+ (_Bool)isItemTitleForMultiQRCode:(id)arg1;
+ (_Bool)isItemTitleForQRCode:(id)arg1;
+ (_Bool)isItemTitleForCustomQRCode:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long actionSheetLastShowTimeStamp; // @synthesize actionSheetLastShowTimeStamp=_actionSheetLastShowTimeStamp;
@property(retain, nonatomic) GetQRCodeInfoLogic *getQRCodeInfoLogic; // @synthesize getQRCodeInfoLogic=_getQRCodeInfoLogic;
@property(retain, nonatomic) UILabel *companyNameLabel; // @synthesize companyNameLabel=_companyNameLabel;
@property(retain, nonatomic) MMUIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMWebImageView *codeHeadImgView; // @synthesize codeHeadImgView=_codeHeadImgView;
@property(retain, nonatomic) UIView *weAppSheetView; // @synthesize weAppSheetView=_weAppSheetView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *weAppOpLabel; // @synthesize weAppOpLabel=_weAppOpLabel;
@property(retain, nonatomic) NSString *codeCompanyName; // @synthesize codeCompanyName=_codeCompanyName;
@property(retain, nonatomic) NSString *codeHeadImgUrl; // @synthesize codeHeadImgUrl=_codeHeadImgUrl;
@property(retain, nonatomic) NSString *codeNickname; // @synthesize codeNickname=_codeNickname;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void)removeCustomQRCodeItem;
- (void)updateAvatarAndOpLabel;
- (void)fallbackOnGetFailed;
- (void)onSheetItem:(id)arg1 makeView:(id)arg2;
- (void)reloadInnerView;
- (void)showInView:(id)arg1;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)arg1 qrCodeInfoItem:(id)arg2;
- (void)getQRCodeInfo:(int)arg1 codeStr:(id)arg2 session:(id)arg3;
- (void)setFinderCode:(id)arg1;
- (void)setPaymentCode:(id)arg1 getUrlInfoReqSession:(id)arg2;
- (void)setRewardCode:(id)arg1;
- (void)setWechatWorkCode:(id)arg1;
- (void)setPersonalCode:(id)arg1;
- (void)setGroupChatCode:(id)arg1;
- (void)setBrandCode:(id)arg1;
- (void)setWeAppCode:(id)arg1;
- (void)setCode:(int)arg1 codeStr:(id)arg2 session:(id)arg3;
- (void)setCode:(int)arg1 codeStr:(id)arg2;
- (void)insertItemAtIndex:(unsigned long long)arg1 logicCtrl:(id)arg2 qrCode:(id)arg3;
- (void)appendItemIfNeed:(id)arg1 qrCode:(id)arg2;
- (unsigned long long)actionSheetExposedDuration;
- (_Bool)hasCodeItem;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

