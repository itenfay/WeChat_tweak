//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UnitRCWeakObj;

@protocol UnitRCBaseProtocol <NSObject>

@optional
- (id)strongRC;
- (UnitRCWeakObj *)weakRC;
@end

