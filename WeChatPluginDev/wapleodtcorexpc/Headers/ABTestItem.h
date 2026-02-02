//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSString;

@interface ABTestItem
{
    _Bool _bNoReport;
    unsigned int _uiSeq;
    unsigned int _uiBeginTime;
    unsigned int _uiEndTime;
    unsigned int _uiPriorityLevel;
    NSString *_nsLayerId;
    NSString *_nsExpId;
    NSDictionary *_dicExpArgs;
    NSString *_nsBizId;
}

+ (void)initialize;
+ (void)PBArrayAdd_uiPriorityLevel;
+ (void)PBArrayAdd_nsBizId;
+ (void)PBArrayAdd_bNoReport;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiSeq;
+ (void)PBArrayAdd_dicExpArgs;
+ (void)PBArrayAdd_nsExpId;
+ (void)PBArrayAdd_nsLayerId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiPriorityLevel; // @synthesize uiPriorityLevel=_uiPriorityLevel;
@property(retain, nonatomic) NSString *nsBizId; // @synthesize nsBizId=_nsBizId;
@property(nonatomic) _Bool bNoReport; // @synthesize bNoReport=_bNoReport;
@property(nonatomic) unsigned int uiEndTime; // @synthesize uiEndTime=_uiEndTime;
@property(nonatomic) unsigned int uiBeginTime; // @synthesize uiBeginTime=_uiBeginTime;
@property(nonatomic) unsigned int uiSeq; // @synthesize uiSeq=_uiSeq;
@property(retain, nonatomic) NSDictionary *dicExpArgs; // @synthesize dicExpArgs=_dicExpArgs;
@property(retain, nonatomic) NSString *nsExpId; // @synthesize nsExpId=_nsExpId;
@property(retain, nonatomic) NSString *nsLayerId; // @synthesize nsLayerId=_nsLayerId;
- (unsigned int)getPriorityLevel;
- (_Bool)abtestRunning;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

