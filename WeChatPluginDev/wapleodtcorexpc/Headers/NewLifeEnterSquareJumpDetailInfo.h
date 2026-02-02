//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NewLifePagePreloadCache;

@interface NewLifeEnterSquareJumpDetailInfo : NSObject
{
    _Bool _jumpDetailSkipHome;
    NSData *_lastBuffer;
    NewLifePagePreloadCache *_preloadCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewLifePagePreloadCache *preloadCache; // @synthesize preloadCache=_preloadCache;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool jumpDetailSkipHome; // @synthesize jumpDetailSkipHome=_jumpDetailSkipHome;

@end

