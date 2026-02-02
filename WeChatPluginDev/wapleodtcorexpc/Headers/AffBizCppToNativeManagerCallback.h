//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AffBizCppToNativeManagerCallback : NSObject
{
    struct weak_ptr<zidl::ZServerInvoker> server_invoker_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)ongetResortContextComplete:(int)arg1 context:(id)arg2;
- (id)initWithCpp:(const void *)arg1;

@end

