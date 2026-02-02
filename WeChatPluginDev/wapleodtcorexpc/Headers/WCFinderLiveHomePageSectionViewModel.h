//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, WCFinderLiveHomePageCtx, WCFinderLiveHomePageReportSession, WCFinderLiveHomePageViewController, WCFinderLiveStreamContainerModel;
@protocol WCFinderLiveHomePageSectionViewModelDelegate;

@interface WCFinderLiveHomePageSectionViewModel : NSObject
{
    _Bool _skipAsyncLoadLiveInfo;
    _Bool _isSkeleton;
    int _scene;
    id <WCFinderLiveHomePageSectionViewModelDelegate> _delegate;
    WCFinderLiveHomePageViewController *_homePageVC;
    WCFinderLiveStreamContainerModel *_containerModel;
    WCFinderLiveHomePageReportSession *_reportSession;
    unsigned long long _state;
    CDUnknownBlockType _onFooterStateDidChange;
    unsigned long long _sectionIndex;
    NSMutableArray *_feedVMs;
    WCFinderLiveHomePageCtx *_ctx;
    unsigned long long _curTabId;
    unsigned long long _curSubTabId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long curSubTabId; // @synthesize curSubTabId=_curSubTabId;
@property(readonly, nonatomic) unsigned long long curTabId; // @synthesize curTabId=_curTabId;
@property(nonatomic) _Bool isSkeleton; // @synthesize isSkeleton=_isSkeleton;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderLiveHomePageCtx *ctx; // @synthesize ctx=_ctx;
@property(retain, nonatomic) NSMutableArray *feedVMs; // @synthesize feedVMs=_feedVMs;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) _Bool skipAsyncLoadLiveInfo; // @synthesize skipAsyncLoadLiveInfo=_skipAsyncLoadLiveInfo;
@property(copy, nonatomic) CDUnknownBlockType onFooterStateDidChange; // @synthesize onFooterStateDidChange=_onFooterStateDidChange;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderLiveHomePageReportSession *reportSession; // @synthesize reportSession=_reportSession;
@property(retain, nonatomic) WCFinderLiveStreamContainerModel *containerModel; // @synthesize containerModel=_containerModel;
@property(nonatomic) __weak WCFinderLiveHomePageViewController *homePageVC; // @synthesize homePageVC=_homePageVC;
@property(nonatomic) __weak id <WCFinderLiveHomePageSectionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)removeSkeletonDatas;
- (unsigned long long)numberOfSkeletonItems;
- (void)makeBottomSkeletonData;
- (void)onHomePageContainerSectionDeleteTid:(id)arg1;
- (void)onHomePageResetState;
- (void)onHomePageContainerSectionFetchNextPageData:(id)arg1;
- (void)onHomePageContainerSectionNoMoreData;
- (void)onHomePageContainerSectionFetchFailWithErroCode:(long long)arg1;
- (void)onHomePageContainerSectionRefreshAllData:(id)arg1;
- (id)calculateNavRespShouldPreloadCoverItems:(id)arg1;
- (void)preloadCoversIfNeeded:(id)arg1;
- (void)resetExposeSession;
- (void)reportSectionOnDisAppear;
@property(readonly, nonatomic) NSArray *collectionDataModels;
- (unsigned long long)indexOfTid:(id)arg1;
- (void)removeDataWithTid:(id)arg1;
- (void)cancelSectionCgi;
- (_Bool)isSectionFollowOrHistory;
- (_Bool)isSectionSupportAutoPlay;
- (_Bool)isSectionCustomHeaderView;
- (id)containerContext:(unsigned long long)arg1 tabInfo:(id)arg2;
- (id)containerReadIds;
- (void)insertElementModels:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendElementModels:(id)arg1;
- (id)createFeedVMWithModel:(id)arg1 isSkeleton:(_Bool)arg2;
- (id)initWithContainerModel:(id)arg1 scene:(int)arg2 ctx:(id)arg3 isSkeleton:(_Bool)arg4;

@end

