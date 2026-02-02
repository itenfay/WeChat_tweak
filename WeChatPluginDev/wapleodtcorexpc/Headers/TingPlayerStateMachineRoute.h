//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface TingPlayerStateMachineRoute : NSObject
{
    int _source;
    int _destination;
    NSArray *_events;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(nonatomic) int destination; // @synthesize destination=_destination;
@property(nonatomic) int source; // @synthesize source=_source;
- (id)initWithSource:(int)arg1 destination:(int)arg2 event:(id)arg3;

@end

