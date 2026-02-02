//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TPIOSHeadphoneManagerImpl : NSObject
{
    _Bool _initialized;
    NSMutableArray *_delegateArray;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSMutableArray *delegateArray; // @synthesize delegateArray=_delegateArray;
@property(readonly, nonatomic) _Bool headphoneOn; // @dynamic headphoneOn;
- (void)audioRouteDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)stopInternal;
- (void)startInternal;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

