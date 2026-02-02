//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MAVVLogEffect, NSString;

@interface MAVTrackTransition : NSObject
{
    _Bool _changed;
    NSString *_path;
    MAVVLogEffect *_effect;
    CDStruct_1b6d18a9 _duration;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool changed; // @synthesize changed=_changed;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(retain, nonatomic) MAVVLogEffect *effect; // @synthesize effect=_effect;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (_Bool)isVaild;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPath:(id)arg1;

@end

