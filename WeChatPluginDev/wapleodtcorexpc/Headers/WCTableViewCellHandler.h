//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DelaySwitchSettingLogic, MMUIViewController;

@interface WCTableViewCellHandler : NSObject
{
    MMUIViewController *_viewController;
    DelaySwitchSettingLogic *_delaySwitchLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic; // @synthesize delaySwitchLogic=_delaySwitchLogic;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (id)makeSwitchCellWithColName:(id)arg1 action:(SEL)arg2 on:(_Bool)arg3 forbidOp:(_Bool)arg4;
- (id)genCellManager;
- (id)initWithCurViewController:(id)arg1;

@end

