//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TingTPResourceLoaderDelegate <NSObject>

@optional
- (void)onResourceDownloadFinished;
- (void)onResourceDownloadFailWithCode:(int)arg1 expired:(_Bool)arg2;
- (_Bool)isBuffering;
- (long long)durationInSeconds;
@end

