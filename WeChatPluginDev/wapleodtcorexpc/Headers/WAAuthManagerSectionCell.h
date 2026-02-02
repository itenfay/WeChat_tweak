//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMTableView, NSString, WAAuthManagerItemViewModel, WAAuthManagerSectionViewModel, ZZFLEXAngel;

@interface WAAuthManagerSectionCell : UICollectionViewCell
{
    WAAuthManagerSectionViewModel *_viewDataModel;
    MMTableView *_tableView;
    ZZFLEXAngel *_angel;
    WAAuthManagerItemViewModel *_prepareDeleteViewModel;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WAAuthManagerItemViewModel *prepareDeleteViewModel; // @synthesize prepareDeleteViewModel=_prepareDeleteViewModel;
@property(retain, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WAAuthManagerSectionViewModel *viewDataModel; // @synthesize viewDataModel=_viewDataModel;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)deleteUserInfoItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

