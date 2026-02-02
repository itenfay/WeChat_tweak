//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMovieCompressor, NSString;

@interface SightRecoder : NSObject
{
    NSString *_srcVideoPath;
    NSString *_dstVideoPath;
    MMovieCompressor *_movieCompressor;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) MMovieCompressor *movieCompressor; // @synthesize movieCompressor=_movieCompressor;
@property(retain, nonatomic) NSString *dstVideoPath; // @synthesize dstVideoPath=_dstVideoPath;
@property(retain, nonatomic) NSString *srcVideoPath; // @synthesize srcVideoPath=_srcVideoPath;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFailed:(unsigned int)arg2;
- (void)mMovieCompressor:(id)arg1 onMovieCompressFinished:(id)arg2 thumbImg:(id)arg3 ret:(unsigned int)arg4;
- (void)mergeVideoFromPath:(id)arg1 andAudioFromPath:(id)arg2 toPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startRecodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithSourcePath:(id)arg1 DestPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

