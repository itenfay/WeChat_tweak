//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLiveLikeButton;

@interface MMAudienceLiveLikePlayUtil
{
    MMLiveLikeButton *_likeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveLikeButton *likeButton; // @synthesize likeButton=_likeButton;
- (void)hideLiveLike;
- (void)showLiveLike;
- (void)likeButtonClickEnd;
- (void)likeButtonClickStart;

@end

