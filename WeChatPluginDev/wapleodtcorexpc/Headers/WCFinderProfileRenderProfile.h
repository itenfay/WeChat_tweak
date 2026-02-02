//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCFinderCoverLoadCostTime;

@interface WCFinderProfileRenderProfile : NSObject
{
    _Bool _needRecord;
    _Bool _hasFristPageLoading;
    _Bool _hasHomePageLoading;
    _Bool _hasFeedPageLoading;
    double _beginTime;
    double _allCGIFinishTime;
    NSMutableArray *_profileArray;
    WCFinderCoverLoadCostTime *_coverCost;
    double _headerLoadingEndTime;
    double _homePageLoadingEndTime;
    double _feedPageLoadingEndTime;
}

- (void).cxx_destruct;
@property(nonatomic) double feedPageLoadingEndTime; // @synthesize feedPageLoadingEndTime=_feedPageLoadingEndTime;
@property(nonatomic) double homePageLoadingEndTime; // @synthesize homePageLoadingEndTime=_homePageLoadingEndTime;
@property(nonatomic) double headerLoadingEndTime; // @synthesize headerLoadingEndTime=_headerLoadingEndTime;
@property(nonatomic) _Bool hasFeedPageLoading; // @synthesize hasFeedPageLoading=_hasFeedPageLoading;
@property(nonatomic) _Bool hasHomePageLoading; // @synthesize hasHomePageLoading=_hasHomePageLoading;
@property(nonatomic) _Bool hasFristPageLoading; // @synthesize hasFristPageLoading=_hasFristPageLoading;
@property(retain, nonatomic) WCFinderCoverLoadCostTime *coverCost; // @synthesize coverCost=_coverCost;
@property(retain, nonatomic) NSMutableArray *profileArray; // @synthesize profileArray=_profileArray;
@property(nonatomic) double allCGIFinishTime; // @synthesize allCGIFinishTime=_allCGIFinishTime;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool needRecord; // @synthesize needRecord=_needRecord;
- (id)init;

@end

