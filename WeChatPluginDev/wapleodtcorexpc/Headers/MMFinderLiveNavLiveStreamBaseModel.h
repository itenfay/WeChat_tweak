//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLivePreloadInfo, FinderLiveSquareStyleInfo, FinderLiveStreamGetAsyncLoadInfoConfig, FinderNavLiveStreamPreloadControlConfig, NSArray, NSData, NSMutableArray;

@interface MMFinderLiveNavLiveStreamBaseModel : NSObject
{
    _Bool _skipGetAllLiveTabs;
    _Bool _skipAsyncLoadLiveInfo;
    _Bool _skipFeedsReport;
    unsigned int _flag;
    NSMutableArray *_containerModelList;
    FinderLivePreloadInfo *_livePreloadInfo;
    unsigned long long _prefechMinInterval;
    unsigned long long _refreshInterval;
    NSData *_lastBuffer;
    unsigned long long _requestId;
    FinderLiveSquareStyleInfo *_styleInfo;
    FinderLiveStreamGetAsyncLoadInfoConfig *_asyncLoadInfoConfig;
    unsigned long long _autoPlayFlag;
    FinderNavLiveStreamPreloadControlConfig *_preloadControlConfig;
    NSArray *_allDataArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *allDataArray; // @synthesize allDataArray=_allDataArray;
@property(retain, nonatomic) FinderNavLiveStreamPreloadControlConfig *preloadControlConfig; // @synthesize preloadControlConfig=_preloadControlConfig;
@property(nonatomic) unsigned long long autoPlayFlag; // @synthesize autoPlayFlag=_autoPlayFlag;
@property(retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig; // @synthesize asyncLoadInfoConfig=_asyncLoadInfoConfig;
@property(retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
@property(nonatomic) unsigned int flag; // @synthesize flag=_flag;
@property(nonatomic) _Bool skipFeedsReport; // @synthesize skipFeedsReport=_skipFeedsReport;
@property(nonatomic) _Bool skipAsyncLoadLiveInfo; // @synthesize skipAsyncLoadLiveInfo=_skipAsyncLoadLiveInfo;
@property(nonatomic) _Bool skipGetAllLiveTabs; // @synthesize skipGetAllLiveTabs=_skipGetAllLiveTabs;
@property(nonatomic) unsigned long long requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(nonatomic) unsigned long long prefechMinInterval; // @synthesize prefechMinInterval=_prefechMinInterval;
@property(retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo; // @synthesize livePreloadInfo=_livePreloadInfo;
@property(retain, nonatomic) NSMutableArray *containerModelList; // @synthesize containerModelList=_containerModelList;
- (_Bool)isValidToSaveToDataCache;

@end

