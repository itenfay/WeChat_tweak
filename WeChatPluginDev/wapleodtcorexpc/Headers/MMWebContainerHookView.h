//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface MMWebContainerHookView : UIView
{
    CDUnknownBlockType _removeFromSuperviewHookAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType removeFromSuperviewHookAction; // @synthesize removeFromSuperviewHookAction=_removeFromSuperviewHookAction;
- (void)removeFromSuperviewWithoutHook;
- (void)removeFromSuperview;
- (id)initWithHookAction:(CDUnknownBlockType)arg1;

@end

