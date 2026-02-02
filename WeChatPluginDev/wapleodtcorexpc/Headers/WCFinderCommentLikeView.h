//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface WCFinderCommentLikeView
{
    _Bool _isLiked;
    UIImageView *_likeImageView;
    UILabel *_likeNumbLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) __weak UILabel *likeNumbLabel; // @synthesize likeNumbLabel=_likeNumbLabel;
@property(nonatomic) __weak UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
- (void)updateCommenLikeStaus:(_Bool)arg1 isCommentClose:(_Bool)arg2 likeNumber:(unsigned long long)arg3;
- (void)setUpUI;
- (id)init;

@end

