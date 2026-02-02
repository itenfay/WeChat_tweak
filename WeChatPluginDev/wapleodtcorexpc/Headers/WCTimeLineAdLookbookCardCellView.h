//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIButton, MMUILabel, MMUIView, UIImageView, WCAdLookbookCardItem, WCTimeLineAdLookbookCardMediaView;
@protocol WCTimeLineAdLookbookCardCellViewDelegate;

@interface WCTimeLineAdLookbookCardCellView : UICollectionViewCell
{
    unsigned long long _index;
    WCAdLookbookCardItem *_cardItem;
    id <WCTimeLineAdLookbookCardCellViewDelegate> _delegate;
    MMUILabel *_title;
    UIImageView *_iconView;
    MMUIButton *_coverButton;
    MMUIView *_mediaHolderView;
    WCTimeLineAdLookbookCardMediaView *_mediaView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTimeLineAdLookbookCardMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) MMUIView *mediaHolderView; // @synthesize mediaHolderView=_mediaHolderView;
@property(retain, nonatomic) MMUIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MMUILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WCTimeLineAdLookbookCardCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCAdLookbookCardItem *cardItem; // @synthesize cardItem=_cardItem;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (_Bool)shouldHideItemTitle;
- (void)setVideoToStandby:(_Bool)arg1;
- (void)setVideoControlViewHidden:(_Bool)arg1;
- (void)updateVideoPauseIconState:(_Bool)arg1;
- (void)setVideoWithPlayState:(_Bool)arg1;
- (void)onCoverButtonClicked:(id)arg1;
- (struct CGSize)mediaSize;
- (void)layoutTitleArea;
- (void)layoutSubviews;
- (void)updateItemWithIndex:(unsigned long long)arg1 cardItem:(id)arg2 delegate:(id)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

