//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPPlayerLogContext : NSObject
{
    int _lifeId;
    int _playId;
    NSString *_prefix;
    NSString *_module;
    NSString *_tag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *module; // @synthesize module=_module;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property(nonatomic) int playId; // @synthesize playId=_playId;
@property(nonatomic) int lifeId; // @synthesize lifeId=_lifeId;
- (void)increasePlayId;
- (id)initWithPrefix:(id)arg1 lifeId:(int)arg2 playId:(int)arg3 module:(id)arg4;
- (id)initWithModule:(id)arg1;
- (id)initWithIncrementalValues;
- (id)initWithDefaultValues;

@end

