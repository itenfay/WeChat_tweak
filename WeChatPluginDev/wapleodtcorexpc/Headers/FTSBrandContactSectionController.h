//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface FTSBrandContactSectionController
{
    NSArray *_contacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)search:(id)arg1;
- (id)countLimitConifg;
- (unsigned long long)sectionType;
- (id)noResultTipSuffix;
- (id)searchBarPlaceHolder;
- (id)sectionTitle;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (long long)numberOfSearchItems;
- (void)didUpdateWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

