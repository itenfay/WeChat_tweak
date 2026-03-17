//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCTableViewManager;

@interface EmoticonManagePrivacySettingViewController : NSObject
{
    WCTableViewManager *_tableViewMgr;
}

@property(retain, nonatomic) WCTableViewManager *tableViewMgr; // @synthesize tableViewMgr=_tableViewMgr;
- (void)onPersonalizedRecommendSwitchChanged:(id)arg1;
- (void)onLocalOcrRecommendSwitchChanged:(id)arg1;
- (void)viewDidLoad;

@end

