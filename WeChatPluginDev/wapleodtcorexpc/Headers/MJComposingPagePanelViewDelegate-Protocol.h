//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJComposingPagePanelView;

@protocol MJComposingPagePanelViewDelegate <NSObject>
- (void)pagePanelView:(MJComposingPagePanelView *)arg1 didDisappearPageAtIndex:(long long)arg2;
- (void)pagePanelView:(MJComposingPagePanelView *)arg1 didAppearPageAtIndex:(long long)arg2;
@end

