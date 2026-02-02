//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ProtobufCGIWrap;

@interface CgiEvent : NSObject
{
    unsigned int _eventId;
    CDUnknownBlockType _completion;
    ProtobufCGIWrap *_pbWrap;
}

+ (id)eventWithId:(unsigned int)arg1 pbWrap:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) ProtobufCGIWrap *pbWrap; // @synthesize pbWrap=_pbWrap;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned int eventId; // @synthesize eventId=_eventId;

@end

