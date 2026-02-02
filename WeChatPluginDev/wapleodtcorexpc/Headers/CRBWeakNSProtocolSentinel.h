//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CRBWeakNSProtocolSentinel : NSObject
{
    RefPtr_fcf19635 _container;
}

+ (RefPtr_fcf19635)containerForObject:(id)arg1 threadChecker:(struct DebugThreadChecker)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) RefPtr_fcf19635 container; // @synthesize container=_container;
- (void)dealloc;
- (id)initWithContainer:(RefPtr_fcf19635)arg1;

@end

