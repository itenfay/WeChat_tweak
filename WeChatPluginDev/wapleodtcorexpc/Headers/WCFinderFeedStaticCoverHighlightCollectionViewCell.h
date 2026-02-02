//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FavAttributeCPLabel, NSString, UIImage, UILabel, UIPageControl, WCFinderFeedMediaWrap, WCFinderFeedStaticCoverContactView, WCFinderFeedStaticCoverView, WCFinderSearchHighLightItemModel;
@protocol WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate;

@interface WCFinderFeedStaticCoverHighlightCollectionViewCell : UICollectionViewCell
{
    _Bool _hiddenPostTime;
    id <WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate> _delegate;
    unsigned long long _menuItemFlag;
    unsigned long long _menuItemStyle;
    WCFinderFeedStaticCoverView *_coverView;
    WCFinderFeedStaticCoverContactView *_contactView;
    FavAttributeCPLabel *_descLabel;
    unsigned long long _type;
    unsigned long long _flag;
    WCFinderSearchHighLightItemModel *_dataModel;
    WCFinderFeedMediaWrap *_mediaWrap;
    UIPageControl *_pageCtrl;
    UILabel *_postTimeLabel;
    UIImage *_snapshotImage;
    UIImage *_fullScreenImage;
}

+ (id)createDescLabel;
+ (double)cellHeightWithModel:(id)arg1 width:(double)arg2;
+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *fullScreenImage; // @synthesize fullScreenImage=_fullScreenImage;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
@property(retain, nonatomic) UILabel *postTimeLabel; // @synthesize postTimeLabel=_postTimeLabel;
@property(retain, nonatomic) UIPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderSearchHighLightItemModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) unsigned long long flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) FavAttributeCPLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderFeedStaticCoverContactView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) WCFinderFeedStaticCoverView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) unsigned long long menuItemStyle; // @synthesize menuItemStyle=_menuItemStyle;
@property(nonatomic) unsigned long long menuItemFlag; // @synthesize menuItemFlag=_menuItemFlag;
@property(nonatomic) _Bool hiddenPostTime; // @synthesize hiddenPostTime=_hiddenPostTime;
@property(nonatomic) __weak id <WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDelete;
- (void)onEditTag;
- (void)onForward;
- (void)onMutiSeleted;
- (void)onRemove;
- (void)onAnchor;
- (void)longSingleFingerPressGes:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)doShareAnimation;
- (id)cellIdentifier;
- (id)transitionEndImage;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onFeedLikedDataChanged:(id)arg1;
- (void)clickContact;
- (void)adjustMargin;
- (id)createCellConfig;
- (void)updateContentWith:(id)arg1 infoType:(unsigned long long)arg2 flag:(unsigned long long)arg3;
- (void)initSubviews;
- (void)prepareForReuse;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

