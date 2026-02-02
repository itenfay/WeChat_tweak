//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WCListHybridCellView
{
    UIView *_itemContainerView;
}

+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
- (void).cxx_destruct;
- (void)updateAccessibility;
- (void)onClickEvent;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)reloadItemContainerView;
- (void)initView;

@end

