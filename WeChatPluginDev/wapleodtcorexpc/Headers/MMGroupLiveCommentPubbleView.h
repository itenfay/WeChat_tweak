//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGroupLiveCommentTableViewCellFrame, MMHeadImageView, MMLiveCommentDataItem, RichTextView;

@interface MMGroupLiveCommentPubbleView
{
    MMLiveCommentDataItem *_commentItem;
    MMHeadImageView *_headImageView;
    RichTextView *_commentLabel;
    MMGroupLiveCommentTableViewCellFrame *_cellFrame;
}

+ (struct CGSize)sizeForComment:(id)arg1 inCommentPubbleMaxWidth:(double)arg2 withArrStyles:(id *)arg3;
+ (double)maxDisplayLabelWidthForComment:(id)arg1 inCommentPubbleMaxWidth:(double)arg2;
+ (double)maxDisplayLabelWidthForComment:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMGroupLiveCommentTableViewCellFrame *cellFrame; // @synthesize cellFrame=_cellFrame;
@property(retain, nonatomic) RichTextView *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) MMLiveCommentDataItem *commentItem; // @synthesize commentItem=_commentItem;
- (void)updateCommentLabelOrigin;
- (void)layoutCommentLabel;
- (void)layoutHeadImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

