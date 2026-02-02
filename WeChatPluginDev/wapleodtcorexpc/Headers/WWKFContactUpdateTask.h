//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WWKFContactUpdateTask : NSObject
{
    _Bool _bForceUpdate;
    int _scene;
    NSString *_username;
}

- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool bForceUpdate; // @synthesize bForceUpdate=_bForceUpdate;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

