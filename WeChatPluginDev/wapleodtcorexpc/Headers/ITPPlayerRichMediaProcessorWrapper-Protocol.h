//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol ITPInnerRichMediaProcessWrapperCallback, ITPPlayerRichMediaProcessorWrapperCallback;

@protocol ITPPlayerRichMediaProcessorWrapper <NSObject>
- (int)setPlaybackRate:(float)arg1;
- (int)seek:(long long)arg1;
- (int)getcurrentPositionMs:(long long)arg1 richMediaTypes:(const void *)arg2 featureData:(void *)arg3;
- (void)setInnerProcessCallback:(id <ITPInnerRichMediaProcessWrapperCallback>)arg1;
- (void)releaseRichMedia;
- (int)reset;
- (int)deselectFeatureAsync:(int)arg1;
- (int)selectFeatureAsync:(int)arg1 extraRequestInfo:(const struct TPPlayerRichMediaExtraRequestInfo *)arg2;
- (vector_f4e3e6bf)features;
- (int)prepareAsync;
- (int)setRichMediaSource:(NSString *)arg1;
- (void)setProcessorCallback:(id <ITPPlayerRichMediaProcessorWrapperCallback>)arg1;
@end

