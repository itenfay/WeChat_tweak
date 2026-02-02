//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UITableView;
@protocol MMFinderLiveMusicSettingSearchTableDelegate;

@interface MMFinderLiveMusicSettingSearchTableViewModel : NSObject
{
    id <MMFinderLiveMusicSettingSearchTableDelegate> _searchTableDelegate;
    NSMutableArray *_musicSearchDataItemArray;
    UITableView *_searchTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) NSMutableArray *musicSearchDataItemArray; // @synthesize musicSearchDataItemArray=_musicSearchDataItemArray;
@property(nonatomic) __weak id <MMFinderLiveMusicSettingSearchTableDelegate> searchTableDelegate; // @synthesize searchTableDelegate=_searchTableDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (_Bool)hasSearchResult;
- (void)resetSearchResults:(id)arg1;
- (void)appendSearchResults:(id)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

