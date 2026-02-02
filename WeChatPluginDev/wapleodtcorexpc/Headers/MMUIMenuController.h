//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIMenu;

@interface MMUIMenuController : NSObject
{
    UIMenu *_menu;
    struct CGRect _targetRect;
}

+ (id)sharedMenuController;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=_targetRect;
@property(retain, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
- (struct CGRect)editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (void)setMenuItems:(id)arg1;
- (void)hideMenu;
- (void)showMenuFromView:(id)arg1 rect:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

