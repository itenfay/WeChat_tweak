//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAnimationObject : NSObject
{
    double _m_duration;
    double _m_delay;
    unsigned long long _m_options;
    CDUnknownBlockType _m_animations;
    CDUnknownBlockType _m_completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType m_completion; // @synthesize m_completion=_m_completion;
@property(copy, nonatomic) CDUnknownBlockType m_animations; // @synthesize m_animations=_m_animations;
@property(nonatomic) unsigned long long m_options; // @synthesize m_options=_m_options;
@property(nonatomic) double m_delay; // @synthesize m_delay=_m_delay;
@property(nonatomic) double m_duration; // @synthesize m_duration=_m_duration;

@end

