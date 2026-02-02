//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCCardDetailTable, WCCardFieldItem;

@interface WCCardDataCardInfo
{
    _Bool _isCommomCard;
    _Bool _isLocationAuthorized;
    unsigned int _codeType;
    unsigned int _status;
    unsigned int _avilNumber;
    unsigned int _stockNumber;
    unsigned int _limitNumber;
    NSString *_code;
    NSString *_reportUrl;
    NSArray *_secondaryFields;
    WCCardFieldItem *_thirdField;
    NSArray *_cellList0;
    NSArray *_cellList1;
    NSArray *_cellList2;
    NSArray *_actionSheetList;
    WCCardFieldItem *_cardListField;
    WCCardFieldItem *_operateField;
    WCCardFieldItem *_limitField;
    NSString *_signNumber;
    WCCardFieldItem *_unavailableQrcodeField;
    NSString *_fromUserName;
    WCCardDetailTable *_detailTable;
    NSString *_backgroundPicUrl;
    WCCardFieldItem *_giftingInfoField;
    WCCardFieldItem *_finderField;
    WCCardFieldItem *_feedField;
}

+ (void)initialize;
+ (void)PBArrayAdd_fromUserName;
- (void).cxx_destruct;
@property(retain, nonatomic) WCCardFieldItem *feedField; // @synthesize feedField=_feedField;
@property(retain, nonatomic) WCCardFieldItem *finderField; // @synthesize finderField=_finderField;
@property(retain, nonatomic) WCCardFieldItem *giftingInfoField; // @synthesize giftingInfoField=_giftingInfoField;
@property(retain, nonatomic) NSString *backgroundPicUrl; // @synthesize backgroundPicUrl=_backgroundPicUrl;
@property(retain, nonatomic) WCCardDetailTable *detailTable; // @synthesize detailTable=_detailTable;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(nonatomic) _Bool isLocationAuthorized; // @synthesize isLocationAuthorized=_isLocationAuthorized;
@property(nonatomic) _Bool isCommomCard; // @synthesize isCommomCard=_isCommomCard;
@property(retain, nonatomic) WCCardFieldItem *unavailableQrcodeField; // @synthesize unavailableQrcodeField=_unavailableQrcodeField;
@property(retain, nonatomic) NSString *signNumber; // @synthesize signNumber=_signNumber;
@property(retain, nonatomic) WCCardFieldItem *limitField; // @synthesize limitField=_limitField;
@property(retain, nonatomic) WCCardFieldItem *operateField; // @synthesize operateField=_operateField;
@property(retain, nonatomic) WCCardFieldItem *cardListField; // @synthesize cardListField=_cardListField;
@property(retain, nonatomic) NSArray *actionSheetList; // @synthesize actionSheetList=_actionSheetList;
@property(retain, nonatomic) NSArray *cellList2; // @synthesize cellList2=_cellList2;
@property(retain, nonatomic) NSArray *cellList1; // @synthesize cellList1=_cellList1;
@property(retain, nonatomic) NSArray *cellList0; // @synthesize cellList0=_cellList0;
@property(retain, nonatomic) WCCardFieldItem *thirdField; // @synthesize thirdField=_thirdField;
@property(retain, nonatomic) NSArray *secondaryFields; // @synthesize secondaryFields=_secondaryFields;
@property(retain, nonatomic) NSString *reportUrl; // @synthesize reportUrl=_reportUrl;
@property(nonatomic) unsigned int limitNumber; // @synthesize limitNumber=_limitNumber;
@property(nonatomic) unsigned int stockNumber; // @synthesize stockNumber=_stockNumber;
@property(nonatomic) unsigned int avilNumber; // @synthesize avilNumber=_avilNumber;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) unsigned int codeType; // @synthesize codeType=_codeType;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

