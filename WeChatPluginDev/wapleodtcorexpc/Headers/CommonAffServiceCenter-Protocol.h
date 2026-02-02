//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "UnitRCBaseProtocol-Protocol.h"

@protocol CommonAffServiceCenter <NSObject, UnitRCBaseProtocol>
- (void)callTerminate;
- (void)callClearData;
- (void)callMemoryWarning;
- (void)callEnterForeground;
- (void)callEnterBackground;
@end

