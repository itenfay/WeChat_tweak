//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CIContext, MMFinderLiveAnchorRecordShowView, MMFinderLiveGameUserInfo, MMFinderLiveReplayKitManager, MMFinderRecordVideoFrame, MMFinderReplayKitVideoEncoder, MMFinderScreenRecordGuideView, MMTimer, MMUILabel, NSFileHandle, NSLock, NSMutableArray, NSString, RPSystemBroadcastPickerView;

@interface MMFinderLiveReplayKitViewModel : NSObject
{
    struct OpaqueVTPixelRotationSession *_rotation_session_;
    _Bool _isEncodeing;
    unsigned short _fps;
    unsigned int _recordLiveMemTime;
    MMFinderLiveReplayKitManager *_replayKitManager;
    RPSystemBroadcastPickerView *_broadcastPickerView;
    MMFinderScreenRecordGuideView *_screenRecordGuideView;
    MMFinderLiveAnchorRecordShowView *_anchorRecordTipView;
    struct __CVBuffer *_privacyPushPixelBuffer;
    MMFinderRecordVideoFrame *_videoFrame;
    unsigned long long _lastPixelBufferTime;
    MMFinderLiveGameUserInfo *_gameUserInfo;
    MMTimer *_privacyCheckTimer;
    NSFileHandle *_recordLiveFileHandle;
    NSMutableArray *_recordLiveMemArray;
    long long _videoFrameId;
    long long _videoFrameDecodeId;
    long long _videoFrameLostId;
    long long _videoFrameLostCount;
    long long _videoFrameDecodeLostCount;
    MMUILabel *_videoFrameLabel;
    CIContext *_rotateContext;
    long long _videoType;
    unsigned long long _lastReportStrTime;
    MMFinderReplayKitVideoEncoder *_encoder;
    NSLock *_videoFrameLock;
    struct CGSize _sizeOfPixelBuffer;
    struct CGSize _sizeOfPrivacyPixelBuffer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEncodeing; // @synthesize isEncodeing=_isEncodeing;
@property(retain, nonatomic) NSLock *videoFrameLock; // @synthesize videoFrameLock=_videoFrameLock;
@property(retain, nonatomic) MMFinderReplayKitVideoEncoder *encoder; // @synthesize encoder=_encoder;
@property(nonatomic) unsigned short fps; // @synthesize fps=_fps;
@property(nonatomic) unsigned long long lastReportStrTime; // @synthesize lastReportStrTime=_lastReportStrTime;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) CIContext *rotateContext; // @synthesize rotateContext=_rotateContext;
@property(retain, nonatomic) MMUILabel *videoFrameLabel; // @synthesize videoFrameLabel=_videoFrameLabel;
@property(nonatomic) long long videoFrameDecodeLostCount; // @synthesize videoFrameDecodeLostCount=_videoFrameDecodeLostCount;
@property(nonatomic) long long videoFrameLostCount; // @synthesize videoFrameLostCount=_videoFrameLostCount;
@property(nonatomic) long long videoFrameLostId; // @synthesize videoFrameLostId=_videoFrameLostId;
@property(nonatomic) long long videoFrameDecodeId; // @synthesize videoFrameDecodeId=_videoFrameDecodeId;
@property(nonatomic) long long videoFrameId; // @synthesize videoFrameId=_videoFrameId;
@property(nonatomic) struct CGSize sizeOfPrivacyPixelBuffer; // @synthesize sizeOfPrivacyPixelBuffer=_sizeOfPrivacyPixelBuffer;
@property(nonatomic) struct CGSize sizeOfPixelBuffer; // @synthesize sizeOfPixelBuffer=_sizeOfPixelBuffer;
@property(nonatomic) unsigned int recordLiveMemTime; // @synthesize recordLiveMemTime=_recordLiveMemTime;
@property(retain, nonatomic) NSMutableArray *recordLiveMemArray; // @synthesize recordLiveMemArray=_recordLiveMemArray;
@property(retain, nonatomic) NSFileHandle *recordLiveFileHandle; // @synthesize recordLiveFileHandle=_recordLiveFileHandle;
@property(retain, nonatomic) MMTimer *privacyCheckTimer; // @synthesize privacyCheckTimer=_privacyCheckTimer;
@property(retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo; // @synthesize gameUserInfo=_gameUserInfo;
@property(nonatomic) unsigned long long lastPixelBufferTime; // @synthesize lastPixelBufferTime=_lastPixelBufferTime;
@property(retain, nonatomic) MMFinderRecordVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(nonatomic) struct __CVBuffer *privacyPushPixelBuffer; // @synthesize privacyPushPixelBuffer=_privacyPushPixelBuffer;
@property(retain, nonatomic) MMFinderLiveAnchorRecordShowView *anchorRecordTipView; // @synthesize anchorRecordTipView=_anchorRecordTipView;
@property(retain, nonatomic) MMFinderScreenRecordGuideView *screenRecordGuideView; // @synthesize screenRecordGuideView=_screenRecordGuideView;
@property(retain, nonatomic) RPSystemBroadcastPickerView *broadcastPickerView; // @synthesize broadcastPickerView=_broadcastPickerView;
@property(retain, nonatomic) MMFinderLiveReplayKitManager *replayKitManager; // @synthesize replayKitManager=_replayKitManager;
- (void)clearPrivacyTimer;
- (void)handleVideoDecoderFrameId:(long long)arg1;
- (void)fileHanddleWriteVideoData:(id)arg1;
- (void)fileHanddleWriteAudioData:(id)arg1;
- (void)clearFileHandle;
- (void)createFileHandle;
- (void)handleVideoFrameId:(long long)arg1;
- (void)checkCurMem:(long long)arg1;
- (void)onServiceSockeReportStr:(id)arg1;
- (_Bool)RotateCVPixelBufferIOS16:(struct __CVBuffer *)arg1 destination:(struct __CVBuffer *)arg2 rotation:(int)arg3;
- (void)createCIContext;
- (void)stop;
- (void)dealloc;
- (struct __CVBuffer *)newRotateCVPixelBuffer:(struct __CVBuffer *)arg1 rotation:(int)arg2;
- (struct __CVBuffer *)newRotateCVPixelBuffer:(struct __CVBuffer *)arg1;
- (void)onEncodeOneFrame:(id)arg1;
- (void)checkEncodeImage:(id)arg1 isLandscape:(_Bool)arg2;
- (_Bool)userH264DirectSend;
- (double)videoInterval;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

