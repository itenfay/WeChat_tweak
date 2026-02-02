//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSTalkerEntryInfo;

@interface FTSTalkerEntrySectionController
{
    FTSTalkerEntryInfo *_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FTSTalkerEntryInfo *info; // @synthesize info=_info;
- (long long)topNotSearchItemCount;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (void)didSelectRowAtIndex:(long long)arg1;
- (double)heightForRowAtIndex:(long long)arg1;
- (id)objectForIndexPath:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (long long)numberOfSearchItems;
- (long long)numberOfItems;
- (void)didUpdateWithModel:(id)arg1;

@end

