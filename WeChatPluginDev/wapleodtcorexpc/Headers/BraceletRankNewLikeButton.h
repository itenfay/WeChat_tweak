//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface BraceletRankNewLikeButton
{
    _Bool _isSelf;
    _Bool _hasLike;
    unsigned int _likeCount;
}

@property(nonatomic) _Bool hasLike; // @synthesize hasLike=_hasLike;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
- (void)animatChangeToLikeState:(_Bool)arg1;
- (void)initView;
- (id)initWithLikeCount:(unsigned int)arg1 hasLike:(_Bool)arg2 isSelf:(_Bool)arg3;

@end

