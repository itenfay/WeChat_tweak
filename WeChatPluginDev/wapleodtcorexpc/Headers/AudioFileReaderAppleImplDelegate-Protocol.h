//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSError, WXVoIPAudioFileReaderAppleImpl;

@protocol AudioFileReaderAppleImplDelegate
- (void)audioFileReader:(WXVoIPAudioFileReaderAppleImpl *)arg1 onError:(NSError *)arg2;
- (void)audioFileReaderDidComplete:(WXVoIPAudioFileReaderAppleImpl *)arg1;
- (void)audioFileReader:(WXVoIPAudioFileReaderAppleImpl *)arg1 didGetAudioData:(struct AudioFrame *)arg2;
@end

