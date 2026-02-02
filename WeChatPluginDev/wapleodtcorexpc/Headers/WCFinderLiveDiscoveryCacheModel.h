//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderTabPageModel;

@interface WCFinderLiveDiscoveryCacheModel : NSObject
{
    _Bool _isLocationServiceAuthrized;
    _Bool _hasAlreadyExposed;
    WCFinderTabPageModel *_liveModel;
    double _lastRefreshTime;
    unsigned long long _selectTabId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectTabId; // @synthesize selectTabId=_selectTabId;
@property(nonatomic) _Bool hasAlreadyExposed; // @synthesize hasAlreadyExposed=_hasAlreadyExposed;
@property(nonatomic) _Bool isLocationServiceAuthrized; // @synthesize isLocationServiceAuthrized=_isLocationServiceAuthrized;
@property(nonatomic) double lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(retain, nonatomic) WCFinderTabPageModel *liveModel; // @synthesize liveModel=_liveModel;

@end

