//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, WCFinderFavFeedListPageViewModel, WCFinderTopicInfo;
@protocol WCFinderFavListViewModelDelegate;

@interface WCFinderFavListViewModel : NSObject
{
    _Bool _userFavChanged;
    id <WCFinderFavListViewModelDelegate> _delegate;
    long long _totalCount;
    NSMutableArray *_pageViewModels;
    unsigned long long _selectedTopicId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool userFavChanged; // @synthesize userFavChanged=_userFavChanged;
@property(nonatomic) unsigned long long selectedTopicId; // @synthesize selectedTopicId=_selectedTopicId;
@property(retain, nonatomic) NSMutableArray *pageViewModels; // @synthesize pageViewModels=_pageViewModels;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) __weak id <WCFinderFavListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItem:(id)arg1 updateFavStateByExtention:(_Bool)arg2;
- (void)onFavTagPageFeedBecomeEmpty:(id)arg1;
- (id)findTopicListVM:(id)arg1 fromExistsVMS:(id)arg2;
- (void)onFetchFavTagListUpdate:(id)arg1;
- (void)updateTopics;
- (void)selectTopicInfo:(id)arg1;
- (id)pageViewModelForTopicId:(unsigned long long)arg1;
@property(readonly, nonatomic) WCFinderFavFeedListPageViewModel *displayPageViewModel;
@property(readonly, nonatomic) NSArray *topicInfos;
@property(readonly, nonatomic) WCFinderTopicInfo *selectedTopic;
- (id)allFeedPageViewModel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

