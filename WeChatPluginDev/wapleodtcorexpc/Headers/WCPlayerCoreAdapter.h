//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCPlayerCoreAdapterDelegate;

@interface WCPlayerCoreAdapter : NSObject
{
    _Bool _openPlayerLog;
    id <WCPlayerCoreAdapterDelegate> _delegate;
}

+ (void)makeSureLocalServiceActiveWithCompletion:(CDUnknownBlockType)arg1;
+ (id)SharedInstance;
+ (void)SetupWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool openPlayerLog; // @synthesize openPlayerLog=_openPlayerLog;
@property __weak id <WCPlayerCoreAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logWithLevel:(int)arg1 tommfile:(_Bool)arg2 module:(const char *)arg3 file:(const char *)arg4 function:(const char *)arg5 line:(unsigned long long)arg6 message:(id)arg7;
- (void)logWithLevel:(int)arg1 tag:(id)arg2 file:(const char *)arg3 function:(const char *)arg4 line:(unsigned long long)arg5 format:(id)arg6 args:(char *)arg7;
- (void)configThumbPlayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

