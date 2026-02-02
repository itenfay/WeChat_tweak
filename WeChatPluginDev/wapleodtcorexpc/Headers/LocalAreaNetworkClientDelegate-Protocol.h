//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol LocalAreaNetworkClientDelegate <NSObject>
- (void)onNetworkConnectFail;
- (void)onNetworkDisconnect;
- (void)onNetworkReciveData:(NSData *)arg1 andLength:(unsigned int)arg2;
@end

