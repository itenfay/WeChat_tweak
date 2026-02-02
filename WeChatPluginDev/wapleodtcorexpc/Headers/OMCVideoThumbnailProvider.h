//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, OMCClipSegment, OMJID;
@protocol OS_dispatch_queue;

@interface OMCVideoThumbnailProvider : NSObject
{
    _Bool _useOriginMediaClip;
    OMCClipSegment *_clipSegment;
    struct SharedPtr<XMFVideoClipThumbGen> _backingThumbGen;
    struct set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> _taskIDs;
    struct XIntegerID<int, -1> _clientID;
    struct XID _clipID;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct XMutexPOSIX _mutex;
    struct CGSize _maxPixelSize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize maxPixelSize; // @synthesize maxPixelSize=_maxPixelSize;
- (void)reopen;
@property(readonly, nonatomic) OMJID *segmentID;
- (void)cancelAllTasks;
- (void)cancelTask:(long long)arg1;
- (void)onRequestCompleteForTimeRange:(struct XTMTimeRange)arg1 resultHandler:(CDUnknownBlockType)arg2 resultType:(int)arg3 videoFrame:(SharedPtr_43d2f63a)arg4 taskID:(unsigned int)arg5;
- (long long)requestThumbnailAtTimeRange:(CDStruct_e83c9415)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (long long)requestThumbnailAtTime:(CDStruct_1b6d18a9)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)teardownIfNeeded;
- (void)dealloc;
- (id)initWithClipSegment:(id)arg1 maxPixelSize:(struct CGSize)arg2 useOriginMediaClip:(_Bool)arg3 callbackQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

