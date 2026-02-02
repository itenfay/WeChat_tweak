//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MultiTalkTerminationService
{
}

+ (int)getIfMMKVMultiTalkStatusMatch:(unsigned long long)arg1;
+ (void)cleanMMKVMultiTalkStatus:(_Bool)arg1;
+ (void)setMMKVMultiTalkStatus:(unsigned long long)arg1 status:(int)arg2 roomname:(id)arg3;
+ (void)supplementLocalExceptionMessage:(id)arg1 exceptionType:(unsigned long long)arg2 hasRemain:(_Bool)arg3;
+ (_Bool)shouldSupportExceptionMessage;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

