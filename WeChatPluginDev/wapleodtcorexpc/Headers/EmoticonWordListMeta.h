//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmoticonWordListMeta : NSObject
{
    unsigned int _type;
    unsigned long long _version;
    unsigned long long _count;
}

+ (id)invalidMeta;
+ (void)initialize;
+ (void)PBArrayAdd_count;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_type;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (_Bool)isInvalid;
- (id)initWithType:(unsigned int)arg1 version:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

