//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface VoicePrintResourceItem : NSObject
{
    unsigned int _scene;
    unsigned int _resourceId;
    NSString *_resource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *resource; // @synthesize resource=_resource;
@property(nonatomic) unsigned int resourceId; // @synthesize resourceId=_resourceId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (id)description;

@end

