//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMMusicPlayerUtility
{
}

+ (void)markTextStateTipShown;
+ (_Bool)hasShowTextStateTip;
+ (_Bool)shouldShowRawPlayerVC;
+ (id)descriptionForAudioType:(int)arg1;
+ (id)generateMessageWrapWithMusicInfo:(id)arg1 shareItem:(id)arg2 coverImageData:(id)arg3 pushFromType:(unsigned long long)arg4;
+ (_Bool)isDefaultTransition:(id)arg1;
+ (void)addOrUpdateGapTrackItemInMvModel:(id)arg1;
+ (_Bool)canAddItemWithAssetInfo:(id)arg1 minDuration:(double)arg2 errMsg:(id *)arg3;
+ (int)mvInfoAnimationTypeWithMavAnimationType:(long long)arg1;
+ (long long)mavImageAnimationTypeWithMVAnimationType:(int)arg1;
+ (void)updateGapTrackItem:(id)arg1 withTimeOffsetInMvMs:(unsigned int)arg2 timeLengthInMvMs:(unsigned int)arg3;
+ (id)genGapTrackItemWithTimeOffsetInMvMs:(unsigned int)arg1 timeLengthInMvMs:(unsigned int)arg2;
+ (unsigned int)imageAnimationTypeWithWidth:(double)arg1 height:(double)arg2;
+ (void)fillTrackItem:(id)arg1 withReportData:(id)arg2;
+ (void)fillTrackItem:(id)arg1 withFinderDataItem:(id)arg2;
+ (void)__genFlexClipMVModelWithSelectedViewModelArr:(id)arg1 baseMvModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)reArrangeTrackItemInMVModel:(id)arg1 shouldSetVideoDuration:(_Bool)arg2;
+ (id)convertSelectedItemModelToTrackItem:(id)arg1;
+ (void)genFlexClipMVModelWithSelectedViewModelArr:(id)arg1 baseMvModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)musicFinderVideoCellModelArray:(id)arg1 getModelById:(id)arg2;
+ (id)musicAlbumVideoCellModelArray:(id)arg1 getModelById:(id)arg2;
+ (void)showMusicCantPlayAlertWithCustomWording:(id)arg1;
+ (_Bool)shouldShowLyrics:(id)arg1;
+ (_Bool)isValidLocalVideoForPost:(id)arg1;
+ (void)setStatusOpenMusicInfoData:(id)arg1;
+ (void)fillMusicShareItemSDKData:(id)arg1 originShareItem:(id)arg2;
+ (void)fillMusicShareItemWithSongInfo:(id)arg1 songInfo:(id)arg2;
+ (id)pathToMusicMVData;
+ (id)musicVideoMainDir;
+ (id)loadCoverImageWithUrl:(id)arg1 observerIfLoadAsync:(id)arg2;
+ (struct CGSize)getVideoSizeByAvAsset:(id)arg1;
+ (id)getMusicCoverImageData:(id)arg1;
+ (id)getMusicAlbumImageData:(id)arg1 mvModel:(id)arg2;
+ (id)getMusicSourceNameWithAppId:(id)arg1;
+ (id)getAppSourceNameWithAppId:(id)arg1;
+ (id)getMusicGrayIconPathWithAppId:(id)arg1;
+ (id)getMusicGrayIconWithAppId:(id)arg1 size:(struct CGSize)arg2;
+ (id)getMusicGrayIconWithAppId:(id)arg1;
+ (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3 cornerRadius:(double)arg4;
+ (id)getMusicIconFromSource:(id)arg1 size:(struct CGSize)arg2 cornerRadius:(double)arg3;
+ (id)getMusicIconFromSource:(id)arg1 size:(struct CGSize)arg2;
+ (id)getMvCoverUrlWithMvModel:(id)arg1;
+ (void)getFinderDataItemWithObjectId:(unsigned long long)arg1 nonceId:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getFinderDataItemWithMVModel:(id)arg1 ignoreLocalModel:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getFinderDataItemWithTrack:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)genTmpThumbImageWithLocalVideoPath:(id)arg1 clipOffsetMs:(unsigned long long)arg2;
+ (id)compressedThumbImage:(id)arg1;
+ (id)genTmpThumbWithLocalVideoPath:(id)arg1 clipOffsetMs:(unsigned long long)arg2;
+ (void)getThumbWithPostingTrack:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

