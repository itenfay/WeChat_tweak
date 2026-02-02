//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface QMUPointQuadTree : NSObject
{
    int _depth;
    NSMutableArray *_children;
    NSMutableArray *_items;
    CDStruct_c519178c _bounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(nonatomic) CDStruct_c519178c bounds; // @synthesize bounds=_bounds;
@property(nonatomic) int depth; // @synthesize depth=_depth;
- (void)split;
- (void)remove:(CDStruct_c3b9c2ee)arg1 item:(id)arg2;
- (void)remove:(id)arg1;
- (void)insert:(CDStruct_c3b9c2ee)arg1 item:(id)arg2;
- (void)insert:(id)arg1;
- (void)queryInternal:(id)arg1 bounds:(CDStruct_c519178c)arg2;
- (id)queryWithBounds:(CDStruct_c519178c)arg1;
- (id)initWithBounds:(CDStruct_c519178c)arg1 depth:(int)arg2;
- (id)initWithBounds:(CDStruct_c519178c)arg1;

@end

