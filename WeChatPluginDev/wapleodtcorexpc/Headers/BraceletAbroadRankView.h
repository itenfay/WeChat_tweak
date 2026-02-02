//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class DeviceRankInfo, NSString, UILabel;
@protocol BraceletAbroadRankViewDelegate><NSObject;

@interface BraceletAbroadRankView : UIView
{
    DeviceRankInfo *m_rankInfo;
    UILabel *m_oShareLabel;
    id <BraceletAbroadRankViewDelegate><NSObject> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BraceletAbroadRankViewDelegate><NSObject> delegate; // @synthesize delegate=_delegate;
- (void)onClick;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 DeviceRankInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

