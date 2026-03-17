//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface SplashCacheInfo : NSObject
{
    long long _snapshotDelay;
    long long _imageBlockingCount;
}

@property(nonatomic) long long imageBlockingCount; // @synthesize imageBlockingCount=_imageBlockingCount;
@property(nonatomic) long long snapshotDelay; // @synthesize snapshotDelay=_snapshotDelay;

@end

