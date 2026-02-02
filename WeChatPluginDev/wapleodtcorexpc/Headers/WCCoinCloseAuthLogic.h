//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCCoinCloseAuthLogic : NSObject
{
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)onCloseService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getTopVC;
- (void)success;
- (void)fail;
- (void)closeAuth;
- (void)haveBalance;
- (void)start:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

