//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString, UIView, WCFinderExpandableTagSelector;

@protocol WCFinderExpandableTagSelectorDelegate <NSObject>

@optional
- (void)tagSelector:(WCFinderExpandableTagSelector *)arg1 willDisplayView:(UIView *)arg2 withIdentifier:(NSString *)arg3;
- (void)tagSelector:(WCFinderExpandableTagSelector *)arg1 selectedAdded:(NSArray *)arg2 removes:(NSArray *)arg3;
- (void)tagSelector:(WCFinderExpandableTagSelector *)arg1 onExpandPanelCloseForIndexPath:(NSIndexPath *)arg2;
- (void)onTagSelector:(WCFinderExpandableTagSelector *)arg1 clickIndexPath:(NSIndexPath *)arg2 group:(long long)arg3 index:(long long)arg4;
@end

