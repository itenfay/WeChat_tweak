//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMKListViewOnScrollCallback : NSObject
{
    struct Handle<std::shared_ptr<kinda::KListViewOnScrollCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onScroll:(float)arg1 y:(float)arg2;
- (id)initWithCpp:(const void *)arg1;

@end

