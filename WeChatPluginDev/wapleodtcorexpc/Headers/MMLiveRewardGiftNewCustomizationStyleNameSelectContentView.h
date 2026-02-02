//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveNewCustomGiftText, MMLiveRewardGiftNewCustomizationEditLogic, MMLiveRewardGiftNewCustomizationInputToolView;

@interface MMLiveRewardGiftNewCustomizationStyleNameSelectContentView
{
    MMLiveRewardGiftNewCustomizationEditLogic *_customizationEditLogic;
    MMLiveRewardGiftNewCustomizationInputToolView *_inputToolView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationInputToolView *inputToolView; // @synthesize inputToolView=_inputToolView;
@property(retain, nonatomic) MMLiveRewardGiftNewCustomizationEditLogic *customizationEditLogic; // @synthesize customizationEditLogic=_customizationEditLogic;
- (void)onUnSupportTipLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getUnSupportTipWithConflictComponent:(id)arg1;
- (id)styleObj;
- (id)unspportTipClickHref;
@property(readonly, nonatomic) MMFinderLiveNewCustomGiftText *customGiftText;
- (void)endEditing;
- (void)asyncBeginEditing;
- (_Bool)needAsyncBeginEditing;
- (id)createInputToolView:(struct CGRect)arg1;
- (void)updateContentModeForEnableCustomTextAbility;
- (void)initContentMode;
- (void)layoutInputToolView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)configCustomizationEditLogic:(id)arg1;
- (id)initWithCustomizationEditLogic:(id)arg1;

@end

