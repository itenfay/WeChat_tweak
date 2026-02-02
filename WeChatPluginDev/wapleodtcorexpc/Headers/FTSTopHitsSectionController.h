//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray;

@interface FTSTopHitsSectionController
{
    NSArray *_topHitItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *topHitItems; // @synthesize topHitItems=_topHitItems;
- (unsigned long long)sectionType;
- (id)sectionTitle;
- (unsigned long long)maxDisplayItemsCount;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)arg1 indexPath:(id)arg2;
- (void)didUpdateWithModel:(id)arg1;

@end

