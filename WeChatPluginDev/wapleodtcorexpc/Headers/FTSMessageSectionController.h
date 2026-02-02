//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface FTSMessageSectionController
{
    NSMutableDictionary *m_dicWeakMedia;
}

- (void).cxx_destruct;
- (unsigned int)getSubClickTypeForClickType:(unsigned int)arg1 index:(unsigned int)arg2;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (void)onFTSDetailPageMessageResultChanged:(_Bool)arg1;
- (void)cancelSearch;
- (void)onLoadMore;
- (_Bool)hasMoreData;
- (_Bool)isSearching;
- (_Bool)hasSearchDone;
- (void)search:(id)arg1;
- (double)heightForRowAtIndex:(long long)arg1;
- (_Bool)isMsgTalkerSearchEntry:(long long)arg1;
- (id)objectForIndexPath:(id)arg1;
- (void)didSelectRowAtIndex:(long long)arg1;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)countLimitConifg;
- (unsigned long long)sectionType;
- (id)sectionTitle;
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

