//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCMetalDisplayConfig : NSObject
{
    int _maxDisplayLum;
    int _minDisplayLum;
    int _maxDisplayMasteringLum;
    int _minDisplayMasteringLum;
    unsigned long long _colorSpace;
    unsigned long long _pixelFormat;
}

+ (int)hdrStaticMetadataLuminaceScale;
@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) int minDisplayMasteringLum; // @synthesize minDisplayMasteringLum=_minDisplayMasteringLum;
@property(nonatomic) int maxDisplayMasteringLum; // @synthesize maxDisplayMasteringLum=_maxDisplayMasteringLum;
@property int minDisplayLum; // @synthesize minDisplayLum=_minDisplayLum;
@property int maxDisplayLum; // @synthesize maxDisplayLum=_maxDisplayLum;
@property unsigned long long colorSpace; // @synthesize colorSpace=_colorSpace;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

