//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MBWeakProxy : NSObject
{
    id _target;
}

+ (id)proxyWithTarget:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end

