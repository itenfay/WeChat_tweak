//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTableView, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSString, UIImage, UITextField, WCColorProxy, WCSTokenPickLogic;

@protocol GeneralContactsSearchPanelSearchingResultProtocol <NSObject>
@property(nonatomic) _Bool bDisplaySectionResults;
@property(nonatomic) _Bool bShouldFilterSearchResults;
@property(nonatomic, setter=SetIsShowAllTags:) _Bool isShowAllTags;
@property(retain, nonatomic) WCSTokenPickLogic *tokenPickLogic;
@property(retain, nonatomic) WCColorProxy *colorProxy;
@property(readonly, nonatomic) UITextField *m_SearchTextField;
- (void)refreshPickDataRecommendSection:(long long)arg1 added:(_Bool)arg2 deleted:(_Bool)arg3;
- (void)setSearchText:(NSString *)arg1;
- (NSString *)getSearchText;
- (MMTableView *)getSearchResultTable;
- (_Bool)isExpandingForSection:(long long)arg1;
- (void)setExpandStatus:(_Bool)arg1 forSection:(long long)arg2;
- (NSString *)getSectionKeyAtSection:(long long)arg1;
- (unsigned long long)getMoreCellStatusAtSection:(long long)arg1;
- (void)clickMoreCellAtIndexPath:(NSIndexPath *)arg1;
- (UIImage *)getMoreCellImageAtSection:(long long)arg1;
- (NSString *)getMoreCellDescriptionAtSection:(long long)arg1;
- (_Bool)shouldCollaseOrExpandSearchResultAtIndex:(long long)arg1;
- (_Bool)isMoreCellAtIndexPath:(NSIndexPath *)arg1;
- (void)prepareRefreshingAnimated:(_Bool)arg1;
- (void)prepareRefreshing;
- (void)setFilterdSectionResults:(NSDictionary *)arg1;
- (void)setSectionTitleMaps:(NSDictionary *)arg1;
- (void)setFilterdSectionKeys:(NSArray *)arg1;
- (unsigned int)getObjectRow:(NSIndexPath *)arg1;
- (id)getObjectForIndexPath:(NSIndexPath *)arg1;
- (long long)numberofRowsInSection:(long long)arg1;
- (NSMutableArray *)getFilteredObjects;
- (void)clearFilteredObjects;
- (void)addFilteredObject:(id)arg1;
- (unsigned long long)getObjectCount;
- (void)setFilteredObjects:(NSArray *)arg1;
- (id)getObjectFor:(unsigned long long)arg1;
@end

