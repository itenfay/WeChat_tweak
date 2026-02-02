//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCCardPkgBatchGetCardItemByTpInfoMgrDelegate;

@interface WCCardPkgBatchGetCardItemByTpInfoMgr
{
    id <WCCardPkgBatchGetCardItemByTpInfoMgrDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardPkgBatchGetCardItemByTpInfoMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBatchGetWCCardByTpInfoResp:(id)arg1 Event:(unsigned int)arg2;
- (void)batchGetCardItemByIpInfo:(id)arg1 templateMsgId:(id)arg2 fromScene:(unsigned long long)arg3;
- (void)dealloc;

@end

