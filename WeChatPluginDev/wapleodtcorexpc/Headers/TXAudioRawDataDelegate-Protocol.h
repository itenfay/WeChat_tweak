//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol TXAudioRawDataDelegate <NSObject>

@optional
- (void)onPcmDataAvailable:(NSData *)arg1 pts:(unsigned long long)arg2;
- (void)onAudioInfoChanged:(int)arg1 channels:(int)arg2;
@end

