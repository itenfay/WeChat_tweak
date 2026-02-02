//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface ObjectWrapper : NSObject
{
    id m_target;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)returnNil;
- (id)initWithTarget:(id)arg1;

@end

