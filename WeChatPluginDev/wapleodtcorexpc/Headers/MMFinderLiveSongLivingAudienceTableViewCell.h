//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCLiveBlurButton;

@interface MMFinderLiveSongLivingAudienceTableViewCell
{
    WCLiveBlurButton *_giftButton;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCLiveBlurButton *giftButton; // @synthesize giftButton=_giftButton;
- (id)createSingButton;
- (id)createFinishButton;
- (id)createRequestMemDescLabel;
- (void)layoutHeartValueLabel;
- (_Bool)shouldHideHeartValueLabel;
- (void)updateMusicNameLabelOrigin;
- (void)layoutUI;
- (void)onTapGesture:(id)arg1;

@end

