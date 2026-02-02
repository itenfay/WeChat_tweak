//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFullScreenShadeConfig, MMUILabel;

@interface MMFullScreenShadeViewController
{
    MMUILabel *_remindTextLabel;
    MMFullScreenShadeConfig *_shadeConfig;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFullScreenShadeConfig *shadeConfig; // @synthesize shadeConfig=_shadeConfig;
@property(retain, nonatomic) MMUILabel *remindTextLabel; // @synthesize remindTextLabel=_remindTextLabel;
- (void)onClicked;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithConfig:(id)arg1;

@end

