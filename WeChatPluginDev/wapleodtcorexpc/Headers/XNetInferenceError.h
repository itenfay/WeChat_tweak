//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSError.h>

@interface XNetInferenceError : NSError
{
    struct shared_ptr<xnet::Status> _underlying;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)descriptionWithoutCallStack;
- (id)description;
- (id)initWithUnderlying:(const void *)arg1;

@end

