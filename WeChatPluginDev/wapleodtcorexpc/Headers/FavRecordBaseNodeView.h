//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItemDataField, MMHeadImageView, MMUILabel, NSSet, UILabel, UIView;
@protocol FavRecordNodeViewDelegate, RecordNodeDataSource;

@interface FavRecordBaseNodeView
{
    UILabel *m_srcTitleLabel;
    MMUILabel *m_srcTimeLabel;
    UIView *m_contentView;
    _Bool m_bIsLongPressHandled;
    double m_fContentHeight;
    id <FavRecordNodeViewDelegate> m_delegate;
    NSSet *m_touches;
    id <RecordNodeDataSource> dataSource;
    FavoritesItemDataField *favData;
    MMUILabel *m_srcTitlePostLabel;
    MMHeadImageView *m_headImg;
    UIView *m_sepLine;
    FavRecordBaseNodeView *_referNodeView;
}

+ (double)referNodeViewWidth;
+ (double)heightForData:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak FavRecordBaseNodeView *referNodeView; // @synthesize referNodeView=_referNodeView;
@property(readonly, retain, nonatomic) NSSet *m_touches; // @synthesize m_touches;
@property(readonly, retain, nonatomic) FavoritesItemDataField *favData; // @synthesize favData;
@property(nonatomic) __weak id <FavRecordNodeViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, retain, nonatomic) id <RecordNodeDataSource> dataSource; // @synthesize dataSource;
- (void)onClickAsRefer;
- (void)onLongTouch;
- (void)onTouchUpInside;
- (void)onTouchDownRepeat;
- (void)onTouchDown;
- (void)onTouchCancel;
- (void)pressedEvents;
- (void)LongPressEvents;
- (void)onLongPressHeadView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)getThumbImageView;
- (_Bool)isTouchInContentView:(id)arg1;
- (void)updateContentSubview;
- (void)addContentSubView;
- (void)initContentView;
- (void)updateNodeWithTimePrefix:(int)arg1 headHidden:(_Bool)arg2 bottomLineHidden:(_Bool)arg3;
- (id)timeForDisplay:(int)arg1;
- (void)initSrcTitle;
- (void)setNodeSize;
- (void)layoutSubviews;
- (void)initView;
- (id)initWithDataSource:(id)arg1;

@end

