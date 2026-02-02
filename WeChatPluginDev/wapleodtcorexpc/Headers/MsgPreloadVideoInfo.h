//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MsgPreloadVideoInfo : NSObject
{
    unsigned int _dailyControlTimestamp;
    unsigned int _dailyControlCount;
    NSMutableDictionary *_dicRecord;
}

+ (void)initialize;
+ (void)PBArrayAdd_dailyControlCount;
+ (void)PBArrayAdd_dailyControlTimestamp;
+ (void)PBArrayAdd_dicRecord;
- (void).cxx_destruct;
@property(nonatomic) unsigned int dailyControlCount; // @synthesize dailyControlCount=_dailyControlCount;
@property(nonatomic) unsigned int dailyControlTimestamp; // @synthesize dailyControlTimestamp=_dailyControlTimestamp;
@property(retain, nonatomic) NSMutableDictionary *dicRecord; // @synthesize dicRecord=_dicRecord;
- (void)resetDailyControlInfo;
- (_Bool)overDailyLimit:(unsigned int)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

