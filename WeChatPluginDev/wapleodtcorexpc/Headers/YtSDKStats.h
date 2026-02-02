//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface YtSDKStats : NSObject
{
    NSString *_currentState;
    NSString *_currentAction;
    NSString *_prevUpdateState;
    NSString *_prevInfo;
    unsigned long long _currentEnterTimeStampMS;
    CDUnknownBlockType _onEventBlock;
    NSMutableDictionary *_stateNameMap;
}

+ (void)clearInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *stateNameMap; // @synthesize stateNameMap=_stateNameMap;
@property(copy, nonatomic) CDUnknownBlockType onEventBlock; // @synthesize onEventBlock=_onEventBlock;
- (id)netNameMapper:(id)arg1;
- (void)sendStateEvent:(id)arg1;
- (void)makeReport:(id)arg1 action:(id)arg2 error:(id)arg3 cost:(id)arg4 info:(id)arg5;
- (void)reportInfo:(id)arg1;
- (void)reportError:(int)arg1 message:(id)arg2;
- (void)resetState;
- (void)exitState;
- (void)updateState:(id)arg1;
- (void)enterState:(id)arg1;
- (unsigned long long)getTimeNow;
- (void)registerStateName:(id)arg1;
- (void)deInit;
- (id)init;

@end

