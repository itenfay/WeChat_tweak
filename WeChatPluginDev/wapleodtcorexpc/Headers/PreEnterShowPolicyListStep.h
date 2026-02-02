//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PreEnterShowPolicyListConfig, WCPolicyListControlLogic;

@interface PreEnterShowPolicyListStep
{
    PreEnterShowPolicyListConfig *_configObj;
    NSString *_userName;
    WCPolicyListControlLogic *_policyListLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPolicyListControlLogic *policyListLogic; // @synthesize policyListLogic=_policyListLogic;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) PreEnterShowPolicyListConfig *configObj; // @synthesize configObj=_configObj;
- (void)finishStep;
- (void)startStep;
@property(readonly, nonatomic) NSString *policylist;
- (id)configWithContent:(id)arg1;
- (id)initWithMsg:(id)arg1;

@end

