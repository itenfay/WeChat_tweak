//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WADeviceVoipAuthService
{
}

- (void)didFailToModDeviceAuthStatusWithError:(id)arg1 cgi:(id)arg2;
- (void)didModDeviceVoipAuthStatus:(id)arg1;
- (void)updateVoipDeviceAuthStatus:(id)arg1;
- (void)didFailToFetchDeviceWithError:(id)arg1 cgi:(id)arg2;
- (void)didFetchDeviceVoipAuthDeviceList:(id)arg1 cgi:(id)arg2;
- (void)fetchVoipDeviceList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

