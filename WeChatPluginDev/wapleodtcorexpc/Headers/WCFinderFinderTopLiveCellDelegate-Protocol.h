//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderContact, WCFinderFeedContentVM;

@protocol WCFinderFinderTopLiveCellDelegate <NSObject>

@optional
- (void)onClickCoverContact:(WCFinderContact *)arg1 contentVM:(WCFinderFeedContentVM *)arg2;
@end

