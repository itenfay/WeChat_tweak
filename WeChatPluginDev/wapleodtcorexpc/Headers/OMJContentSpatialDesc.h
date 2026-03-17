//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJContentSpatialDesc : NSObject
{
    unsigned long long _scaleMode;
    unsigned long long _rotationMode;
    unsigned long long _flipMode;
}

@property(nonatomic) unsigned long long flipMode; // @synthesize flipMode=_flipMode;
@property(nonatomic) unsigned long long rotationMode; // @synthesize rotationMode=_rotationMode;
@property(nonatomic) unsigned long long scaleMode; // @synthesize scaleMode=_scaleMode;

@end

