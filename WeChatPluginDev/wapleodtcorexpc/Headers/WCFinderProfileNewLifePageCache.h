//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderProfileNewLifePageCache : NSObject
{
    long long _likeCount;
    long long _globalFavoriteCount;
    long long _heartLikeCount;
    long long _shareCount;
    NSArray *_feedIds;
}

+ (void)initialize;
+ (void)PBArrayAdd_shareCount;
+ (void)PBArrayAdd_heartLikeCount;
+ (void)PBArrayAdd_globalFavoriteCount;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_feedIds;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *feedIds; // @synthesize feedIds=_feedIds;
@property(nonatomic) long long shareCount; // @synthesize shareCount=_shareCount;
@property(nonatomic) long long heartLikeCount; // @synthesize heartLikeCount=_heartLikeCount;
@property(nonatomic) long long globalFavoriteCount; // @synthesize globalFavoriteCount=_globalFavoriteCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

