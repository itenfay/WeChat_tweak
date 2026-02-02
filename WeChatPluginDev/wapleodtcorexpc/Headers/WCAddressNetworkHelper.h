//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCAddressNetworkDelegate;

@interface WCAddressNetworkHelper
{
    id <WCAddressNetworkDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAddressNetworkDelegate> m_delegate; // @synthesize m_delegate;
- (void)ImportYiXunAdress:(id)arg1;
- (void)SelectWCAddress:(id)arg1;
- (void)ModifyWCAddress:(id)arg1;
- (void)AnalysicAddressInfo:(id)arg1;
- (void)QueryWCAddress:(id)arg1;
- (void)RemoveWCAddress:(id)arg1;
- (void)AddWCAddress:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInImportYiXunAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInSelectWCAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInModifyWCAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInRemoveWCAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInQueryWCAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInAnnlysicInfo:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInAddWCAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;

@end

