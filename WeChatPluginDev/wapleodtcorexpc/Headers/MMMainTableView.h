//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MainTableDelegate;

@interface MMMainTableView
{
    _Bool _enableDeselection;
    id <MainTableDelegate> _m_mainTableDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool enableDeselection; // @synthesize enableDeselection=_enableDeselection;
@property(nonatomic) __weak id <MainTableDelegate> m_mainTableDelegate; // @synthesize m_mainTableDelegate=_m_mainTableDelegate;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (_Bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (struct UIEdgeInsets)adjustedContentInset;
- (void)forceDeselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)forceDeselectRowAtIndexPath:(id)arg1;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)ensureHierarchy;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

