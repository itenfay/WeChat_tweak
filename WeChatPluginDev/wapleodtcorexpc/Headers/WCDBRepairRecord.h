//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WCDBRepairRecord : NSObject
{
    int _tag;
    int _repairTimes;
    NSDate *_lastRepairTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastRepairTime;
+ (void)PBArrayAdd_repairTimes;
+ (void)PBArrayAdd_tag;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastRepairTime; // @synthesize lastRepairTime=_lastRepairTime;
@property(nonatomic) int repairTimes; // @synthesize repairTimes=_repairTimes;
@property(nonatomic) int tag; // @synthesize tag=_tag;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

