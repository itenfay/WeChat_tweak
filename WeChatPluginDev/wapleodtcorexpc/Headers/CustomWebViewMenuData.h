//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface CustomWebViewMenuData : NSObject
{
    NSString *_mainMenuID;
    NSString *_mainMenuIconImageName;
    UIImage *_mainMenuIconImage;
    NSString *_mainMenuUrl;
    NSString *_mainMenuTitle;
    unsigned long long _mainMenuActionType;
    NSArray *_menuItems;
    NSArray *_domains;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *domains; // @synthesize domains=_domains;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(nonatomic) unsigned long long mainMenuActionType; // @synthesize mainMenuActionType=_mainMenuActionType;
@property(retain, nonatomic) NSString *mainMenuTitle; // @synthesize mainMenuTitle=_mainMenuTitle;
@property(retain, nonatomic) NSString *mainMenuUrl; // @synthesize mainMenuUrl=_mainMenuUrl;
@property(retain, nonatomic) UIImage *mainMenuIconImage; // @synthesize mainMenuIconImage=_mainMenuIconImage;
@property(retain, nonatomic) NSString *mainMenuIconImageName; // @synthesize mainMenuIconImageName=_mainMenuIconImageName;
@property(retain, nonatomic) NSString *mainMenuID; // @synthesize mainMenuID=_mainMenuID;
- (_Bool)shouldShowCustomizeMenuWithUrl:(id)arg1;

@end

