//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderLiveCreatorFunctions, WCTableViewManager;
@protocol WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate;

@interface WCFinderLivePersonalCenterCreatorFunctionSectionCell : UICollectionViewCell
{
    id <WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate> _actionDelegate;
    WCTableViewManager *_tableViewManager;
    FinderLiveCreatorFunctions *_functions;
}

+ (id)cellIdentifier;
+ (double)cellHeightWithFunctions:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveCreatorFunctions *functions; // @synthesize functions=_functions;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(nonatomic) __weak id <WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)didClickCell:(id)arg1 indexPath:(id)arg2;
- (void)reloadTableView;
- (void)updateWithFunctions:(id)arg1;
- (void)setup;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

