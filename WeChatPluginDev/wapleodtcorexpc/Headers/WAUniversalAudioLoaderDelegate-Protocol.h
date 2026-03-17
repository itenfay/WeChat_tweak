//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, WAUniversalAudioLoader;

@protocol WAUniversalAudioLoaderDelegate <NSObject>
- (void)onLoaderDidError:(WAUniversalAudioLoader *)arg1 error:(NSError *)arg2;
- (void)onLoaderDidSeeked:(WAUniversalAudioLoader *)arg1;
- (void)onLoaderDidLoaded:(WAUniversalAudioLoader *)arg1;
@end

