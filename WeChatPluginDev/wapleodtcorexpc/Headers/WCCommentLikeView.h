//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface WCCommentLikeView
{
    unsigned long long _type;
    UILabel *_likeNumbLabel;
    UIImageView *_likeImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
@property(retain, nonatomic) UILabel *likeNumbLabel; // @synthesize likeNumbLabel=_likeNumbLabel;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)updateSelectedStatus:(_Bool)arg1 isCommentClose:(_Bool)arg2 count:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)setUpUI;
- (id)init;

@end

