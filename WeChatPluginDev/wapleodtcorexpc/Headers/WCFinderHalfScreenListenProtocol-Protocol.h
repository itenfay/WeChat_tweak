//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderHalfMoveModel;

@protocol WCFinderHalfScreenListenProtocol <NSObject>

@optional
- (WCFinderHalfMoveModel *)getHalfMoveModel;
- (void)halfScreenShowStateChanged;
- (void)halfScreenMoveProgressChanged;
@end

