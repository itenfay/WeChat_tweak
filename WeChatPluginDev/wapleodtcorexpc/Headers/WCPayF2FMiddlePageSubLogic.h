//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayControlData, WCPayF2FDynamicCodeCgi;
@protocol WCPayF2FMiddlePageSubLogicDelegate;

@interface WCPayF2FMiddlePageSubLogic
{
    WCPayControlData *_m_data;
    id <WCPayF2FMiddlePageSubLogicDelegate> _m_delegate;
    WCPayF2FDynamicCodeCgi *_m_f2fDynamicCodeCgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayF2FDynamicCodeCgi *m_f2fDynamicCodeCgi; // @synthesize m_f2fDynamicCodeCgi=_m_f2fDynamicCodeCgi;
@property __weak id <WCPayF2FMiddlePageSubLogicDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) WCPayControlData *m_data; // @synthesize m_data=_m_data;
- (void)onWCPayF2FDynamicCodeCgi:(id)arg1 netWorkError:(id)arg2;
- (void)onWCPayF2FDynamicCodeCgi:(id)arg1 resp:(id)arg2;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

