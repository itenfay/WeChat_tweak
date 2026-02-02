//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ForwardMsgSpamDb, NSString;

@interface ForwardMsgSpamMgr
{
    ForwardMsgSpamDb *_db;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForwardMsgSpamDb *db; // @synthesize db=_db;
- (id)sInt2String:(long long)arg1;
- (void)setUsername:(id)arg1 andScene:(unsigned long long)arg2 andMsgId:(long long)arg3 andOpenStatus:(_Bool)arg4;
- (_Bool)isUnknownMsg:(id)arg1;
- (_Bool)isSpamMsg:(id)arg1;
- (_Bool)isSafeMsg:(id)arg1;
- (void)requestMsgSpam:(id)arg1 commonParams:(id)arg2 startHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

