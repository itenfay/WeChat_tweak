//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderStreamProfileHeaderView;

@interface WCFinderStreamProfileHeaderViewController
{
    _Bool _alawayDarkModel;
}

@property(nonatomic) _Bool alawayDarkModel; // @synthesize alawayDarkModel=_alawayDarkModel;
- (_Bool)useTransparentNavibar;
- (long long)currentMMUserInterfaceStyle;
- (long long)overrideUserInterfaceStyle;
@property(readonly, nonatomic) WCFinderStreamProfileHeaderView *headerView;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;

@end

