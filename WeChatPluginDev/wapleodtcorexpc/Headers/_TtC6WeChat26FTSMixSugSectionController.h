//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtC6WeChat26FTSMixSugSectionController
{
    MISSING_TYPE *sectionModel;
    MISSING_TYPE *sugs;
}

+ (_Bool)prepositionEnabled;
+ (_Bool)uiEnabled;
- (void).cxx_destruct;
- (id)init;
- (id)objectForIndexPath:(id)arg1;
- (void)onExposeItem:(id)arg1 indexPath:(id)arg2;
- (void)didSelectRowAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (double)heightForRowAtIndex:(long long)arg1;
- (unsigned long long)maxDisplayItemsCount;
- (long long)numberOfSearchItems;
- (long long)numberOfItems;
- (void)didUpdateWithModel:(id)arg1;
@property(nonatomic, readonly) unsigned long long sectionType;
- (id)initWithSectionModel:(id)arg1;
- (long long)topNotSearchItemCount;
- (unsigned long long)clickTypeForIndex:(long long)arg1;

@end

