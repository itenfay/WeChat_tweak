//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImage, WCDataItem;

@interface WCLikeButton
{
    _Bool m_likeOperating;
    _Bool _isEnhanceInteractionEnabled;
    _Bool _isShowLikeCount;
    WCDataItem *_dataItem;
    CDUnknownBlockType _likeOpBlock;
    CDUnknownBlockType _updateOpBlock;
    double _iconSize;
    UIImage *_image;
    UIImage *_likedImage;
    UIImage *_disabledImage;
    UIImage *_normalHighlightedImage;
    UIImage *_likedHighlightedImage;
    UIImage *_Spring_normalImage;
    UIImage *_Spring_likedImage;
    UIImage *_Spring_disabledImage;
    UIImage *_Spring_normalHighlightedImage;
    UIImage *_Spring_likedHighlightedImage;
    UIImage *_Spring_normalImagePlaceholder;
    long long _browseScene;
}

- (void).cxx_destruct;
@property(nonatomic) long long browseScene; // @synthesize browseScene=_browseScene;
@property(nonatomic) _Bool isShowLikeCount; // @synthesize isShowLikeCount=_isShowLikeCount;
@property(nonatomic) _Bool isEnhanceInteractionEnabled; // @synthesize isEnhanceInteractionEnabled=_isEnhanceInteractionEnabled;
@property(retain, nonatomic) UIImage *Spring_normalImagePlaceholder; // @synthesize Spring_normalImagePlaceholder=_Spring_normalImagePlaceholder;
@property(retain, nonatomic) UIImage *Spring_likedHighlightedImage; // @synthesize Spring_likedHighlightedImage=_Spring_likedHighlightedImage;
@property(retain, nonatomic) UIImage *Spring_normalHighlightedImage; // @synthesize Spring_normalHighlightedImage=_Spring_normalHighlightedImage;
@property(retain, nonatomic) UIImage *Spring_disabledImage; // @synthesize Spring_disabledImage=_Spring_disabledImage;
@property(retain, nonatomic) UIImage *Spring_likedImage; // @synthesize Spring_likedImage=_Spring_likedImage;
@property(retain, nonatomic) UIImage *Spring_normalImage; // @synthesize Spring_normalImage=_Spring_normalImage;
@property(retain, nonatomic) UIImage *likedHighlightedImage; // @synthesize likedHighlightedImage=_likedHighlightedImage;
@property(retain, nonatomic) UIImage *normalHighlightedImage; // @synthesize normalHighlightedImage=_normalHighlightedImage;
@property(retain, nonatomic) UIImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(retain, nonatomic) UIImage *likedImage; // @synthesize likedImage=_likedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
@property(copy, nonatomic) CDUnknownBlockType updateOpBlock; // @synthesize updateOpBlock=_updateOpBlock;
@property(copy, nonatomic) CDUnknownBlockType likeOpBlock; // @synthesize likeOpBlock=_likeOpBlock;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)Spring_updateLikeBtnWithLikeFlag:(_Bool)arg1;
- (_Bool)isSpringStyle;
- (long long)displayLikeCount:(_Bool)arg1;
- (struct CGSize)longerTitleSize;
- (void)onLikeFriend;
- (void)performUnLikeWithoutAnimation;
- (void)LikeBtnReduceEnd;
- (void)LikeBtnReduce;
- (void)LikeBtnEnlarge;
- (id)initWithDataItem:(id)arg1 params:(id)arg2;
- (void)updateLikeBtnWithLikeFlag:(_Bool)arg1;
- (void)updateLikeBtn;

@end

