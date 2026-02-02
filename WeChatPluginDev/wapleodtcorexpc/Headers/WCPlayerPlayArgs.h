//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIImage, WCDownloadArgsWrap, WCPlayerFairPlayInfo, WCPlayerReporter;

@interface WCPlayerPlayArgs : NSObject
{
    _Bool _isFetchAllDataWhilePlaying;
    _Bool _bLivePhotoMode;
    _Bool _bPlayLiveFeedBack;
    _Bool _bAutoPlay;
    _Bool _mute;
    _Bool _followSystemMute;
    _Bool _isRegisterAudioModule;
    _Bool _bLoop;
    _Bool _bKeepAtLastFrame;
    _Bool _isCloseNetworkScheduler;
    _Bool _bAccurateSeek;
    _Bool _bShouldResumeMusicAtPause;
    _Bool _allowsExternalPlayback;
    _Bool _automaticallyMutesWhileExternalPlaybackMode;
    _Bool _interruptedWhenAppResignActive;
    _Bool _bForceUseSystemPlayer;
    _Bool _bForceUseThumbPlayer;
    _Bool _isUseSystemDownloader;
    _Bool _bCaluDecStuck;
    _Bool _isAutoChangeAudioSessionCategory;
    _Bool _isOpenAutoPictureInPicture;
    _Bool _isOpenBackgroundVideoRender;
    _Bool _isKeepPictureInPictureStatusWhenPlayerStopped;
    _Bool _isPlayerSwitchScene;
    _Bool _bOpenSEICallback;
    _Bool _isCallbackCurrentPixelBuffer;
    _Bool _enableRenderOptYuv420;
    _Bool _isAddPlayerItemOutput;
    unsigned int _taskId;
    float _playbackRate;
    float _minBufferLength;
    float _maxBufferLength;
    float _minBufferWhenNoDatas;
    float _periodicTimeInterval;
    float _initialSeekPos;
    float _playBeginPos;
    float _playEndPos;
    float _lazyCheckBufferTime;
    int _enableRendererSharpen;
    int _enableRendererLucid;
    int _enableRendererClarity;
    float _minTargetBuffer;
    float _maxTargetBuffer;
    unsigned long long _playerMode;
    unsigned long long _playerScene;
    NSString *_playerIdentifier;
    double _pipDuration;
    NSString *_streamTmpPath;
    NSString *_formatPath;
    UIImage *_thumbImage;
    NSArray *_arrBufferTime;
    long long _contentMode;
    NSMutableDictionary *_dicParams;
    WCDownloadArgsWrap *_downloadArgs;
    NSMutableArray *_arrDownloadArgs;
    NSString *_nsExtInfo;
    WCPlayerReporter *_reporter;
    long long _decoderStrategy;
    AVPlayerItem *_playerItem;
    WCPlayerFairPlayInfo *_fairPlayInfo;
    NSString *_hlsPemKey;
    double _preferredPeakBitRate;
    struct CGSize _pipSize;
    struct CGSize _videoSize;
    struct WCShowArea _showArea;
}

