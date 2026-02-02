//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMVoidBoolCallback : NSObject
{
    struct Handle<std::shared_ptr<kinda::VoidBoolCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)call:(_Bool)arg1;
- (id)initWithCpp:(const void *)arg1;

@end

