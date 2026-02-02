//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface MMFinderLiveAdvertisementVideoPlugin
{
    unsigned long long _adScene;
    NSString *_advertisingLiveId;
    unsigned long long _currentAdTime;
    unsigned long long _currentAdVideoDuration;
    NSArray *_insertAdInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *insertAdInfos; // @synthesize insertAdInfos=_insertAdInfos;
@property(nonatomic) unsigned long long currentAdVideoDuration; // @synthesize currentAdVideoDuration=_currentAdVideoDuration;
@property(nonatomic) unsigned long long currentAdTime; // @synthesize currentAdTime=_currentAdTime;
@property(retain, nonatomic) NSString *advertisingLiveId; // @synthesize advertisingLiveId=_advertisingLiveId;
@property(nonatomic) unsigned long long adScene; // @synthesize adScene=_adScene;
- (id)liveView;
- (_Bool)unMuteAdsPlayerIfNeeded;
- (_Bool)muteAdsPlayerIfNeeded;
- (_Bool)resumeAdsPlayerIfNeeded;
- (_Bool)pauseAdsPlayerIfNeeded;
@property(readonly, nonatomic) _Bool isShowingAd;

@end

