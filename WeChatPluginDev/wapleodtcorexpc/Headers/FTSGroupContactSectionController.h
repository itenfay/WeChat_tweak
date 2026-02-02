//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface FTSGroupContactSectionController
{
    NSArray *_contacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)cancelSearch;
- (_Bool)hasSearchDone;
- (void)search:(id)arg1;
- (_Bool)isCreateChatRoomCellAtRow:(long long)arg1;
- (_Bool)shouldDisplayChatRoomEntry;
- (id)countLimitConifg;
- (void)didSelectDataRowAtIndex:(long long)arg1 indexPath:(id)arg2;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (long long)numberOfSearchItems;
- (unsigned long long)sectionType;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (id)sectionTitle;
- (void)didUpdateWithModel:(id)arg1;

@end

