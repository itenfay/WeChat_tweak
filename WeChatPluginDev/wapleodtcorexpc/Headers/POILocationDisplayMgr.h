//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface POILocationDisplayMgr
{
}

- (void)handleGetPOICityResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)logGoogleAddressResult:(id)arg1 ForLocation:(id)arg2;
- (int)getPOIDisplayNameWithLocation:(id)arg1 Scene:(int)arg2 SrcDisplayName:(id)arg3 extraInfo:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

