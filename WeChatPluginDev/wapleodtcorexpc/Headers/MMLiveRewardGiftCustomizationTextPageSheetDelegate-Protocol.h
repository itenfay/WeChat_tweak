//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveGiftCustomizationModel, MMLiveRewardGiftCustomizationTextPageSheet;

@protocol MMLiveRewardGiftCustomizationTextPageSheetDelegate <NSObject>
- (void)onGiftTextCustomizationCleared:(MMLiveRewardGiftCustomizationTextPageSheet *)arg1 model:(MMFinderLiveGiftCustomizationModel *)arg2;
- (void)onGiftTextCustomizationConfirmed:(MMLiveRewardGiftCustomizationTextPageSheet *)arg1 model:(MMFinderLiveGiftCustomizationModel *)arg2;
- (void)onGiftTextCustomizationCanceled:(MMLiveRewardGiftCustomizationTextPageSheet *)arg1 model:(MMFinderLiveGiftCustomizationModel *)arg2;
@end

