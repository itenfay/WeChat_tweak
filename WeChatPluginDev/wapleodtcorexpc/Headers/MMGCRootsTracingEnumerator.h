//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSEnumerator.h>

@class MMGCRootsTracingGraphElement, NSSet;

@interface MMGCRootsTracingEnumerator : NSEnumerator
{
    NSSet *_retainedObjectsSnapshot;
    NSEnumerator *_enumerator;
    MMGCRootsTracingGraphElement *_object;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MMGCRootsTracingGraphElement *object; // @synthesize object=_object;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)nextObject;
- (id)initWithObject:(id)arg1;

@end

