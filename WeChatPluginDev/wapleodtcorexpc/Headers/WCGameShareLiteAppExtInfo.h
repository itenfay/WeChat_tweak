//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCGameShareLiteAppExtInfo : NSObject
{
    unsigned int _priority;
    NSString *_bizData;
}

+ (void)initialize;
+ (void)PBArrayAdd_priority;
+ (void)PBArrayAdd_bizData;
- (void).cxx_destruct;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *bizData; // @synthesize bizData=_bizData;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

