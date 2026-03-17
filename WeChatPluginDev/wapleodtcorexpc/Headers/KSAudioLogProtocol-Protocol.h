//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol KSAudioLogProtocol <NSObject>
- (void)log:(int)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(NSString *)arg5 EFDict:(NSDictionary *)arg6 fullmsg:(NSString *)arg7;
@end

