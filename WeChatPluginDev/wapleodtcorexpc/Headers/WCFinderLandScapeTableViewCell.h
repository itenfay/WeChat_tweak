//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UILabel, UIView, WCFinderDataItem, WCFinderLandScapeCoverInfoView;

@interface WCFinderLandScapeTableViewCell
{
    _Bool _showMaskView;
    WCFinderLandScapeCoverInfoView *_coverView;
    RichTextView *_descLabel;
    RichTextView *_nickNameLabel;
    RichTextView *_recommentReasonLabel;
    UIView *_maskView;
    UIView *_maskCover;
    UILabel *_playingTipsLabel;
    WCFinderDataItem *_dataItem;
}

+ (double)cellHeight;
+ (id)cellId;
- (void).cxx_destruct;
@property(nonatomic) _Bool showMaskView; // @synthesize showMaskView=_showMaskView;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) UILabel *playingTipsLabel; // @synthesize playingTipsLabel=_playingTipsLabel;
@property(retain, nonatomic) UIView *maskCover; // @synthesize maskCover=_maskCover;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) RichTextView *recommentReasonLabel; // @synthesize recommentReasonLabel=_recommentReasonLabel;
@property(retain, nonatomic) RichTextView *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderLandScapeCoverInfoView *coverView; // @synthesize coverView=_coverView;
- (void)layoutSubviews;
- (void)updateWithDataItem:(id)arg1;
- (void)setupSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

