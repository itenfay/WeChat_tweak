//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPMTLDisplayConfig : NSObject
{
    int _maxDisplayLum;
    int _minDisplayLum;
    unsigned long long _colorspace;
}

@property int minDisplayLum; // @synthesize minDisplayLum=_minDisplayLum;
@property int maxDisplayLum; // @synthesize maxDisplayLum=_maxDisplayLum;
@property unsigned long long colorspace; // @synthesize colorspace=_colorspace;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

