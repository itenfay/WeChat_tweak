//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMovieCompressor, NSString, UIImage;

@protocol MMovieCompressorDelegate <NSObject>

@optional
- (void)mMovieCompressor:(MMovieCompressor *)arg1 onMovieCompressFinished:(NSString *)arg2 thumbImg:(UIImage *)arg3 ret:(unsigned int)arg4;
- (void)mMovieCompressor:(MMovieCompressor *)arg1 onMovieCompressFailed:(unsigned int)arg2;
@end

