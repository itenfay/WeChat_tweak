//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UISwitch;

@interface WCTSettingSwitchView : NSObject
{
    UISwitch *_switchControl;
}

@property(readonly, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
- (void)loadUI:(id)arg1;
- (void)setViewDataModel:(id)arg1;

@end

