//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSObject;
@protocol WAJSContextPlugin_userAccountProtocol;

@interface WAJSContextPlugin_userAccount
{
    NSMutableArray *_arrEvent;
    NSObject<WAJSContextPlugin_userAccountProtocol> *_runningEvent;
}

- (void).cxx_destruct;
@property(retain) NSObject<WAJSContextPlugin_userAccountProtocol> *runningEvent; // @synthesize runningEvent=_runningEvent;
@property(retain) NSMutableArray *arrEvent; // @synthesize arrEvent=_arrEvent;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)removeConcurrentUserAccountJSEvent:(id)arg1;
- (void)addConcurrentUserAccountJSEvent:(id)arg1 param:(id)arg2;
- (void)resetRunningEvent:(id)arg1;
- (id)getNextRunningJSEventIfNotHave;
- (void)removeAllJSEvent;
- (void)addJSEvent:(id)arg1;
- (void)mainThread_checkRunJSEvent;
- (void)checkRunJSEvent;
- (id)getDescriptionForDataPipeType:(unsigned long long)arg1;
- (void)reportPerformanceForEvent:(id)arg1;
- (void)removeUserAccountJSEvent:(id)arg1;
- (void)addUserAccountJSEvent:(id)arg1 param:(id)arg2;
- (id)init;

@end

