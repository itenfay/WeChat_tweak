//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveKSKitMusicSong, NSString;
@protocol MMLiveUniqueTaskId;

@protocol MMFinderLiveKSKitAudioExt <NSObject>

@optional
- (void)onKSKitVoiceMIDIScoreReached:(int)arg1 sentenceIndex:(int)arg2 totalScore:(int)arg3 uniqueId:(NSString *)arg4 taskId:(id <MMLiveUniqueTaskId>)arg5;
- (void)onKSKitKalaVoiceReachNoteHeight:(float)arg1 noteValue:(float)arg2 isHit:(_Bool)arg3 timeOffset:(int)arg4 duration:(int)arg5 uniqueId:(NSString *)arg6 taskId:(id <MMLiveUniqueTaskId>)arg7;
- (void)onKSKitKalaPositionChanged:(int)arg1 uniqueId:(NSString *)arg2 taskId:(id <MMLiveUniqueTaskId>)arg3;
- (void)onKSKitSongEndWithSong:(MMFinderLiveKSKitMusicSong *)arg1 taskId:(id <MMLiveUniqueTaskId>)arg2;
- (void)onKSKitSingEndWithSong:(MMFinderLiveKSKitMusicSong *)arg1 taskId:(id <MMLiveUniqueTaskId>)arg2;
- (void)onKSKitSingStopWithSong:(MMFinderLiveKSKitMusicSong *)arg1 taskId:(id <MMLiveUniqueTaskId>)arg2;
- (void)onKSKitSingStartWithUniqueId:(NSString *)arg1 taskId:(id <MMLiveUniqueTaskId>)arg2;
@end

