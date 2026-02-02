//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TRTCAudioEffectParam : NSObject
{
    _Bool _publish;
    int _effectId;
    int _loopCount;
    int _volume;
    NSString *_path;
}

- (void).cxx_destruct;
@property(nonatomic) int volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool publish; // @synthesize publish=_publish;
@property(nonatomic) int loopCount; // @synthesize loopCount=_loopCount;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) int effectId; // @synthesize effectId=_effectId;
- (id)initWith:(int)arg1 path:(id)arg2;

@end

