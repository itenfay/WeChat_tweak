//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderLiveTabInfo;

@interface WCFinderLiveStreamPreFetchBaseParams : NSObject
{
    int _fromScene;
    int _commentScene;
    WCFinderLiveTabInfo *_tabInfo;
    unsigned long long _pullType;
    NSData *_lastBuffer;
    unsigned long long _relatedObjectId;
    NSString *_fromSceneStr;
    NSString *_byPassInfo;
    NSMutableArray *_unreadDataItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *unreadDataItems; // @synthesize unreadDataItems=_unreadDataItems;
@property(copy, nonatomic) NSString *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *fromSceneStr; // @synthesize fromSceneStr=_fromSceneStr;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned long long relatedObjectId; // @synthesize relatedObjectId=_relatedObjectId;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long pullType; // @synthesize pullType=_pullType;
@property(retain, nonatomic) WCFinderLiveTabInfo *tabInfo; // @synthesize tabInfo=_tabInfo;
- (_Bool)isRequestEqaulToCache:(id)arg1;
- (id)prefetchCacheHashKey;

@end

