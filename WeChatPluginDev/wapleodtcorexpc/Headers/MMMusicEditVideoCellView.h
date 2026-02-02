//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset, MMMusicEditVideoCellModel, MMMusicEditVideoCropView, MMMusicEditVideoPlayerContainerView, MMMusicFinderVideoDownloadHelper, MMMusicLiveLyricDisplayView, MMTimer, NSString, UIView;
@protocol MMMusicEditVideoCellViewDelegate;

@interface MMMusicEditVideoCellView
{
    _Bool _isDownloadSuccess;
    id <MMMusicEditVideoCellViewDelegate> _delegate;
    UIView *_videoCropAreaContainerView;
    MMMusicEditVideoPlayerContainerView *_videoPlayerContainerView;
    MMMusicLiveLyricDisplayView *_lyricView;
    MMMusicEditVideoCropView *_videoCropView;
    MMMusicEditVideoCellModel *_editModel;
    NSString *_songId;
    MMTimer *_musicTimer;
    AVAsset *_curCropAsset;
    double _cropStartTimeInSecond;
    double _cropEndTimeInSecond;
    double _timeLimit;
    MMMusicFinderVideoDownloadHelper *_downloadHelper;
    NSString *_curDownloadTid;
    NSString *_formatVideoPath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDownloadSuccess; // @synthesize isDownloadSuccess=_isDownloadSuccess;
@property(retain, nonatomic) NSString *formatVideoPath; // @synthesize formatVideoPath=_formatVideoPath;
@property(retain, nonatomic) NSString *curDownloadTid; // @synthesize curDownloadTid=_curDownloadTid;
@property(retain, nonatomic) MMMusicFinderVideoDownloadHelper *downloadHelper; // @synthesize downloadHelper=_downloadHelper;
@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic) double cropEndTimeInSecond; // @synthesize cropEndTimeInSecond=_cropEndTimeInSecond;
@property(nonatomic) double cropStartTimeInSecond; // @synthesize cropStartTimeInSecond=_cropStartTimeInSecond;
@property(retain, nonatomic) AVAsset *curCropAsset; // @synthesize curCropAsset=_curCropAsset;
@property(retain, nonatomic) MMTimer *musicTimer; // @synthesize musicTimer=_musicTimer;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(retain, nonatomic) MMMusicEditVideoCellModel *editModel; // @synthesize editModel=_editModel;
@property(retain, nonatomic) MMMusicEditVideoCropView *videoCropView; // @synthesize videoCropView=_videoCropView;
@property(retain, nonatomic) MMMusicLiveLyricDisplayView *lyricView; // @synthesize lyricView=_lyricView;
@property(retain, nonatomic) MMMusicEditVideoPlayerContainerView *videoPlayerContainerView; // @synthesize videoPlayerContainerView=_videoPlayerContainerView;
@property(retain, nonatomic) UIView *videoCropAreaContainerView; // @synthesize videoCropAreaContainerView=_videoCropAreaContainerView;
@property(nonatomic) __weak id <MMMusicEditVideoCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDownloadFail;
- (void)onDownloadFinishWithTid:(id)arg1;
- (void)onLyricService:(id)arg1 curentLyricChangeTo:(id)arg2 timeToNext:(double)arg3 currIndex:(unsigned int)arg4;
- (id)genLocalThumbPathInPos:(double)arg1;
- (void)musicEditVideoCropView:(id)arg1 didClickDoneBtnWithEditIndex:(long long)arg2;
- (void)musicEditVideoCropView:(id)arg1 didClickCloseBtnWithEditIndex:(long long)arg2 withOriginStartTime:(double)arg3 originEndTime:(double)arg4;
- (void)musicEditVideoCropView:(id)arg1 valueDidChange:(double)arg2 currentEditIndex:(long long)arg3;
- (void)musicEditVideoCropViewDidChangeCropTimeRangeWithStartTime:(double)arg1 endTime:(double)arg2 editAssetIndex:(long long)arg3;
- (void)onNeedToSeekMusicToStartTime;
- (void)initAndSeekMusic;
- (void)seekMusicAndVideo;
- (void)loadLocalImageSlider:(_Bool)arg1;
- (void)playVideo;
- (void)playVideoAndLoadLocalImageInSlider:(_Bool)arg1;
- (void)resume:(unsigned int)arg1;
- (void)pause;
- (id)borrowVideoCropView;
- (struct CGRect)borrowVideoPlayerContainerViewFrame;
- (void)updateEditVideoCellModel:(id)arg1;
- (void)initAndStartPlayVideoWithVideoCropView:(id)arg1;
- (void)setEditVideoCellModel:(id)arg1 isPlayVideoImmediately:(_Bool)arg2;
- (_Bool)isCropped;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)resetTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andSongId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

