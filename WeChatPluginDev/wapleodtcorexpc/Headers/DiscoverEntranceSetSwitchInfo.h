//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UISwitch;

@interface DiscoverEntranceSetSwitchInfo : NSObject
{
    _Bool _isOn;
    NSString *_title;
    NSString *_desc;
    unsigned long long _type;
    UISwitch *_uiSwitch;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UISwitch *uiSwitch; // @synthesize uiSwitch=_uiSwitch;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

