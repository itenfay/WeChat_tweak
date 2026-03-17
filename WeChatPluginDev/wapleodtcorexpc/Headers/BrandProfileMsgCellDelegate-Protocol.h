//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BrandProfileItemBaseViewModel, BrandProfileMessageSectionData, BrandProfileMsgBaseCell, CContact, UIViewController;

@protocol BrandProfileMsgCellDelegate <NSObject>
- (void)onFeatureMsgUnfold:(BrandProfileMessageSectionData *)arg1;
- (void)onFooterUnfold:(BrandProfileMessageSectionData *)arg1;
- (void)onSelectItemViewModel:(BrandProfileItemBaseViewModel *)arg1;
- (void)onMsgSectionHeightChange:(BrandProfileMsgBaseCell *)arg1;
- (void)onReloadItemCellView:(BrandProfileMsgBaseCell *)arg1;
- (UIViewController *)getViewController;
- (CContact *)getBrandContact;
@end

