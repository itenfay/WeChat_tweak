//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JceStructContainer : NSObject
{
    void *_p;
    CDUnknownBlockType _allocator;
    CDUnknownBlockType _deallocator;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType deallocator; // @synthesize deallocator=_deallocator;
@property(copy, nonatomic) CDUnknownBlockType allocator; // @synthesize allocator=_allocator;
@property(readonly, nonatomic) void *p; // @synthesize p=_p;
- (void)dealloc;
- (id)initWithAllocator:(CDUnknownBlockType)arg1 andDeallocator:(CDUnknownBlockType)arg2;

@end

