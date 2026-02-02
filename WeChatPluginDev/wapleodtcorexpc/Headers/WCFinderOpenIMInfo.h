//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderOpenIMInfo : NSObject
{
    _Bool _showInHalfScreen;
    _Bool _isFromJumpInfo;
    unsigned int _scene;
    unsigned int _openContactScene;
    NSString *_finderUsername;
    NSString *_joinLiveTraceBuffer;
    NSString *_searchContext;
    NSString *_finderContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderContext; // @synthesize finderContext=_finderContext;
@property(copy, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
@property(nonatomic) _Bool isFromJumpInfo; // @synthesize isFromJumpInfo=_isFromJumpInfo;
@property(nonatomic) _Bool showInHalfScreen; // @synthesize showInHalfScreen=_showInHalfScreen;
@property(retain, nonatomic) NSString *joinLiveTraceBuffer; // @synthesize joinLiveTraceBuffer=_joinLiveTraceBuffer;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned int openContactScene; // @synthesize openContactScene=_openContactScene;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (id)genSearchContext;
- (id)genOpenIMFinderInfo;

@end

