//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LVMainFeedViewController;

@interface LVCacheManager : NSObject
{
    LVMainFeedViewController *_currentVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LVMainFeedViewController *currentVC; // @synthesize currentVC=_currentVC;
- (void)receiveMemoryWarning:(id)arg1;
- (void)onSurviveEnd;
- (id)getPageInstanceFromCache;
- (void)removePageInstanceFromCache;
- (void)addPageInstanceToCache:(id)arg1;
- (void)dealloc;
- (id)init;

@end

