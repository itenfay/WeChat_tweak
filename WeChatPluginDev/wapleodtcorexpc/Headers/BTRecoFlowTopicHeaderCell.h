//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMWebImageView, NSMutableArray, UIButton, UILabel;

@interface BTRecoFlowTopicHeaderCell
{
    UIButton *_aggregationLabel;
    MMUIButton *_xButton;
    UIButton *_tagLabel;
    UILabel *_subtitleLabel;
    MMWebImageView *_friend1Icon;
    MMWebImageView *_friend2Icon;
    NSMutableArray *_webImageViewList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *webImageViewList; // @synthesize webImageViewList=_webImageViewList;
@property(retain, nonatomic) MMWebImageView *friend2Icon; // @synthesize friend2Icon=_friend2Icon;
@property(retain, nonatomic) MMWebImageView *friend1Icon; // @synthesize friend1Icon=_friend1Icon;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIButton *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) MMUIButton *xButton; // @synthesize xButton=_xButton;
@property(retain, nonatomic) UIButton *aggregationLabel; // @synthesize aggregationLabel=_aggregationLabel;
- (id)accessibilityLabel;
- (void)onClickFeedbackBtn;
- (void)updateWithAggregationTitle:(id)arg1 recommendTag:(id)arg2 recommendWording:(id)arg3 friendSeenHeadImgUrl:(id)arg4 iconType:(unsigned int)arg5;

@end

