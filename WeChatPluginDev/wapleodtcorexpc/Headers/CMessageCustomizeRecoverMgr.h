//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CMessageCustomizeRecoverMgr
{
}

- (unsigned int)getMaxBeforeAbnormalMsgCreateTimeWithUserName:(id)arg1 firstAbnormalCreateTimeMsg:(id)arg2;
- (id)handleAbnormalMsgsOneBatchWithUserName:(id)arg1 abnormalCreateTime:(unsigned int)arg2 minCreateTime:(unsigned int *)arg3;
- (_Bool)handleAbnormalMsgsWithUserName:(id)arg1 firstAbnormalCreateTimeMsg:(id)arg2 maxBeforeAbnormalMsgCreateTime:(unsigned int)arg3;
- (_Bool)handleMessageCustomizeRecoverWithUserName:(id)arg1;
- (_Bool)handleMessageCustomizeRecoverWithHandler:(CDUnknownBlockType)arg1;
- (id)getNeedMessageCustomizeRecoverSessions;
- (_Bool)checkNeedMessageCustomizeRecover;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

