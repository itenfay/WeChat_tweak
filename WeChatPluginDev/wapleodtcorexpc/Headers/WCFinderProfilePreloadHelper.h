//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderDataService, WCFinderProfilePreloadTask;

@interface WCFinderProfilePreloadHelper : NSObject
{
    _Bool _useNewCGI;
    WCFinderDataService *_dataService;
    WCFinderProfilePreloadTask *_fetchingTask;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useNewCGI; // @synthesize useNewCGI=_useNewCGI;
@property(retain, nonatomic) WCFinderProfilePreloadTask *fetchingTask; // @synthesize fetchingTask=_fetchingTask;
@property(nonatomic) __weak WCFinderDataService *dataService; // @synthesize dataService=_dataService;
- (void)preloadUserPageCGI:(id)arg1;
- (void)preloadHomeCGI:(id)arg1;
- (void)preloadHeaderCGI:(id)arg1;
- (void)_finishPreloadCGI:(id)arg1;
- (void)_startPrload;
- (void)_wakePreload;
- (void)preload:(id)arg1 filledPreloadInfo:(id)arg2;
- (_Bool)couldPreloadUsername:(id)arg1;
- (unsigned long long)skipPreloadInterval;
- (_Bool)contentVMShouldPreload:(id)arg1 playPosition:(double)arg2;
- (id)initWithDataService:(id)arg1;

@end

