//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMFinderLiveKTVBGMEngineDelegate <NSObject>
- (void)onPlayBGMStartFail;
- (void)onPlayBGMStartSucc;
- (void)onBgmPitchChanged:(int)arg1;
- (void)onVoiceEarMonitorUsableChanged:(_Bool)arg1;
- (void)onVoiceEarMonitorEnableChanged:(_Bool)arg1;
- (void)onPlayBGMStoped;
- (void)onPlayBGMResumed:(long long)arg1;
- (void)onPlayBGMPaused;
- (void)onPlayBGMProgress:(long long)arg1 allDuration:(long long)arg2;
- (void)onPlayBGMEnd;
- (void)onPlayBGMToSingingEnd;
- (void)onPlayBGMStart:(long long)arg1;
@end

