//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue, SRWebSocketDelegate;

@interface SRDelegateController : NSObject
{
    struct SRDelegateAvailableMethods _availableDelegateMethods;
    id <SRWebSocketDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property struct SRDelegateAvailableMethods availableDelegateMethods; // @synthesize availableDelegateMethods=_availableDelegateMethods;
- (void)performDelegateQueueBlock:(CDUnknownBlockType)arg1;
- (void)performDelegateBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <SRWebSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end

