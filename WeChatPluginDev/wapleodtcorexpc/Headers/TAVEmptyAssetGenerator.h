//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TAVEmptyAssetGenerator : NSObject
{
}

+ (id)resourceUrlForFileName:(id)arg1 extension:(id)arg2;
+ (void)createEmptyVideoAssetIfNeed;
+ (void)createAudioAssetIfNeed;
+ (id)emptyAudioAsset;
+ (id)emptyVideoAsset;

@end

