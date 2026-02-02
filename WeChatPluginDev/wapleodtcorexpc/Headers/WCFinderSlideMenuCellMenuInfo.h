//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView, WCFinderSlideMenuCellAction;

@interface WCFinderSlideMenuCellMenuInfo : NSObject
{
    WCFinderSlideMenuCellAction *_menu;
    UIView *_menuContainer;
    double _width;
}

- (void).cxx_destruct;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIView *menuContainer; // @synthesize menuContainer=_menuContainer;
@property(retain, nonatomic) WCFinderSlideMenuCellAction *menu; // @synthesize menu=_menu;

@end

