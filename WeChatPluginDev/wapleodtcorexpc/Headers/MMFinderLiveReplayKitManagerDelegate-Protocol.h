//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderRecordVideoFrame, NSData, NSError, NSString;

@protocol MMFinderLiveReplayKitManagerDelegate <NSObject>
- (void)onServiceSockeReportStr:(NSString *)arg1;
- (void)onServiceSockeSocketMemWithMem:(long long)arg1;
- (void)onServiceSocketEventWithType:(long long)arg1 error:(NSError *)arg2;
- (void)onServiceSocketGetDecoderFrameIdWithMsgType:(unsigned long long)arg1 videoFrameId:(long long)arg2;
- (void)onServiceSocketGetFrameIdWithMsgType:(unsigned long long)arg1 videoFrameId:(long long)arg2;
- (void)onServiceSocketSendH264VideWithMsgType:(unsigned long long)arg1 videoFrame:(MMFinderRecordVideoFrame *)arg2;
- (void)onServiceSocketSendAudioWithMsgType:(unsigned long long)arg1 audioData:(NSData *)arg2;
- (void)onServiceSocketSendVideWithMsgType:(unsigned long long)arg1 pixelBuffer:(struct __CVBuffer *)arg2;
@end

