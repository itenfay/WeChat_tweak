//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol KindaScanWidgetDelegate <NSObject>
- (void)onFinishScan:(NSString *)arg1 scanResult:(NSString *)arg2 cardImgData:(NSData *)arg3;
@end

