//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMAnimatedImagePlayObj : NSObject
{
    id _target;
    SEL _selector;
}

- (void).cxx_destruct;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void)perform;

@end

