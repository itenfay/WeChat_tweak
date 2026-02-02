//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TSKWaveFile : NSObject
{
    struct WaveFile _waveFile;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)seekTo:(int)arg1;
- (unsigned long long)readFrames:(int)arg1 asS16:(short *)arg2;
@property(readonly, nonatomic) unsigned long long framesRemain;
@property(readonly, nonatomic) unsigned long long framesRead;
@property(readonly, nonatomic) unsigned long long totalFrames;
@property(readonly, nonatomic) unsigned long long sampleSize;
@property(readonly, nonatomic) unsigned long long channels;
@property(readonly, nonatomic) unsigned long long sampleRate;
- (id)initWithFilePath:(id)arg1;

@end