- (void).cxx_destruct;
@property(nonatomic) float maxTargetBuffer; // @synthesize maxTargetBuffer=_maxTargetBuffer;
@property(nonatomic) float minTargetBuffer; // @synthesize minTargetBuffer=_minTargetBuffer;
@property(nonatomic) _Bool isAddPlayerItemOutput; // @synthesize isAddPlayerItemOutput=_isAddPlayerItemOutput;
@property(nonatomic) double preferredPeakBitRate; // @synthesize preferredPeakBitRate=_preferredPeakBitRate;
@property(retain, nonatomic) NSString *hlsPemKey; // @synthesize hlsPemKey=_hlsPemKey;
@property(retain, nonatomic) WCPlayerFairPlayInfo *fairPlayInfo; // @synthesize fairPlayInfo=_fairPlayInfo;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool enableRenderOptYuv420; // @synthesize enableRenderOptYuv420=_enableRenderOptYuv420;
@property(nonatomic) _Bool isCallbackCurrentPixelBuffer; // @synthesize isCallbackCurrentPixelBuffer=_isCallbackCurrentPixelBuffer;
@property(nonatomic) _Bool bOpenSEICallback; // @synthesize bOpenSEICallback=_bOpenSEICallback;
@property(nonatomic) _Bool isPlayerSwitchScene; // @synthesize isPlayerSwitchScene=_isPlayerSwitchScene;
@property(nonatomic) long long decoderStrategy; // @synthesize decoderStrategy=_decoderStrategy;
@property(nonatomic) int enableRendererClarity; // @synthesize enableRendererClarity=_enableRendererClarity;
@property(nonatomic) int enableRendererLucid; // @synthesize enableRendererLucid=_enableRendererLucid;
@property(nonatomic) int enableRendererSharpen; // @synthesize enableRendererSharpen=_enableRendererSharpen;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) _Bool isKeepPictureInPictureStatusWhenPlayerStopped; // @synthesize isKeepPictureInPictureStatusWhenPlayerStopped=_isKeepPictureInPictureStatusWhenPlayerStopped;
@property(nonatomic) _Bool isOpenBackgroundVideoRender; // @synthesize isOpenBackgroundVideoRender=_isOpenBackgroundVideoRender;
@property(nonatomic) _Bool isOpenAutoPictureInPicture; // @synthesize isOpenAutoPictureInPicture=_isOpenAutoPictureInPicture;
@property(nonatomic) _Bool isAutoChangeAudioSessionCategory; // @synthesize isAutoChangeAudioSessionCategory=_isAutoChangeAudioSessionCategory;
@property(nonatomic) _Bool bCaluDecStuck; // @synthesize bCaluDecStuck=_bCaluDecStuck;
@property(nonatomic) _Bool isUseSystemDownloader; // @synthesize isUseSystemDownloader=_isUseSystemDownloader;
@property(nonatomic) _Bool bForceUseThumbPlayer; // @synthesize bForceUseThumbPlayer=_bForceUseThumbPlayer;
@property(nonatomic) _Bool bForceUseSystemPlayer; // @synthesize bForceUseSystemPlayer=_bForceUseSystemPlayer;
@property(nonatomic) _Bool interruptedWhenAppResignActive; // @synthesize interruptedWhenAppResignActive=_interruptedWhenAppResignActive;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) NSString *nsExtInfo; // @synthesize nsExtInfo=_nsExtInfo;
@property(nonatomic) _Bool automaticallyMutesWhileExternalPlaybackMode; // @synthesize automaticallyMutesWhileExternalPlaybackMode=_automaticallyMutesWhileExternalPlaybackMode;
@property(nonatomic) _Bool allowsExternalPlayback; // @synthesize allowsExternalPlayback=_allowsExternalPlayback;
@property(retain, nonatomic) NSMutableArray *arrDownloadArgs; // @synthesize arrDownloadArgs=_arrDownloadArgs;
@property(retain, nonatomic) WCDownloadArgsWrap *downloadArgs; // @synthesize downloadArgs=_downloadArgs;
@property(retain, nonatomic) NSMutableDictionary *dicParams; // @synthesize dicParams=_dicParams;
@property(nonatomic) _Bool bShouldResumeMusicAtPause; // @synthesize bShouldResumeMusicAtPause=_bShouldResumeMusicAtPause;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) float lazyCheckBufferTime; // @synthesize lazyCheckBufferTime=_lazyCheckBufferTime;
@property(nonatomic) struct WCShowArea showArea; // @synthesize showArea=_showArea;
@property(nonatomic) float playEndPos; // @synthesize playEndPos=_playEndPos;
@property(nonatomic) float playBeginPos; // @synthesize playBeginPos=_playBeginPos;
@property(nonatomic) float initialSeekPos; // @synthesize initialSeekPos=_initialSeekPos;
@property(nonatomic) _Bool bAccurateSeek; // @synthesize bAccurateSeek=_bAccurateSeek;
@property(nonatomic) float periodicTimeInterval; // @synthesize periodicTimeInterval=_periodicTimeInterval;
@property(retain, nonatomic) NSArray *arrBufferTime; // @synthesize arrBufferTime=_arrBufferTime;
@property(nonatomic) float minBufferWhenNoDatas; // @synthesize minBufferWhenNoDatas=_minBufferWhenNoDatas;
@property(nonatomic) float maxBufferLength; // @synthesize maxBufferLength=_maxBufferLength;
@property(nonatomic) float minBufferLength; // @synthesize minBufferLength=_minBufferLength;
@property(nonatomic) _Bool isCloseNetworkScheduler; // @synthesize isCloseNetworkScheduler=_isCloseNetworkScheduler;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) _Bool bKeepAtLastFrame; // @synthesize bKeepAtLastFrame=_bKeepAtLastFrame;
@property(nonatomic) _Bool bLoop; // @synthesize bLoop=_bLoop;
@property(nonatomic) _Bool isRegisterAudioModule; // @synthesize isRegisterAudioModule=_isRegisterAudioModule;
@property(nonatomic) _Bool followSystemMute; // @synthesize followSystemMute=_followSystemMute;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) _Bool bAutoPlay; // @synthesize bAutoPlay=_bAutoPlay;
@property(retain, nonatomic) NSString *formatPath; // @synthesize formatPath=_formatPath;
@property(retain, nonatomic) NSString *streamTmpPath; // @synthesize streamTmpPath=_streamTmpPath;
@property(nonatomic) double pipDuration; // @synthesize pipDuration=_pipDuration;
@property(nonatomic) struct CGSize pipSize; // @synthesize pipSize=_pipSize;
@property(nonatomic) _Bool bPlayLiveFeedBack; // @synthesize bPlayLiveFeedBack=_bPlayLiveFeedBack;
@property(nonatomic) _Bool bLivePhotoMode; // @synthesize bLivePhotoMode=_bLivePhotoMode;
@property(nonatomic) _Bool isFetchAllDataWhilePlaying; // @synthesize isFetchAllDataWhilePlaying=_isFetchAllDataWhilePlaying;
@property(retain, nonatomic) NSString *playerIdentifier; // @synthesize playerIdentifier=_playerIdentifier;
@property(nonatomic) unsigned long long playerScene; // @synthesize playerScene=_playerScene;
@property(nonatomic) unsigned long long playerMode; // @synthesize playerMode=_playerMode;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
- (id)description;
- (_Bool)shouldMuteForExternalPlaybackMode;
- (void)resetMaxBufferLength:(float)arg1;
- (void)resetMinBufferLength:(float)arg1;
- (_Bool)isFairPlay;
- (id)init;

@end

