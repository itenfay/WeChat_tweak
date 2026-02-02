//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMNoRetainTimerTarget : NSObject
{
    SEL _targetAction;
    id _target;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL targetAction; // @synthesize targetAction=_targetAction;
- (void)onNoRetainTimer:(id)arg1;
- (id)initWithTarget:(id)arg1 withAction:(SEL)arg2;

@end

