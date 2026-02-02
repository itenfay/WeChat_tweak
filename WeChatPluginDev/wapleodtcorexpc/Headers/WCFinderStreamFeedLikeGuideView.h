//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class MMUIButton, UIButton, UILabel, WCFinderFeedContentVM, WCFinderHeadImageView;

@interface WCFinderStreamFeedLikeGuideView : UICollectionReusableView
{
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _cancelLikeBlock;
    WCFinderHeadImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    UIButton *_cancelLikeButton;
    MMUIButton *_likeActionButton;
    WCFinderFeedContentVM *_contentVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak MMUIButton *likeActionButton; // @synthesize likeActionButton=_likeActionButton;
@property(retain, nonatomic) UIButton *cancelLikeButton; // @synthesize cancelLikeButton=_cancelLikeButton;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(copy, nonatomic) CDUnknownBlockType cancelLikeBlock; // @synthesize cancelLikeBlock=_cancelLikeBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void)updateLikeGuideViewIsLike:(_Bool)arg1;
- (void)updateContentVM:(id)arg1;
- (void)cancelLikeAction;
- (void)buttonAction;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

