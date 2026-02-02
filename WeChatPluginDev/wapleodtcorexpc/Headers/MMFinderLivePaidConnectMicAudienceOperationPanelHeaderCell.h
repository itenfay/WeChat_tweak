//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface MMFinderLivePaidConnectMicAudienceOperationPanelHeaderCell : UITableViewCell
{
    CDUnknownBlockType _onCancelApplyAction;
    CDUnknownBlockType _onBidAction;
    UIImageView *_clockImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_bidButton;
    UIButton *_cancelButton;
    UILabel *_applyAudienceLabel;
    UILabel *_audiencePriceLabel;
}

+ (id)genDescLabel;
+ (double)cellHeightWithMaxWidth:(double)arg1;
+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *audiencePriceLabel; // @synthesize audiencePriceLabel=_audiencePriceLabel;
@property(retain, nonatomic) UILabel *applyAudienceLabel; // @synthesize applyAudienceLabel=_applyAudienceLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *bidButton; // @synthesize bidButton=_bidButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *clockImageView; // @synthesize clockImageView=_clockImageView;
@property(copy, nonatomic) CDUnknownBlockType onBidAction; // @synthesize onBidAction=_onBidAction;
@property(copy, nonatomic) CDUnknownBlockType onCancelApplyAction; // @synthesize onCancelApplyAction=_onCancelApplyAction;
- (void)onTapBid;
- (void)onTapCancel;
- (void)layoutSubviews;
- (id)genCommonAudienceDescLabelWithText:(id)arg1;
- (void)setShowBottomLabels:(_Bool)arg1;
- (void)configWithWaitingCount:(unsigned long long)arg1 bidEnabled:(_Bool)arg2;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

