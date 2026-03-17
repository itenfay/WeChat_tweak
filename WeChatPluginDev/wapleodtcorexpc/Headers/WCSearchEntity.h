//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCSearchEntity : NSObject
{
    NSString *_sessionID;
    unsigned long long _scene;
}

@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)init;

@end

