//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface EJTouch : NSObject
{
    unsigned long long _identifier;
    double _force;
    double _maximumPossibleForce;
    UIView *_view;
    struct CGPoint _locationInView;
    struct CGPoint _locationInScriptView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) double maximumPossibleForce; // @synthesize maximumPossibleForce=_maximumPossibleForce;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGPoint locationInScriptView; // @synthesize locationInScriptView=_locationInScriptView;
@property(nonatomic) struct CGPoint locationInView; // @synthesize locationInView=_locationInView;
- (id)initWithExtTouch:(id)arg1 scriptView:(id)arg2;

@end

