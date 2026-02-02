//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJTaskEntry : NSObject
{
    _Bool _isComplete;
    _Bool _hasSubTask;
    unsigned long long _identifier;
    NSString *_name;
    double _duration;
    unsigned long long _traits;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasSubTask; // @synthesize hasSubTask=_hasSubTask;
@property(readonly, nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(readonly, nonatomic) unsigned long long traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2 duration:(double)arg3 traits:(unsigned long long)arg4 isComplete:(_Bool)arg5 hasSubTask:(_Bool)arg6;

@end

