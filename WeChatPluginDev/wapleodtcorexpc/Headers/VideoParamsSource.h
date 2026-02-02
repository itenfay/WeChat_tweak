//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAsset, NSURL;

@interface VideoParamsSource : NSObject
{
    NSURL *_videoURL;
    MMAsset *_videoMMAsset;
}

+ (id)videoParamsSourceFromMMAsset:(id)arg1;
+ (id)videoParamsSourceFromURL:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMAsset *videoMMAsset; // @synthesize videoMMAsset=_videoMMAsset;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (id)genVideoParamsInfoFromAVAsset:(id)arg1;
- (id)genVideoParamsInfoFromMMAsset:(id)arg1;
- (id)genVideoParamsInfoFromURL:(id)arg1;
- (id)genVideoParamsInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

