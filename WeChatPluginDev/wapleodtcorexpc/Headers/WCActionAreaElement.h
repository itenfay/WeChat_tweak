//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCActionAreaElement : NSObject
{
    unsigned long long _elementType;
    double _realWidth;
    double _maxWidth;
    double _minWidth;
    double _adjustedWidth;
    unsigned long long _displayLine;
}

@property(nonatomic) unsigned long long displayLine; // @synthesize displayLine=_displayLine;
@property(nonatomic) double adjustedWidth; // @synthesize adjustedWidth=_adjustedWidth;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double realWidth; // @synthesize realWidth=_realWidth;
@property(nonatomic) unsigned long long elementType; // @synthesize elementType=_elementType;
- (id)hashString;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;

@end

