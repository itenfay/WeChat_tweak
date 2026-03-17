//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetRedPacketStoryResponse, NSString;

@protocol WCRedEnvGetPacketStoryCgiDelegate <NSObject>
- (void)onGetRedEnvPacketStoryCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onGetRedEnvPacketStoryCgiRespOK:(GetRedPacketStoryResponse *)arg1 isFromServer:(_Bool)arg2;
@end

