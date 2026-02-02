//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TXCDispatchQueue, TXCVideoEncoderSupervisor;

@interface TXCSoftwareVideoEncoder
{
}

+ (_Bool)isSupported;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long features;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) TXCDispatchQueue *queue;
@property(readonly) Class superclass;
@property(nonatomic) __weak TXCVideoEncoderSupervisor *supervisor;

@end

