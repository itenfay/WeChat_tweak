//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJShootBeautyItem : NSObject
{
    float _defaultValue;
    float _value;
    unsigned long long _type;
    NSString *_title;
    NSString *_iconName;
}

- (void).cxx_destruct;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool isModified;

@end

