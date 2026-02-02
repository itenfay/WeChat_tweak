//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMEmoticonHomePageContext
{
    _Bool _cannotOpenInLimitedMode;
    unsigned int _scene;
    unsigned int _defaultTag;
    CDUnknownBlockType _closedCallback;
    unsigned long long _searchScene;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool cannotOpenInLimitedMode; // @synthesize cannotOpenInLimitedMode=_cannotOpenInLimitedMode;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(copy, nonatomic) CDUnknownBlockType closedCallback; // @synthesize closedCallback=_closedCallback;
@property(nonatomic) unsigned int defaultTag; // @synthesize defaultTag=_defaultTag;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (_Bool)allowsInEmoticonLimited;
- (id)pageCreator;
- (_Bool)isValid;

@end

