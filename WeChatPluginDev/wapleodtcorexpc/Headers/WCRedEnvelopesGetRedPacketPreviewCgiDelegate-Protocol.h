//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetRedPacketPreviewResponse, NSString;

@protocol WCRedEnvelopesGetRedPacketPreviewCgiDelegate <NSObject>
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetRedPacketPreviewCgiResponseOK:(GetRedPacketPreviewResponse *)arg1;
@end

