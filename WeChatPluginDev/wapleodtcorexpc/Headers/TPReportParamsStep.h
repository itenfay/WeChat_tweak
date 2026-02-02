//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPReportParamsStep : NSObject
{
    long long _stime;
    long long _etime;
    NSString *_code;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) long long etime; // @synthesize etime=_etime;
@property(nonatomic) long long stime; // @synthesize stime=_stime;
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

