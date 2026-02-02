//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TAVDisplayTriggerMachine;

@interface TAVAutoScroller : NSObject
{
    float _autoScrollSpeed;
    TAVDisplayTriggerMachine *_triggerMachine;
    long long _autoScrollType;
    double _autoScrollInset;
    double _earEdgeInset;
}

- (void).cxx_destruct;
@property(nonatomic) double earEdgeInset; // @synthesize earEdgeInset=_earEdgeInset;
@property(nonatomic) double autoScrollInset; // @synthesize autoScrollInset=_autoScrollInset;
@property(nonatomic) float autoScrollSpeed; // @synthesize autoScrollSpeed=_autoScrollSpeed;
@property(nonatomic) long long autoScrollType; // @synthesize autoScrollType=_autoScrollType;
@property(retain, nonatomic) TAVDisplayTriggerMachine *triggerMachine; // @synthesize triggerMachine=_triggerMachine;
- (void)cleanUpAutoScrollValues;
- (id)init;

@end

