//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTimer, NSString;

@interface WAContactMainThreadGetter : NSObject
{
    CDUnknownBlockType _handler;
    MMTimer *_timer;
    NSString *_updateKey;
    unsigned long long _getType;
}

- (void).cxx_destruct;
- (void)onUpdateWeAppContactFailedWithKey:(id)arg1 type:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)onUpdateContactTimeout:(id)arg1;
- (void)getWeAppContact:(id)arg1 getType:(unsigned long long)arg2 version:(unsigned long long)arg3 requestSource:(id)arg4 handler:(CDUnknownBlockType)arg5 timeout:(unsigned int)arg6;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

