//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMGroupLiveCommentPubbleView, MMGroupLiveCommentTableViewCellFrame;

@interface MMGroupLiveCommentTableViewCell
{
    MMGroupLiveCommentPubbleView *_pubbleView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMGroupLiveCommentPubbleView *pubbleView; // @synthesize pubbleView=_pubbleView;
@property(readonly, nonatomic) MMGroupLiveCommentTableViewCellFrame *groupLiveCellFrame;
- (void)setCellFrame:(id)arg1;
- (void)setCommentItem:(id)arg1;
- (void)layoutPubbleView;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

