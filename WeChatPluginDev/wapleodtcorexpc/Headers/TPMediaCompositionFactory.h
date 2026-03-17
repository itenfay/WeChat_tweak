//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPMediaCompositionFactory : NSObject
{
}

+ (id)createUrlMediaAsset;
+ (id)createRtcMediaAsset;
+ (id)createEmptyMeidaClipWithFilePath:(id)arg1 mediaType:(long long)arg2 beginTimeMs:(long long)arg3 endTimeMs:(long long)arg4;
+ (id)createMediaTrackWithTrackId:(int)arg1 mediaType:(long long)arg2 trackClips:(id)arg3;
+ (id)createMediaTrackWithTrackId:(int)arg1 mediaType:(long long)arg2;
+ (id)createMediaComposition;

@end

