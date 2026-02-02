//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;

@interface PreloadMsgInfoGenerator : NSObject
{
    int _direction;
    NSMutableArray *_preloadMsgs;
    CADisplayLink *_preloadTimer;
    CDUnknownBlockType _mapBlock;
    CDUnknownBlockType _getBlock;
}

+ (id)generatorWithDirection:(int)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType getBlock; // @synthesize getBlock=_getBlock;
@property(copy, nonatomic) CDUnknownBlockType mapBlock; // @synthesize mapBlock=_mapBlock;
@property(retain, nonatomic) CADisplayLink *preloadTimer; // @synthesize preloadTimer=_preloadTimer;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSMutableArray *preloadMsgs; // @synthesize preloadMsgs=_preloadMsgs;
- (void)doOnePreload;
- (void)stopTimer;
- (void)startTimer;
- (void)reset;
- (CDUnknownBlockType)onGet;
- (CDUnknownBlockType)onMap;
- (id)addMessageArray:(id)arg1;
- (id)initWithDirection:(int)arg1;

@end

