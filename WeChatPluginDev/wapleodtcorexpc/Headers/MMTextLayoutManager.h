//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTextLayoutABKey, NSMutableSet, NSString;

@interface MMTextLayoutManager
{
    unsigned int _os;
    MMTextLayoutABKey *_abkey;
    NSMutableSet *_set;
    long long _errorCount;
    long long _total;
    long long _lastTotal;
    long long _profileCounter;
    CDStruct_e4889e99 _stat;
}

- (void).cxx_destruct;
@property(nonatomic) long long profileCounter; // @synthesize profileCounter=_profileCounter;
@property(nonatomic) long long lastTotal; // @synthesize lastTotal=_lastTotal;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) CDStruct_e4889e99 stat; // @synthesize stat=_stat;
@property(nonatomic) unsigned int os; // @synthesize os=_os;
@property(nonatomic) long long errorCount; // @synthesize errorCount=_errorCount;
@property(retain, nonatomic) NSMutableSet *set; // @synthesize set=_set;
@property(retain, nonatomic) MMTextLayoutABKey *abkey; // @synthesize abkey=_abkey;
- (void)disableByError;
- (void)report;
- (_Bool)shoudDisableWithAvg:(double)arg1;
- (void)addItem:(id)arg1;
- (void)addLog:(id)arg1 string:(id)arg2 offW:(double)arg3 offH:(double)arg4 fastSize:(struct CGSize)arg5;
- (void)profileString:(id)arg1 font:(id)arg2 fastSize:(struct CGSize)arg3 stat:(CDStruct_e4889e99)arg4;
- (void)addString:(id)arg1 font:(id)arg2 fastSize:(struct CGSize)arg3 stat:(CDStruct_e4889e99)arg4;
- (void)onServiceTerminate;
- (void)setup;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

