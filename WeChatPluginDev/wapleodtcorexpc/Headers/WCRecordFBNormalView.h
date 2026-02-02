//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCRecordFBNormalView
{
    NSMutableArray *_arrPillarsA;
    NSMutableArray *_arrPillarsB;
    NSMutableArray *_arrPillarsC;
    NSMutableArray *_arrPillarsD;
    NSMutableArray *_arrPillarsE;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrPillarsE; // @synthesize arrPillarsE=_arrPillarsE;
@property(retain, nonatomic) NSMutableArray *arrPillarsD; // @synthesize arrPillarsD=_arrPillarsD;
@property(retain, nonatomic) NSMutableArray *arrPillarsC; // @synthesize arrPillarsC=_arrPillarsC;
@property(retain, nonatomic) NSMutableArray *arrPillarsB; // @synthesize arrPillarsB=_arrPillarsB;
@property(retain, nonatomic) NSMutableArray *arrPillarsA; // @synthesize arrPillarsA=_arrPillarsA;
- (void)configCenterPillarsWithPeakPower:(float)arg1;
- (void)configBorderPillarsWithPeakPower:(float)arg1;
- (void)configPillarsWithPeakPower:(float)arg1;
- (void)initPillars;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

