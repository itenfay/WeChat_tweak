//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetUrlInfoRespItem;

@protocol GetQRCodeInfoLogicDelegate <NSObject>

@optional
- (void)onGetQRCodeInfoResultSuccess:(unsigned int)arg1 qrCodeInfoItem:(GetUrlInfoRespItem *)arg2;
- (void)onGetQRCodeInfoResultFailure:(unsigned int)arg1;
@end

