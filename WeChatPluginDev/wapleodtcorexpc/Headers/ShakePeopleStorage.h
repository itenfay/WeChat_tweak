//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ShakePeopleStorage : NSObject
{
    unsigned int _m_uiSoundStatus;
    unsigned int _m_uiNewArriveCount;
    NSMutableArray *_m_arrShakeList;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_uiNewArriveCount;
+ (void)PBArrayAdd_m_uiSoundStatus;
+ (void)PBArrayAdd_m_arrShakeList;
- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiNewArriveCount; // @synthesize m_uiNewArriveCount=_m_uiNewArriveCount;
@property(nonatomic) unsigned int m_uiSoundStatus; // @synthesize m_uiSoundStatus=_m_uiSoundStatus;
@property(retain, nonatomic) NSMutableArray *m_arrShakeList; // @synthesize m_arrShakeList=_m_arrShakeList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)preInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

