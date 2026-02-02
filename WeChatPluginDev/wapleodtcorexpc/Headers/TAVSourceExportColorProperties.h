//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TAVSourceExportColorProperties : NSObject
{
    NSString *_colorPrimaries;
    NSString *_transferFunction;
    NSString *_YCbCrMatrix;
}

+ (id)hdColorProperties;
+ (id)dp3ColorProperties;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *YCbCrMatrix; // @synthesize YCbCrMatrix=_YCbCrMatrix;
@property(copy, nonatomic) NSString *transferFunction; // @synthesize transferFunction=_transferFunction;
@property(copy, nonatomic) NSString *colorPrimaries; // @synthesize colorPrimaries=_colorPrimaries;
- (id)makeSettingsDictionary;
- (id)init;

@end

