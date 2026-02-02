//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EdgeComputingFieldConfigModel
{
    unsigned int _index;
    unsigned int _type;
    NSString *_name;
}

+ (void)initialize;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_index;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (id)toString;
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

