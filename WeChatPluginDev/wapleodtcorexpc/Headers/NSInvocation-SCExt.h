//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSInvocation.h>

@interface NSInvocation (SCExt)
+ (id)sc_invocationWithTarget:(id)arg1 selector:(SEL)arg2 arguments:(id)arg3;
- (id)sc_returnValueWithType:(long long)arg1;
- (id)sc_invoke;
- (_Bool)setArgumentsFromArgumentList:(char *)arg1;
@end

