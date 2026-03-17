//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMActiveStorageStatInfo : NSObject
{
    unsigned long long _videoThumbSize;
    unsigned long long _videoThumbCount;
    unsigned long long _videoSize;
    unsigned long long _videoCount;
    unsigned long long _audioSize;
    unsigned long long _audioCount;
    unsigned long long _imageThumbSize;
    unsigned long long _imageThumbCount;
    unsigned long long _imageSize;
    unsigned long long _imageCount;
    unsigned long long _appThumbSize;
    unsigned long long _appThumbCount;
    unsigned long long _appFileSize;
    unsigned long long _appFileCount;
}

+ (void)initialize;
+ (void)PBArrayAdd_appFileCount;
+ (void)PBArrayAdd_appFileSize;
+ (void)PBArrayAdd_appThumbCount;
+ (void)PBArrayAdd_appThumbSize;
+ (void)PBArrayAdd_imageCount;
+ (void)PBArrayAdd_imageSize;
+ (void)PBArrayAdd_imageThumbCount;
+ (void)PBArrayAdd_imageThumbSize;
+ (void)PBArrayAdd_audioCount;
+ (void)PBArrayAdd_audioSize;
+ (void)PBArrayAdd_videoCount;
+ (void)PBArrayAdd_videoSize;
+ (void)PBArrayAdd_videoThumbCount;
+ (void)PBArrayAdd_videoThumbSize;
@property(nonatomic) unsigned long long appFileCount; // @synthesize appFileCount=_appFileCount;
@property(nonatomic) unsigned long long appFileSize; // @synthesize appFileSize=_appFileSize;
@property(nonatomic) unsigned long long appThumbCount; // @synthesize appThumbCount=_appThumbCount;
@property(nonatomic) unsigned long long appThumbSize; // @synthesize appThumbSize=_appThumbSize;
@property(nonatomic) unsigned long long imageCount; // @synthesize imageCount=_imageCount;
@property(nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) unsigned long long imageThumbCount; // @synthesize imageThumbCount=_imageThumbCount;
@property(nonatomic) unsigned long long imageThumbSize; // @synthesize imageThumbSize=_imageThumbSize;
@property(nonatomic) unsigned long long audioCount; // @synthesize audioCount=_audioCount;
@property(nonatomic) unsigned long long audioSize; // @synthesize audioSize=_audioSize;
@property(nonatomic) unsigned long long videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) unsigned long long videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned long long videoThumbCount; // @synthesize videoThumbCount=_videoThumbCount;
@property(nonatomic) unsigned long long videoThumbSize; // @synthesize videoThumbSize=_videoThumbSize;
- (id)getReportKVInfo;
- (unsigned long long)totalSize;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

