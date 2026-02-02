//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCTCancellationSignal : NSObject
{
    shared_ptr_2b1ef54d m_signal;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (shared_ptr_2b1ef54d)getInnerSignal;
- (id)init;

@end

