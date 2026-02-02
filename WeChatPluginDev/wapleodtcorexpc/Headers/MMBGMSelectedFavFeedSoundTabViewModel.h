//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMUniqueMutableArray, NSData;
@protocol MMBGMSelectedFavFeedSoundTabViewModelDelegate;

@interface MMBGMSelectedFavFeedSoundTabViewModel
{
    _Bool _hasMore;
    id <MMBGMSelectedFavFeedSoundTabViewModelDelegate> _bgmFavVMDelegate;
    MMBGMUniqueMutableArray *_musicItem;
    NSData *_sessionBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) MMBGMUniqueMutableArray *musicItem; // @synthesize musicItem=_musicItem;
@property(nonatomic) __weak id <MMBGMSelectedFavFeedSoundTabViewModelDelegate> bgmFavVMDelegate; // @synthesize bgmFavVMDelegate=_bgmFavVMDelegate;
- (void)asyncGetMusicDataAtIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldInsertSelectedMusicDataToFirst;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (unsigned long long)tabType;
- (id)tabTitle;
- (_Bool)hasMoreData;
- (void)_loadData:(_Bool)arg1;
- (void)loadMoreData;
- (void)loadData;

@end

