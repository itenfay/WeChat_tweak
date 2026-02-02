//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WASearchAdMgr
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleWeAppSearchAdClickResp:(id)arg1;
- (void)handleAdLogResp:(id)arg1;
- (void)weAppSearchADClick:(id)arg1 statKeywordId:(id)arg2 searchId:(id)arg3 docId:(id)arg4 position:(long long)arg5 appUserName:(id)arg6 appVersion:(id)arg7 adBuffer:(id)arg8 searchScene:(long long)arg9 clickExtInfo:(id)arg10;
- (void)reportADLog:(unsigned int)arg1 logExt:(id)arg2;
- (void)weAppClickStream:(id)arg1 keywordId:(id)arg2 clickType:(int)arg3 searchScene:(long long)arg4;
- (id)getKVLogHead;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

