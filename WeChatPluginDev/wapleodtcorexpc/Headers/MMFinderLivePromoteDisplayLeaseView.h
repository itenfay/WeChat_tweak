//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLivePromoteDisplayLeaseToken, MMUIButton;
@protocol MMFinderLivePromoteDisplayLeasePromotionDelegate;

@interface MMFinderLivePromoteDisplayLeaseView : UIView
{
    _Bool _userDismissable;
    _Bool _closeButtonHidden;
    MMUIButton *_closeButton;
    MMFinderLivePromoteDisplayLeaseToken *_leaseToken;
    id <MMFinderLivePromoteDisplayLeasePromotionDelegate> _promotionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLivePromoteDisplayLeasePromotionDelegate> promotionDelegate; // @synthesize promotionDelegate=_promotionDelegate;
@property(nonatomic) _Bool closeButtonHidden; // @synthesize closeButtonHidden=_closeButtonHidden;
@property(nonatomic) _Bool userDismissable; // @synthesize userDismissable=_userDismissable;
@property(nonatomic) __weak MMFinderLivePromoteDisplayLeaseToken *leaseToken; // @synthesize leaseToken=_leaseToken;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)onCloseButtonTapped;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addSubview:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithLeaseToken:(id)arg1;

@end

