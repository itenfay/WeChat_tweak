//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, TXCDispatchQueue;

@interface TXCVideoStreamSnapshot
{
    TXCDispatchQueue *_queue;
    NSMutableArray *_snapshotBlocks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *snapshotBlocks; // @synthesize snapshotBlocks=_snapshotBlocks;
@property(readonly, nonatomic) TXCDispatchQueue *queue; // @synthesize queue=_queue;
- (void)callbackSnapshotIfNeeded:(struct __CVBuffer *)arg1;
- (void)callbackNilOnTimeout:(CDUnknownBlockType)arg1;
- (void)addSnapshotBlocks:(CDUnknownBlockType)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1;

@end

