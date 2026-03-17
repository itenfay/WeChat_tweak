//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TrackInfo : NSObject
{
    unsigned long long _sampleRate;
    unsigned long long _channels;
}

@property(nonatomic) unsigned long long channels; // @synthesize channels=_channels;
@property(nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;

@end

