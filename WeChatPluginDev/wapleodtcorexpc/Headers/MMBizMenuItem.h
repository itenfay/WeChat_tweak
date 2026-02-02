//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MMBizMenuItem : NSObject
{
    NSString *_menuId;
    unsigned int _menuType;
    unsigned int _menuActionType;
    NSString *_name;
    NSString *_key;
    NSString *_value;
    NSString *_nativeUrl;
    NSArray *_arrSubMenu;
    unsigned long long _showIconType;
    NSDictionary *_menuEcsData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *menuEcsData; // @synthesize menuEcsData=_menuEcsData;
@property(nonatomic) unsigned long long showIconType; // @synthesize showIconType=_showIconType;
@property(nonatomic) unsigned int menuActionType; // @synthesize menuActionType=_menuActionType;
@property(retain, nonatomic) NSArray *arrSubMenu; // @synthesize arrSubMenu=_arrSubMenu;
@property(retain, nonatomic) NSString *nativeUrl; // @synthesize nativeUrl=_nativeUrl;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int menuType; // @synthesize menuType=_menuType;
@property(retain, nonatomic) NSString *menuId; // @synthesize menuId=_menuId;
- (void)parseFromJsonDictionary:(id)arg1;
- (id)init;

@end

