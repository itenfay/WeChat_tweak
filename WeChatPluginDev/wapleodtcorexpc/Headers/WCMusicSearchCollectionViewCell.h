//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMMusicInfo, MMUIButton, MMUILabel, MMWebImageView, NSString, UIButton, UIImage, UIImageView, UIView, WCMusicTypeLabel;
@protocol WCMusicSearchCollectionViewCellDelegate;

@interface WCMusicSearchCollectionViewCell : UICollectionViewCell
{
    _Bool _isPlaying;
    id <WCMusicSearchCollectionViewCellDelegate> _delegate;
    MMWebImageView *_coverImageView;
    MMUIButton *_playButton;
    MMUILabel *_titleLabel;
    MMUILabel *_singerLabel;
    MMUILabel *_sourceLabel;
    UIButton *_sendButton;
    UIView *_separatorView;
    UIView *_selectedMaskView;
    MMMusicInfo *_model;
    UIView *_verticalSeperatorView;
    UIView *_playingBackgroundView;
    UIImageView *_playingStateImageView;
    UIImage *_playingAnimatedImage;
    WCMusicTypeLabel *_typeLabel;
    struct CGSize _collectionViewSize;
    struct CGSize _coverImageSize;
    struct CGSize _playButtonSize;
    struct CGSize _previousLayoutConstrainedSize;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMusicTypeLabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UIImage *playingAnimatedImage; // @synthesize playingAnimatedImage=_playingAnimatedImage;
@property(retain, nonatomic) UIImageView *playingStateImageView; // @synthesize playingStateImageView=_playingStateImageView;
@property(retain, nonatomic) UIView *playingBackgroundView; // @synthesize playingBackgroundView=_playingBackgroundView;
@property(retain, nonatomic) UIView *verticalSeperatorView; // @synthesize verticalSeperatorView=_verticalSeperatorView;
@property(nonatomic) struct CGSize previousLayoutConstrainedSize; // @synthesize previousLayoutConstrainedSize=_previousLayoutConstrainedSize;
@property(retain, nonatomic) MMMusicInfo *model; // @synthesize model=_model;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) struct CGSize playButtonSize; // @synthesize playButtonSize=_playButtonSize;
@property(nonatomic) struct CGSize coverImageSize; // @synthesize coverImageSize=_coverImageSize;
@property(retain, nonatomic) UIView *selectedMaskView; // @synthesize selectedMaskView=_selectedMaskView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) MMUILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) MMUILabel *singerLabel; // @synthesize singerLabel=_singerLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak id <WCMusicSearchCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize collectionViewSize; // @synthesize collectionViewSize=_collectionViewSize;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)updatePlayButtonWithState:(unsigned long long)arg1 musicInfo:(id)arg2;
- (id)currentThumbImage;
- (void)onSendButtonClicked:(id)arg1;
- (void)onPlayButtonClicked:(id)arg1;
- (struct CGSize)applyLayout:(struct CGSize)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)hideSendButton;
- (void)updaetHighlightedDisplay:(_Bool)arg1;
- (void)setupHighlightedText:(id)arg1 forLabel:(id)arg2;
- (void)setupHighlightedSubtitle:(id)arg1;
- (void)setupHighlightedTitle:(id)arg1;
- (void)setupWithMusicInfo:(id)arg1;
- (void)setupWithSearchInfo:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

