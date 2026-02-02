//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderJumpInfo_CarouselCardStyle, NSIndexPath, NSString, UIImageView, UILabel, UIView, WCFinderJumpInfo;
@protocol WCFinderAdCarouselCollectionViewCellDelegate;

@interface WCFinderAdCarouselCollectionViewCell : UICollectionViewCell
{
    int _showPosition;
    id <WCFinderAdCarouselCollectionViewCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    UIView *_bkgColorView;
    UIView *_containerView;
    UIView *_blackMaskView;
    UIImageView *_imageView;
    UIView *_themeColorGradientView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UILabel *_actionLabel;
    UIImageView *_rightArrowView;
    WCFinderJumpInfo *_jumpInfo;
    FinderJumpInfo_CarouselCardStyle *_cardStyle;
    long long _cardPos;
}

- (void).cxx_destruct;
@property(nonatomic) long long cardPos; // @synthesize cardPos=_cardPos;
@property(retain, nonatomic) FinderJumpInfo_CarouselCardStyle *cardStyle; // @synthesize cardStyle=_cardStyle;
@property(nonatomic) int showPosition; // @synthesize showPosition=_showPosition;
@property(retain, nonatomic) WCFinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *themeColorGradientView; // @synthesize themeColorGradientView=_themeColorGradientView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *blackMaskView; // @synthesize blackMaskView=_blackMaskView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *bkgColorView; // @synthesize bkgColorView=_bkgColorView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <WCFinderAdCarouselCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutUI;
- (id)genBlackMaskView;
- (id)genThemeColorGradientView;
- (long long)carouselTimeInMs;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

