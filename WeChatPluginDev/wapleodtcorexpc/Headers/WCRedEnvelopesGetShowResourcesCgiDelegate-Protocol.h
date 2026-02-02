//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetShowSourceResp, NSString;

@protocol WCRedEnvelopesGetShowResourcesCgiDelegate <NSObject>
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(GetShowSourceResp *)arg1 type:(unsigned int)arg2;
@end

