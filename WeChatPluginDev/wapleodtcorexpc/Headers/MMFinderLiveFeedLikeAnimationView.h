//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAudienceLiveLikePlayUtil, MMLiveLikeAnimationUtil, WCLiveBottomTextButton;

@interface MMFinderLiveFeedLikeAnimationView
{
    WCLiveBottomTextButton *_likeUnClickableButton;
    MMAudienceLiveLikePlayUtil *_likePlayUtil;
    MMLiveLikeAnimationUtil *_likeAnimationUtil;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveLikeAnimationUtil *likeAnimationUtil; // @synthesize likeAnimationUtil=_likeAnimationUtil;
@property(retain, nonatomic) MMAudienceLiveLikePlayUtil *likePlayUtil; // @synthesize likePlayUtil=_likePlayUtil;
@property(retain, nonatomic) WCLiveBottomTextButton *likeUnClickableButton; // @synthesize likeUnClickableButton=_likeUnClickableButton;
- (void)updateLikeButtonIcon:(id)arg1;
- (void)prepareForReuse;
- (void)updateCheerInfo:(id)arg1;
- (void)endLikePlay;
- (void)updateLikeHeadImgContacts:(id)arg1;
- (void)updateLikeCount:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setupLikePlayUtil;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

