//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AffWCRTEDelegateCallback : NSObject
{
    struct weak_ptr<zidl::ZServerInvoker> server_invoker_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSayHelloComplete:(unsigned long long)arg1;
- (id)initWithCpp:(const void *)arg1;

@end

