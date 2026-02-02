//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TRTCRenderParams : NSObject
{
    long long _rotation;
    long long _fillMode;
    unsigned long long _mirrorType;
}

@property(nonatomic) unsigned long long mirrorType; // @synthesize mirrorType=_mirrorType;
@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
- (id)description;
- (struct RenderParams)convertToCppParams;

@end

