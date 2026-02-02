//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandDirectlyAddContactContext : NSObject
{
    _Bool _subscribeBizLive;
    unsigned int _scene;
    unsigned int _subScene;
    unsigned int _productId;
    NSString *_username;
    CDUnknownBlockType _callback;
    NSString *_sceneNote;
    NSString *_finderBuffer;
    NSString *_finderUserName;
    NSString *_articleUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *articleUrl; // @synthesize articleUrl=_articleUrl;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(nonatomic) _Bool subscribeBizLive; // @synthesize subscribeBizLive=_subscribeBizLive;
@property(copy, nonatomic) NSString *finderBuffer; // @synthesize finderBuffer=_finderBuffer;
@property(nonatomic) unsigned int productId; // @synthesize productId=_productId;
@property(nonatomic) unsigned int subScene; // @synthesize subScene=_subScene;
@property(retain, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end

