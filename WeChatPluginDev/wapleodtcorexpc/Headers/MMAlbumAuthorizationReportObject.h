//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMAlbumAuthorizationReportObject : NSObject
{
    _Bool _clickSetting;
    _Bool _clickChoosePart;
    _Bool _clickBanner;
    _Bool _clickAddPhoto;
    int _scene;
    unsigned int _exception;
    long long _addPhotoCount;
}

+ (void)reportiOS14OnceIfNeeded;
+ (unsigned int)getAuthorizationStatus;
@property(nonatomic) unsigned int exception; // @synthesize exception=_exception;
@property(nonatomic) long long addPhotoCount; // @synthesize addPhotoCount=_addPhotoCount;
@property(nonatomic) _Bool clickAddPhoto; // @synthesize clickAddPhoto=_clickAddPhoto;
@property(nonatomic) _Bool clickBanner; // @synthesize clickBanner=_clickBanner;
@property(nonatomic) _Bool clickChoosePart; // @synthesize clickChoosePart=_clickChoosePart;
@property(nonatomic) _Bool clickSetting; // @synthesize clickSetting=_clickSetting;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)report;

@end

