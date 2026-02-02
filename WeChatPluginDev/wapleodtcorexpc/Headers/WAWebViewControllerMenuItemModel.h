//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIImage;

@interface WAWebViewControllerMenuItemModel : NSObject
{
    _Bool _disabled;
    NSString *_title;
    UIImage *_iconImage;
    double _alpha;
    unsigned long long _menuItemType;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long menuItemType; // @synthesize menuItemType=_menuItemType;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)toMMScrollActionSheetItem;
- (id)init;

@end

