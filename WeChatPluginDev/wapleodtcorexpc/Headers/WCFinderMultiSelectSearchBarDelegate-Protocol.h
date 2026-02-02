//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UITextField, WCFinderPOICategoryMenuItem;

@protocol WCFinderMultiSelectSearchBarDelegate <NSObject>
- (void)onMultiSelectSearchTextFiledChanged:(UITextField *)arg1;
- (void)onMultiSelectSearchItem:(WCFinderPOICategoryMenuItem *)arg1;
@end

