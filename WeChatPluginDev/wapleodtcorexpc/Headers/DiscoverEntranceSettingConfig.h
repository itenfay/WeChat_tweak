//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIImage;

@interface DiscoverEntranceSettingConfig : NSObject
{
    NSString *_title;
    UIImage *_iconImage;
    NSMutableArray *_switchInfos;
    NSMutableArray *_extSwitchInfos;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *extSwitchInfos; // @synthesize extSwitchInfos=_extSwitchInfos;
@property(retain, nonatomic) NSMutableArray *switchInfos; // @synthesize switchInfos=_switchInfos;
@property(copy, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

