//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderUploadMediaTask;

@interface WCFinderImageUploadMeta : NSObject
{
    NSString *_imagePath;
    CDUnknownBlockType _complection;
    WCFinderUploadMediaTask *_mediaTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderUploadMediaTask *mediaTask; // @synthesize mediaTask=_mediaTask;
@property(copy, nonatomic) CDUnknownBlockType complection; // @synthesize complection=_complection;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;

@end

