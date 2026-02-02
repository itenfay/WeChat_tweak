//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMGCRootsTracingIvarReference : NSObject
{
    _Bool _isStrong;
    NSString *_name;
    unsigned long long _type;
    long long _offset;
    unsigned long long _index;
    struct objc_ivar *_ivar;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStrong; // @synthesize isStrong=_isStrong;
@property(readonly, nonatomic) struct objc_ivar *ivar; // @synthesize ivar=_ivar;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)namePath;
- (id)objectReferenceFromObject:(id)arg1;
- (unsigned long long)indexInIvarLayout;
@property(readonly, copy) NSString *description;
- (unsigned long long)_convertEncodingToType:(const char *)arg1;
- (id)initWithIvar:(struct objc_ivar *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

