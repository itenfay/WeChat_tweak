//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSError, NSURL, VideoEncodeParams;
@protocol OS_dispatch_queue;

@interface MMAssetExportSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionHandler;
    NSURL *_assetUrl;
    NSURL *_outputUrl;
    VideoEncodeParams *_encodeParams;
    long long _metadataType;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long metadataType; // @synthesize metadataType=_metadataType;
@property(retain, nonatomic) VideoEncodeParams *encodeParams; // @synthesize encodeParams=_encodeParams;
@property(retain, nonatomic) NSURL *outputUrl; // @synthesize outputUrl=_outputUrl;
@property(readonly, nonatomic) NSURL *assetUrl; // @synthesize assetUrl=_assetUrl;
- (void)cancelExport;
- (void)_writeMetadataIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_adjustMetadataTypeWhileExportSessionFallback;
- (void)_addWXMetadataIfNeededWithExportSession:(id)arg1;
- (void)__wxTransMovToMp4_exportWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)__AVAssetExportSession_exportWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_exportWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didFinishExportingWithError:(id)arg1;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAssetURL:(id)arg1;

@end

