//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTLNavTabsViewConfig : NSObject
{
    NSString *_title;
    NSString *_accessibilityLabel;
    long long _category;
    long long _imageStyle;
    NSString *_selectedIconName;
    NSString *_normalIconName;
    long long _refreshStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long refreshStyle; // @synthesize refreshStyle=_refreshStyle;
@property(retain, nonatomic) NSString *normalIconName; // @synthesize normalIconName=_normalIconName;
@property(retain, nonatomic) NSString *selectedIconName; // @synthesize selectedIconName=_selectedIconName;
@property(nonatomic) long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)configTagWithImageStyle:(long long)arg1 refreshStyle:(long long)arg2;
- (id)configTagWithImageStyle:(long long)arg1 normalIconName:(id)arg2 selectedIconName:(id)arg3;
- (id)initWithTitle:(id)arg1 accessibilityLabel:(id)arg2 category:(long long)arg3;

@end

