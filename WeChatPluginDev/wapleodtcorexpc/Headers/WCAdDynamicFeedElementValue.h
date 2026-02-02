//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCAdDynamicFeedElementValue : NSObject
{
    _Bool _shouldAdaptLengthValue;
    unsigned long long _type;
    NSString *_stringValue;
    double _floatValue;
    UIColor *_colorValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *colorValue; // @synthesize colorValue=_colorValue;
@property(nonatomic) _Bool shouldAdaptLengthValue; // @synthesize shouldAdaptLengthValue=_shouldAdaptLengthValue;
@property(nonatomic) double floatValue; // @synthesize floatValue=_floatValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)fetchColorValue;
- (double)fetchFloatValue;
- (id)fetchStringValue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithFloat:(double)arg1;
- (id)initWithNumber:(id)arg1;
- (id)initWithString:(id)arg1;

@end

