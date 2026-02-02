//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCSamplingConfig : NSObject
{
    _Bool _isSamplingEnabled;
    _Bool _isSamplingAllCases;
    _Bool _reportToMMData;
    _Bool _reportCallStack;
    unsigned int _reportToMMDataInterval;
    unsigned int _reportCallStackInterval;
    unsigned int _reportCallStackLagLimit;
    unsigned int _traceVertexHangMs;
    unsigned int _traceFragmentHangMs;
    unsigned int _traceEncodeHangMs;
    unsigned int _traceGPUHangMs;
}

@property(nonatomic) unsigned int traceGPUHangMs; // @synthesize traceGPUHangMs=_traceGPUHangMs;
@property(nonatomic) unsigned int traceEncodeHangMs; // @synthesize traceEncodeHangMs=_traceEncodeHangMs;
@property(nonatomic) unsigned int traceFragmentHangMs; // @synthesize traceFragmentHangMs=_traceFragmentHangMs;
@property(nonatomic) unsigned int traceVertexHangMs; // @synthesize traceVertexHangMs=_traceVertexHangMs;
@property(nonatomic) unsigned int reportCallStackLagLimit; // @synthesize reportCallStackLagLimit=_reportCallStackLagLimit;
@property(nonatomic) unsigned int reportCallStackInterval; // @synthesize reportCallStackInterval=_reportCallStackInterval;
@property(nonatomic) unsigned int reportToMMDataInterval; // @synthesize reportToMMDataInterval=_reportToMMDataInterval;
@property(nonatomic) _Bool reportCallStack; // @synthesize reportCallStack=_reportCallStack;
@property(nonatomic) _Bool reportToMMData; // @synthesize reportToMMData=_reportToMMData;
@property(nonatomic) _Bool isSamplingAllCases; // @synthesize isSamplingAllCases=_isSamplingAllCases;
@property(nonatomic) _Bool isSamplingEnabled; // @synthesize isSamplingEnabled=_isSamplingEnabled;
- (void)updateWithXLabConfig:(id)arg1;
- (id)initWithXLabConfig:(id)arg1;

@end

