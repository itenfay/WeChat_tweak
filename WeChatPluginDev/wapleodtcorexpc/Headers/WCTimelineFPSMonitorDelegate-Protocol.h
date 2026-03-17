//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCTimelineFPSMonitorDelegate <NSObject>
- (NSString *)observerIdentifier;
- (void)onTick:(float)arg1;
@end

