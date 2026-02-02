//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface FTSSearchContactSectionController
{
    unsigned long long _findType;
}

@property(nonatomic) unsigned long long findType; // @synthesize findType=_findType;
- (long long)topNotSearchItemCount;
- (unsigned long long)clickTypeForIndex:(long long)arg1;
- (unsigned long long)sectionType;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (id)objectForIndexPath:(id)arg1;
- (double)heightForRowAtIndex:(long long)arg1;
- (long long)numberOfSearchItems;
- (long long)numberOfItems;
- (void)didUpdateWithModel:(id)arg1;

@end

