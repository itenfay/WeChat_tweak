//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPPlayerContext : NSObject
{
    _Bool _prepared;
    _Bool _firstFrameRendered;
    long long _textureId;
    long long _videoWidth;
    long long _videHeight;
    long long _videoDuration;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithTextureId:(long long)arg1 prepared:(_Bool)arg2 firstFrameRendered:(_Bool)arg3 videoWidth:(long long)arg4 videHeight:(long long)arg5 videoDuration:(long long)arg6;
@property(nonatomic) long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) long long videHeight; // @synthesize videHeight=_videHeight;
@property(nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) _Bool firstFrameRendered; // @synthesize firstFrameRendered=_firstFrameRendered;
@property(nonatomic) _Bool prepared; // @synthesize prepared=_prepared;
@property(nonatomic) long long textureId; // @synthesize textureId=_textureId;
- (id)toList;

@end

