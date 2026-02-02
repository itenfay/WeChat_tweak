//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ClientSpecificConfig, FinderLiveDiscoverPreloadConfig, NSData, NSMutableArray, NSString, WCFinderLiveTabInfo, WCFinderRedDotCtrlInfo;

@interface WCFinderLiveNavStreamReqParams : NSObject
{
    _Bool _isPreRecommendRequest;
    _Bool _parallelCgiWithLite;
    int _fromScene;
    int _commentScene;
    float _predictScore;
    unsigned int _nextPagePullType;
    NSData *_lastBuffer;
    unsigned long long _pullType;
    NSMutableArray *_markUnreadList;
    NSString *_fromSceneStr;
    NSString *_byPass;
    unsigned long long _containerId;
    unsigned long long _relatedObjectId;
    NSMutableArray *_containerContext;
    WCFinderRedDotCtrlInfo *_redDotCtrlInfo;
    WCFinderLiveTabInfo *_liveTabInfo;
    unsigned long long _cacheDurationInSeconds;
    FinderLiveDiscoverPreloadConfig *_preloadConfig;
    NSData *_jumpNavliveBuffer;
    unsigned long long _homePageScene;
    NSData *_prefetchObjectsBuffer;
    ClientSpecificConfig *_clientSpecConfig;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int nextPagePullType; // @synthesize nextPagePullType=_nextPagePullType;
@property(retain, nonatomic) ClientSpecificConfig *clientSpecConfig; // @synthesize clientSpecConfig=_clientSpecConfig;
@property(retain, nonatomic) NSData *prefetchObjectsBuffer; // @synthesize prefetchObjectsBuffer=_prefetchObjectsBuffer;
@property(nonatomic) unsigned long long homePageScene; // @synthesize homePageScene=_homePageScene;
@property(retain, nonatomic) NSData *jumpNavliveBuffer; // @synthesize jumpNavliveBuffer=_jumpNavliveBuffer;
@property(nonatomic) _Bool parallelCgiWithLite; // @synthesize parallelCgiWithLite=_parallelCgiWithLite;
@property(retain, nonatomic) FinderLiveDiscoverPreloadConfig *preloadConfig; // @synthesize preloadConfig=_preloadConfig;
@property(nonatomic) float predictScore; // @synthesize predictScore=_predictScore;
@property(nonatomic) _Bool isPreRecommendRequest; // @synthesize isPreRecommendRequest=_isPreRecommendRequest;
@property(nonatomic) unsigned long long cacheDurationInSeconds; // @synthesize cacheDurationInSeconds=_cacheDurationInSeconds;
@property(retain, nonatomic) WCFinderLiveTabInfo *liveTabInfo; // @synthesize liveTabInfo=_liveTabInfo;
@property(retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo; // @synthesize redDotCtrlInfo=_redDotCtrlInfo;
@property(retain, nonatomic) NSMutableArray *containerContext; // @synthesize containerContext=_containerContext;
@property(nonatomic) unsigned long long relatedObjectId; // @synthesize relatedObjectId=_relatedObjectId;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
@property(retain, nonatomic) NSString *byPass; // @synthesize byPass=_byPass;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *fromSceneStr; // @synthesize fromSceneStr=_fromSceneStr;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSMutableArray *markUnreadList; // @synthesize markUnreadList=_markUnreadList;
@property(nonatomic) unsigned long long pullType; // @synthesize pullType=_pullType;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;

@end

