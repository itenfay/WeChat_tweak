//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSMutableArray, NSMutableDictionary, WCCardDataCardInfo, WCCardDataCardTPInfo, WCCardUsedStoreInfo;
@protocol WCCardDataSource, WCCardDetailContentLogicDelegate;

@interface WCCardDetailContentViewLogicController
{
    _Bool _bIsShareCardMode;
    int _cardStatus;
    id <WCCardDetailContentLogicDelegate> _delegate;
    id <WCCardDataSource> _cardDataSource;
    WCCardDataCardInfo *_cardInfo;
    WCCardDataCardTPInfo *_cardTPInfo;
    WCCardUsedStoreInfo *_nearbyStoreInfo;
    CContact *_serviceContact;
    NSMutableArray *_tableSectionDataArr;
    NSMutableDictionary *_tableRowDataDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *tableRowDataDict; // @synthesize tableRowDataDict=_tableRowDataDict;
@property(retain, nonatomic) NSMutableArray *tableSectionDataArr; // @synthesize tableSectionDataArr=_tableSectionDataArr;
@property(nonatomic) int cardStatus; // @synthesize cardStatus=_cardStatus;
@property(retain, nonatomic) CContact *serviceContact; // @synthesize serviceContact=_serviceContact;
@property(retain, nonatomic) WCCardUsedStoreInfo *nearbyStoreInfo; // @synthesize nearbyStoreInfo=_nearbyStoreInfo;
@property(nonatomic) _Bool bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
@property(retain, nonatomic) WCCardDataCardTPInfo *cardTPInfo; // @synthesize cardTPInfo=_cardTPInfo;
@property(retain, nonatomic) WCCardDataCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) id <WCCardDataSource> cardDataSource; // @synthesize cardDataSource=_cardDataSource;
@property(nonatomic) __weak id <WCCardDetailContentLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isAcceptBtnEnable;
- (id)getAcceptBtnTitle;
- (_Bool)isNeedShowAcceptBtn;
- (_Bool)hasDetailTable;
- (_Bool)isCardDataExistInDB;
- (_Bool)bShowRapidPayOrderCell;
- (_Bool)bShowCodeCell;
- (_Bool)bShowQRCodeCell;
- (_Bool)hasGiftToFriendInfo;
- (_Bool)isTicketCard;
- (_Bool)isMemberCard;
- (_Bool)hasCellList0Info;
- (_Bool)hasServiceContactInfo;
- (_Bool)hasUsedStoreInfo;
- (_Bool)hasNearByShopInfo;
- (_Bool)hasImageInDetailView;
- (_Bool)hasDetailView;
- (_Bool)hasOperationField;
- (id)getTableRowArrWithSectionIndex:(unsigned long long)arg1;
- (id)getTableSectionDataArr;
- (void)calcTableViewSectionData;
- (id)getGiftCardShareDetailContent;
- (_Bool)hasReceive;
- (_Bool)hasServiceFollowInfo;
- (_Bool)bIsIphone5ShareCardMode;
- (_Bool)hasMoneyView;
- (_Bool)hasSecondaryView;
- (_Bool)hasBaseIntroView;
- (id)getBrandColor;
- (_Bool)hasBrandColor;
- (id)getServiceContact;
- (id)getNearbyStoreInfo;
- (id)getCardInfo;
- (id)getCardTPInfo;
- (id)getCardDataSource;
- (void)updateLogicControllerWithCardDataSource:(id)arg1 isShareCardMode:(_Bool)arg2 withOneUsedStoreInfo:(id)arg3 withServiceContact:(id)arg4 withCardStatus:(int)arg5;
- (id)initLogicControllerWithCardDataSource:(id)arg1 isShareCardMode:(_Bool)arg2 usedStoreInfo:(id)arg3 serviceContact:(id)arg4 cardStatus:(int)arg5 delegate:(id)arg6;

@end

