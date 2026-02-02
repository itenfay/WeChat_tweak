//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMKPwdInputViewOnPasswordChangeCallback : NSObject
{
    struct Handle<std::shared_ptr<kinda::KPwdInputViewOnPasswordChangeCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onPasswordChange:(int)arg1 payPassword:(id)arg2 passwordHashData:(id)arg3;
- (id)initWithCpp:(const void *)arg1;

@end

