//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetDefaultRedpacketResponse, NSString;

@protocol GetDefaultRedPacketSkinCgiDelegate <NSObject>

@optional
- (void)onGetDefaultRedPacketSkinCgiError:(NSString *)arg1 errorCode:(unsigned int)arg2;
- (void)onGetDefaultRedPacketSkinCgiResponse:(GetDefaultRedpacketResponse *)arg1 isUseCache:(_Bool)arg2;
@end

