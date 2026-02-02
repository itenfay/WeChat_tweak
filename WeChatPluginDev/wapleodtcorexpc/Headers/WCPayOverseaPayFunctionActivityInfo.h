//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaPayFunctionActivityInfo : NSObject
{
    unsigned int _m_activityExpiredTime;
    NSString *_m_activityId;
    NSString *_m_activityMsgContent;
    NSString *_m_activityLink;
    NSString *_m_activityIconLink;
    NSString *_m_activityJumpFuncId;
    NSString *_m_activityTips;
}

+ (id)GenFromDictionary:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_m_activityExpiredTime;
+ (void)PBArrayAdd_m_activityTips;
+ (void)PBArrayAdd_m_activityJumpFuncId;
+ (void)PBArrayAdd_m_activityIconLink;
+ (void)PBArrayAdd_m_activityLink;
+ (void)PBArrayAdd_m_activityMsgContent;
+ (void)PBArrayAdd_m_activityId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_activityExpiredTime; // @synthesize m_activityExpiredTime=_m_activityExpiredTime;
@property(retain, nonatomic) NSString *m_activityTips; // @synthesize m_activityTips=_m_activityTips;
@property(retain, nonatomic) NSString *m_activityJumpFuncId; // @synthesize m_activityJumpFuncId=_m_activityJumpFuncId;
@property(retain, nonatomic) NSString *m_activityIconLink; // @synthesize m_activityIconLink=_m_activityIconLink;
@property(retain, nonatomic) NSString *m_activityLink; // @synthesize m_activityLink=_m_activityLink;
@property(retain, nonatomic) NSString *m_activityMsgContent; // @synthesize m_activityMsgContent=_m_activityMsgContent;
@property(retain, nonatomic) NSString *m_activityId; // @synthesize m_activityId=_m_activityId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

