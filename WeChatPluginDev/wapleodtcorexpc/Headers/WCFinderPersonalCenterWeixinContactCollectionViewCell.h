//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray, WCFinderPersonalCenterSidesButton;
@protocol WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate;

@interface WCFinderPersonalCenterWeixinContactCollectionViewCell : UICollectionViewCell
{
    id <WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate> _delegate;
    NSMutableArray *_cells;
    WCFinderPersonalCenterSidesButton *_historyCell;
    WCFinderPersonalCenterSidesButton *_interactiveCell;
    WCFinderPersonalCenterSidesButton *_fellowCell;
    WCFinderPersonalCenterSidesButton *_paymentCell;
    WCFinderPersonalCenterSidesButton *_messageCell;
    WCFinderPersonalCenterSidesButton *_privateMsgCell;
    WCFinderPersonalCenterSidesButton *_orderCell;
    WCFinderPersonalCenterSidesButton *_managerCell;
}

+ (_Bool)showPrivateMsgCell;
+ (_Bool)isInLimitState;
+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *managerCell; // @synthesize managerCell=_managerCell;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *orderCell; // @synthesize orderCell=_orderCell;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *privateMsgCell; // @synthesize privateMsgCell=_privateMsgCell;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *messageCell; // @synthesize messageCell=_messageCell;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *paymentCell; // @synthesize paymentCell=_paymentCell;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *fellowCell; // @synthesize fellowCell=_fellowCell;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *interactiveCell; // @synthesize interactiveCell=_interactiveCell;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *historyCell; // @synthesize historyCell=_historyCell;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(nonatomic) __weak id <WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickBlockManager;
- (void)onClickHistory;
- (void)onClickOrderCenter;
- (void)onClickPrivateMsgList;
- (void)onClickNotificationList;
- (void)onClickFavList;
- (void)onClickGoodFavList;
- (void)onClickPaymentList;
- (void)onClickLikeList;
- (void)onClickFollowList;
- (void)onClickInteractive;
- (id)createIconAttrText:(id)arg1;
- (id)getInteractiveRightText;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)applyLayout;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)_updateReddot;
- (void)updateLikeCount:(unsigned long long)arg1 favCount:(unsigned long long)arg2 displayPurchasedEntrance:(_Bool)arg3 displayInteractive:(_Bool)arg4 enableOrder:(_Bool)arg5 historyCell:(long long)arg6;
- (void)_setupManagerCell;
- (void)_setupOrderCell;
- (void)_setupPrivateMsgCell;
- (void)_setupMessageCell;
- (void)_setupPaymentCell;
- (void)_setupFellowCell;
- (void)_setupInteractiveCell;
- (void)_setupHistoryCell;
- (id)createActionButton:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

