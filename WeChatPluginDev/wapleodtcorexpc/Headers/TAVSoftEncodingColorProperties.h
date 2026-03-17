//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TAVSoftEncodingColorProperties : NSObject
{
    int _wxColorPrimaries;
    int _wxColorTransferCharacteristic;
    int _wxColorSpace;
    int _wxColorRange;
}

@property(nonatomic) int wxColorRange; // @synthesize wxColorRange=_wxColorRange;
@property(nonatomic) int wxColorSpace; // @synthesize wxColorSpace=_wxColorSpace;
@property(nonatomic) int wxColorTransferCharacteristic; // @synthesize wxColorTransferCharacteristic=_wxColorTransferCharacteristic;
@property(nonatomic) int wxColorPrimaries; // @synthesize wxColorPrimaries=_wxColorPrimaries;
- (id)init;

@end

