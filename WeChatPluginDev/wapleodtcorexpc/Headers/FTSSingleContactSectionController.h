//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface FTSSingleContactSectionController
{
    NSArray *_contacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)onContactsModified;
- (void)onRightButtonTapped;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)cancelSearch;
- (_Bool)hasSearchDone;
- (void)search:(id)arg1;
- (id)countLimitConifg;
- (unsigned long long)sectionType;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (id)sectionTitle;
- (void)didSelectRowAtIndex:(long long)arg1;
- (long long)numberOfSearchItems;
- (id)cellForTitleInSection:(long long)arg1;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
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

