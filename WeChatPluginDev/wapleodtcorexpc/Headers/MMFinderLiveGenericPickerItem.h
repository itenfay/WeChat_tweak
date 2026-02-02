//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MMFinderLiveGenericPickerItem : NSObject
{
    NSString *_name;
    NSString *_iconName;
    UIColor *_iconColor;
    id _userInfo;
}

+ (id)itemWithName:(id)arg1 icon:(id)arg2 iconColor:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

