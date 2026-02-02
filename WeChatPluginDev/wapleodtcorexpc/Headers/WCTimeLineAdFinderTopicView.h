//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, WCAdSliderCardView;

@interface WCTimeLineAdFinderTopicView
{
    WCAdSliderCardView *_sliderCard;
    MMUIButton *_topicInfoBar;
    MMUILabel *_relationTextLabel;
}

+ (double)heightForMedia:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *relationTextLabel; // @synthesize relationTextLabel=_relationTextLabel;
@property(retain, nonatomic) MMUIButton *topicInfoBar; // @synthesize topicInfoBar=_topicInfoBar;
@property(retain, nonatomic) WCAdSliderCardView *sliderCard; // @synthesize sliderCard=_sliderCard;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (id)fetchMediaId;
- (void)clickToJump;
- (void)onTopicInfoBarClick;
- (void)onAutoSlideFrom:(long long)arg1 to:(long long)arg2;
- (void)onSliderCardExposure:(long long)arg1;
- (void)onSliderCardClick:(long long)arg1 clickType:(long long)arg2;
- (void)updateDataInDetail:(id)arg1;
- (void)autoPauseWithoutSound;
- (void)autoPlayWithoutSound;
- (id)getMainContentView;
- (void)initRelationInfo:(id)arg1;
- (void)initTopicInfo:(id)arg1;
- (id)createSliderCard:(id)arg1;
- (void)initSliderCard:(id)arg1;
- (void)contentItemWillDisplay;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

