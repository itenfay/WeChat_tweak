//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact, WCFinderPushProfileParams;

@interface NewLifeProfileRouteParameter : NSObject
{
    _Bool _author;
    _Bool _locateToNewLifeTab;
    int _scene;
    unsigned int _enterType;
    NSString *_finderUsername;
    WCFinderPushProfileParams *_finderProfileParams;
    CDUnknownBlockType _authorRouteCompletion;
    WCFinderContact *_authorContact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderContact *authorContact; // @synthesize authorContact=_authorContact;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool locateToNewLifeTab; // @synthesize locateToNewLifeTab=_locateToNewLifeTab;
@property(copy, nonatomic) CDUnknownBlockType authorRouteCompletion; // @synthesize authorRouteCompletion=_authorRouteCompletion;
@property(nonatomic, getter=isAuthor) _Bool author; // @synthesize author=_author;
@property(retain, nonatomic) WCFinderPushProfileParams *finderProfileParams; // @synthesize finderProfileParams=_finderProfileParams;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (id)description;
- (_Bool)isValid;
- (void)updateScene:(unsigned long long)arg1;
- (void)updateFinderUsername:(id)arg1 enableAuthorForSelf:(_Bool)arg2;
- (void)updateAuthor;
- (id)init;

@end

