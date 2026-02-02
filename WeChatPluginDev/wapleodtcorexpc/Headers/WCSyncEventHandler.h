//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCSyncEventHandler
{
}

- (unsigned long long)getFeedIdBySnsAction:(id)arg1;
- (void)reportForbidNotifyInfo:(id)arg1;
- (_Bool)ABtestControlNormalMessageNeedInsert:(id)arg1;
- (_Bool)hitNormalMessageForbidNotifyExp;
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(_Bool *)arg2;
- (void)onReveiceWCMessage:(id)arg1;

@end

