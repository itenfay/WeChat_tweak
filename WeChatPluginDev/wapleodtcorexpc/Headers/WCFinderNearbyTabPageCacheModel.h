//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderTabPageModel;

@interface WCFinderNearbyTabPageCacheModel : NSObject
{
    _Bool _isLocationServiceAuthrized;
    _Bool _hasAlreadyExposed;
    WCFinderTabPageModel *_liveTabPageModel;
    WCFinderTabPageModel *_feedTabPageModel;
    WCFinderTabPageModel *_peopleTabPageModel;
    double _lastRefreshTime;
    unsigned long long _currentSelectedType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasAlreadyExposed; // @synthesize hasAlreadyExposed=_hasAlreadyExposed;
@property(nonatomic) _Bool isLocationServiceAuthrized; // @synthesize isLocationServiceAuthrized=_isLocationServiceAuthrized;
@property(nonatomic) unsigned long long currentSelectedType; // @synthesize currentSelectedType=_currentSelectedType;
@property(nonatomic) double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(retain, nonatomic) WCFinderTabPageModel *peopleTabPageModel; // @synthesize peopleTabPageModel=_peopleTabPageModel;
@property(retain, nonatomic) WCFinderTabPageModel *feedTabPageModel; // @synthesize feedTabPageModel=_feedTabPageModel;
@property(retain, nonatomic) WCFinderTabPageModel *liveTabPageModel; // @synthesize liveTabPageModel=_liveTabPageModel;

@end

