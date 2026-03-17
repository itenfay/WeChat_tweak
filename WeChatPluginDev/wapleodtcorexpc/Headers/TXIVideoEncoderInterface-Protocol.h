//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TXIVideoBindable-Protocol.h"

@class TXCDispatchQueue, TXCVideoEncoderSupervisor;

@protocol TXIVideoEncoderInterface <TXIVideoBindable>
@property(readonly, nonatomic) unsigned long long features;
@property(nonatomic) __weak TXCVideoEncoderSupervisor *supervisor;
@property(readonly, nonatomic) TXCDispatchQueue *queue;
- (void)enableTranscodingMode:(_Bool)arg1;
- (void)requestKeyFrame;
- (void)setBitrate:(long long)arg1;
- (void)setFrameRate:(long long)arg1;
@end

