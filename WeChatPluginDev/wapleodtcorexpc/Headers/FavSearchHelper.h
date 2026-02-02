//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol FavSearchHelperDelegate;

@interface FavSearchHelper
{
    unsigned int _currentEventID;
    id <FavSearchHelperDelegate> _delegate;
    NSMutableArray *_arrLocItem;
}

+ (id)convertFavDataToSimpleInfo:(id)arg1 inItem:(id)arg2;
+ (id)aggregatePicSearchResult:(id)arg1;
+ (id)filterAndAggregateSearchResult:(id)arg1 withSearchText:(id)arg2 withSearchType:(long long)arg3 withTagList:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrLocItem; // @synthesize arrLocItem=_arrLocItem;
@property(nonatomic) unsigned int currentEventID; // @synthesize currentEventID=_currentEventID;
@property(nonatomic) __weak id <FavSearchHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFindFavAddress:(id)arg1 eventID:(unsigned int)arg2;
- (void)requestAddressFromLocation:(id)arg1;
- (void)getAddressInQueue;
- (void)getFavItemsAddress:(id)arg1;
- (void)getAddressWithLocation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

