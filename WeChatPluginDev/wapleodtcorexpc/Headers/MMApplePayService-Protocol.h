//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMVoidCallback, MMVoidITransmitKvDataCallback, NSString;

@protocol MMApplePayService <NSObject>
- (void)finishRequestApplePayImpl:(NSString *)arg1 retcode:(int)arg2 callback:(MMVoidCallback *)arg3;
- (void)startRequestApplePayImpl:(MMITransmitKvData *)arg1 callback:(MMVoidITransmitKvDataCallback *)arg2;
@end

