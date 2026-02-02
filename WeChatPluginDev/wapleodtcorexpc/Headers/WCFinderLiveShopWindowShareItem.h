//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderGetWindowProductProfileCardInfoResponse_ReputationInfo, NSArray, NSString;

@interface WCFinderLiveShopWindowShareItem
{
    _Bool _isWxShop;
    NSString *_finderUsername;
    NSString *_avatar;
    NSString *_nickname;
    NSString *_platformTagURL;
    FinderGetWindowProductProfileCardInfoResponse_ReputationInfo *_reputationInfo;
    NSString *_saleWording;
    NSString *_saleWordingExtra;
    NSArray *_productImageURLList;
    NSString *_lastGMsgID;
    NSString *_profileTypeWording;
    NSString *_platformIconUrl;
    NSString *_brandIconUrl;
    NSString *_backgroundUrl;
    NSString *_shopDescription;
    NSString *_platformIconUrlDarkmode;
    NSString *_liteAppId;
    NSString *_liteAppPath;
    NSString *_query;
    NSString *_liteAppQuery;
    NSString *_commodityInStockCount;
    NSString *_appId;
    NSString *_path;
    NSString *_appUsername;
}

+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_platformIconUrlDarkmode;
+ (void)PBArrayAdd_backgroundUrl;
+ (void)PBArrayAdd_brandIconUrl;
+ (void)PBArrayAdd_platformIconUrl;
+ (void)PBArrayAdd_isWxShop;
+ (void)PBArrayAdd_saleWordingExtra;
+ (void)PBArrayAdd_profileTypeWording;
+ (void)PBArrayAdd_lastGMsgID;
+ (void)PBArrayAdd_productImageURLList;
+ (void)PBArrayAdd_saleWording;
+ (void)PBArrayAdd_reputationInfo;
+ (void)PBArrayAdd_platformTagURL;
+ (void)PBArrayAdd_liteAppQuery;
+ (void)PBArrayAdd_liteAppPath;
+ (void)PBArrayAdd_liteAppId;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_appUsername;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_commodityInStockCount;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_finderUsername;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appUsername; // @synthesize appUsername=_appUsername;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *commodityInStockCount; // @synthesize commodityInStockCount=_commodityInStockCount;
@property(copy, nonatomic) NSString *liteAppQuery; // @synthesize liteAppQuery=_liteAppQuery;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *liteAppPath; // @synthesize liteAppPath=_liteAppPath;
@property(copy, nonatomic) NSString *liteAppId; // @synthesize liteAppId=_liteAppId;
@property(retain, nonatomic) NSString *platformIconUrlDarkmode; // @synthesize platformIconUrlDarkmode=_platformIconUrlDarkmode;
@property(retain, nonatomic) NSString *shopDescription; // @synthesize shopDescription=_shopDescription;
@property(retain, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(retain, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl=_brandIconUrl;
@property(retain, nonatomic) NSString *platformIconUrl; // @synthesize platformIconUrl=_platformIconUrl;
@property(nonatomic) _Bool isWxShop; // @synthesize isWxShop=_isWxShop;
@property(copy, nonatomic) NSString *profileTypeWording; // @synthesize profileTypeWording=_profileTypeWording;
@property(copy, nonatomic) NSString *lastGMsgID; // @synthesize lastGMsgID=_lastGMsgID;
@property(retain, nonatomic) NSArray *productImageURLList; // @synthesize productImageURLList=_productImageURLList;
@property(copy, nonatomic) NSString *saleWordingExtra; // @synthesize saleWordingExtra=_saleWordingExtra;
@property(copy, nonatomic) NSString *saleWording; // @synthesize saleWording=_saleWording;
@property(retain, nonatomic) FinderGetWindowProductProfileCardInfoResponse_ReputationInfo *reputationInfo; // @synthesize reputationInfo=_reputationInfo;
@property(copy, nonatomic) NSString *platformTagURL; // @synthesize platformTagURL=_platformTagURL;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(copy, nonatomic) NSString *queryDecoded;
@property(copy, nonatomic) NSString *liteAppQueryDecoded;
- (void)updateDataBase;
- (void)updateFromDataBase;
- (id)toXMLForDataBase:(_Bool)arg1;
- (id)toXML;
- (void)writeConstPartToXML:(id)arg1;
- (void)writeMutablePartToXML:(id)arg1;
- (void)readConstPartFromXML:(struct XmlReaderNode_t *)arg1;
- (void)readMutablePartFromXML:(struct XmlReaderNode_t *)arg1;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getAppQuery;
- (void)encodeWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

