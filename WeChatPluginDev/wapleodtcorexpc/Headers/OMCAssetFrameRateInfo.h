//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMCAssetFrameRateInfo : NSObject
{
    long long _mediaType;
    unsigned long long _frameRate;
}

@property(readonly, nonatomic) unsigned long long frameRate; // @synthesize frameRate=_frameRate;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (id)initWithMediaType:(long long)arg1 frameRate:(unsigned long long)arg2;

@end

