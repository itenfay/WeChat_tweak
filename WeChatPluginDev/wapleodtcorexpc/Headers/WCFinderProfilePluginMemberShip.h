//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnyPromise, NSString, WCFinderFeedArray, WCFinderProfileOverviewSection;

@interface WCFinderProfilePluginMemberShip
{
    WCFinderFeedArray *_feedArray;
    AnyPromise *_firstPageFetcher;
    WCFinderProfileOverviewSection *_overview;
}

+ (id)overviewSectionTypes;
+ (_Bool)pluginEnable:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderProfileOverviewSection *overview; // @synthesize overview=_overview;
@property(retain, nonatomic) AnyPromise *firstPageFetcher; // @synthesize firstPageFetcher=_firstPageFetcher;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)insertPostDataItem:(id)arg1 tid:(id)arg2;
- (void)onMemberShipFeedPostSessionStartUpload:(id)arg1;
- (void)onMemberShipFeedPostSessionUpLoadSuccessful:(id)arg1;
- (void)onMemberShipFeedPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (_Bool)enableReceivePostDataItem:(id)arg1;
- (void)refetchFeeds;
- (void)onFinderMemberShipVisitorStatusHasChanged:(unsigned long long)arg1;
- (void)onProfileExtInfoMemberShipInfoChanged;
- (id)appendLocalPostingDataItems:(id)arg1 isAuthor:(_Bool)arg2 username:(id)arg3;
- (void)fetchData:(_Bool)arg1;
- (void)requestPageData;
- (void)_updateMemberShipOverviewSection:(id)arg1 cnt:(long long)arg2 fillCache:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

