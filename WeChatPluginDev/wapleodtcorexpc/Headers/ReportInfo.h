//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ReportInfo : NSObject
{
    unsigned int _m_uiSeq;
    unsigned long long _m_lastSyncTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_lastSyncTime;
+ (void)PBArrayAdd_m_uiSeq;
@property(nonatomic) unsigned long long m_lastSyncTime; // @synthesize m_lastSyncTime=_m_lastSyncTime;
@property(nonatomic) unsigned int m_uiSeq; // @synthesize m_uiSeq=_m_uiSeq;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

