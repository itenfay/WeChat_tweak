//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, ReportObj16171;

@interface WePkgStatReport
{
    ReportObj16171 *_reportObj16171;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ReportObj16171 *reportObj16171; // @synthesize reportObj16171=_reportObj16171;
- (_Bool)svrReport:(unsigned int)arg1 withLogExt:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)kvReport13980:(id)arg1;
- (void)svrReport14229:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

