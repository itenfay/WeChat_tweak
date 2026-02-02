//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MMUIView, UIImageView;

@interface MMFinderLiveTableStyleCommentPubblePOICell
{
    MMUIView *_signBackView;
    MMUILabel *_signLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(retain, nonatomic) MMUIView *signBackView; // @synthesize signBackView=_signBackView;
- (id)getSelfAccessibility;
- (double)getArrowImageHeight;
- (double)getArrowImageWidth;
- (void)updateArrowImageViewOrigin;
- (void)layoutArrowImageView;
- (void)updateCommentLabelOrigin;
- (void)layoutCommentLabel;
- (void)updateSignLabelOrigin;
- (void)layoutSignLabel;
- (id)signText;
- (void)layoutUI;
- (void)layoutSubviews;
- (_Bool)isUITypeValid;
- (id)initWithCellFrame:(id)arg1;

@end

