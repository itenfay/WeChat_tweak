//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@interface KindaProxy : NSProxy
{
    id _object;
}

+ (id)proxyWithObject:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id object; // @synthesize object=_object;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end

