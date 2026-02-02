//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPReportParamsStepSeek : NSObject
{
    long long _format;
    long long _pstime;
    long long _petime;
    long long _lstime;
    long long _letime;
    NSString *_code;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) long long letime; // @synthesize letime=_letime;
@property(nonatomic) long long lstime; // @synthesize lstime=_lstime;
@property(nonatomic) long long petime; // @synthesize petime=_petime;
@property(nonatomic) long long pstime; // @synthesize pstime=_pstime;
@property(nonatomic) long long format; // @synthesize format=_format;
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

