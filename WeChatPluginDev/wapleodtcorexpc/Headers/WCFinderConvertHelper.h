//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderConvertHelper : NSObject
{
}

+ (id)convertFeedShortInfoToDataItem:(id)arg1;
+ (id)convertRecommendedMusicToFinderMusicInfo:(id)arg1 docType:(int)arg2;
+ (id)convertTabKeyPathForCategory:(long long)arg1;
+ (id)genDataItemFromJSAPIPostParams:(id)arg1 finderUsername:(id)arg2;
+ (int)convertTabTypeToStreamCardAction:(int)arg1;
+ (int)convertStreamCardTypeToTabType:(int)arg1;
+ (void)bindFeedWidgetInfoWithStreamLayoutInfo:(id)arg1 dataItemArray:(id)arg2 widgetStyle:(int)arg3;
+ (unsigned long long)convertTabTypeToForceJumpTabType:(int)arg1;
+ (unsigned long long)convertTLTabTypeToForceJumpTabType:(long long)arg1;
+ (long long)converForceJumpTabTypeToTimelineTabType:(unsigned long long)arg1;
+ (id)createShareItemToMoment:(_Bool)arg1 fromContentVM:(id)arg2;
+ (id)convertShareItemToDataItem:(id)arg1;
+ (id)convertNotifyMsgItemToDataItem:(id)arg1;
+ (id)makeShareItemToMoment:(_Bool)arg1 dataItem:(id)arg2;
+ (id)makeShareItemToMoment:(_Bool)arg1 contentVM:(id)arg2;
+ (id)makeActivityLiveShareItemToTextStateWithDataItem:(id)arg1 eventHeadUrl:(id)arg2 eventNickname:(id)arg3 byPassInfoString:(id)arg4 relayIndex:(id)arg5 finderLiveEventInfo:(id)arg6;
+ (id)makeLiveShareItemToTextStateWithDataItem:(id)arg1;
+ (id)makeShareItemToActivity:(_Bool)arg1 dataItem:(id)arg2 eventHeadUrl:(id)arg3 eventNickname:(id)arg4 byPassInfoString:(id)arg5 relayIndex:(id)arg6 finderLiveEventInfo:(id)arg7 shareScene:(long long)arg8;
+ (id)makeLiveShareItemToMoment:(_Bool)arg1 dataItem:(id)arg2 extra:(id)arg3 shareScene:(long long)arg4;
+ (id)makeLiveShareItemToMoment:(_Bool)arg1 dataItem:(id)arg2;
+ (id)genUploadTaskForDataItem:(id)arg1 eventNickname:(id)arg2 byPassInfoString:(id)arg3 eventHeadUrl:(id)arg4 relayIndex:(id)arg5 finderLiveEventInfo:(id)arg6 liveShareSceneIfLive:(long long)arg7;
+ (id)genUploadTaskForDataItem:(id)arg1;
+ (id)createDataItemForShareToMoment:(id)arg1 eventNickname:(id)arg2 relayIndex:(id)arg3 eventHeadUrl:(id)arg4 byPassInfoString:(id)arg5 liveShareSceneIfLive:(long long)arg6;
+ (id)createDataItemForShareToMoment:(id)arg1;
+ (id)createShareToMomentDataItemWithContentVM:(id)arg1 liveShareSceneIfLive:(long long)arg2;
+ (id)createUploadTaskWithPendingTask:(id)arg1 dataItem:(id)arg2;
+ (id)compressOriginImageForData:(id)arg1;
+ (id)getImageWithFile:(id)arg1;
+ (_Bool)saveImage:(id)arg1 toFile:(id)arg2;
+ (id)createPostMediaThumbModel:(id)arg1 scrennSize:(struct CGSize)arg2;
+ (id)getLiveCoverDataItemWithPostMediaThumbModelArrs:(id)arg1 finderUsername:(id)arg2;
+ (_Bool)saveImage:(id)arg1 targetSize:(struct CGSize)arg2 toFile:(id)arg3;
+ (id)getLiveCoverDataItemWithImageInfo:(id)arg1 scrennSize:(struct CGSize)arg2 finderUsername:(id)arg3;
+ (id)liveCoverImageDataWithOriginalImage:(id)arg1 targetSize:(struct CGSize)arg2;
+ (int)commentSceneFromTimelineTabType:(long long)arg1;
+ (long long)timelineTabTypeFromCommentScene:(int)arg1;
+ (long long)timelineTabTypeFromFinderTabType:(int)arg1;
+ (int)convertTimelineTabTypeToFinderTabType:(long long)arg1;
+ (unsigned long long)convertTabType:(int)arg1;
+ (id)syncGetDataItemWithPostMediaThumbModel:(id)arg1 finderUsername:(id)arg2;
+ (id)syncGetDataItemWithImageInfo:(id)arg1 screenSize:(struct CGSize)arg2 finderUsername:(id)arg3;
+ (id)getImageLocalPathModelBy:(id)arg1 compressType:(unsigned long long)arg2;
+ (id)syncGetDataItemWithImageInfo:(id)arg1 screenSize:(struct CGSize)arg2 imageAttr:(id)arg3 finderUsername:(id)arg4;
+ (id)_compressImageToDataItemBy:(id)arg1 screenSize:(struct CGSize)arg2 imageAttr:(id)arg3 finderUsername:(id)arg4;
+ (void)asyncGetDataItemByImageInfo:(id)arg1 screenSize:(struct CGSize)arg2 imageAttr:(id)arg3 finderUsername:(id)arg4 compressDoneBlock:(CDUnknownBlockType)arg5;
+ (void)moveTempCacheFileToPermanentPathWithMediaInfo:(id)arg1 thumbTempCachePath:(id)arg2 mediaTempCachePath:(id)arg3 fullThumbTempCachePath:(id)arg4 halfMediaTempCachePath:(id)arg5;
+ (void)moveTempCacheFileToPermanentPathWithMediaInfo:(id)arg1 thumbTempCachePath:(id)arg2 mediaTempCachePath:(id)arg3;
+ (id)createEmptyDataItemWithUsername:(id)arg1;
+ (void)_generateUploadFinderItemWithMediaInfo:(id)arg1 mediaURL:(id)arg2 finderUsername:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_generateUploadFinderItemWithVideoURL:(id)arg1 finderUsername:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_generateUploadFinderItemWithPHAsset:(id)arg1 mmAsset:(id)arg2 finderUsername:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)generateUploadFinderItemWithPHAsset:(id)arg1 mmAsset:(id)arg2 videoURL:(id)arg3 finderUsername:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)__generateUploadFinderItemWithMusicClip:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)generateUploadFinderItemWithMusicClip:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)generateUploadFinderItemWithMusicMVModel:(id)arg1 thumbPath:(id)arg2 finderUsername:(id)arg3;
+ (id)genDataItemWithShortLongVideoCombine:(id)arg1 saveMediaToLocal:(_Bool)arg2 finderUsername:(id)arg3 optionParams:(id)arg4;
+ (id)genDataItemWithShortVideoPath:(id)arg1 finderUsername:(id)arg2;
+ (double)renderUnBlackCoverFrameBy:(id)arg1 editAttr:(id)arg2;
+ (id)generateUploadFinderItemWithVideoPath:(id)arg1 thumbPath:(id)arg2 optionParams:(id)arg3 isMJAsyncComposition:(_Bool)arg4;
+ (id)generateUploadFinderItemWithVideoPath:(id)arg1 thumbPath:(id)arg2 optionParams:(id)arg3;
+ (id)generateUploadFinderItemForMJAsyncCompositionWithVideoPath:(id)arg1 thumbPath:(id)arg2 optionParams:(id)arg3;
+ (id)generateUploadFinderItemForMJAsyncCompositionFromSightDraft:(id)arg1 optionParams:(id)arg2;
+ (id)generateUploadFinderItemFromSightDraft:(id)arg1 optionParams:(id)arg2;
+ (id)_generateUploadFinderItemWithImageModelArray:(id)arg1 finderUsername:(id)arg2;
+ (id)generateUploadFinderItemWithImageModelArray:(id)arg1 finderUsername:(id)arg2;
+ (id)generateUploadFinderItemWithImagePathArray:(id)arg1 finderUsername:(id)arg2;

@end

