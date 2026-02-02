//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDate, NSError;

@protocol GPUImageMovieWriterDelegate <NSObject>

@optional
- (void)movieRecordingFirstFrameTime:(NSDate *)arg1;
- (void)movieRecordingFailedWithError:(NSError *)arg1;
- (void)movieRecordingCompleted;
@end

