//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUILabel, NSString, WASMPageSheetBellringView, WASMPageSheetCellSwitch, WASubscriptionMessagePageSheetMessageItem;

@interface WASMPageSheetListItemCell : UITableViewCell
{
    WASubscriptionMessagePageSheetMessageItem *_viewDataModel;
    CDUnknownBlockType _viewEventAction;
    WASMPageSheetCellSwitch *_switchView;
    MMUILabel *_titleLabel;
    WASMPageSheetBellringView *_bellingView;
}

+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WASMPageSheetBellringView *bellingView; // @synthesize bellingView=_bellingView;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WASMPageSheetCellSwitch *switchView; // @synthesize switchView=_switchView;
@property(copy, nonatomic) CDUnknownBlockType viewEventAction; // @synthesize viewEventAction=_viewEventAction;
@property(retain, nonatomic) WASubscriptionMessagePageSheetMessageItem *viewDataModel; // @synthesize viewDataModel=_viewDataModel;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

