//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderJumpInfo_LbsLifeCardStyle, MMUIButton, MMWebImageView, NSString, UIImageView, UILabel, WCFinderJumpInfoLBSCardScoreView, WCFinderLBSCardWordingListView;
@protocol WCFinderLBSCardContentViewDelegate;

@interface WCFinderLBSCardContentView : UIView
{
    id <WCFinderLBSCardContentViewDelegate> _delegate;
    unsigned long long _uiStyle;
    FinderJumpInfo_LbsLifeCardStyle *_cardStyle;
    MMWebImageView *_imageView;
    UILabel *_poiTitle;
    WCFinderLBSCardWordingListView *_firstWordingList;
    WCFinderLBSCardWordingListView *_secondWordingList;
    WCFinderLBSCardWordingListView *_recommendWordingList;
    MMUIButton *_favButton;
    UIImageView *_rightArrow;
    UILabel *_scoreLabel;
    WCFinderJumpInfoLBSCardScoreView *_scoreView;
    double _layoutWidth;
}

+ (double)heightForCellWithStyle:(id)arg1 width:(double)arg2;
+ (id)poiTitleAttributedStringWithPOIName:(id)arg1 poiNameWording:(id)arg2;
+ (id)favButtonTitleWithStyle:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(retain, nonatomic) WCFinderJumpInfoLBSCardScoreView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) MMUIButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) WCFinderLBSCardWordingListView *recommendWordingList; // @synthesize recommendWordingList=_recommendWordingList;
@property(retain, nonatomic) WCFinderLBSCardWordingListView *secondWordingList; // @synthesize secondWordingList=_secondWordingList;
@property(retain, nonatomic) WCFinderLBSCardWordingListView *firstWordingList; // @synthesize firstWordingList=_firstWordingList;
@property(retain, nonatomic) UILabel *poiTitle; // @synthesize poiTitle=_poiTitle;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FinderJumpInfo_LbsLifeCardStyle *cardStyle; // @synthesize cardStyle=_cardStyle;
@property(nonatomic) unsigned long long uiStyle; // @synthesize uiStyle=_uiStyle;
@property(nonatomic) __weak id <WCFinderLBSCardContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onCardClicked:(id)arg1;
- (void)onFavBtnClicked:(id)arg1;
- (id)createPOIFavButton;
- (void)updateWithStyle:(id)arg1;
- (void)layoutUI;
- (void)setupSubviews;
- (void)layoutSubviews;
- (id)initWithStyle:(unsigned long long)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

