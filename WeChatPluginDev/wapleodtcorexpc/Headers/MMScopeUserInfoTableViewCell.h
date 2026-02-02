//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CALayer, MMUILabel, MMWebImageView, OauthAvatarInfo, UIImageView;

@interface MMScopeUserInfoTableViewCell
{
    _Bool _isSelect;
    _Bool _isBottom;
    OauthAvatarInfo *_avatarInfo;
    MMWebImageView *_avatarImageView;
    MMUILabel *_nickNameLabel;
    MMUILabel *_descLabel;
    UIImageView *_selectImageView;
    CALayer *_topSeparateLine;
    CALayer *_bottomSeparateLine;
}

+ (double)viewHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *bottomSeparateLine; // @synthesize bottomSeparateLine=_bottomSeparateLine;
@property(retain, nonatomic) CALayer *topSeparateLine; // @synthesize topSeparateLine=_topSeparateLine;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) MMWebImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) _Bool isBottom; // @synthesize isBottom=_isBottom;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) OauthAvatarInfo *avatarInfo; // @synthesize avatarInfo=_avatarInfo;
- (void)layoutSubviews;
- (void)updateView;

@end

