//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSValue;

@interface WCSheetComponentViewAttributes : NSObject
{
    unsigned long long _type;
    NSValue *_insetsValue;
    NSNumber *_fixedWidth;
    NSNumber *_useSystemLayoutSizeFittingSize;
    unsigned long long _alignment;
}

+ (id)attributes;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) NSNumber *useSystemLayoutSizeFittingSize; // @synthesize useSystemLayoutSizeFittingSize=_useSystemLayoutSizeFittingSize;
@property(retain, nonatomic) NSNumber *fixedWidth; // @synthesize fixedWidth=_fixedWidth;
@property(retain, nonatomic) NSValue *insetsValue; // @synthesize insetsValue=_insetsValue;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

