//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveNoticeAnchorPromoteInfo, MMPaddingView, MMUILabel, MMWebImageView, ZZLabelChainModel;

@interface MMFinderLiveNoticeAnchorPromoteTableViewCell
{
    MMWebImageView *_titleImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_introLabel;
    MMFinderLiveNoticeAnchorPromoteInfo *_noticePromoteInfo;
    MMPaddingView *_couponsTitleLabel;
    ZZLabelChainModel *_couponsStateModel;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) ZZLabelChainModel *couponsStateModel; // @synthesize couponsStateModel=_couponsStateModel;
@property(retain, nonatomic) MMPaddingView *couponsTitleLabel; // @synthesize couponsTitleLabel=_couponsTitleLabel;
@property(retain, nonatomic) MMFinderLiveNoticeAnchorPromoteInfo *noticePromoteInfo; // @synthesize noticePromoteInfo=_noticePromoteInfo;
@property(retain, nonatomic) MMUILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)updateLabelsOriginY;
- (void)layoutCouponView;
- (void)layoutIntroLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleImgView;
- (_Bool)enableMenuAction;
- (id)promoteInfo;
- (void)updatePromoteInfo:(id)arg1;
- (void)layoutUI;

@end

