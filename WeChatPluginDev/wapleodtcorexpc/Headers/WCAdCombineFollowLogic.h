//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString, WCAdCombineFollowInfo, WCAdHalfScreenCombineFollowView, WCAdvertiseInfo, WCDataItem;

@interface WCAdCombineFollowLogic
{
    _Bool _isWorking;
    int _source;
    int _brandFollowResult;
    int _finderFollowResult;
    int _brandUIScene;
    int _brandUISubScene;
    WCAdCombineFollowInfo *_combineFollowInfo;
    WCDataItem *_dataItem;
    WCAdvertiseInfo *_adData;
    NSString *_snsId;
    long long _exposureScene;
    NSString *_canvasDynamicInfo;
    WCAdHalfScreenCombineFollowView *_halfScreenView;
    MMTimer *_brandContactSyncTimer;
    long long _finderFromScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long finderFromScene; // @synthesize finderFromScene=_finderFromScene;
@property(nonatomic) int brandUISubScene; // @synthesize brandUISubScene=_brandUISubScene;
@property(nonatomic) int brandUIScene; // @synthesize brandUIScene=_brandUIScene;
@property(retain, nonatomic) MMTimer *brandContactSyncTimer; // @synthesize brandContactSyncTimer=_brandContactSyncTimer;
@property(nonatomic) int finderFollowResult; // @synthesize finderFollowResult=_finderFollowResult;
@property(nonatomic) int brandFollowResult; // @synthesize brandFollowResult=_brandFollowResult;
@property(nonatomic) _Bool isWorking; // @synthesize isWorking=_isWorking;
@property(retain, nonatomic) WCAdHalfScreenCombineFollowView *halfScreenView; // @synthesize halfScreenView=_halfScreenView;
@property(retain, nonatomic) NSString *canvasDynamicInfo; // @synthesize canvasDynamicInfo=_canvasDynamicInfo;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) long long exposureScene; // @synthesize exposureScene=_exposureScene;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) WCAdvertiseInfo *adData; // @synthesize adData=_adData;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdCombineFollowInfo *combineFollowInfo; // @synthesize combineFollowInfo=_combineFollowInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)scheduleBrandContactSyncTimer;
- (void)onModifyContact:(id)arg1;
- (void)onTimeoutBrandContactSync;
- (void)invalidateBrandContactSyncTimer;
- (void)createVerify:(id)arg1 andSubScene:(unsigned int)arg2;
- (void)checkFinderFollowStateFromServer:(id)arg1;
- (void)checkAllFollowFinish;
- (void)onFinderFollowFinish:(_Bool)arg1;
- (void)onBrandFollowFinish:(_Bool)arg1;
- (void)doFinderFollow;
- (void)doBrandFollow;
- (void)onConfirmButtonClickWithBrandInfo:(id)arg1 finderInfo:(id)arg2;
- (id)fetchProfilePageWrap;
- (void)jumpWhenAllFollowSuccess;
- (void)jumpWhenAllFollowed;
- (void)jumpFinder;
- (void)jumpBrand;
- (_Bool)isFinderFollowed;
- (_Bool)isBrandFollowed;
- (void)checkFollowState;
- (void)start;
- (void)parseScene;
- (void)dealloc;
- (id)initWithCombineFollowInfo:(id)arg1 dataItem:(id)arg2 adData:(id)arg3 snsId:(id)arg4 exposureScene:(long long)arg5 source:(int)arg6 canvasDynamicInfo:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

