//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface OMCBatchThumbnailProvider : NSObject
{
    _Bool _useOriginMediaClip;
    NSArray *_clipSegments;
    struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> _videoClipTaskIDs;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct XMutexPOSIX _mutex;
    struct SharedPtr<XMFVideoClipThumbGenKeyframeImpl> _backingVideoClipThumbGen;
    struct map<XID, XIntegerID<int, -1>, std::less<XID>, std::allocator<std::pair<const XID, XIntegerID<int, -1>>>> _clientIDsByVideoClipSegmentID;
    struct CGSize _maxPixelSize;
}

+ (id)providerWithSegments:(id)arg1 maxPixelSize:(struct CGSize)arg2 useOriginMediaClip:(_Bool)arg3;
+ (id)providerWithSegments:(id)arg1 maxPixelSize:(struct CGSize)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize maxPixelSize; // @synthesize maxPixelSize=_maxPixelSize;
- (void)cancelAllTasks;
- (void)cancelTask:(long long)arg1;
- (void)onRequestCompleteForTimeRange:(struct XTMTimeRange)arg1 segmentID:(id)arg2 resultHandler:(CDUnknownBlockType)arg3 resultType:(int)arg4 videoFrame:(SharedPtr_43d2f63a)arg5 taskID:(unsigned int)arg6;
- (long long)requestThumbnailAtTimeRange:(CDStruct_e83c9415)arg1 segmentID:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestThumbnailAtTime:(CDStruct_1b6d18a9)arg1 segmentID:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)reopen;
- (void)teardownIfNeeded;
- (void)dealloc;
- (id)initWithClipSegments:(id)arg1 maxPixelSize:(struct CGSize)arg2 useOriginMediaClip:(_Bool)arg3 callbackQueue:(id)arg4;

@end

