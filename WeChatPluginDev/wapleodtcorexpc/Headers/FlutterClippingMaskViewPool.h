//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface FlutterClippingMaskViewPool : NSObject
{
    unsigned long long _capacity;
    NSMutableSet *_pool;
}

@property(retain, nonatomic) NSMutableSet *pool; // @synthesize pool=_pool;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void)dealloc;
- (void)insertViewToPoolIfNeeded:(id)arg1;
- (id)getMaskViewWithFrame:(struct CGRect)arg1;
- (id)initWithCapacity:(long long)arg1;

@end

