//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLocationSearchBar, NSString, UISearchBar;

@protocol MMLocationSearchBarDelegate <NSObject>

@optional
- (void)mmSearchBarSearchingStateChanged;
- (void)cancelSearch;
- (void)mmsearchBarResignActive;
- (void)mmsearchBarBecomeActive;
- (void)mmSearchBarDidEnd;
- (_Bool)mmSearchBarShouldBeginEditing:(MMLocationSearchBar *)arg1;
- (void)mmSearchBarTextDidChange:(NSString *)arg1;
- (_Bool)mmSearchBarShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(NSString *)arg2;
- (void)mmSearchBarTextDidBeginEditing:(UISearchBar *)arg1;
- (void)mmSearchBarCancelButtonClicked:(MMLocationSearchBar *)arg1;
- (void)mmSearchBarSearchButtonClicked:(MMLocationSearchBar *)arg1;
@end

