//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveCommentDataItem, MMLiveCommentPubbleCellFrame, MMUIButton, RichTextView, UIColor;

@interface MMLiveCommentPubbleCell
{
    _Bool _isTop;
    _Bool _isNoticeSection;
    _Bool _isCommentTableTopState;
    MMLiveCommentDataItem *_commentItem;
    MMLiveCommentPubbleCellFrame *_cellFrame;
    RichTextView *_commentLabel;
    long long _section;
    CDUnknownBlockType _touchButtonBlock;
    CDUnknownBlockType _contentLinkClickCallback;
    MMUIButton *_touchButton;
    UIColor *_customBackgroundColor;
}

+ (double)liveCommentPubbleCellToCellMargin;
+ (double)standardLiveCommentPubbleCellHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool isCommentTableTopState; // @synthesize isCommentTableTopState=_isCommentTableTopState;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(retain, nonatomic) MMUIButton *touchButton; // @synthesize touchButton=_touchButton;
@property(copy, nonatomic) CDUnknownBlockType contentLinkClickCallback; // @synthesize contentLinkClickCallback=_contentLinkClickCallback;
@property(copy, nonatomic) CDUnknownBlockType touchButtonBlock; // @synthesize touchButtonBlock=_touchButtonBlock;
@property(nonatomic) _Bool isNoticeSection; // @synthesize isNoticeSection=_isNoticeSection;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(retain, nonatomic) RichTextView *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) MMLiveCommentPubbleCellFrame *cellFrame; // @synthesize cellFrame=_cellFrame;
@property(retain, nonatomic) MMLiveCommentDataItem *commentItem; // @synthesize commentItem=_commentItem;
- (void)dealloc;
- (void)updateCellBackgroundColorWithNotification:(id)arg1;
- (void)updateCellAlphaWithTopSectionOffset:(double)arg1 scrollViewOffSet:(double)arg2 changeBGColorOffset:(double)arg3 currentHeight:(double)arg4;
- (void)updateCellAlphaWithNotification:(id)arg1;
- (void)commentPubbleCellBeginNew:(id)arg1;
- (void)commentPubbleCellEndToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updatePubbleCellAlpha;
- (void)setBackgroundColor:(id)arg1;
- (id)getRectValueForBaseStyle:(id)arg1;
- (unsigned long long)getContentLineNum;
- (id)getCommentItem;
- (void)runCustomExitAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)runCustomEnterAnimation;
- (void)updateCommentLabelOrigin;
- (void)layoutCommentLabel;
- (void)beginTopInCommentTable;
- (void)updateBackGroundColor;
- (_Bool)isUITypeValid;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)maxCornerRadius;
- (_Bool)reuseWithCellFrame:(id)arg1;
- (id)initWithCellFrame:(id)arg1;

@end

