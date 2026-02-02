//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, WCFinderLiveStreamContainerModel;
@protocol WCFinderLiveHomePageTabLiveStreamSectionViewModelDelegate;

@interface WCFinderLiveHomePageTabLiveStreamSectionViewModel
{
    _Bool _isLocationServiceAuthrized;
    id <WCFinderLiveHomePageTabLiveStreamSectionViewModelDelegate> _delegate;
    WCFinderLiveStreamContainerModel *_tabListContainer;
    NSMutableDictionary *_pageVMDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pageVMDict; // @synthesize pageVMDict=_pageVMDict;
@property(nonatomic) _Bool isLocationServiceAuthrized; // @synthesize isLocationServiceAuthrized=_isLocationServiceAuthrized;
@property(retain, nonatomic) WCFinderLiveStreamContainerModel *tabListContainer; // @synthesize tabListContainer=_tabListContainer;
@property(nonatomic) __weak id <WCFinderLiveHomePageTabLiveStreamSectionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)fetchRecommendBottom;
- (void)fetchRecommendBottomWhenLessThan6;
- (void)_fetchLocation:(CDUnknownBlockType)arg1;
- (void)checkFetchLocation:(_Bool)arg1;
- (void)checkLocationAuthorize;
- (id)containerContext:(unsigned long long)arg1 tabInfo:(id)arg2;
- (id)createPageVM:(id)arg1;
- (void)removePageVM:(id)arg1;
- (id)pageVM:(unsigned long long)arg1;
- (id)currentPageVM;
- (void)cancelSectionCgi;
- (_Bool)isSectionCustomHeaderView;
- (void)resetExposeSession;
- (unsigned long long)curSubTabId;
- (unsigned long long)curTabId;
- (void)initializePageVM;
- (id)initWithContainerModel:(id)arg1 scene:(int)arg2 ctx:(id)arg3 isSkeleton:(_Bool)arg4 tabListContainer:(id)arg5;

@end

