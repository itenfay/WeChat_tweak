//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTipsViewController, NSString;
@protocol FontSettingUtilDelegate;

@interface FontSettingUtil : NSObject
{
    id <FontSettingUtilDelegate> _delegate;
    MMTipsViewController *_fontSettingTipsView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTipsViewController *fontSettingTipsView; // @synthesize fontSettingTipsView=_fontSettingTipsView;
@property(nonatomic) __weak id <FontSettingUtilDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)checkFontSetting;
- (void)showUserFontSettingTips;
- (_Bool)canShowFontSettingTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

