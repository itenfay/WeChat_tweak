//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPPlayerRichMediaProcessorWrapper : NSObject
{
    struct shared_ptr<ITPPlayerRichMediaProcessor> _richMediaProcess;
    struct TPPlayerRichMediaProcessorCallbackWrapper *_richMediaProcessCallbackWrapper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)setPlaybackRate:(float)arg1;
- (void)setInnerProcessCallback:(id)arg1;
- (int)seek:(long long)arg1;
- (int)reset;
- (void)releaseRichMedia;
- (int)getcurrentPositionMs:(long long)arg1 richMediaTypes:(const void *)arg2 featureData:(void *)arg3;
- (int)deselectFeatureAsync:(int)arg1;
- (int)selectFeatureAsync:(int)arg1 extraRequestInfo:(const struct TPPlayerRichMediaExtraRequestInfo *)arg2;
- (vector_f4e3e6bf)features;
- (int)prepareAsync;
- (int)setRichMediaSource:(id)arg1;
- (void)setProcessorCallback:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

