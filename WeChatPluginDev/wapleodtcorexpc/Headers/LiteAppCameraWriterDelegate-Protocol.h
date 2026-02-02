//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class LiteAppCameraWriter, NSString;

@protocol LiteAppCameraWriterDelegate <NSObject>
- (void)movieWriter:(LiteAppCameraWriter *)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(LiteAppCameraWriter *)arg1 onMovieWriteFinished:(NSString *)arg2 ret:(unsigned int)arg3;

@optional
- (void)onMovieWriterInvalidate:(LiteAppCameraWriter *)arg1;
@end

