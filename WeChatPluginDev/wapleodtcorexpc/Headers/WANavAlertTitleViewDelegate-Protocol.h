//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WANavAlertTitleView;

@protocol WANavAlertTitleViewDelegate <NSObject>
- (_Bool)shouldShowEntryBtnOnNavAlertTitleView:(WANavAlertTitleView *)arg1;
- (void)onNavAlertTitleViewEntryBtnClicked:(WANavAlertTitleView *)arg1;
@end

