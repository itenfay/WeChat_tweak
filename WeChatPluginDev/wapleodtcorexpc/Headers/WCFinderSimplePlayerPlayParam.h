//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface WCFinderSimplePlayerPlayParam : NSObject
{
    _Bool _isSilencePlay;
    _Bool _notLoopPlay;
    _Bool _isFullScreenViewScene;
    _Bool _pauseVideo;
    _Bool _isOpenAutoPictureInPicture;
    _Bool _isKeepPictureInPictureStatusWhenPlayerStopped;
    double _startPlayTime;
    unsigned long long _wcPlayerScene;
    NSNumber *_bForceUseThumbPlayer;
    NSNumber *_bRealTimeSnapshot;
    long long _playerContentMode;
    NSNumber *_interruptedWhenAppResignActive;
}

+ (id)defaultParam;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *interruptedWhenAppResignActive; // @synthesize interruptedWhenAppResignActive=_interruptedWhenAppResignActive;
@property(nonatomic) _Bool isKeepPictureInPictureStatusWhenPlayerStopped; // @synthesize isKeepPictureInPictureStatusWhenPlayerStopped=_isKeepPictureInPictureStatusWhenPlayerStopped;
@property(nonatomic) _Bool isOpenAutoPictureInPicture; // @synthesize isOpenAutoPictureInPicture=_isOpenAutoPictureInPicture;
@property(nonatomic) long long playerContentMode; // @synthesize playerContentMode=_playerContentMode;
@property(retain, nonatomic) NSNumber *bRealTimeSnapshot; // @synthesize bRealTimeSnapshot=_bRealTimeSnapshot;
@property(retain, nonatomic) NSNumber *bForceUseThumbPlayer; // @synthesize bForceUseThumbPlayer=_bForceUseThumbPlayer;
@property(nonatomic) _Bool pauseVideo; // @synthesize pauseVideo=_pauseVideo;
@property(nonatomic) _Bool isFullScreenViewScene; // @synthesize isFullScreenViewScene=_isFullScreenViewScene;
@property(nonatomic) unsigned long long wcPlayerScene; // @synthesize wcPlayerScene=_wcPlayerScene;
@property(nonatomic) _Bool notLoopPlay; // @synthesize notLoopPlay=_notLoopPlay;
@property(nonatomic) _Bool isSilencePlay; // @synthesize isSilencePlay=_isSilencePlay;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;

@end

