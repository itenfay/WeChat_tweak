//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface FTSFavSectionController
{
    NSArray *_favItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *favItems; // @synthesize favItems=_favItems;
- (void)onFTSDetailPageFavResultChanged;
- (void)cancelSearch;
- (void)onLoadMore;
- (_Bool)hasMoreData;
- (_Bool)hasSearchDone;
- (void)search:(id)arg1;
- (void)selectFavSearchItem:(id)arg1 index:(unsigned int)arg2;
- (id)countLimitConifg;
- (unsigned long long)sectionType;
- (id)noResultTipSuffix;
- (id)searchBarPlaceHolder;
- (id)sectionTitle;
- (double)heightForRowAtIndex:(long long)arg1;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (long long)numberOfSearchItems;
- (void)didUpdateWithModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

