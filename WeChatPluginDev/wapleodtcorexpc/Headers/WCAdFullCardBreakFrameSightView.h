//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdBreakFrameView;

@interface WCAdFullCardBreakFrameSightView
{
    _Bool _intentToPlay;
    WCAdBreakFrameView *_adBreakFrameView;
    double _fullCardVideoDownloadProgress;
    double _breakFrameVideoDownloadProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double breakFrameVideoDownloadProgress; // @synthesize breakFrameVideoDownloadProgress=_breakFrameVideoDownloadProgress;
@property(nonatomic) double fullCardVideoDownloadProgress; // @synthesize fullCardVideoDownloadProgress=_fullCardVideoDownloadProgress;
@property(nonatomic) _Bool intentToPlay; // @synthesize intentToPlay=_intentToPlay;
@property(nonatomic) __weak WCAdBreakFrameView *adBreakFrameView; // @synthesize adBreakFrameView=_adBreakFrameView;
- (void)updateControlViewDownloadProgress;
- (_Bool)matchBreakFrameVideoWithMediaId:(id)arg1;
- (_Bool)matchFullCardVideoWithMediaId:(id)arg1;
- (_Bool)isAllVideoDataAvailable;
- (_Bool)isBreakFrameAd;
- (void)onCanvasViewDidBePushed;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)onUpdateCurrentVideoTime:(double)arg1;
- (void)onPlayerPausePlay:(id)arg1;
- (void)onPlayerStartPlay:(id)arg1;
- (void)pauseWCPlayer;
- (void)startWCPlayer;
- (unsigned long long)fetchPlayModeIfVideoNotExist;
- (void)customPlayerInfo:(id)arg1;

@end

