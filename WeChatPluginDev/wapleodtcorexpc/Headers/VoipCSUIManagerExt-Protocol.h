//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol VoipCSUIManagerExt <NSObject>

@optional
- (void)onVoipAudioDevicePlugin;
- (void)onVoipAudioDeviceUnPlugin;
- (void)onVoipChangeToEarMode;
- (void)onVoipChangeToSpeakerMode;
@end

