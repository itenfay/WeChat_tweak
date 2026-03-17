//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LZAudioDataDownloader, NSData, NSDictionary, NSError;

@protocol LZAudioDataDownloadDelegate <NSObject>
- (void)onAudioTask:(LZAudioDataDownloader *)arg1 receivedHeader:(NSDictionary *)arg2;
- (void)onAudioTask:(LZAudioDataDownloader *)arg1 receivedData:(NSData *)arg2;
- (void)onAudioTask:(LZAudioDataDownloader *)arg1 error:(NSError *)arg2;
- (void)onAudioTask:(LZAudioDataDownloader *)arg1 finish:(NSDictionary *)arg2;
@end

