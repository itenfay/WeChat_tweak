//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ABTestExpKeyItem
{
    _Bool _bNoReport;
    unsigned int _uiSeq;
    unsigned int _uiBeginTime;
    unsigned int _uiEndTime;
    unsigned int _uiPriorityLevel;
    unsigned int _uiMonitorHitId;
    unsigned int _uiMonitorHitKey;
    NSString *_nsArgKey;
    NSString *_nsValue;
    NSString *_nsExpId;
}

+ (void)initialize;
+ (void)PBArrayAdd_uiMonitorHitKey;
+ (void)PBArrayAdd_uiMonitorHitId;
+ (void)PBArrayAdd_bNoReport;
+ (void)PBArrayAdd_uiPriorityLevel;
+ (void)PBArrayAdd_uiEndTime;
+ (void)PBArrayAdd_uiBeginTime;
+ (void)PBArrayAdd_uiSeq;
+ (void)PBArrayAdd_nsExpId;
+ (void)PBArrayAdd_nsValue;
+ (void)PBArrayAdd_nsArgKey;
- (void).cxx_destruct;
@property(nonatomic) unsigned int uiMonitorHitKey; // @synthesize uiMonitorHitKey=_uiMonitorHitKey;
@property(nonatomic) unsigned int uiMonitorHitId; // @synthesize uiMonitorHitId=_uiMonitorHitId;
@property(nonatomic) _Bool bNoReport; // @synthesize bNoReport=_bNoReport;
@property(nonatomic) unsigned int uiPriorityLevel; // @synthesize uiPriorityLevel=_uiPriorityLevel;
@property(nonatomic) unsigned int uiEndTime; // @synthesize uiEndTime=_uiEndTime;
@property(nonatomic) unsigned int uiBeginTime; // @synthesize uiBeginTime=_uiBeginTime;
@property(nonatomic) unsigned int uiSeq; // @synthesize uiSeq=_uiSeq;
@property(retain, nonatomic) NSString *nsExpId; // @synthesize nsExpId=_nsExpId;
@property(retain, nonatomic) NSString *nsValue; // @synthesize nsValue=_nsValue;
@property(retain, nonatomic) NSString *nsArgKey; // @synthesize nsArgKey=_nsArgKey;
- (_Bool)shouldBeReplaceByOther:(id)arg1;
- (_Bool)isExpiredWithExpiredIds:(id)arg1;
- (_Bool)isExpired;
- (_Bool)isExpRunning;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

