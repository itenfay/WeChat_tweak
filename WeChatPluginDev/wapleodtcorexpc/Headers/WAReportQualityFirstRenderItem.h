//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportQualityFirstRenderItem
{
    _Bool _isPreloadPageFrame;
    _Bool _isSplitCodeLib;
    _Bool _isFirstPageRenderingCacheAccepted;
    unsigned int _costTimeInMs;
    unsigned int _preloadType;
    unsigned int _showAd;
    unsigned long long _startTimeInMs;
    unsigned long long _endTimeInMs;
}

@property(nonatomic) unsigned int showAd; // @synthesize showAd=_showAd;
@property(nonatomic) _Bool isFirstPageRenderingCacheAccepted; // @synthesize isFirstPageRenderingCacheAccepted=_isFirstPageRenderingCacheAccepted;
@property(nonatomic) _Bool isSplitCodeLib; // @synthesize isSplitCodeLib=_isSplitCodeLib;
@property(nonatomic) _Bool isPreloadPageFrame; // @synthesize isPreloadPageFrame=_isPreloadPageFrame;
@property(nonatomic) unsigned int preloadType; // @synthesize preloadType=_preloadType;
@property(nonatomic) unsigned long long endTimeInMs; // @synthesize endTimeInMs=_endTimeInMs;
@property(nonatomic) unsigned long long startTimeInMs; // @synthesize startTimeInMs=_startTimeInMs;
@property(nonatomic) unsigned int costTimeInMs; // @synthesize costTimeInMs=_costTimeInMs;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

