//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderJumpInfo, FinderLiveGift, FinderLiveGiftBatchGiveConfigList, FinderLiveGiftCustomInfo, MMFinderLiveAnchorCustomizeRewardStyleItem, MMFinderLiveGiftCustomizationModel, MMFinderLiveGiftNewCustomizationModel, NSArray, NSData, NSMutableArray, NSString, PackageResourceInfo_ProductBatchInfo;

@interface MMFinderLiveRewardGiftItem
{
    _Bool needUnlock;
    _Bool _disableCombo;
    _Bool _isBlocked;
    _Bool _useRfxPag;
    unsigned int businessType;
    unsigned int rewardGiftType;
    unsigned int rewardGiftOrder;
    unsigned int unlockIntimacyLevel;
    unsigned int unlockGlobalRewardLevel;
    unsigned int flag;
    unsigned int _freeGiftSeq;
    NSString *rewardProductId;
    NSString *thumbnailFileUrl;
    NSString *previewPagFileUrl;
    NSString *animationPagFileUrl;
    NSString *thumbnailFileMd5;
    NSString *previewPagFileMd5;
    NSString *animationPagFileMd5;
    NSString *rewardGiftName;
    double rewardAmountInWecoin;
    FinderJumpInfo *jumpInfo;
    NSString *description;
    NSString *_landscapeAnimationPagFileUrl;
    NSString *_landscapeAnimationPagFileMd5;
    NSString *_tagColor;
    NSString *_tagText;
    NSString *_interactiveGiftUrl;
    NSString *_interactiveGiftMd5;
    unsigned long long _durationTime;
    FinderLiveGift *_finderLiveGift;
    FinderLiveGiftCustomInfo *_customInfo;
    NSData *_customInfoBuffer;
    NSString *_giftDescription;
    FinderLiveGiftBatchGiveConfigList *_batchSendConfigList;
    NSString *_foregroundPAGUrl;
    NSString *_foregroundPAGMD5;
    NSString *_durationId;
    NSArray *_packetBatchInfo;
    NSMutableArray *_multiAnimationList;
    MMFinderLiveGiftCustomizationModel *_customizationModel;
    MMFinderLiveGiftNewCustomizationModel *_newedCustomizationModel;
    MMFinderLiveAnchorCustomizeRewardStyleItem *_anchorCustomizeStyle;
}

