//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderEventInfo, UIViewController;

@protocol WCFinderSearchEventViewControllerDelegate <NSObject>
- (void)searchEventViewController:(UIViewController *)arg1 didSelectEvent:(FinderEventInfo *)arg2;
@end

