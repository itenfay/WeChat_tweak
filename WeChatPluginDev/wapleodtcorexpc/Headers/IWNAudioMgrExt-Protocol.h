//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWNAudioMgrExt <NSObject>

@optional
- (void)OnEndPlayWNAudio:(NSString *)arg1;
- (void)OnAudioPlaying:(NSString *)arg1 Offset:(unsigned int)arg2;
- (void)OnBeginPlayWNAudio:(NSString *)arg1;
- (void)UpdateWNAudioRecordWithObj:(id)arg1;
- (void)OnStartWNAudioRecordWithObj:(id)arg1;
- (void)OnEndWNAudioRecordWithObj:(id)arg1 FilePath:(NSString *)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned int)arg4;
@end

