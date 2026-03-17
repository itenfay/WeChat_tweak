//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BioPayV2UpdateAuthKeyResponse, NSString;

@protocol WCPayBioPayV2UpdateAuthKeyCgiDelegate <NSObject>
- (void)onWCPayBioPayV2UpdateAuthKeyCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayBioPayV2UpdateAuthKeyCgiResponseOK:(BioPayV2UpdateAuthKeyResponse *)arg1;
@end

