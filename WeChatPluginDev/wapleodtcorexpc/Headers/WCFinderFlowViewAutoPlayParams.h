//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderFlowViewAutoPlayParams : NSObject
{
    CDUnknownBlockType _visibleRectProvider;
    CDUnknownBlockType _playableCellsFilterBlock;
    CDUnknownBlockType _preventChangePlayableBlock;
    unsigned long long _maxPlayCount;
}

+ (id)paramsForFollowFlowScene;
+ (id)defaultParams;
+ (CDUnknownBlockType)defaultAutoPlayVisibleRectProvider;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxPlayCount; // @synthesize maxPlayCount=_maxPlayCount;
@property(copy, nonatomic) CDUnknownBlockType preventChangePlayableBlock; // @synthesize preventChangePlayableBlock=_preventChangePlayableBlock;
@property(copy, nonatomic) CDUnknownBlockType playableCellsFilterBlock; // @synthesize playableCellsFilterBlock=_playableCellsFilterBlock;
@property(copy, nonatomic) CDUnknownBlockType visibleRectProvider; // @synthesize visibleRectProvider=_visibleRectProvider;

@end

