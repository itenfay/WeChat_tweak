//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAPlateAuthPageSheetViewModel, WAPlateAuthorizeSheetInfo;
@protocol WAPlateAuthorizePageSheetDelegate;

@interface WAPlateAuthorizePageSheet
{
    WAPlateAuthPageSheetViewModel *_paViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAPlateAuthPageSheetViewModel *paViewModel; // @synthesize paViewModel=_paViewModel;
- (id)subViewModel;
- (id)customSubviewClassList;
- (void)updatePlateInfo:(id)arg1;
- (void)scrollToCurrentIndex;
- (void)calSelectedId;
- (void)managerPlate;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <WAPlateAuthorizePageSheetDelegate> authDelegate; // @dynamic authDelegate;
@property(retain, nonatomic) WAPlateAuthorizeSheetInfo *info; // @dynamic info;

@end

