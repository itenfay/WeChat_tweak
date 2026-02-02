//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMUniqueMutableArray, NSData;

@interface MMBGMNewLIfeSelectedRecommendTabViewModel
{
    _Bool _hasMore;
    _Bool _loadingData;
    MMBGMUniqueMutableArray *_musicInfo;
    NSData *_sessionBuffer;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isLoadingData) _Bool loadingData; // @synthesize loadingData=_loadingData;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) MMBGMUniqueMutableArray *musicInfo; // @synthesize musicInfo=_musicInfo;
- (_Bool)isReccommentdTabModel;
- (void)setMusicDataToFirst:(id)arg1;
- (void)addMusicData:(id)arg1;
- (unsigned long long)indexOfMusicInfo:(id)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (unsigned long long)tabType;
- (id)tabTitle;
- (_Bool)hasMoreData;
- (void)_loadData:(_Bool)arg1;
- (void)reloadData;
- (void)loadMoreData;
- (void)loadData;

@end

