//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface FTSTopHitValue : NSObject
{
    unsigned int _clickScore;
    unsigned int _timestamp;
    NSString *_key;
    NSMutableDictionary *_dicGroupMember;
}

+ (void)initialize;
+ (void)PBArrayAdd_dicGroupMember;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_clickScore;
+ (void)PBArrayAdd_key;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicGroupMember; // @synthesize dicGroupMember=_dicGroupMember;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int clickScore; // @synthesize clickScore=_clickScore;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (unsigned int)getABTestThredshold;
- (unsigned int)getABTestValidDays;
- (_Bool)isDisplayAvailable:(int)arg1;
- (_Bool)isDisplayAvailable;
- (_Bool)isOutOfDate;
- (long long)compareTopHitValueAscending:(id)arg1;
- (void)minusScore:(int)arg1;
- (void)minusScore;
- (void)addScore:(int)arg1;
- (void)addScore;
- (_Bool)isValid;
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