+ (id)filterAnchorCustomizeRewardItemsFromSrc:(id)arg1;
+ (id)filterNewCustomizableGiftItemsFromSrc:(id)arg1;
+ (id)tranferPackageResourceInfoToLiveGiftItems:(id)arg1 useStrictTextValidationPolicyForCustomizableGifts:(_Bool)arg2;
+ (id)tranferToLiveGiftItems:(id)arg1 useStrictTextValidationPolicyForCustomizableGifts:(_Bool)arg2;
+ (void)__wcdb_index_27:(void *)arg1;
+ (void)__wcdb_column_constraint_26:(void *)arg1;
+ (id)swift_foregroundPAGMD5;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)foregroundPAGMD5;
+ (id)swift_foregroundPAGUrl;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)foregroundPAGUrl;
+ (id)swift_useRfxPag;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)useRfxPag;
+ (id)swift_disableCombo;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)disableCombo;
+ (id)swift_giftDescription;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)giftDescription;
+ (id)swift_needUnlock;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)needUnlock;
+ (id)swift_durationTime;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)durationTime;
+ (id)swift_interactiveGiftMd5;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)interactiveGiftMd5;
+ (id)swift_interactiveGiftUrl;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)interactiveGiftUrl;
+ (id)swift_landscapeAnimationPagFileMd5;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)landscapeAnimationPagFileMd5;
+ (id)swift_landscapeAnimationPagFileUrl;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)landscapeAnimationPagFileUrl;
+ (id)swift_flag;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)flag;
+ (id)swift_unlockGlobalRewardLevel;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)unlockGlobalRewardLevel;
+ (id)swift_unlockIntimacyLevel;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)unlockIntimacyLevel;
+ (id)swift_rewardGiftOrder;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)rewardGiftOrder;
+ (id)swift_rewardGiftType;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)rewardGiftType;
+ (id)swift_rewardAmountInWecoin;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)rewardAmountInWecoin;
+ (id)swift_rewardGiftName;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)rewardGiftName;
+ (id)swift_animationPagFileMd5;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)animationPagFileMd5;
+ (id)swift_previewPagFileMd5;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)previewPagFileMd5;
+ (id)swift_thumbnailFileMd5;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)thumbnailFileMd5;
+ (id)swift_animationPagFileUrl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)animationPagFileUrl;
+ (id)swift_previewPagFileUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)previewPagFileUrl;
+ (id)swift_thumbnailFileUrl;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)thumbnailFileUrl;
+ (id)swift_businessType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)businessType;
+ (id)swift_rewardProductId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)rewardProductId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool useRfxPag; // @synthesize useRfxPag=_useRfxPag;
@property(nonatomic) unsigned int freeGiftSeq; // @synthesize freeGiftSeq=_freeGiftSeq;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardStyleItem *anchorCustomizeStyle; // @synthesize anchorCustomizeStyle=_anchorCustomizeStyle;
@property(retain, nonatomic) MMFinderLiveGiftNewCustomizationModel *newedCustomizationModel; // @synthesize newedCustomizationModel=_newedCustomizationModel;
@property(retain, nonatomic) MMFinderLiveGiftCustomizationModel *customizationModel; // @synthesize customizationModel=_customizationModel;
@property(retain, nonatomic) NSMutableArray *multiAnimationList; // @synthesize multiAnimationList=_multiAnimationList;
@property(retain, nonatomic) NSArray *packetBatchInfo; // @synthesize packetBatchInfo=_packetBatchInfo;
@property(retain, nonatomic) NSString *durationId; // @synthesize durationId=_durationId;
@property(retain, nonatomic) NSString *foregroundPAGMD5; // @synthesize foregroundPAGMD5=_foregroundPAGMD5;
@property(retain, nonatomic) NSString *foregroundPAGUrl; // @synthesize foregroundPAGUrl=_foregroundPAGUrl;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) _Bool disableCombo; // @synthesize disableCombo=_disableCombo;
@property(retain, nonatomic) FinderLiveGiftBatchGiveConfigList *batchSendConfigList; // @synthesize batchSendConfigList=_batchSendConfigList;
@property(retain, nonatomic) NSString *giftDescription; // @synthesize giftDescription=_giftDescription;
@property(retain, nonatomic) NSData *customInfoBuffer; // @synthesize customInfoBuffer=_customInfoBuffer;
@property(retain, nonatomic) FinderLiveGiftCustomInfo *customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) FinderLiveGift *finderLiveGift; // @synthesize finderLiveGift=_finderLiveGift;
@property(nonatomic) unsigned long long durationTime; // @synthesize durationTime=_durationTime;
@property(retain, nonatomic) NSString *interactiveGiftMd5; // @synthesize interactiveGiftMd5=_interactiveGiftMd5;
@property(retain, nonatomic) NSString *interactiveGiftUrl; // @synthesize interactiveGiftUrl=_interactiveGiftUrl;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(retain, nonatomic) NSString *tagColor; // @synthesize tagColor=_tagColor;
@property(retain, nonatomic) NSString *landscapeAnimationPagFileMd5; // @synthesize landscapeAnimationPagFileMd5=_landscapeAnimationPagFileMd5;
@property(retain, nonatomic) NSString *landscapeAnimationPagFileUrl; // @synthesize landscapeAnimationPagFileUrl=_landscapeAnimationPagFileUrl;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @synthesize jumpInfo;
@property(nonatomic) _Bool needUnlock; // @synthesize needUnlock;
@property(nonatomic) unsigned int flag; // @synthesize flag;
@property(nonatomic) unsigned int unlockGlobalRewardLevel; // @synthesize unlockGlobalRewardLevel;
@property(nonatomic) unsigned int unlockIntimacyLevel; // @synthesize unlockIntimacyLevel;
@property(nonatomic) unsigned int rewardGiftOrder; // @synthesize rewardGiftOrder;
@property(nonatomic) unsigned int rewardGiftType; // @synthesize rewardGiftType;
@property(nonatomic) double rewardAmountInWecoin; // @synthesize rewardAmountInWecoin;
@property(retain, nonatomic) NSString *rewardGiftName; // @synthesize rewardGiftName;
@property(retain, nonatomic) NSString *animationPagFileMd5; // @synthesize animationPagFileMd5;
@property(retain, nonatomic) NSString *previewPagFileMd5; // @synthesize previewPagFileMd5;
@property(retain, nonatomic) NSString *thumbnailFileMd5; // @synthesize thumbnailFileMd5;
@property(retain, nonatomic) NSString *animationPagFileUrl; // @synthesize animationPagFileUrl;
@property(retain, nonatomic) NSString *previewPagFileUrl; // @synthesize previewPagFileUrl;
@property(retain, nonatomic) NSString *thumbnailFileUrl; // @synthesize thumbnailFileUrl;
@property(nonatomic) unsigned int businessType; // @synthesize businessType;
@property(retain, nonatomic) NSString *rewardProductId; // @synthesize rewardProductId;
- (double)getSumRewardAmountWithLog:(_Bool)arg1;
- (double)getSumRewardAmount;
- (_Bool)needLoadAnchorCustomizeImageFile;
- (_Bool)needUseFullPagToPlayAnimationSendByMe:(_Bool)arg1;
- (id)resourceForAnimationId:(id)arg1;
@property(readonly, copy) NSString *description; // @synthesize description;
@property(readonly, nonatomic) PackageResourceInfo_ProductBatchInfo *currentAvailableBatchInfo;
@property(readonly, nonatomic) unsigned long long minExpireTime;
@property(readonly, nonatomic) unsigned int countInGiftPacket;
- (_Bool)isFreeGift;
@property(readonly, nonatomic) _Bool isPacketGift;
- (_Bool)isForegroundGift;
@property(readonly, nonatomic) NSArray *batchSendConfigNumbers;
- (_Bool)isAnchorSwitchSkinGift;
- (_Bool)isFinderLivMultiAnimationGift;
- (_Bool)isFinderLiveNotDisplayGift;
- (_Bool)isFinderLivePKAttackGift;
- (_Bool)isFinderLivePopularGift;
- (_Bool)isFinderLiveRandomAnimationGift;
- (_Bool)isFinderLiveActivityUnlockGift;
- (_Bool)isFinderLiveInteractiveGift;
- (_Bool)isFullScreenEffectGift;
- (_Bool)isNoFullScreenEffectGift;
- (_Bool)isValid;
- (void)copyFromPBGift:(id)arg1 useStrictTextValidationPolicyForCustomizableGifts:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPBGift:(id)arg1 useStrictTextValidationPolicyForCustomizableGifts:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

