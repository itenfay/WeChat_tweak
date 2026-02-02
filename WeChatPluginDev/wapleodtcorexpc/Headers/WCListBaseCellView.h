//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSIndexPath, NSMutableArray, NSString, RichTextView, UIImageView, UIView, WCCellGroup, WCCellGroupItem, WCDataItem;
@protocol WCListViewRowViewDelegate;

@interface WCListBaseCellView
{
    WCCellGroup *m_group;
    WCCellGroupItem *m_groupItem;
    NSMutableArray *m_rowDatas;
    WCDataItem *m_dataItem;
    NSString *m_nsDescription;
    _Bool m_bShowDateLabel;
    _Bool m_bShowLock;
    _Bool m_bIsTouchInContentView;
    long long m_type;
    UIView *m_infoContainerView;
    MMUILabel *m_timeLabel;
    UIView *m_cityLabel;
    UIImageView *m_accessoryView;
    UIView *m_contentView;
    RichTextView *m_contentLabel;
    UIImageView *m_failImageView;
    UIImageView *m_starredImageView;
    UIImageView *m_sharedImageView;
    UIImageView *m_lockedImageView;
    id <WCListViewRowViewDelegate> m_delegate;
    long long _accessoryType;
    NSIndexPath *_m_indexPath;
    long long _puzzleImageViewLayoutStyle;
}

+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
+ (double)getLayoutHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(_Bool)arg4 isLastOneInSection:(_Bool)arg5;
+ (double)minLeftPartHeightWithGroup:(id)arg1;
+ (double)suitableContentHeightForGroup:(id)arg1 contentViewHeight:(double)arg2 shouldShowDate:(_Bool)arg3;
+ (void)getTitle:(id *)arg1 subTitle:(id *)arg2 accessibiltyString:(id *)arg3 withGroup:(id)arg4;
+ (id)timeLabelAttributedStringWithGroup:(id)arg1;
+ (id)defaultTimeLabel;
+ (id)defaultCityLabel;
+ (_Bool)showsAccessoryView:(long long)arg1;
+ (double)maxContentWidthWithCellViewWidth:(double)arg1 accessoryType:(long long)arg2;
+ (id)defaultContentLabel;
+ (double)allStatusIconImageViewWidthWithGroup:(id)arg1 groupItem:(id)arg2;
+ (double)getContentWidthWithCellWidth:(double)arg1;
+ (double)getTimeLabelMarginLeftCurOri;
+ (double)getTimeLabelWidthCurOri;
- (void).cxx_destruct;
@property(nonatomic) long long puzzleImageViewLayoutStyle; // @synthesize puzzleImageViewLayoutStyle=_puzzleImageViewLayoutStyle;
@property(retain, nonatomic) NSIndexPath *m_indexPath; // @synthesize m_indexPath=_m_indexPath;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) __weak id <WCListViewRowViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIView *m_infoContainerView; // @synthesize m_infoContainerView;
@property(nonatomic) long long m_type; // @synthesize m_type;
@property(nonatomic) _Bool m_bShowLock; // @synthesize m_bShowLock;
@property(nonatomic) _Bool m_bShowDateLabel; // @synthesize m_bShowDateLabel;
@property(retain, nonatomic) NSString *m_nsDescription; // @synthesize m_nsDescription;
@property(readonly, nonatomic) NSMutableArray *m_rowDatas; // @synthesize m_rowDatas;
@property(readonly, nonatomic) WCCellGroupItem *m_groupItem; // @synthesize m_groupItem;
@property(readonly, nonatomic) WCCellGroup *m_group; // @synthesize m_group;
- (id)statusIconAccessibilityComponentsWithDataItem:(id)arg1;
- (id)customAccessibilityComponents;
- (id)accessibilityComponents;
- (void)updateAccessibility;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onClickEvent;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (_Bool)handleShouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)initView;
- (id)generateStatusInfoWithDataItem:(id)arg1;
- (double)allStatusIconImageViewWidth;
- (void)layoutStatusIconImageView;
- (void)initLockedImageView;
- (void)initSharedImageView;
- (void)initStarredImageView;
- (void)initStatusIconImageView;
- (void)initFailImageView;
- (void)initContentLabel;
- (void)initAccessoryView;
- (void)initDateTimeLabel;
- (void)setGroupItem:(id)arg1 inGroup:(id)arg2;
- (void)layoutSubviews;
- (_Bool)showsAccessoryView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

