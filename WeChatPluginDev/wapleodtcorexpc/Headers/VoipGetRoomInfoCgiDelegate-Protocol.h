//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class VoipMonoMsg;

@protocol VoipGetRoomInfoCgiDelegate <NSObject>
- (void)onVoipGetRoomInfoCgiOk:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiRespFailed:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiRespNull:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiConnectFailed:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiCreateFailed:(VoipMonoMsg *)arg1;
- (void)onVoipGetRoomInfoCgiParaError:(VoipMonoMsg *)arg1;
@end

