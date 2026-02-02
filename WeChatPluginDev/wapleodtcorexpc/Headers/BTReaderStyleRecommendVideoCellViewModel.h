//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTVideoItemCellAutoPlayReporter, BTVideoItemCellAutoPlayerView, NSString;

@interface BTReaderStyleRecommendVideoCellViewModel
{
    _Bool m_gotUrl;
    _Bool m_isGettingUrl;
    NSString *m_videoUrl;
    unsigned long long m_videoUrlExpiredTime;
    _Bool _isVideoCoveredByTitlePlaying;
    _Bool _isPrepareToPlay;
    _Bool _videoHasBeganBuffering;
    unsigned long long _status;
    BTVideoItemCellAutoPlayerView *_autoPlayerView;
    BTVideoItemCellAutoPlayReporter *_reporter;
}

+ (_Bool)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) BTVideoItemCellAutoPlayReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) BTVideoItemCellAutoPlayerView *autoPlayerView; // @synthesize autoPlayerView=_autoPlayerView;
@property(nonatomic) _Bool videoHasBeganBuffering; // @synthesize videoHasBeganBuffering=_videoHasBeganBuffering;
@property(nonatomic) _Bool isPrepareToPlay; // @synthesize isPrepareToPlay=_isPrepareToPlay;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) _Bool isVideoCoveredByTitlePlaying; // @synthesize isVideoCoveredByTitlePlaying=_isVideoCoveredByTitlePlaying;
- (unsigned long long)getIndexForMsgSectionData;
- (id)getVideoView;
- (id)getCellView;
- (void)destoryVideo;
- (void)pauseVideo;
- (void)playVideo;
- (void)initVideo;
- (id)autoPlayDescription;
- (_Bool)canAutoPlay;
- (id)genBTRecommendVideoItemCellAutoPlayReportData;
- (void)updateVideoAutoPlayStatusByAction:(unsigned long long)arg1;
- (void)onVideoPause:(unsigned int)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1;
- (void)onVideoEndBuffering:(unsigned int)arg1;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onVideoPlay:(unsigned int)arg1;
- (void)resetVideoPlayerView;
- (void)destoryVideoPlayerView;
- (void)stopVideoPlayerView;
- (void)pauseVideoPlayerView;
- (void)playVideoPlayerView;
- (void)startVideoPlayerViewWithInitialTime;
- (void)initVideoPlayerView;
- (id)syncCaptureVideo;
- (double)getCurrentPlayedTime;
- (id)remainTimeStrWithPlayedTime;
- (double)titleMaxWidth;
- (unsigned long long)titleLineNumber;
- (id)titleFont;
- (struct CGSize)coverImageViewSize;
- (id)timeStr;
- (id)itemViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

