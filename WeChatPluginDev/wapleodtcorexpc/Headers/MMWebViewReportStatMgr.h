//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMWebViewReportStatMgr
{
    unsigned long long m_iMenuActionRet;
}

@property(nonatomic) unsigned long long m_iMenuActionRet; // @synthesize m_iMenuActionRet;
- (void)reportWebPageInfoWhenForwardMsgOrFav:(id)arg1 actionType:(unsigned long long)arg2 fromScene:(unsigned long long)arg3 ret:(unsigned long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

