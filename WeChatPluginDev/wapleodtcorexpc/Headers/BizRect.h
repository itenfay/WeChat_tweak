//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber;

@interface BizRect : NSObject
{
    NSNumber *_left;
    NSNumber *_top;
    NSNumber *_right;
    NSNumber *_bottom;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithLeft:(id)arg1 top:(id)arg2 right:(id)arg3 bottom:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) NSNumber *right; // @synthesize right=_right;
@property(retain, nonatomic) NSNumber *top; // @synthesize top=_top;
@property(retain, nonatomic) NSNumber *left; // @synthesize left=_left;
- (id)toList;

@end

