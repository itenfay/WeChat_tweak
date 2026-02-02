//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderPaidCollectionInfo, MMUIButton, MMWebImageView, NSString, UILabel, WCFinderFeedContentTextView;
@protocol WCFinderPaidCollectionDetailHeaderDelegate;

@interface WCFinderPaidCollectionDetailHeaderView : UIView
{
    id <WCFinderPaidCollectionDetailHeaderDelegate> _delegate;
    MMWebImageView *_coverImgView;
    UIView *_infoContainer;
    UILabel *_titleLabel;
    MMUIButton *_moreBtn;
    UILabel *_episodeLabel;
    UILabel *_orderCountLabel;
    UILabel *_descTitleLabel;
    WCFinderFeedContentTextView *_descTextView;
    UILabel *_collectionTitleLabel;
    FinderPaidCollectionInfo *_paidCollection;
    double _layoutWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) FinderPaidCollectionInfo *paidCollection; // @synthesize paidCollection=_paidCollection;
@property(retain, nonatomic) UILabel *collectionTitleLabel; // @synthesize collectionTitleLabel=_collectionTitleLabel;
@property(retain, nonatomic) WCFinderFeedContentTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UILabel *descTitleLabel; // @synthesize descTitleLabel=_descTitleLabel;
@property(retain, nonatomic) UILabel *orderCountLabel; // @synthesize orderCountLabel=_orderCountLabel;
@property(retain, nonatomic) UILabel *episodeLabel; // @synthesize episodeLabel=_episodeLabel;
@property(retain, nonatomic) MMUIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *infoContainer; // @synthesize infoContainer=_infoContainer;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(nonatomic) __weak id <WCFinderPaidCollectionDetailHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(_Bool)arg2;
- (void)onMoreButtonClicked:(id)arg1;
- (double)contentHPadding;
- (double)descMarginLeft;
- (id)collectionTitle;
- (id)descContentConfig;
- (id)currentContact;
- (_Bool)isAuthorScene;
- (_Bool)isHalfScreen;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateInfoContainer;
- (void)updateWithPaidCollection:(id)arg1;
- (void)setupPaidCollectionInfoContainer;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

