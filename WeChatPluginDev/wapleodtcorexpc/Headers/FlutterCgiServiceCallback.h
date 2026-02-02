//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FlutterCgiServiceCallback : NSObject
{
    struct weak_ptr<zidl::ZServerInvoker> server_invoker_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSendComplete:(unsigned long long)arg1 errorType:(long long)arg2 errorCode:(long long)arg3 data:(id)arg4;
- (id)initWithCpp:(const void *)arg1;

@end

