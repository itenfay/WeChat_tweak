//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo;
@protocol RingRecommendSwitchDelegate;

@interface RingToneSettingOptionViewController
{
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_ringRecommendSwitch;
    id <RingRecommendSwitchDelegate> _delegate;
}

+ (_Bool)getRingRecommendOption;
- (void).cxx_destruct;
@property(nonatomic) __weak id <RingRecommendSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ringVerifyIndividualRecommend:(id)arg1;
- (void)reloadTableData;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

