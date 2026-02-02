//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveJumpInfoAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveJumpInfoAnchorPromoteTableViewCell
{
    MMWebImageView *_titleImgView;
    MMUILabel *_titleTagLabel;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMFinderLiveJumpInfoAnchorPromoteInfo *_jumpInfoPromoteInfo;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveJumpInfoAnchorPromoteInfo *jumpInfoPromoteInfo; // @synthesize jumpInfoPromoteInfo=_jumpInfoPromoteInfo;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUILabel *titleTagLabel; // @synthesize titleTagLabel=_titleTagLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)updateLabelsOriginY;
- (void)layoutDescLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleTagLabel;
- (void)layoutTitleImgView;
- (id)promoteInfo;
- (void)updatePromoteInfo:(id)arg1;
- (void)layoutUI;
- (_Bool)enableMenuAction;

@end

