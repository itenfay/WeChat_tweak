//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GiftNewCustomizationMagicRewardResource, MMFinderLiveNewCustomGiftItemResourceURL, MMFinderLiveNewCustomGiftText, NSArray, NSString;

@interface MMFinderLiveGiftNewCustomizationModel : NSObject
{
    _Bool _hasCustomized;
    _Bool _isOnceModified;
    _Bool _isEngineDisabled;
    NSString *_parentProductId;
    NSArray *_giftComponentList;
    MMFinderLiveNewCustomGiftText *_customGiftText;
    NSArray *_resourceList;
    MMFinderLiveNewCustomGiftItemResourceURL *_backupThumbnail;
    MMFinderLiveNewCustomGiftItemResourceURL *_backupPreview;
    MMFinderLiveNewCustomGiftItemResourceURL *_backupAnimation;
    MMFinderLiveNewCustomGiftItemResourceURL *_backupLandscapeAnimation;
    NSString *_key;
    MMFinderLiveNewCustomGiftItemResourceURL *_engine;
    NSString *_minCodeVersion;
    NSString *_currCombinationIdentifier;
    GiftNewCustomizationMagicRewardResource *_magicRewardResource;
    CDUnknownBlockType _currComponentKeyUpdateCallback;
    CDUnknownBlockType _displayTextUpdateCallback;
    double _baseRewardAmount;
}

+ (_Bool)isCustomGiftInfoValid:(id)arg1;
+ (_Bool)isNewCustomizationGift:(id)arg1;
+ (id)newCustomizationModelForFinderLiveGift:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double baseRewardAmount; // @synthesize baseRewardAmount=_baseRewardAmount;
@property(nonatomic) _Bool isEngineDisabled; // @synthesize isEngineDisabled=_isEngineDisabled;
@property(nonatomic) _Bool isOnceModified; // @synthesize isOnceModified=_isOnceModified;
@property(nonatomic) _Bool hasCustomized; // @synthesize hasCustomized=_hasCustomized;
@property(copy, nonatomic) CDUnknownBlockType displayTextUpdateCallback; // @synthesize displayTextUpdateCallback=_displayTextUpdateCallback;
@property(copy, nonatomic) CDUnknownBlockType currComponentKeyUpdateCallback; // @synthesize currComponentKeyUpdateCallback=_currComponentKeyUpdateCallback;
@property(retain, nonatomic) GiftNewCustomizationMagicRewardResource *magicRewardResource; // @synthesize magicRewardResource=_magicRewardResource;
@property(retain, nonatomic) NSString *currCombinationIdentifier; // @synthesize currCombinationIdentifier=_currCombinationIdentifier;
@property(retain, nonatomic) NSString *minCodeVersion; // @synthesize minCodeVersion=_minCodeVersion;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *backupLandscapeAnimation; // @synthesize backupLandscapeAnimation=_backupLandscapeAnimation;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *backupAnimation; // @synthesize backupAnimation=_backupAnimation;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *backupPreview; // @synthesize backupPreview=_backupPreview;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftItemResourceURL *backupThumbnail; // @synthesize backupThumbnail=_backupThumbnail;
@property(retain, nonatomic) NSArray *resourceList; // @synthesize resourceList=_resourceList;
@property(retain, nonatomic) MMFinderLiveNewCustomGiftText *customGiftText; // @synthesize customGiftText=_customGiftText;
@property(retain, nonatomic) NSArray *giftComponentList; // @synthesize giftComponentList=_giftComponentList;
@property(retain, nonatomic) NSString *parentProductId; // @synthesize parentProductId=_parentProductId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEngineDisabledForReward;
- (_Bool)useBackupAnimationPagResource;
- (void)updateEngineDisabled:(_Bool)arg1;
- (void)updateAntispamCustomText:(id)arg1;
- (void)updateHasCustomized:(_Bool)arg1;
- (void)recoverCurrentSelectFromCustomizationConfig;
- (void)synchronizeCurrentSelectToCustomizationConfig;
- (_Bool)isCurrentSelectUnEqualToCustomizationConfig;
- (_Bool)isSelectModifyCustomizationConfigOnce;
- (_Bool)isCurrentSelectStyleNeedUsePag;
- (_Bool)enableUseMagicEngineToPlayEffectSendByMe:(_Bool)arg1;
- (_Bool)enableUseMagicEngineToPlayEffect;
- (id)getFirstConflictSelectedComponentWithCustomText;
- (_Bool)enableUseCustomText;
- (void)updateDisplayText:(id)arg1 customGiftText:(id)arg2;
- (id)getSeqSortedComponentList;
- (void)updateSelectComponentCombinationIdentifier;
- (void)configListenerCallbacks;
- (_Bool)astrictBySystem;
- (_Bool)hasAntispamCustomTextToDisplay;
- (double)getSumBeanCntForCurrentDisplayText;
- (double)getSumBeanCntForCurrentSelect;
- (double)getAllSumBeanCnt;
- (id)getSelectStyleGeneralResource;
- (void)innerInit;

@end

