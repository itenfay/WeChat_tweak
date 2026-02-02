//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ClientSpecificConfig, FinderLiveDiscoverPreloadInfo, NSData;

@interface WCFinderNavLiveStreamRequestModel
{
    _Bool _isPreRecommendRequest;
    unsigned int _nextPagePullType;
    FinderLiveDiscoverPreloadInfo *_discoverPreloadInfo;
    NSData *_preNavliveMoreLiveObjectsBuffer;
    NSData *_jumpNavliveBuffer;
    unsigned long long _homePageScene;
    ClientSpecificConfig *_clientSpecConfig;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int nextPagePullType; // @synthesize nextPagePullType=_nextPagePullType;
@property(retain, nonatomic) ClientSpecificConfig *clientSpecConfig; // @synthesize clientSpecConfig=_clientSpecConfig;
@property(nonatomic) unsigned long long homePageScene; // @synthesize homePageScene=_homePageScene;
@property(retain, nonatomic) NSData *jumpNavliveBuffer; // @synthesize jumpNavliveBuffer=_jumpNavliveBuffer;
@property(nonatomic) _Bool isPreRecommendRequest; // @synthesize isPreRecommendRequest=_isPreRecommendRequest;
@property(retain, nonatomic) NSData *preNavliveMoreLiveObjectsBuffer; // @synthesize preNavliveMoreLiveObjectsBuffer=_preNavliveMoreLiveObjectsBuffer;
@property(retain, nonatomic) FinderLiveDiscoverPreloadInfo *discoverPreloadInfo; // @synthesize discoverPreloadInfo=_discoverPreloadInfo;

@end

