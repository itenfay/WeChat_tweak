//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveRedPacketAnchorPromoteInfo, MMUILabel, MMWebImageView;

@interface MMFinderLiveRedPacketAnchorPromoteTableViewCell : NSObject
{
    MMWebImageView *_redPacketImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_descriptionLabel;
    MMFinderLiveRedPacketAnchorPromoteInfo *_redPacketPromoteInfo;
}

+ (id)identifier;
@property(retain, nonatomic) MMFinderLiveRedPacketAnchorPromoteInfo *redPacketPromoteInfo; // @synthesize redPacketPromoteInfo=_redPacketPromoteInfo;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *redPacketImageView; // @synthesize redPacketImageView=_redPacketImageView;
- (void)updateLabelsOriginY;
- (void)layoutDescriptionLabel;
- (void)layoutTitleLabel;
- (void)layoutRedPacketImgView;
- (_Bool)enableMenuAction;
- (id)promoteInfo;
- (void)updatePromoteInfo:(id)arg1;
- (void)layoutUI;

@end

