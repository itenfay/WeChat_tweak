//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface MJSpeechAudioData : NSObject
{
    NSData *_data;
    long long _encodeType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long encodeType; // @synthesize encodeType=_encodeType;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;
- (id)initWithData:(id)arg1 encodeType:(long long)arg2;

@end

