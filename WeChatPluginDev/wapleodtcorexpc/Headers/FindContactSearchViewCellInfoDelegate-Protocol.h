//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCSearcher;

@protocol FindContactSearchViewCellInfoDelegate <NSObject>

@optional
- (void)onFindContactSearchViewSearchBar:(WCSearcher *)arg1 textDidChange:(NSString *)arg2;
- (void)onFindContactSearchViewDidPresentSearch:(WCSearcher *)arg1;
- (void)onCancelSearch;
@end

