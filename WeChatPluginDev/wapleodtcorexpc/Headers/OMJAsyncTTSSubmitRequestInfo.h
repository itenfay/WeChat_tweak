//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface OMJAsyncTTSSubmitRequestInfo : NSObject
{
    float _speed;
    float _volume;
    NSString *_text;
    NSString *_model;
    unsigned long long _format;
    NSString *_submitID;
    NSDictionary *_extraParams;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(readonly, nonatomic) NSString *submitID; // @synthesize submitID=_submitID;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) float speed; // @synthesize speed=_speed;
@property(readonly, nonatomic) unsigned long long format; // @synthesize format=_format;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1 model:(id)arg2 format:(unsigned long long)arg3 speed:(float)arg4 volume:(float)arg5 submitID:(id)arg6 extraParams:(id)arg7;
- (id)initWithText:(id)arg1 model:(id)arg2 format:(unsigned long long)arg3 speed:(float)arg4 volume:(float)arg5;

@end

