//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePaidCollectionAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLivePaidCollectionAnchorPromoteTableViewCell
{
    MMWebImageView *_titleImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_descriptionLabel;
    MMFinderLivePaidCollectionAnchorPromoteInfo *_paidCollectionPromoteInfo;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLivePaidCollectionAnchorPromoteInfo *paidCollectionPromoteInfo; // @synthesize paidCollectionPromoteInfo=_paidCollectionPromoteInfo;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)updateLabelsOriginY;
- (void)layoutDescriptionLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleImgView;
- (_Bool)enableMenuAction;
- (id)promoteInfo;
- (void)updatePromoteInfo:(id)arg1;
- (void)layoutUI;

@end

