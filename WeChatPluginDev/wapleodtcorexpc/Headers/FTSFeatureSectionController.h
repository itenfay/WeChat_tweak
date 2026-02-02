//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface FTSFeatureSectionController
{
    NSArray *_features;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
- (void)onFTSMemorySearchResultChangedForFeatureDetailPage;
- (void)cancelSearch;
- (_Bool)hasSearchDone;
- (void)search:(id)arg1;
- (id)countLimitConifg;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (long long)numberOfSearchItems;
- (unsigned long long)sectionType;
- (id)noResultTipSuffix;
- (id)searchBarPlaceHolder;
- (id)sectionTitle;
- (void)didUpdateWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

