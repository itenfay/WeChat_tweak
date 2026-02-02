//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TAVEmptyVideoTransition : NSObject
{
    NSString *_identifier;
    CDStruct_1b6d18a9 _duration;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)renderImageWithForegroundImage:(id)arg1 backgroundImage:(id)arg2 renderInfo:(id)arg3;
- (id)initWithDuration:(CDStruct_1b6d18a9)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

