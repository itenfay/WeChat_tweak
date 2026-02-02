//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMSessionInfoExt : NSObject
{
    _Bool _m_isHidden;
    unsigned int _m_uLastNotifySeq;
    unsigned int _m_uUndeliverCount;
    unsigned int _m_uLastDeliverMsgSeq;
    unsigned long long _m_sessionState;
    long long _sessionLastMsgId;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_sessionState;
+ (void)PBArrayAdd_m_isHidden;
+ (void)PBArrayAdd_m_uLastDeliverMsgSeq;
+ (void)PBArrayAdd_m_uUndeliverCount;
+ (void)PBArrayAdd_m_uLastNotifySeq;
@property(nonatomic) long long sessionLastMsgId; // @synthesize sessionLastMsgId=_sessionLastMsgId;
@property(nonatomic) unsigned long long m_sessionState; // @synthesize m_sessionState=_m_sessionState;
@property(nonatomic) _Bool m_isHidden; // @synthesize m_isHidden=_m_isHidden;
@property(nonatomic) unsigned int m_uLastDeliverMsgSeq; // @synthesize m_uLastDeliverMsgSeq=_m_uLastDeliverMsgSeq;
@property(nonatomic) unsigned int m_uUndeliverCount; // @synthesize m_uUndeliverCount=_m_uUndeliverCount;
@property(nonatomic) unsigned int m_uLastNotifySeq; // @synthesize m_uLastNotifySeq=_m_uLastNotifySeq;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

