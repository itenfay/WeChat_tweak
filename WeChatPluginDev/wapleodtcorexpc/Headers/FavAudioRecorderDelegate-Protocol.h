//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol FavAudioRecorderDelegate <NSObject>

@optional
- (void)OnFavOutputPcmBuffer:(NSData *)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavFinishRecord:(NSString *)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavEndRecording:(NSString *)arg1 VoiceFmt:(unsigned int)arg2;
- (void)OnFavBeginRecording:(int)arg1;
- (void)OnFavLevelMeter:(float)arg1;
@end

