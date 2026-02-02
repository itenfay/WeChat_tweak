//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WCListVideoCellView
{
    UIView *m_tailView;
}

+ (id)trimDescWithDataItem:(id)arg1;
+ (id)titleWithDataItem:(id)arg1;
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
- (void).cxx_destruct;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)onClickEvent;
- (void)initView;
- (void)initTailView;
- (double)tailViewHeight;
- (double)maxLabelWidth;

@end

