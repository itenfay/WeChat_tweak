//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CardsHomePageList, NSMutableArray, NSString, SecEntranceCardList;

@interface WCCardLayoutStorage
{
    _Bool _bShowLayoutRed;
    unsigned int _layoutRedEndTime;
    unsigned int _layoutUpdateTime;
    unsigned int _topScene;
    unsigned int _homePageCardNum;
    NSMutableArray *_expiringList;
    NSMutableArray *_memberCardList;
    NSMutableArray *_nearbyList;
    NSMutableArray *_recentList;
    NSMutableArray *_labelList;
    NSMutableArray *_firstList;
    NSString *_layoutBuff;
    NSString *_layoutTip;
    NSString *_entrySubTitle;
    CardsHomePageList *_cardsHomePageList;
    SecEntranceCardList *_secEntranceCardList;
}

+ (void)initialize;
+ (void)PBArrayAdd_secEntranceCardList;
+ (void)PBArrayAdd_homePageCardNum;
+ (void)PBArrayAdd_cardsHomePageList;
+ (void)PBArrayAdd_recentList;
+ (void)PBArrayAdd_topScene;
+ (void)PBArrayAdd_entrySubTitle;
+ (void)PBArrayAdd_layoutUpdateTime;
+ (void)PBArrayAdd_layoutTip;
+ (void)PBArrayAdd_layoutRedEndTime;
+ (void)PBArrayAdd_bShowLayoutRed;
+ (void)PBArrayAdd_layoutBuff;
+ (void)PBArrayAdd_nearbyList;
+ (void)PBArrayAdd_memberCardList;
+ (void)PBArrayAdd_expiringList;
- (void).cxx_destruct;
@property(retain, nonatomic) SecEntranceCardList *secEntranceCardList; // @synthesize secEntranceCardList=_secEntranceCardList;
@property(nonatomic) unsigned int homePageCardNum; // @synthesize homePageCardNum=_homePageCardNum;
@property(retain, nonatomic) CardsHomePageList *cardsHomePageList; // @synthesize cardsHomePageList=_cardsHomePageList;
@property(nonatomic) unsigned int topScene; // @synthesize topScene=_topScene;
@property(retain, nonatomic) NSString *entrySubTitle; // @synthesize entrySubTitle=_entrySubTitle;
@property(nonatomic) unsigned int layoutUpdateTime; // @synthesize layoutUpdateTime=_layoutUpdateTime;
@property(retain, nonatomic) NSString *layoutTip; // @synthesize layoutTip=_layoutTip;
@property(nonatomic) unsigned int layoutRedEndTime; // @synthesize layoutRedEndTime=_layoutRedEndTime;
@property(nonatomic) _Bool bShowLayoutRed; // @synthesize bShowLayoutRed=_bShowLayoutRed;
@property(retain, nonatomic) NSString *layoutBuff; // @synthesize layoutBuff=_layoutBuff;
@property(retain, nonatomic) NSMutableArray *firstList; // @synthesize firstList=_firstList;
@property(retain, nonatomic) NSMutableArray *labelList; // @synthesize labelList=_labelList;
@property(retain, nonatomic) NSMutableArray *recentList; // @synthesize recentList=_recentList;
@property(retain, nonatomic) NSMutableArray *nearbyList; // @synthesize nearbyList=_nearbyList;
@property(retain, nonatomic) NSMutableArray *memberCardList; // @synthesize memberCardList=_memberCardList;
@property(retain, nonatomic) NSMutableArray *expiringList; // @synthesize expiringList=_expiringList;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

