//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class HostAlgoList, MMAxAuthLogic, NSData;

@protocol MMAxAuthLogicDelegate <NSObject>

@optional
- (void)onAxAuthLogicFailed:(MMAxAuthLogic *)arg1;
- (void)onAxAuthLogicSuccess:(MMAxAuthLogic *)arg1 clientSessionKey:(NSData *)arg2 serverSessionKey:(NSData *)arg3 serverId:(NSData *)arg4 hostAlgoList:(HostAlgoList *)arg5;
@end

