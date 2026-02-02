//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderPrefetchResetConfig : NSObject
{
    unsigned long long _resetId;
    unsigned long long _scene;
    double _initProb;
}

@property(nonatomic) double initProb; // @synthesize initProb=_initProb;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long resetId; // @synthesize resetId=_resetId;

@end

