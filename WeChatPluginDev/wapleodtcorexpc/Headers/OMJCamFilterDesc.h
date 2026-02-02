//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJCamFilterDesc : NSObject
{
    _Bool _isEnabled;
    float _intensity;
    NSString *_filterID;
    NSString *_lutImageFilePath;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) float intensity; // @synthesize intensity=_intensity;
@property(retain, nonatomic) NSString *lutImageFilePath; // @synthesize lutImageFilePath=_lutImageFilePath;
@property(retain, nonatomic) NSString *filterID; // @synthesize filterID=_filterID;

@end

