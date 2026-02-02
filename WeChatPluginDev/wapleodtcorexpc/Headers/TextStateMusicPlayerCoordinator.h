//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicInfo, MMTimer, NSString;

@interface TextStateMusicPlayerCoordinator : NSObject
{
    _Bool _isEnabled;
    _Bool _resident;
    MMMusicInfo *_savedMusicInfo;
    double _savedMusicOffset;
    MMMusicInfo *_residentMusicInfo;
    NSString *_musicId;
    NSString *_musicDataURL;
    MMTimer *_timer;
    CDUnknownBlockType _residentHandler;
}

+ (_Bool)isMusicPlayerViewController:(id)arg1;
+ (_Bool)isSameMusicWithId:(id)arg1 dataURL:(id)arg2;
+ (_Bool)isPlayingSameMusicWithInfo:(id)arg1;
+ (id)musicPlayerHandlerForTextState:(id)arg1;
+ (id)coordinator;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType residentHandler; // @synthesize residentHandler=_residentHandler;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool resident; // @synthesize resident=_resident;
@property(retain, nonatomic) NSString *musicDataURL; // @synthesize musicDataURL=_musicDataURL;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(retain, nonatomic) MMMusicInfo *residentMusicInfo; // @synthesize residentMusicInfo=_residentMusicInfo;
@property(nonatomic) double savedMusicOffset; // @synthesize savedMusicOffset=_savedMusicOffset;
@property(retain, nonatomic) MMMusicInfo *savedMusicInfo; // @synthesize savedMusicInfo=_savedMusicInfo;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (void)reset;
- (void)saveMusicIfNeeded;
- (void)enableResidentFromTimer:(id)arg1;
- (void)incomeTextState:(id)arg1;
- (_Bool)shouldPauseMediaForIncomingTextState:(id)arg1;
- (void)exitWithAction:(unsigned long long)arg1 forcePreventMinimize:(_Bool)arg2;
- (void)exitWithAction:(unsigned long long)arg1;
- (_Bool)shouldStopMediaForExiting;
- (_Bool)shouldStopMediaForSourceAction;
- (id)init;

@end

