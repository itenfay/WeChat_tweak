//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@protocol MMFinderLiveSpringCardContainerViewDelegate;

@interface MMFinderLiveSpringCardContainerView : UIView
{
    id <MMFinderLiveSpringCardContainerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveSpringCardContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLotteryCardWillCloseByCloseButton;
- (void)notifyViewDidAppearIfNeeded:(id)arg1;
- (void)dismissCurrentLotteryCard;
- (id)popSecondaryView;
- (void)pushSecondaryView:(id)arg1 animated:(_Bool)arg2;
- (void)pushSecondaryView:(id)arg1;
- (void)setSecondaryView:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)init;

@end

