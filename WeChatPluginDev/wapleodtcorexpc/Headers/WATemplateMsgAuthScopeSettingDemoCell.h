//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton;

@interface WATemplateMsgAuthScopeSettingDemoCell : UITableViewCell
{
    UIButton *_button;
    CDUnknownBlockType _viewEventAction;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType viewEventAction; // @synthesize viewEventAction=_viewEventAction;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewDataModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

