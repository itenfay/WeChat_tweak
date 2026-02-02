//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, AVURLAsset, NSString;

@interface WCLiveDebugCaptureMgr
{
    _Bool _isRestartReading;
    NSString *_videoPath;
    AVURLAsset *_videoAsset;
    AVAssetTrack *_videoTrack;
    AVAssetReader *_videoReader;
    AVAssetReaderTrackOutput *_readerOutput;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRestartReading; // @synthesize isRestartReading=_isRestartReading;
@property(retain, nonatomic) AVAssetReaderTrackOutput *readerOutput; // @synthesize readerOutput=_readerOutput;
@property(retain, nonatomic) AVAssetReader *videoReader; // @synthesize videoReader=_videoReader;
@property(retain, nonatomic) AVAssetTrack *videoTrack; // @synthesize videoTrack=_videoTrack;
@property(retain, nonatomic) AVURLAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (void)stopMockCapture;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (_Bool)isMockCaptureStated;
- (_Bool)startMockCaptureWithVideoPath:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

