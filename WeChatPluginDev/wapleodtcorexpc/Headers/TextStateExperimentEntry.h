//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStateExperimentEntry : NSObject
{
    NSString *_key;
    NSString *_value;
}

+ (void)initialize;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_key;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;
- (id)initWithItem:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

