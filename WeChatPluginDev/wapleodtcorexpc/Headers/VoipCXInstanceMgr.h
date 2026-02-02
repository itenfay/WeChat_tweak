//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CXCallController, CXProvider, NSString;

@interface VoipCXInstanceMgr
{
    CXCallController *_cxController;
    CXProvider *_provider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CXProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) CXCallController *cxController; // @synthesize cxController=_cxController;
- (void)renewRingToneSoundForCaller:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

