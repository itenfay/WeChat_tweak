//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetExportSession, AVMutableVideoComposition, NSString, NSURL, VideoEncodeTask;

@interface WCFinderLongEncodingConfig : NSObject
{
    _Bool _hadError;
    NSURL *_assetUrl;
    AVAsset *_asset;
    AVMutableVideoComposition *_composition;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _beforePostCompletion;
    NSString *_longVidoePath;
    VideoEncodeTask *_longEncodeTask;
    AVAssetExportSession *_longEncodeExportSession;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hadError; // @synthesize hadError=_hadError;
@property(nonatomic) __weak AVAssetExportSession *longEncodeExportSession; // @synthesize longEncodeExportSession=_longEncodeExportSession;
@property(nonatomic) __weak VideoEncodeTask *longEncodeTask; // @synthesize longEncodeTask=_longEncodeTask;
@property(retain, nonatomic) NSString *longVidoePath; // @synthesize longVidoePath=_longVidoePath;
@property(copy, nonatomic) CDUnknownBlockType beforePostCompletion; // @synthesize beforePostCompletion=_beforePostCompletion;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AVMutableVideoComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSURL *assetUrl; // @synthesize assetUrl=_assetUrl;
- (_Bool)isEncodingTask;
- (id)assetForEncoding;
- (id)onProgress:(CDUnknownBlockType)arg1;
- (id)onComplete:(CDUnknownBlockType)arg1;
- (id)composition:(id)arg1;
- (void)checkCompletion;
- (_Bool)done;
- (id)initWithUrl:(id)arg1;

@end

