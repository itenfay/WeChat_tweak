//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WABrandTitleBar;

@protocol WABrandTitleBarDelegate <NSObject>
- (_Bool)brandTitleBarShouldHideShareButton:(WABrandTitleBar *)arg1;
- (void)brandTitleBarOnClickCloseButton:(WABrandTitleBar *)arg1;
- (void)brandTitleBarOnClickHeader:(WABrandTitleBar *)arg1;
- (void)brandTitleBarOnClickShareButton:(WABrandTitleBar *)arg1;

@optional
- (double)sheetCornerRadiusInSheetLaunchMode;
@end

