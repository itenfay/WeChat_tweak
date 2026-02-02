//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderRedDotTipsShowInfo;

@protocol WCFinderPersonalCenterCellProtocol <NSObject>
+ (double)cellHeight;

@optional
- (void)setRedDotInfo:(WCFinderRedDotTipsShowInfo *)arg1;
- (void)updateWithCellPosition:(_Bool)arg1 tail:(_Bool)arg2;
@end

