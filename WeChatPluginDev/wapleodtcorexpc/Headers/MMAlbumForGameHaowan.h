//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GameVideoAlbumDataFetcher, NSArray, NSMutableArray, NSString;
@protocol GameDataChangedObserver;

@interface MMAlbumForGameHaowan
{
    NSArray *_albumInfos;
    GameVideoAlbumDataFetcher *_dataFetcher;
    _Bool _shouldInclude;
    _Bool _isOnlyShowVideo;
    _Bool _hasSetupLocalVideoList;
    int _onlineVideoEndIndex;
    unsigned long long _maxAskedIndex;
    int _errorCount;
    _Bool _hasReceiveCommonVideoList;
    NSArray *_recommendVideoList;
    id <GameDataChangedObserver> _changedObserver;
    NSMutableArray *_combinVideoList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasReceiveCommonVideoList; // @synthesize hasReceiveCommonVideoList=_hasReceiveCommonVideoList;
@property(retain, nonatomic) NSMutableArray *combinVideoList; // @synthesize combinVideoList=_combinVideoList;
@property(nonatomic) __weak id <GameDataChangedObserver> changedObserver; // @synthesize changedObserver=_changedObserver;
@property(copy, nonatomic) NSArray *recommendVideoList; // @synthesize recommendVideoList=_recommendVideoList;
- (unsigned long long)searchInsertPositionForOnlineVideo:(unsigned long long)arg1 beginIndex:(unsigned long long)arg2;
- (void)appendOnlineVideoList:(id)arg1;
- (void)albumDataFetcher:(id)arg1 didFailedWithError:(id)arg2;
- (void)albumDataFetcher:(id)arg1 didReceivedVideoList:(id)arg2;
- (void)albumDataFetcher:(id)arg1 didReceivedRecommendVideoList:(id)arg2;
- (void)notifyGameDataChanged;
- (void)fetchOnlineVideoListIfNeed;
- (id)fetchAssetCollection:(id)arg1;
- (id)fetchAssets:(id)arg1;
- (void)appendLocalAssets:(id)arg1 albumInfo:(id)arg2;
- (void)setupLocalVideoList;
- (id)lastAssetWithSecond:(double)arg1;
- (void)retriveCoverImageWithAsyncBlock:(CDUnknownBlockType)arg1;
- (void)retrivePhotoCountWithAsyncBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)columnCount;
- (void)stopICloudActivity;
- (id)assetOfIndex:(unsigned long long)arg1;
- (id)coverImage;
- (unsigned long long)photosCount;
- (id)name;
- (id)albumId;
@property(readonly, nonatomic) _Bool hasOccurredFault;
@property(readonly, nonatomic) unsigned long long combinedVideoCount;
- (void)setupMMAlbumForGameHaowan;
- (id)initWithAlbumInfos:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

