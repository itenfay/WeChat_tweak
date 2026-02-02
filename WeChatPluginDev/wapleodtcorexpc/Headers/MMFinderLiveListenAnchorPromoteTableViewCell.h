//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLisTenAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveListenAnchorPromoteTableViewCell : NSObject
{
    MMWebImageView *_titleImgView;
    MMUILabel *_titleLabel;
    MMUILabel *_descLabel;
    MMFinderLiveLisTenAnchorPromoteInfo *_listenPromoteInfo;
}

+ (id)identifier;
@property(retain, nonatomic) MMFinderLiveLisTenAnchorPromoteInfo *listenPromoteInfo; // @synthesize listenPromoteInfo=_listenPromoteInfo;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *titleImgView; // @synthesize titleImgView=_titleImgView;
- (void)updateLabelsOriginY;
- (void)layoutDescLabel;
- (void)layoutTitleLabel;
- (void)layoutTitleImgView;
- (id)promoteInfo;
- (void)updatePromoteInfo:(id)arg1;
- (void)layoutUI;
- (_Bool)enableMenuAction;

@end

