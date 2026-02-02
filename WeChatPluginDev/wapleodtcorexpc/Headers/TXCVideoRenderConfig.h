//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXCVideoRenderConfig : NSObject
{
    _Bool _usesMetal;
    int _homeOrientation;
    unsigned long long _mirrorMode;
    unsigned long long _rotation;
    unsigned long long _fillMode;
    unsigned long long _gSensorMode;
    unsigned long long _customRenderFormat;
    unsigned long long _customRenderBufferType;
}

@property(nonatomic) _Bool usesMetal; // @synthesize usesMetal=_usesMetal;
@property(nonatomic) unsigned long long customRenderBufferType; // @synthesize customRenderBufferType=_customRenderBufferType;
@property(nonatomic) unsigned long long customRenderFormat; // @synthesize customRenderFormat=_customRenderFormat;
@property(nonatomic) int homeOrientation; // @synthesize homeOrientation=_homeOrientation;
@property(nonatomic) unsigned long long gSensorMode; // @synthesize gSensorMode=_gSensorMode;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) unsigned long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) unsigned long long mirrorMode; // @synthesize mirrorMode=_mirrorMode;
- (id)init;

@end

