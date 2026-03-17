//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, NSString;

@protocol WCAVAudioSessionSwizzleExtension <NSObject>

@optional
- (void)wcAVAudioSessionSwizzleDidCallMethod:(NSString *)arg1 error:(NSError *)arg2 ret:(_Bool)arg3;
@end

