//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;

@interface MMFinderLiveWithCallbackSet : NSObject
{
    CDUnknownBlockType _callback;
    NSMutableSet *_realSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *realSet; // @synthesize realSet=_realSet;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *values;
- (id)init;

@end

