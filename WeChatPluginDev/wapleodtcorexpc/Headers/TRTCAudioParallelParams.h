//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface TRTCAudioParallelParams : NSObject
{
    unsigned int _maxCount;
    NSArray *_includeUsers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *includeUsers; // @synthesize includeUsers=_includeUsers;
@property(nonatomic) unsigned int maxCount; // @synthesize maxCount=_maxCount;
- (id)init;
- (struct RemoteAudioSelectorParams)convertToCppParams;

@end

