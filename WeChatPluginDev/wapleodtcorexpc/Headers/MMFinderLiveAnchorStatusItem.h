//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveLayerAnchorVerificationShowInfo, MicSetting_PurchaseMicSetting, NSString;

@interface MMFinderLiveAnchorStatusItem
{
    FinderLiveLayerAnchorVerificationShowInfo *_anchorVerificationShowInfo;
    unsigned long long _layerDisplayType;
    NSString *_focusedMicSdkUserId;
    NSString *_makeupsModelType;
    NSString *_detailSetList;
    MicSetting_PurchaseMicSetting *_purchaseMicSetting;
    unsigned long long _timeMs;
    unsigned long long _pausedAccumulatedTime;
    NSString *_audiencePauseWording;
}

- (void).cxx_destruct;
@property(copy) NSString *audiencePauseWording; // @synthesize audiencePauseWording=_audiencePauseWording;
@property unsigned long long pausedAccumulatedTime; // @synthesize pausedAccumulatedTime=_pausedAccumulatedTime;
@property unsigned long long timeMs; // @synthesize timeMs=_timeMs;
@property(retain, nonatomic) MicSetting_PurchaseMicSetting *purchaseMicSetting; // @synthesize purchaseMicSetting=_purchaseMicSetting;
@property(retain) NSString *detailSetList; // @synthesize detailSetList=_detailSetList;
@property(retain) NSString *makeupsModelType; // @synthesize makeupsModelType=_makeupsModelType;
@property(retain) NSString *focusedMicSdkUserId; // @synthesize focusedMicSdkUserId=_focusedMicSdkUserId;
@property unsigned long long layerDisplayType; // @synthesize layerDisplayType=_layerDisplayType;
@property(retain) FinderLiveLayerAnchorVerificationShowInfo *anchorVerificationShowInfo; // @synthesize anchorVerificationShowInfo=_anchorVerificationShowInfo;
- (void)updateDisplayInfoFromServer:(id)arg1;
- (_Bool)isPausedLayerDisplayed;
- (_Bool)fromLiveLayerDisplayInfo:(id)arg1;
- (_Bool)fromLiveExtInfo:(id)arg1;
- (id)getAnchorStatusBuffer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFinderExtLiveInfo:(id)arg1 layerDisplayInfo:(id)arg2;

@end

