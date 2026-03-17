//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString;

@protocol WeMediaDelegate <NSObject>

@optional
- (void)weMediaReportEventWithEvent:(NSString *)arg1 reportInfo:(NSString *)arg2 params:(NSDictionary *)arg3;
- (void)weMediaUnregisterExternaImage:(int)arg1;
- (_Bool)weMediaRegisterExternaImage:(const char *)arg1 dataLen:(unsigned long long)arg2 imageId:(int)arg3 width:(int)arg4 height:(int)arg5;
- (NSString *)weMediaGetAbTest:(NSString *)arg1;
- (_Bool)weMediaGetExternalConfig:(NSString *)arg1 defaultVal:(_Bool)arg2;
- (NSString *)weMediaGetAbsolutePath:(NSString *)arg1;
- (void)weMediaTryStopAudioDevice:(unsigned long long)arg1;
- (NSError *)weMediaTryStartAudioDevice:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)weMediaLOG:(int)arg1 log:(const char *)arg2;
@end

