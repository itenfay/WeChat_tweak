//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface VoipStatusDataSourceService
{
    NSMutableArray *_snsProxyList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *snsProxyList; // @synthesize snsProxyList=_snsProxyList;
- (unsigned int)getCreateTime:(id)arg1;
- (id)getLatestStatus:(id)arg1 timeLimit:(unsigned long long)arg2;
- (id)getLatestSnsInfo:(id)arg1 timeLimit:(unsigned long long)arg2;
- (id)getLatestFinder:(id)arg1 timeLimit:(unsigned long long)arg2;
- (id)getTextStatus:(id)arg1 timeLimit:(unsigned long long)arg2;
- (_Bool)isBlockUserRecentStatus:(id)arg1;
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

