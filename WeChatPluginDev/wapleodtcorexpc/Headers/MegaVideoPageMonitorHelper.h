//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MegaVideoObjcPageMonitor;

@interface MegaVideoPageMonitorHelper : NSObject
{
    _Bool _hasInit;
    _Bool _hasEnter;
    id <MegaVideoObjcPageMonitor> _pageMonitor;
}

+ (id)ViewIdPlayer;
+ (id)ViewIdRelatedFeed;
+ (id)ViewIdMainFeed;
+ (id)CgiRelatedList;
+ (id)CgiMainFeedList;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasEnter; // @synthesize hasEnter=_hasEnter;
@property(readonly, nonatomic) _Bool hasInit; // @synthesize hasInit=_hasInit;
@property(readonly, nonatomic) id <MegaVideoObjcPageMonitor> pageMonitor; // @synthesize pageMonitor=_pageMonitor;
- (void)onCgiBackWithCgiName:(id)arg1 success:(_Bool)arg2 cgiTimeCost:(long long)arg3 requestType:(long long)arg4;
- (void)onCgiRequestWithCgiName:(id)arg1 requestType:(long long)arg2;
- (void)useCacheWithCgiName:(id)arg1;
- (void)onViewAutoPlayWithViewId:(id)arg1;
- (void)onViewFocusWithViewId:(id)arg1;
- (void)onViewClickWithViewId:(id)arg1;
- (void)onViewExposeWithViewId:(id)arg1 index:(long long)arg2;
- (void)onAction:(long long)arg1;
- (void)onPause;
- (void)onResume;
- (void)onExit;
- (void)didChangePageState:(long long)arg1;
- (void)initMonitorWithSessionKey:(id)arg1 startTime:(long long)arg2 pageId:(long long)arg3 pageType:(long long)arg4 enterType:(long long)arg5;
- (id)init;

@end

