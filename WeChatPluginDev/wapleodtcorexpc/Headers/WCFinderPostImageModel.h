//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAsset, NSString;

@interface WCFinderPostImageModel : NSObject
{
    MMAsset *_imageAsset;
    NSString *_imageFilePath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(retain, nonatomic) MMAsset *imageAsset; // @synthesize imageAsset=_imageAsset;

@end

