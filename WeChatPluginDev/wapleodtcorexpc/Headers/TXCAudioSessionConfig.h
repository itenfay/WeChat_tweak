//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TXCAudioSessionConfig : NSObject
{
    NSString *_category;
    unsigned long long _categoryOptions;
    NSString *_mode;
    double _sampleRate;
    double _ioBufferDuration;
    long long _inputNumberOfChannels;
    long long _outputNumberOfChannels;
}

+ (id)configWithFactors:(struct AudioSessionFactors)arg1;
+ (_Bool)needBluetoothHeadSet:(struct AudioSessionFactors)arg1;
+ (unsigned long long)optionsForCategoryPlayAndRecord:(int)arg1 enableBluetoothA2DP:(_Bool)arg2;
+ (unsigned long long)optionsForCategoryPlayback;
+ (id)categoryFromFactors:(struct AudioSessionFactors)arg1;
+ (id)currentConfig;
- (void).cxx_destruct;
@property(nonatomic) long long outputNumberOfChannels; // @synthesize outputNumberOfChannels=_outputNumberOfChannels;
@property(nonatomic) long long inputNumberOfChannels; // @synthesize inputNumberOfChannels=_inputNumberOfChannels;
@property(nonatomic) double ioBufferDuration; // @synthesize ioBufferDuration=_ioBufferDuration;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long categoryOptions; // @synthesize categoryOptions=_categoryOptions;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (id)description;
- (id)init;

@end

