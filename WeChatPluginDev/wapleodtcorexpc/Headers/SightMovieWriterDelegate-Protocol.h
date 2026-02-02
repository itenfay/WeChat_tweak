//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, SightMovieWriter;

@protocol SightMovieWriterDelegate <NSObject>
- (void)movieWriter:(SightMovieWriter *)arg1 onMovieWriteFailed:(unsigned int)arg2;
- (void)movieWriter:(SightMovieWriter *)arg1 onMovieWriteFinished:(NSString *)arg2 ret:(unsigned int)arg3;

@optional
- (void)onMovieWriterInvalidate:(SightMovieWriter *)arg1;
@end

