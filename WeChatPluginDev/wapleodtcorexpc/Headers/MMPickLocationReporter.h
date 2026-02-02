//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMPickLocationReporter : NSObject
{
    unsigned int _scene;
    NSString *_sessionID;
    NSString *_chatName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)report11554_Action:(unsigned int)arg1 userLocation:(struct CLLocationCoordinate2D)arg2 lastDragLocation:(struct CLLocationCoordinate2D)arg3 openID:(id)arg4;

@end

