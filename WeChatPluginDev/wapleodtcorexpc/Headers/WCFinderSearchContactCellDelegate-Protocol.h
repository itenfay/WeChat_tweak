//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderContact, WCFinderSearchContactCell;

@protocol WCFinderSearchContactCellDelegate <NSObject>
- (void)onFinderSearchContactCell:(WCFinderSearchContactCell *)arg1 liveNowViewDidClick:(WCFinderContact *)arg2;
@end

