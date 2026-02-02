//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface TPVideoSeiInfo : NSObject
{
    long long _videoCodecType;
    long long _videoSeiType;
    long long _seiDataSize;
    NSData *_seiData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *seiData; // @synthesize seiData=_seiData;
@property(readonly, nonatomic) long long seiDataSize; // @synthesize seiDataSize=_seiDataSize;
@property(readonly, nonatomic) long long videoSeiType; // @synthesize videoSeiType=_videoSeiType;
@property(readonly, nonatomic) long long videoCodecType; // @synthesize videoCodecType=_videoCodecType;
- (id)initWithCodecType:(long long)arg1 seiType:(long long)arg2 seiDataSize:(long long)arg3 seiData:(id)arg4;

@end

