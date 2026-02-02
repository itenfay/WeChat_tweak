//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveMpArticleAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveArticleAnchorPromoteTableViewCell
{
    MMWebImageView *_titleImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_anchorLabel;
    MMFinderLiveMpArticleAnchorPromoteInfo *_articlePromoteInfo;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveMpArticleAnchorPromoteInfo *articlePromoteInfo; // @synthesize articlePromoteInfo=_articlePromoteInfo;
@property(retain, nonatomic) MMUILabel *anchorLabel; // @synthesize anchorLabel=_anchorLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)updateLabelsOriginY;
- (void)layoutAnchorLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleImgView;
- (_Bool)enableMenuAction;
- (id)promoteInfo;
- (void)updatePromoteInfo:(id)arg1;
- (void)layoutUI;

@end

