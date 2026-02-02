//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBGMUniqueMutableArray, NSData, NSMutableArray;
@protocol MJCameraMusicTabViewModelDataSource, MJCameraMusicTabViewModelDelegate, MMBGMSelectedMusicDataProtocol;

@interface MJCameraMusicTabViewModel
{
    _Bool _loadingData;
    _Bool _recommendedDataLoaded;
    _Bool _hasMore;
    id <MJCameraMusicTabViewModelDataSource> _dataSource;
    id <MJCameraMusicTabViewModelDelegate> _cameraVMDelegate;
    MMBGMUniqueMutableArray *_recommendedMusicInfos;
    NSMutableArray *_musicInfos;
    NSData *_sessionBuffer;
    id <MMBGMSelectedMusicDataProtocol> _insertedMusicInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) id <MMBGMSelectedMusicDataProtocol> insertedMusicInfo; // @synthesize insertedMusicInfo=_insertedMusicInfo;
@property(nonatomic, getter=isRecommendedDataLoaded) _Bool recommendedDataLoaded; // @synthesize recommendedDataLoaded=_recommendedDataLoaded;
@property(nonatomic, getter=isLoadingData) _Bool loadingData; // @synthesize loadingData=_loadingData;
@property(retain, nonatomic) NSData *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(retain, nonatomic) NSMutableArray *musicInfos; // @synthesize musicInfos=_musicInfos;
@property(retain, nonatomic) MMBGMUniqueMutableArray *recommendedMusicInfos; // @synthesize recommendedMusicInfos=_recommendedMusicInfos;
@property(nonatomic) __weak id <MJCameraMusicTabViewModelDelegate> cameraVMDelegate; // @synthesize cameraVMDelegate=_cameraVMDelegate;
@property(nonatomic) __weak id <MJCameraMusicTabViewModelDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)setMusicDataToFirst:(id)arg1;
- (_Bool)isReccommentdTabModel;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (unsigned long long)tabType;
- (id)tabTitle;
- (_Bool)hasMoreData;
- (void)_loadData:(_Bool)arg1;
- (unsigned long long)indexOfMusicId:(id)arg1;
- (void)reloadTemplateMusic;
- (void)refetchData;
- (void)_clearLoadData;
- (void)loadMoreData;
- (void)loadData;
- (id)init;

@end

