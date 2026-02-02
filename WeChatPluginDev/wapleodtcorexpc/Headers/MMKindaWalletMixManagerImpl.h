//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMKindaWalletMixManagerImpl : NSObject
{
}

- (id)genControlDataFromTransmitKvData:(id)arg1;
- (id)genWalletMixSpGenprepayRespFromUrl:(id)arg1 data:(id)arg2;
- (void)startWalletMixUseCaseImpl:(id)arg1 data:(id)arg2 successCallback:(id)arg3 cancelCallback:(id)arg4 failCallback:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

