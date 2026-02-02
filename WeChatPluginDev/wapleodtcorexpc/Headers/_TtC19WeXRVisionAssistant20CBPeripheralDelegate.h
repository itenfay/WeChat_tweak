//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC19WeXRVisionAssistant20CBPeripheralDelegate : NSObject
{
    MISSING_TYPE *loginService;
}

- (void).cxx_destruct;
- (id)init;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManagerDidUpdateState:(id)arg1;

@end

