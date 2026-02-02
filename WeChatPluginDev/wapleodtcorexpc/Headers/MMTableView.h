//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableView.h>

@class GradientMaskBottomView, MMTableViewChainModel, MMTableViewGestureHelper, MMTableViewIndexView, NSIndexPath, UIColor, UIPanGestureRecognizer, UIView, _TtC7WCUIKit21AnimateProgressRunner;
@protocol MMTableViewDelegate;

@interface MMTableView : UITableView
{
    id <MMTableViewDelegate> m_delegateProxy;
    _Bool cancelButtonTouchsTrack;
    Class cancelTouchsTrackClass;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIColor *_tailColor;
    _Bool m_dontDrawFooterLine;
    struct CGPoint m_lastSetContentOffset;
    MMTableViewGestureHelper *_gestureHelper;
    UIPanGestureRecognizer *_dragGesture;
    _Bool _bTriggerRecEnabled;
    struct CGPoint _beginRecOffset;
    _Bool _isMainView;
    _Bool _isHideExtraFooterLine;
    _Bool _bForceContentInsetAdjustAutomatic;
    _Bool _enableContentInsetForAdjustAutomatic;
    _Bool _isReloadingData;
    _Bool _forbidFixSearchBarHeaderView;
    _Bool _enableCustomCellSelectedStatus;
    _Bool _shouldSelectedCellRecoverAnimated;
    id <MMTableViewDelegate> m_delegate;
    MMTableViewIndexView *_indexView;
    double _topInsetUnderContentViewY;
    double _dragNotifyOffset;
    UIView *_tailView;
    NSIndexPath *_singleSelectedIndexPath;
    GradientMaskBottomView *_maskedBottomView;
    _TtC7WCUIKit21AnimateProgressRunner *_progressRunner;
}

+ (id)genNoPaddingPlainTableSectionHeaderView:(double)arg1 title:(id)arg2;
+ (id)genPlainTableSectionHeaderView:(double)arg1 title:(id)arg2 backgroundColor:(id)arg3;
+ (id)genPlainTableSectionHeaderView:(double)arg1 title:(id)arg2;
+ (double)heightForPlainTableSectionHeaderView;
+ (double)topPaddingForPlainTableSectionHeaderView;
+ (CDUnknownBlockType)zz_create;
+ (CDUnknownBlockType)zz_createWithStyle;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC7WCUIKit21AnimateProgressRunner *progressRunner; // @synthesize progressRunner=_progressRunner;
@property(retain, nonatomic) GradientMaskBottomView *maskedBottomView; // @synthesize maskedBottomView=_maskedBottomView;
@property(nonatomic) _Bool shouldSelectedCellRecoverAnimated; // @synthesize shouldSelectedCellRecoverAnimated=_shouldSelectedCellRecoverAnimated;
@property(retain, nonatomic) NSIndexPath *singleSelectedIndexPath; // @synthesize singleSelectedIndexPath=_singleSelectedIndexPath;
@property(nonatomic) _Bool enableCustomCellSelectedStatus; // @synthesize enableCustomCellSelectedStatus=_enableCustomCellSelectedStatus;
@property(nonatomic) _Bool forbidFixSearchBarHeaderView; // @synthesize forbidFixSearchBarHeaderView=_forbidFixSearchBarHeaderView;
@property(retain, nonatomic) UIView *tailView; // @synthesize tailView=_tailView;
@property(nonatomic) double dragNotifyOffset; // @synthesize dragNotifyOffset=_dragNotifyOffset;
@property(readonly, nonatomic) _Bool isReloadingData; // @synthesize isReloadingData=_isReloadingData;
@property(nonatomic) double topInsetUnderContentViewY; // @synthesize topInsetUnderContentViewY=_topInsetUnderContentViewY;
@property(nonatomic) _Bool enableContentInsetForAdjustAutomatic; // @synthesize enableContentInsetForAdjustAutomatic=_enableContentInsetForAdjustAutomatic;
@property(nonatomic) _Bool bForceContentInsetAdjustAutomatic; // @synthesize bForceContentInsetAdjustAutomatic=_bForceContentInsetAdjustAutomatic;
@property(nonatomic) _Bool isHideExtraFooterLine; // @synthesize isHideExtraFooterLine=_isHideExtraFooterLine;
@property(retain, nonatomic) MMTableViewIndexView *indexView; // @synthesize indexView=_indexView;
@property(nonatomic) _Bool isMainView; // @synthesize isMainView=_isMainView;
@property(retain, nonatomic) UIColor *tailColor; // @synthesize tailColor=_tailColor;
@property(nonatomic) Class cancelTouchsTrackClass; // @synthesize cancelTouchsTrackClass;
@property(nonatomic) _Bool cancelButtonTouchsTrack; // @synthesize cancelButtonTouchsTrack;
- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
- (void)setDelegate:(id)arg1;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)indexPathForSelectedRow;
- (_Bool)hasSearchBarHeader;
- (void)showGradientBottomMaskWithContent:(id)arg1 topPadding:(double)arg2 bottomPadding:(double)arg3;
- (void)showGradientBottomMaskWithContent:(id)arg1;
- (void)safeAreaInsetsDidChange;
- (double)tableAreaHeight;
- (void)removeFromSuperview;
- (void)didMoveToSuperview;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)useMMTableViewIndexViewWithDelegate:(id)arg1;
- (void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)setTableFooterView:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawFooterLine:(_Bool)arg1;
- (struct UIEdgeInsets)scrollIndicatorInsets;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)contentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentInsetTop:(double)arg1 andBottom:(double)arg2;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handleDragGesture:(id)arg1;
- (void)initDragGesture;
- (void)removeDragGesture;
- (void)fitVisionOSTransparentBackground;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)reloadDataAnimated;
- (void)setContentSize:(struct CGSize)arg1;
- (long long)firstSectionIndex;
- (void)reloadTailView;
- (void)reloadIndexView;
- (void)reloadTailColor;
- (void)reloadData;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) __weak id <MMTableViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, copy, nonatomic) MMTableViewChainModel *zz_setup;

@end

