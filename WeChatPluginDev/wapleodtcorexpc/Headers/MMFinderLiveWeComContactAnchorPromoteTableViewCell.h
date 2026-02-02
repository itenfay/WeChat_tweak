//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveWeComContactAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveWeComContactAnchorPromoteTableViewCell
{
    MMWebImageView *_titleImgView;
    MMUILabel *_companyLabel;
    MMUILabel *_descLabel;
    MMFinderLiveWeComContactAnchorPromoteInfo *_weComContactPromoteInfo;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveWeComContactAnchorPromoteInfo *weComContactPromoteInfo; // @synthesize weComContactPromoteInfo=_weComContactPromoteInfo;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *companyLabel; // @synthesize companyLabel=_companyLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)updateLabelsOriginY;
- (void)layoutDescLabel;
- (void)layoutCompanyLabel;
- (void)layoutTitleImgView;
- (_Bool)enableMenuAction;
- (id)promoteInfo;
- (void)updatePromoteInfo:(id)arg1;
- (void)layoutUI;

@end

