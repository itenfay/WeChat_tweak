//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMenuController, NSString;

@interface MMMenuService
{
    MMMenuController *_menuController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMenuController *menuController; // @synthesize menuController=_menuController;
- (void)onServiceClearData;
- (id)getMenuController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

