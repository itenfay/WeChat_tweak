//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ShakeTvActionList : NSObject
{
    int _type;
    NSString *_title;
    NSMutableArray *_actions;
}

+ (void)initialize;
+ (void)PBArrayAdd_actions;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_type;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
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

