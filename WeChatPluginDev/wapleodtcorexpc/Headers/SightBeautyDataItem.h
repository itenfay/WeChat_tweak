//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SightBeautyDataItem : NSObject
{
    float _defaultValue;
    float _value;
    unsigned long long _type;
    NSString *_titleLocalLanguageKey;
}

- (void).cxx_destruct;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) float defaultValue; // @synthesize defaultValue=_defaultValue;
@property(copy, nonatomic) NSString *titleLocalLanguageKey; // @synthesize titleLocalLanguageKey=_titleLocalLanguageKey;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

