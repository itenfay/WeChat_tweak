//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BioPayV2GetChallengeResponse, NSString;

@protocol WCPayBioPayV2GetChallengeCgiDelegate <NSObject>
- (void)onWCPayBioPayV2GetChallengeCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayBioPayV2GetChallengeCgiResponseOK:(BioPayV2GetChallengeResponse *)arg1;
@end

