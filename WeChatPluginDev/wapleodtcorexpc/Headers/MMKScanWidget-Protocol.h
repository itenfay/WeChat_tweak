//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidStringStringBinaryCallback, NSString;

@protocol MMKScanWidget <NSObject>
- (void)dismissOnScanFinish:(_Bool)arg1;
- (void)scan:(NSString *)arg1;
- (void)setHandlerImpl:(MMVoidStringStringBinaryCallback *)arg1;
@end

