//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AudioRecorderUserData, NSString, WCCameraWriter;

@protocol WCCameraWriterDelegate <NSObject>
- (void)movieWriter:(WCCameraWriter *)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(WCCameraWriter *)arg1 onMovieWriteFinished:(NSString *)arg2 ret:(unsigned int)arg3;

@optional
- (void)movieWriter:(WCCameraWriter *)arg1 onRecorderPart:(AudioRecorderUserData *)arg2 Offset:(unsigned int)arg3 Len:(unsigned int)arg4 EndFlag:(unsigned int)arg5 ForceDelete:(_Bool)arg6 Duration:(unsigned int)arg7;
- (void)movieWriter:(WCCameraWriter *)arg1 onRecorderBeginRecording:(AudioRecorderUserData *)arg2 ErrNo:(int)arg3;
- (void)onMovieWriterInvalidate:(WCCameraWriter *)arg1;
@end

