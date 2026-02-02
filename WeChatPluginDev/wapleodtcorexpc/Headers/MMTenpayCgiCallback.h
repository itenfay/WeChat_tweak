//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMTenpayCgiCallback : NSObject
{
    struct Handle<std::shared_ptr<kinda::TenpayCgiCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onSuccess:(id)arg1;
- (void)onError:(int)arg1 errmsg:(id)arg2;
- (id)initWithCpp:(const void *)arg1;

@end

