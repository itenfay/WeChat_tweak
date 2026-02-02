//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderObjectPlaceHolderInfo, WCFinderLeadToOtherTabTableViewCell;

@protocol WCFinderLeadToOtherTabTableViewCellDelegate <NSObject>

@optional
- (void)leadToOtherTabCell:(WCFinderLeadToOtherTabTableViewCell *)arg1 clickJumpWithPlaceHolderInfo:(FinderObjectPlaceHolderInfo *)arg2;
@end

