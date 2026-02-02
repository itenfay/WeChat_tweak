//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView;

@interface MMFinderLiveTableStyleCommentPubbleSignTextCell
{
    MMUIView *_signBackView;
    MMUILabel *_signLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) MMUIView *signBackView; // @synthesize signBackView=_signBackView;
- (id)getSelfAccessibility;
- (void)updateCommentLabelOrigin;
- (void)layoutCommentLabel;
- (void)updateSignLabelOrigin;
- (void)layoutSignLabel;
- (void)touchButtonClick:(id)arg1;
- (void)layoutTouchButton;
- (id)signText;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithCellFrame:(id)arg1;

@end

