//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol IWAAudioPlayerDelegate <NSObject>

@optional
- (void)onDownloadAudioData:(NSData *)arg1 src:(NSString *)arg2;
- (NSObject<OS_dispatch_queue> *)backgroundQueue;
- (void)setCurrentContext;
- (void)onPlayerStateChange:(long long)arg1 audioId:(NSString *)arg2 errCode:(long long)arg3 errMsg:(NSString *)arg4;
@end

