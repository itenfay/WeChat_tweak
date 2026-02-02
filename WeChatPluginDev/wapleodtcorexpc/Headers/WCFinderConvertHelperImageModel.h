//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderConvertHelperImageModel : NSObject
{
    NSString *_referenceURLPath;
    double _imageQualityLevel;
    NSData *_imageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) double imageQualityLevel; // @synthesize imageQualityLevel=_imageQualityLevel;
@property(copy, nonatomic) NSString *referenceURLPath; // @synthesize referenceURLPath=_referenceURLPath;

@end

