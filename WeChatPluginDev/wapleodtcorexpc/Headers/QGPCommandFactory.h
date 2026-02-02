//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QGPCommandFactory : NSObject
{
}

+ (id)forwardCommand:(id)arg1 command:(id)arg2;
+ (id)hasReturnInvocateTarget:(id)arg1 Selector:(SEL)arg2 command:(id)arg3 error:(id *)arg4;
+ (void)withoutReturnInvocateTarget:(id)arg1 Selector:(SEL)arg2 command:(id)arg3 error:(id *)arg4;
+ (id)createCommandWithJson:(id)arg1 error:(id *)arg2;

@end

