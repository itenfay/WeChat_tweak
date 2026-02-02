//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton;

@interface MMFinderLiveMilestoneLotteryDetailSecondaryView
{
    CDUnknownBlockType _secondaryViewDidPop;
    MMUIButton *_backButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *backButton; // @synthesize backButton=_backButton;
@property(copy, nonatomic) CDUnknownBlockType secondaryViewDidPop; // @synthesize secondaryViewDidPop=_secondaryViewDidPop;
- (void)onLotteryCardWillCloseByCloseButton;
- (void)didAppear;
- (id)getCardContainerView;
- (void)onBackButtonTapped;
- (void)initUI;
- (_Bool)useSmallPadding;
- (id)backButtonColor;

@end

