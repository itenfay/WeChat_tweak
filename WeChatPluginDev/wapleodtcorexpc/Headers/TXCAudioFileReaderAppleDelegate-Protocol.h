//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSError, TXCAudioFileReaderApple;

@protocol TXCAudioFileReaderAppleDelegate
- (void)audioFileReader:(TXCAudioFileReaderApple *)arg1 onError:(NSError *)arg2;
- (void)audioFileReaderDidComplete:(TXCAudioFileReaderApple *)arg1;
- (void)audioFileReader:(TXCAudioFileReaderApple *)arg1 didGetAudioData:(void *)arg2;
@end

