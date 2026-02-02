//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BluetoothInfo, DynamicQrCodeInfo, NSArray, NSString, WCCardActionSheet, WCCardDetailInfo, WCCardFieldItem, WCCardFollowBoxInfo, WCCardOperationRegion, WCCardUseConditionInfo, WCCardUsedStoreInfo;

@interface WCCardDataCardTPInfo
{
    _Bool _isCardCodeExposed;
    _Bool _dismissQrcodeIconOnCard;
    _Bool _isNeedLocation;
    _Bool _needDirectjump;
    _Bool _hasHongbao;
    _Bool _isAcceptable;
    _Bool _isShowAcceptView;
    unsigned int _cardType;
    unsigned int _shopCount;
    unsigned int _blockMask;
    unsigned int _controlflag;
    unsigned int _genType;
    unsigned int _qrcodeCorrectLevel;
    NSString *_cardTypeName;
    NSString *_cardCategory;
    NSString *_acceptWording;
    NSString *_buttonWording;
    NSString *_appId;
    NSString *_appUserName;
    NSString *_primarySubTitle;
    NSString *_middleIconUrl;
    NSString *_notice;
    NSString *_servicePhone;
    NSArray *_introduceFields;
    NSString *_imageTextUrl;
    NSString *_sourceIconUrl;
    NSString *_source;
    NSString *_h5ShowUrl;
    WCCardUsedStoreInfo *_oneShopInfo;
    NSString *_advertiseWording;
    NSString *_advertiseUrl;
    NSString *_publicServiceName;
    NSString *_publicServiceTip;
    WCCardOperationRegion *_announcement;
    NSString *_cardTpId;
    WCCardDetailInfo *_detailInfo;
    WCCardUseConditionInfo *_usedCondition;
    WCCardFollowBoxInfo *_followBoxInfo;
    WCCardActionSheet *_guidanceAction;
    DynamicQrCodeInfo *_dynamicQrCodeItem;
    NSString *_bizNickname;
    NSString *_color;
    NSString *_logoUrl;
    NSString *_logoName;
    NSArray *_primaryFields;
    NSString *_advertiseTinyAppUsername;
    NSString *_advertiseTinyAppPath;
    NSString *_title;
    NSString *_acceptTitle;
    WCCardFieldItem *_brandField;
    NSString *_cardExt;
    NSString *_unacceptableWording;
    NSString *_shopName;
    WCCardFieldItem *_payAndQrcodeField;
    BluetoothInfo *_bleInfo;
    NSString *_giftTitle;
    NSString *_brandIconUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_primaryFields;
+ (void)PBArrayAdd_logoName;
+ (void)PBArrayAdd_logoUrl;
+ (void)PBArrayAdd_color;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl=_brandIconUrl;
@property(retain, nonatomic) NSString *giftTitle; // @synthesize giftTitle=_giftTitle;
@property(retain, nonatomic) BluetoothInfo *bleInfo; // @synthesize bleInfo=_bleInfo;
@property(retain, nonatomic) WCCardFieldItem *payAndQrcodeField; // @synthesize payAndQrcodeField=_payAndQrcodeField;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(nonatomic) _Bool isShowAcceptView; // @synthesize isShowAcceptView=_isShowAcceptView;
@property(retain, nonatomic) NSString *unacceptableWording; // @synthesize unacceptableWording=_unacceptableWording;
@property(nonatomic) _Bool isAcceptable; // @synthesize isAcceptable=_isAcceptable;
@property(nonatomic) _Bool hasHongbao; // @synthesize hasHongbao=_hasHongbao;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) WCCardFieldItem *brandField; // @synthesize brandField=_brandField;
@property(nonatomic) _Bool needDirectjump; // @synthesize needDirectjump=_needDirectjump;
@property(retain, nonatomic) NSString *acceptTitle; // @synthesize acceptTitle=_acceptTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *advertiseTinyAppPath; // @synthesize advertiseTinyAppPath=_advertiseTinyAppPath;
@property(retain, nonatomic) NSString *advertiseTinyAppUsername; // @synthesize advertiseTinyAppUsername=_advertiseTinyAppUsername;
@property(retain, nonatomic) NSArray *primaryFields; // @synthesize primaryFields=_primaryFields;
@property(retain, nonatomic) NSString *logoName; // @synthesize logoName=_logoName;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *bizNickname; // @synthesize bizNickname=_bizNickname;
@property(nonatomic) _Bool isNeedLocation; // @synthesize isNeedLocation=_isNeedLocation;
@property(nonatomic) unsigned int qrcodeCorrectLevel; // @synthesize qrcodeCorrectLevel=_qrcodeCorrectLevel;
@property(nonatomic) _Bool dismissQrcodeIconOnCard; // @synthesize dismissQrcodeIconOnCard=_dismissQrcodeIconOnCard;
@property(nonatomic) _Bool isCardCodeExposed; // @synthesize isCardCodeExposed=_isCardCodeExposed;
@property(retain, nonatomic) DynamicQrCodeInfo *dynamicQrCodeItem; // @synthesize dynamicQrCodeItem=_dynamicQrCodeItem;
@property(retain, nonatomic) WCCardActionSheet *guidanceAction; // @synthesize guidanceAction=_guidanceAction;
@property(retain, nonatomic) WCCardFollowBoxInfo *followBoxInfo; // @synthesize followBoxInfo=_followBoxInfo;
@property(retain, nonatomic) WCCardUseConditionInfo *usedCondition; // @synthesize usedCondition=_usedCondition;
@property(retain, nonatomic) WCCardDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId=_cardTpId;
@property(nonatomic) unsigned int genType; // @synthesize genType=_genType;
@property(retain, nonatomic) WCCardOperationRegion *announcement; // @synthesize announcement=_announcement;
@property(retain, nonatomic) NSString *publicServiceTip; // @synthesize publicServiceTip=_publicServiceTip;
@property(retain, nonatomic) NSString *publicServiceName; // @synthesize publicServiceName=_publicServiceName;
@property(retain, nonatomic) NSString *advertiseUrl; // @synthesize advertiseUrl=_advertiseUrl;
@property(retain, nonatomic) NSString *advertiseWording; // @synthesize advertiseWording=_advertiseWording;
@property(nonatomic) unsigned int controlflag; // @synthesize controlflag=_controlflag;
@property(retain, nonatomic) WCCardUsedStoreInfo *oneShopInfo; // @synthesize oneShopInfo=_oneShopInfo;
@property(nonatomic) unsigned int blockMask; // @synthesize blockMask=_blockMask;
@property(retain, nonatomic) NSString *h5ShowUrl; // @synthesize h5ShowUrl=_h5ShowUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *sourceIconUrl; // @synthesize sourceIconUrl=_sourceIconUrl;
@property(retain, nonatomic) NSString *imageTextUrl; // @synthesize imageTextUrl=_imageTextUrl;
@property(nonatomic) unsigned int shopCount; // @synthesize shopCount=_shopCount;
@property(retain, nonatomic) NSArray *introduceFields; // @synthesize introduceFields=_introduceFields;
@property(retain, nonatomic) NSString *servicePhone; // @synthesize servicePhone=_servicePhone;
@property(retain, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(retain, nonatomic) NSString *middleIconUrl; // @synthesize middleIconUrl=_middleIconUrl;
@property(retain, nonatomic) NSString *primarySubTitle; // @synthesize primarySubTitle=_primarySubTitle;
@property(retain, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *buttonWording; // @synthesize buttonWording=_buttonWording;
@property(retain, nonatomic) NSString *acceptWording; // @synthesize acceptWording=_acceptWording;
@property(retain, nonatomic) NSString *cardCategory; // @synthesize cardCategory=_cardCategory;
@property(retain, nonatomic) NSString *cardTypeName; // @synthesize cardTypeName=_cardTypeName;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

