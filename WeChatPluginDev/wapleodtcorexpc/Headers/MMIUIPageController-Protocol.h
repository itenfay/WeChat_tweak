//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMITransmitKvData, MMIUIPage;

@protocol MMIUIPageController <NSObject>
- (void)popAndStartPageUI:(MMIUIPage *)arg1 animated:(_Bool)arg2 extraData:(MMITransmitKvData *)arg3;
- (void)startModalPageUI:(MMIUIPage *)arg1 animated:(_Bool)arg2 extraData:(MMITransmitKvData *)arg3;
- (void)startPageUI:(MMIUIPage *)arg1 animated:(_Bool)arg2 extraData:(MMITransmitKvData *)arg3;
@end

