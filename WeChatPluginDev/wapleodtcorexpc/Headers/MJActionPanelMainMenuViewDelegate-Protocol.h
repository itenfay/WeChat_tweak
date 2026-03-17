//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJActionPanelMainMenuItem, MJActionPanelMainMenuView;

@protocol MJActionPanelMainMenuViewDelegate <NSObject>

@optional
- (void)mainMenuView:(MJActionPanelMainMenuView *)arg1 didSelectItem:(MJActionPanelMainMenuItem *)arg2;
@end

