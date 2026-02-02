//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LiveKTVAudioSettingCacheInfo, LiveLandscapeBarrageDisplaySettingInfo, NSMutableDictionary, NSString;

@interface MMLiveSettingData
{
    _Bool _isPolicyForAnchorConfirmed;
    _Bool _isPolicyForAudienceConfirmed;
    _Bool _isFinderLivePolicyForAudienceConfirmed;
    NSMutableDictionary *_attendLotteryIdCache;
    NSMutableDictionary *_followStateIdCache;
    NSMutableDictionary *_liveGiftEffectSettingCache;
    NSMutableDictionary *_liveChooseClarityCache;
    NSMutableDictionary *_subTitleSwitchCache;
    LiveLandscapeBarrageDisplaySettingInfo *_landscapeBarrageDisplaySetting;
    NSMutableDictionary *_newedCustomMagicEngineResTagCache;
    LiveKTVAudioSettingCacheInfo *_ktvAudioSettingCacheInfo;
    LiveKTVAudioSettingCacheInfo *_ktvAudioSettingCacheInfoNew;
    LiveKTVAudioSettingCacheInfo *_ktvAudioSettingCacheInfoV2;
}

+ (void)initialize;
+ (void)PBArrayAdd_ktvAudioSettingCacheInfoV2;
+ (void)PBArrayAdd_ktvAudioSettingCacheInfoNew;
+ (void)PBArrayAdd_ktvAudioSettingCacheInfo;
+ (void)PBArrayAdd_newedCustomMagicEngineResTagCache;
+ (void)PBArrayAdd_landscapeBarrageDisplaySetting;
+ (void)PBArrayAdd_subTitleSwitchCache;
+ (void)PBArrayAdd_isFinderLivePolicyForAudienceConfirmed;
+ (void)PBArrayAdd_liveChooseClarityCache;
+ (void)PBArrayAdd_liveGiftEffectSettingCache;
+ (void)PBArrayAdd_followStateIdCache;
+ (void)PBArrayAdd_attendLotteryIdCache;
+ (void)PBArrayAdd_isPolicyForAudienceConfirmed;
+ (void)PBArrayAdd_isPolicyForAnchorConfirmed;
- (void).cxx_destruct;
@property(retain, nonatomic) LiveKTVAudioSettingCacheInfo *ktvAudioSettingCacheInfoV2; // @synthesize ktvAudioSettingCacheInfoV2=_ktvAudioSettingCacheInfoV2;
@property(retain, nonatomic) LiveKTVAudioSettingCacheInfo *ktvAudioSettingCacheInfoNew; // @synthesize ktvAudioSettingCacheInfoNew=_ktvAudioSettingCacheInfoNew;
@property(retain, nonatomic) LiveKTVAudioSettingCacheInfo *ktvAudioSettingCacheInfo; // @synthesize ktvAudioSettingCacheInfo=_ktvAudioSettingCacheInfo;
@property(retain, nonatomic) NSMutableDictionary *newedCustomMagicEngineResTagCache; // @synthesize newedCustomMagicEngineResTagCache=_newedCustomMagicEngineResTagCache;
@property(retain, nonatomic) LiveLandscapeBarrageDisplaySettingInfo *landscapeBarrageDisplaySetting; // @synthesize landscapeBarrageDisplaySetting=_landscapeBarrageDisplaySetting;
@property(retain, nonatomic) NSMutableDictionary *subTitleSwitchCache; // @synthesize subTitleSwitchCache=_subTitleSwitchCache;
@property(nonatomic) _Bool isFinderLivePolicyForAudienceConfirmed; // @synthesize isFinderLivePolicyForAudienceConfirmed=_isFinderLivePolicyForAudienceConfirmed;
@property(retain, nonatomic) NSMutableDictionary *liveChooseClarityCache; // @synthesize liveChooseClarityCache=_liveChooseClarityCache;
@property(retain, nonatomic) NSMutableDictionary *liveGiftEffectSettingCache; // @synthesize liveGiftEffectSettingCache=_liveGiftEffectSettingCache;
@property(retain, nonatomic) NSMutableDictionary *followStateIdCache; // @synthesize followStateIdCache=_followStateIdCache;
@property(retain, nonatomic) NSMutableDictionary *attendLotteryIdCache; // @synthesize attendLotteryIdCache=_attendLotteryIdCache;
@property(nonatomic) _Bool isPolicyForAudienceConfirmed; // @synthesize isPolicyForAudienceConfirmed=_isPolicyForAudienceConfirmed;
@property(nonatomic) _Bool isPolicyForAnchorConfirmed; // @synthesize isPolicyForAnchorConfirmed=_isPolicyForAnchorConfirmed;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

