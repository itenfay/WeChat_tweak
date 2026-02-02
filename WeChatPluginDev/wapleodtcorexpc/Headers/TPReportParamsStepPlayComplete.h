//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPReportParamsStepPlayComplete : NSObject
{
    unsigned long long _reason;
    long long _etime;
    double _playduration;
    NSString *_code;
    long long _scount;
    long long _tbcount;
    long long _tbduration;
    long long _bcount;
    long long _tduration;
}

- (void).cxx_destruct;
@property(nonatomic) long long tduration; // @synthesize tduration=_tduration;
@property(nonatomic) long long bcount; // @synthesize bcount=_bcount;
@property(nonatomic) long long tbduration; // @synthesize tbduration=_tbduration;
@property(nonatomic) long long tbcount; // @synthesize tbcount=_tbcount;
@property(nonatomic) long long scount; // @synthesize scount=_scount;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) double playduration; // @synthesize playduration=_playduration;
@property(nonatomic) long long etime; // @synthesize etime=_etime;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (void)setErrorCode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

