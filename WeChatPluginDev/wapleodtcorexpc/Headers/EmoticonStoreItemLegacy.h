//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionLinkInfo, NSArray, NSString, PersonalDesigner;

@interface EmoticonStoreItemLegacy
{
    unsigned int packType;
    unsigned int packFlag;
    unsigned int boughtTime;
    unsigned int version;
    NSString *productID;
    NSString *iconUrl;
    NSString *packName;
    NSString *packDesc;
    NSString *packAuthInfo;
    NSString *packPrice;
    NSString *packThumb;
    NSString *coverUrl;
    NSString *packCopyright;
    NSString *timeLimit;
    NSString *introduce;
    NSString *tagUrl;
    NSString *shareDesc;
    NSString *oldRedirectUrl;
    PersonalDesigner *personalDesigner;
    NSString *exptDesc;
    unsigned long long weCoinNum;
    unsigned long long packWeCoinPrice;
    EmotionLinkInfo *summaryLinkInfo;
    EmotionLinkInfo *detailLinkInfo;
    NSArray *_packEmojiInfoList;
    NSString *_designerIpsetKey;
    NSArray *_previewEmojiInfos;
}

+ (void)removeLegacyCacheFor:(id)arg1;
+ (id)loadItemFromCache:(id)arg1;
+ (id)getMd5Pid:(id)arg1;
+ (id)getItemCachePath:(id)arg1;
+ (id)getItemCacheRootDir;
+ (void)initialize;
+ (void)PBArrayAdd_detailLinkInfo;
+ (void)PBArrayAdd_summaryLinkInfo;
+ (void)PBArrayAdd_previewEmojiInfos;
+ (void)PBArrayAdd_packWeCoinPrice;
+ (void)PBArrayAdd_weCoinNum;
+ (void)PBArrayAdd_packEmojiInfoList;
+ (void)PBArrayAdd_exptDesc;
+ (void)PBArrayAdd_personalDesigner;
+ (void)PBArrayAdd_oldRedirectUrl;
+ (void)PBArrayAdd_shareDesc;
+ (void)PBArrayAdd_tagUrl;
+ (void)PBArrayAdd_introduce;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_timeLimit;
+ (void)PBArrayAdd_packCopyright;
+ (void)PBArrayAdd_boughtTime;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_packThumb;
+ (void)PBArrayAdd_packFlag;
+ (void)PBArrayAdd_packType;
+ (void)PBArrayAdd_packPrice;
+ (void)PBArrayAdd_packAuthInfo;
+ (void)PBArrayAdd_packDesc;
+ (void)PBArrayAdd_packName;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_productID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *previewEmojiInfos; // @synthesize previewEmojiInfos=_previewEmojiInfos;
@property(retain, nonatomic) NSString *designerIpsetKey; // @synthesize designerIpsetKey=_designerIpsetKey;
@property(retain, nonatomic) NSArray *packEmojiInfoList; // @synthesize packEmojiInfoList=_packEmojiInfoList;
@property(retain, nonatomic) EmotionLinkInfo *detailLinkInfo; // @synthesize detailLinkInfo;
@property(retain, nonatomic) EmotionLinkInfo *summaryLinkInfo; // @synthesize summaryLinkInfo;
@property(nonatomic) unsigned long long packWeCoinPrice; // @synthesize packWeCoinPrice;
@property(nonatomic) unsigned long long weCoinNum; // @synthesize weCoinNum;
@property(retain, nonatomic) NSString *exptDesc; // @synthesize exptDesc;
@property(retain, nonatomic) PersonalDesigner *personalDesigner; // @synthesize personalDesigner;
@property(retain, nonatomic) NSString *oldRedirectUrl; // @synthesize oldRedirectUrl;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc;
@property(retain, nonatomic) NSString *tagUrl; // @synthesize tagUrl;
@property(retain, nonatomic) NSString *introduce; // @synthesize introduce;
@property(nonatomic) unsigned int version; // @synthesize version;
@property(retain, nonatomic) NSString *timeLimit; // @synthesize timeLimit;
@property(copy, nonatomic) NSString *packCopyright; // @synthesize packCopyright;
@property(nonatomic) unsigned int boughtTime; // @synthesize boughtTime;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl;
@property(copy, nonatomic) NSString *packThumb; // @synthesize packThumb;
@property(nonatomic) unsigned int packFlag; // @synthesize packFlag;
@property(nonatomic) unsigned int packType; // @synthesize packType;
@property(copy, nonatomic) NSString *packPrice; // @synthesize packPrice;
@property(copy, nonatomic) NSString *packAuthInfo; // @synthesize packAuthInfo;
@property(copy, nonatomic) NSString *packDesc; // @synthesize packDesc;
@property(copy, nonatomic) NSString *packName; // @synthesize packName;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(copy, nonatomic) NSString *productID; // @synthesize productID;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

