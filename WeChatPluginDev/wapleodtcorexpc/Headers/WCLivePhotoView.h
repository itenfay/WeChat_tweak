//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAsset;

@interface WCLivePhotoView
{
    _Bool _isPendingToPlay;
    MMAsset *_asset;
}

+ (id)generatePlayerArgsWithLocalLivePhotoPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
- (void)_startPlayingIfPending;
- (void)_resetPendingToPlay;
- (void)_markPendingToPlay;
- (void)clearPlayer;
- (void)pausePlaying;
- (void)startPlaying;
- (void)_updatePlayerArgsWithLocalLivePhotoPath:(id)arg1;
- (void)_loadLivePhotoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_loadDisplayImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_loadAssetData;
- (void)_init;
- (void)_initWithAsset:(id)arg1 playerArgs:(id)arg2;
- (id)initWithImage:(id)arg1 asset:(id)arg2 playerArgs:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 asset:(id)arg2 playerArgs:(id)arg3;

@end

