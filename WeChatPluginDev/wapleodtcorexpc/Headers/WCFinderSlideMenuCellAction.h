//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIAccessibilityCustomAction.h>

@class UIImage;

@interface WCFinderSlideMenuCellAction : UIAccessibilityCustomAction
{
    SEL _exposeAction;
    UIImage *_iconImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) SEL exposeAction; // @synthesize exposeAction=_exposeAction;

@end

