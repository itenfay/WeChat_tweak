//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIButton, MMUIImageView, MMUIView, NSString, WCAdSliderCardBaseItem, WCAdSliderCardSightView, WCDataItem;
@protocol WCAdSliderCardCellViewDelegate;

@interface WCAdSliderCardCellView : UICollectionViewCell
{
    _Bool _isDetail;
    id <WCAdSliderCardCellViewDelegate> _delegate;
    WCAdSliderCardBaseItem *_cardInfo;
    long long _cardType;
    long long _cardIndex;
    WCDataItem *_dataItem;
    MMUIView *_contentContainer;
    MMUIView *_mediaView;
    MMUIImageView *_mediaImageThumbView;
    MMUIView *_mediaSightViewHolder;
    WCAdSliderCardSightView *_mediaSightView;
    MMUIButton *_maskButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *maskButton; // @synthesize maskButton=_maskButton;
@property(retain, nonatomic) WCAdSliderCardSightView *mediaSightView; // @synthesize mediaSightView=_mediaSightView;
@property(retain, nonatomic) MMUIView *mediaSightViewHolder; // @synthesize mediaSightViewHolder=_mediaSightViewHolder;
@property(retain, nonatomic) MMUIImageView *mediaImageThumbView; // @synthesize mediaImageThumbView=_mediaImageThumbView;
@property(retain, nonatomic) MMUIView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) MMUIView *contentContainer; // @synthesize contentContainer=_contentContainer;
@property(nonatomic) _Bool isDetail; // @synthesize isDetail=_isDetail;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) long long cardIndex; // @synthesize cardIndex=_cardIndex;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) WCAdSliderCardBaseItem *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(nonatomic) __weak id <WCAdSliderCardCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopSight;
- (void)pauseSight;
- (void)playSight;
- (void)stopImageTimer;
- (void)startImageTimer;
- (id)fetchReportItem;
- (_Bool)shouldDownloadImageUseCDN;
- (long long)fetchMediaType;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onImageShowEnd;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onPlayEnd:(_Bool)arg1;
- (void)mediaStop;
- (void)mediaPause;
- (void)mediaPlay;
- (id)createSightView:(id)arg1;
- (void)updateMediaUI:(_Bool)arg1;
- (void)updateContentUI;
- (void)updateUI:(_Bool)arg1;
- (void)onMaskButtonClick:(id)arg1 forEvent:(id)arg2;
- (void)configMaskButton:(id)arg1;
- (void)initMaskButton;
- (void)initDetailView;
- (void)initFrontBorderView;
- (void)initBackBorderView;
- (void)initMediaView;
- (id)createContentContainer;
- (void)initContentContainer;
- (id)getCellContentViewMaskPath:(struct CGRect)arg1;
- (void)configCellContentView;
- (void)initView;
- (void)setData:(id)arg1 cardType:(long long)arg2 cardIndex:(long long)arg3 dataItem:(id)arg4 isDetail:(_Bool)arg5 fullUpdate:(_Bool)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

