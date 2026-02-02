//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SnsAction;

@interface WCMsgActionGroup : NSObject
{
    unsigned int _objectCreateTime;
    unsigned int _delStatus;
    unsigned long long _id;
    unsigned long long _parentId;
    SnsAction *_currentAction;
    SnsAction *_referAction;
    NSString *_clientId;
}

+ (void)initialize;
+ (void)PBArrayAdd_delStatus;
+ (void)PBArrayAdd_objectCreateTime;
+ (void)PBArrayAdd_clientId;
+ (void)PBArrayAdd_referAction;
+ (void)PBArrayAdd_currentAction;
+ (void)PBArrayAdd_parentId;
+ (void)PBArrayAdd_id;
- (void).cxx_destruct;
@property(nonatomic) unsigned int delStatus; // @synthesize delStatus=_delStatus;
@property(nonatomic) unsigned int objectCreateTime; // @synthesize objectCreateTime=_objectCreateTime;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) SnsAction *referAction; // @synthesize referAction=_referAction;
@property(retain, nonatomic) SnsAction *currentAction; // @synthesize currentAction=_currentAction;
@property(nonatomic) unsigned long long parentId; // @synthesize parentId=_parentId;
@property(nonatomic) unsigned long long id; // @synthesize id=_id;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

