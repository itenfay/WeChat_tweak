//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>
typedef void (^CDUnknownBlockType)(void);

@interface MMFinderLiveGestureLuaScriptRegistrationTask : NSObject
{
    unsigned long long _type;
    CDUnknownBlockType _gestureIdsSource;
}

@property(copy, nonatomic) CDUnknownBlockType gestureIdsSource; // @synthesize gestureIdsSource=_gestureIdsSource;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end
