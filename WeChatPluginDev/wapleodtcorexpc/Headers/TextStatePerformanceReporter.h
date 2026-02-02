//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TextStatePerformanceReporter : NSObject
{
    unsigned int _privateAction;
    unsigned int _privateSubaction;
    unsigned long long _privateDuration;
}

+ (id)reporter;
@property(nonatomic) unsigned long long privateDuration; // @synthesize privateDuration=_privateDuration;
@property(nonatomic) unsigned int privateSubaction; // @synthesize privateSubaction=_privateSubaction;
@property(nonatomic) unsigned int privateAction; // @synthesize privateAction=_privateAction;
- (CDUnknownBlockType)report;
- (CDUnknownBlockType)duration;
- (CDUnknownBlockType)subaction;
- (CDUnknownBlockType)action;

@end

