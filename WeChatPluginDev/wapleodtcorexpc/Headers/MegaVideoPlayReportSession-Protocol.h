//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@class NSData, NSString;

@protocol MegaVideoPlayReportSession <NSObject, UnitRCBaseProtocol>
- (void)report:(NSData *)arg1;
- (NSString *)sessionId;
@end

