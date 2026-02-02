//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QMapCapacityConstraint : NSObject
{
    _Bool _allowRenderL4;
}

+ (id)sharedCapacity;
@property(nonatomic) _Bool allowRenderL4; // @synthesize allowRenderL4=_allowRenderL4;
- (id)init;
- (void)setup;
- (void)setupAllowRenderL4;

@end

