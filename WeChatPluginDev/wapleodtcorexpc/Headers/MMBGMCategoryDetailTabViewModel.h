//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMCategoryItem, MMBGMUniqueMutableArray, NSData;

@interface MMBGMCategoryDetailTabViewModel
{
    _Bool _hasMore;
    MMBGMCategoryItem *_categoryItem;
    MMBGMUniqueMutableArray *_musicItem;
    NSData *_sessionBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) MMBGMUniqueMutableArray *musicItem; // @synthesize musicItem=_musicItem;
@property(retain, nonatomic) MMBGMCategoryItem *categoryItem; // @synthesize categoryItem=_categoryItem;
- (_Bool)shouldInsertSelectedMusicDataToFirst;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)tabType;
- (unsigned long long)dataCount;
- (_Bool)hasMoreData;
- (void)_loadData:(_Bool)arg1;
- (void)clearData;
- (void)loadMoreData;
- (void)loadData;
- (_Bool)isSameCategory:(id)arg1;
- (void)updateWithBGMCategory:(id)arg1;

@end

