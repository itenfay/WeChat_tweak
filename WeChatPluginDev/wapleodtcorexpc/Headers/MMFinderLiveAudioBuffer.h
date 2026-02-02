//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface MMFinderLiveAudioBuffer : NSObject
{
    unsigned long long _clearLength;
    unsigned long long _read;
    NSMutableData *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long read; // @synthesize read=_read;
@property(nonatomic) unsigned long long clearLength; // @synthesize clearLength=_clearLength;
- (void)append:(id)arg1;
- (unsigned long long)length;
- (id)output:(unsigned long long)arg1;

@end

