//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EmotionLinkInfo, EmotionStatisticsInfo, NSArray, NSMutableArray, NSString, PackActivityInfo, PersonalDesigner;

@interface EmoticonStoreItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)loadItemFromCache:(id)arg1;
+ (_Bool)IsPrivilegeEmoticonByPid:(id)arg1;
+ (void)megerWithOutProduct:(id)arg1 item:(id)arg2;
+ (void)megerWithOutProduct:(id)arg1 item:(id)arg2 isFromDetail:(_Bool)arg3;
+ (void)megerWithOutProductForceUpdateTagAndIntroduce:(id)arg1 item:(id)arg2;
+ (id)StoreItemFromLegacyItem:(id)arg1;
+ (id)StoreItemFromEmotionDetail:(id)arg1;
+ (id)StoreItemFromEmotionSummary:(id)arg1;
+ (void)megerStoreItem:(id)arg1 FromEmotionSummary:(id)arg2;
- (void)removeMemoryVariables;
- (void)saveItemToCache;
- (_Bool)IsStaticPicture;
- (id)GetServerPrice;
- (_Bool)needCheckUpdateAfterInteractionFor:(id)arg1;
- (unsigned long long)linkStatusForReport:(id)arg1;
- (_Bool)isEmptyItem;
- (_Bool)isCanReward;
- (_Bool)isCanReport;
- (_Bool)isCanShare;
- (_Bool)hasPaid;
- (_Bool)isExpired;
- (_Bool)hasDetail;
@property(readonly, nonatomic) NSArray *previewEmojiInfos;
- (id)GetBoughtTimeString;
- (_Bool)IsFreeLimited;
- (_Bool)IsFree;
- (id)description;
- (id)GetDesc;
- (id)GetCoverUrl;
- (id)GetPrice;
- (id)priceStringForProduct:(id)arg1;
- (id)GetName;
- (id)GetIconUrl;
- (_Bool)isSameAs:(id)arg1;
- (_Bool)canDownload;
- (_Bool)isWeCoinProduct;
- (_Bool)canBuy;
- (_Bool)isValid;
@property(retain, nonatomic) NSString *productID;
- (id)detailFromItem;

// Remaining properties
@property(nonatomic) unsigned int boughtTime; // @dynamic boughtTime;
@property(retain, nonatomic) NSString *cdnDownloadClientId; // @dynamic cdnDownloadClientId;
@property(retain, nonatomic) NSString *cdnDownloadPath; // @dynamic cdnDownloadPath;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(retain, nonatomic) NSString *designerIpsetKey; // @dynamic designerIpsetKey;
@property(retain, nonatomic) EmotionLinkInfo *detailLinkInfo; // @dynamic detailLinkInfo;
@property(retain, nonatomic) NSMutableArray *detailPackEmojiList; // @dynamic detailPackEmojiList;
@property(retain, nonatomic) NSString *exptDesc; // @dynamic exptDesc;
@property(nonatomic) _Bool hasReddot; // @dynamic hasReddot;
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *introduce; // @dynamic introduce;
@property(nonatomic) _Bool isAutomaticDownload; // @dynamic isAutomaticDownload;
@property(retain, nonatomic) NSString *oldRedirectUrl; // @dynamic oldRedirectUrl;
@property(retain, nonatomic) NSString *packActivity; // @dynamic packActivity;
@property(retain, nonatomic) PackActivityInfo *packActivityInfo; // @dynamic packActivityInfo;
@property(retain, nonatomic) NSString *packCopyright; // @dynamic packCopyright;
@property(retain, nonatomic) NSString *packDesc; // @dynamic packDesc;
@property(nonatomic) unsigned int packExpire; // @dynamic packExpire;
@property(retain, nonatomic) NSString *packFileId; // @dynamic packFileId;
@property(retain, nonatomic) NSString *packFileKey; // @dynamic packFileKey;
@property(nonatomic) unsigned long long packFileSize; // @dynamic packFileSize;
@property(nonatomic) unsigned int packFlag; // @dynamic packFlag;
@property(retain, nonatomic) NSString *packName; // @dynamic packName;
@property(retain, nonatomic) NSString *packPrice; // @dynamic packPrice;
@property(nonatomic) unsigned int packType; // @dynamic packType;
@property(nonatomic) unsigned int packWeCoinNum; // @dynamic packWeCoinNum;
@property(retain, nonatomic) NSString *panelUrl; // @dynamic panelUrl;
@property(retain, nonatomic) PersonalDesigner *personalDesigner; // @dynamic personalDesigner;
@property(retain, nonatomic) NSString *priceNum; // @dynamic priceNum;
@property(retain, nonatomic) NSString *productId; // @dynamic productId;
@property(retain, nonatomic) NSString *reqId; // @dynamic reqId;
@property(retain, nonatomic) NSString *shareDesc; // @dynamic shareDesc;
@property(retain, nonatomic) EmotionStatisticsInfo *staticsInfo; // @dynamic staticsInfo;
@property(retain, nonatomic) EmotionLinkInfo *summaryLinkInfo; // @dynamic summaryLinkInfo;
@property(retain, nonatomic) NSMutableArray *summaryPackEmojiList; // @dynamic summaryPackEmojiList;
@property(retain, nonatomic) NSString *tagUri; // @dynamic tagUri;
@property(nonatomic) unsigned int thumbExtCount; // @dynamic thumbExtCount;
@property(nonatomic) int version; // @dynamic version;

@end

