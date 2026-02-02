//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderThemeLiveStreamAppearance, FinderThemeLiveStreamResponse, MMTimer, NSData, NSMutableArray, NSMutableDictionary, WCFinderBaseCgi, WCFinderCustomCGI, WCFinderLiveEntertainmentChannelsContext, WCFinderLiveEntertainmentChannelsViewController, WCFinderLiveStreamContainerModel;
@protocol WCFinderLiveEntertainmentChannelsViewModelDelegate;

@interface WCFinderLiveEntertainmentChannelsViewModel : NSObject
{
    _Bool _getRandomLiveEnablePreload;
    _Bool _isGoingRandomLive;
    id <WCFinderLiveEntertainmentChannelsViewModelDelegate> _delegate;
    WCFinderLiveStreamContainerModel *_tagContainer;
    WCFinderLiveEntertainmentChannelsContext *_ctx;
    FinderThemeLiveStreamAppearance *_appearance;
    WCFinderLiveEntertainmentChannelsViewController *_currentVC;
    NSMutableDictionary *_pageVMDict;
    WCFinderLiveStreamContainerModel *_initialStreamContainer;
    FinderThemeLiveStreamResponse *_firstScreenResp;
    WCFinderBaseCgi *_loadCgi;
    unsigned long long _getRandomLivePreloadInterval;
    NSData *_randomLiveLastBuffer;
    WCFinderCustomCGI *_prefetchRandomLiveCGI;
    MMTimer *_delayGetRandomLiveTimer;
    NSMutableArray *_randomLiveIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *randomLiveIds; // @synthesize randomLiveIds=_randomLiveIds;
@property(retain, nonatomic) MMTimer *delayGetRandomLiveTimer; // @synthesize delayGetRandomLiveTimer=_delayGetRandomLiveTimer;
@property(retain, nonatomic) WCFinderCustomCGI *prefetchRandomLiveCGI; // @synthesize prefetchRandomLiveCGI=_prefetchRandomLiveCGI;
@property(retain, nonatomic) NSData *randomLiveLastBuffer; // @synthesize randomLiveLastBuffer=_randomLiveLastBuffer;
@property(nonatomic) unsigned long long getRandomLivePreloadInterval; // @synthesize getRandomLivePreloadInterval=_getRandomLivePreloadInterval;
@property(nonatomic) _Bool isGoingRandomLive; // @synthesize isGoingRandomLive=_isGoingRandomLive;
@property(nonatomic) _Bool getRandomLiveEnablePreload; // @synthesize getRandomLiveEnablePreload=_getRandomLiveEnablePreload;
@property(retain, nonatomic) WCFinderBaseCgi *loadCgi; // @synthesize loadCgi=_loadCgi;
@property(retain, nonatomic) FinderThemeLiveStreamResponse *firstScreenResp; // @synthesize firstScreenResp=_firstScreenResp;
@property(retain, nonatomic) WCFinderLiveStreamContainerModel *initialStreamContainer; // @synthesize initialStreamContainer=_initialStreamContainer;
@property(retain, nonatomic) NSMutableDictionary *pageVMDict; // @synthesize pageVMDict=_pageVMDict;
@property(nonatomic) __weak WCFinderLiveEntertainmentChannelsViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) FinderThemeLiveStreamAppearance *appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) WCFinderLiveEntertainmentChannelsContext *ctx; // @synthesize ctx=_ctx;
@property(retain, nonatomic) WCFinderLiveStreamContainerModel *tagContainer; // @synthesize tagContainer=_tagContainer;
@property(nonatomic) __weak id <WCFinderLiveEntertainmentChannelsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportCreateLiveButton:(unsigned long long)arg1;
- (void)reportRandomJoinButtonExpose;
- (void)reportRandomJoinLive:(id)arg1;
- (void)gotoRandomLive;
- (void)cancelDelayPrefetchRandomLive;
- (void)checkDelayPrefetchRandomLive;
- (void)prefetchRandomLiveIfNeeded;
- (id)containerContext:(unsigned long long)arg1 tag:(id)arg2;
- (id)createPageVM:(id)arg1 initialContainer:(id)arg2;
- (void)removePageVM:(id)arg1;
- (id)pageVM:(id)arg1;
- (id)currentPageVM;
- (void)cancelSectionCgi;
- (_Bool)hasData;
- (void)loadData;
- (id)initWithThemeId:(id)arg1 appearance:(id)arg2 scene:(int)arg3;

@end

