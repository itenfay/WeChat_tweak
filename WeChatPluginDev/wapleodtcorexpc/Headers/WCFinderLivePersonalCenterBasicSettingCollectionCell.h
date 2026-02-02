//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderLivePersonalCenterPrepareInfo, WCTableViewManager;
@protocol WCFinderLivePersonalCenterBasicSettingCollectionCellActionDelegate;

@interface WCFinderLivePersonalCenterBasicSettingCollectionCell : UICollectionViewCell
{
    id <WCFinderLivePersonalCenterBasicSettingCollectionCellActionDelegate> _actionDelegate;
    FinderLivePersonalCenterPrepareInfo *_userInfo;
    WCTableViewManager *_tableViewManager;
}

+ (id)cellID;
+ (double)cellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) FinderLivePersonalCenterPrepareInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <WCFinderLivePersonalCenterBasicSettingCollectionCellActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)onSettingsClicked;
- (void)onRewardLevelClicked;
- (void)onPrivacyClicked;
- (void)onPrivateMsgClicked;
- (void)reportCellExpose;
- (id)getCommentSceneStr;
- (void)reloadTableView;
- (void)setup;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

