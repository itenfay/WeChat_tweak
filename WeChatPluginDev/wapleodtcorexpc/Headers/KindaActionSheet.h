//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface KindaActionSheet : NSObject
{
    int _destructiveIndex;
    NSMutableArray *_callbacks;
    NSMutableArray *_buttonTitles;
    NSString *_cancelTitle;
    NSString *_actionSheetTitle;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setDestructiveIndex:(int)arg1;
- (void)show;
- (void)addButtonImpl:(id)arg1 callback:(id)arg2;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

