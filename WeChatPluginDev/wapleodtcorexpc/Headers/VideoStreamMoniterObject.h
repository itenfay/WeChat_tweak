//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VideoStreamMoniterObject : NSObject
{
    _Bool _bShouldResumeMusicPlayAtPause;
    _Bool _bShouldResumePlayWhenApplicationDidBecomeActive;
    _Bool _bResumeRealPlayBeInBugState;
    unsigned int _errorType;
    unsigned long long _lastBufferTime;
    unsigned long long _playerState;
    unsigned long long _recoverState;
}

@property(nonatomic) _Bool bResumeRealPlayBeInBugState; // @synthesize bResumeRealPlayBeInBugState=_bResumeRealPlayBeInBugState;
@property(nonatomic) _Bool bShouldResumePlayWhenApplicationDidBecomeActive; // @synthesize bShouldResumePlayWhenApplicationDidBecomeActive=_bShouldResumePlayWhenApplicationDidBecomeActive;
@property(nonatomic) _Bool bShouldResumeMusicPlayAtPause; // @synthesize bShouldResumeMusicPlayAtPause=_bShouldResumeMusicPlayAtPause;
@property(nonatomic) unsigned long long recoverState; // @synthesize recoverState=_recoverState;
@property(nonatomic) unsigned long long playerState; // @synthesize playerState=_playerState;
@property(nonatomic) unsigned int errorType; // @synthesize errorType=_errorType;
@property(nonatomic) unsigned long long lastBufferTime; // @synthesize lastBufferTime=_lastBufferTime;
- (_Bool)isInAVPlayerItemBugState;
- (_Bool)isInResourceLoaderBugState;
- (_Bool)isPause;
- (_Bool)isBuffering;
- (void)startBuffering;
- (void)resetError;
- (void)resetSuccess;
- (void)resetToLocalPlayer;
- (void)reportRecoverState;
- (id)init;

@end

