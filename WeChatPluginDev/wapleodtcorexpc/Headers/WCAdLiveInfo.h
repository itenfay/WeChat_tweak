//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdLiveInfo : NSObject
{
    _Bool _showLikeAnimation;
    int _liveType;
    int _liveStatus;
    NSString *_liveParams;
    NSString *_finderUsername;
    NSString *_finderLiveId;
    NSArray *_pendingDescList;
    NSArray *_livingDescList;
    NSArray *_endDescList;
    double _likeAnimationInterval;
    NSArray *_liveCheerIconList;
}

- (void).cxx_destruct;
@property(nonatomic) int liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) NSArray *liveCheerIconList; // @synthesize liveCheerIconList=_liveCheerIconList;
@property(nonatomic) double likeAnimationInterval; // @synthesize likeAnimationInterval=_likeAnimationInterval;
@property(nonatomic) _Bool showLikeAnimation; // @synthesize showLikeAnimation=_showLikeAnimation;
@property(retain, nonatomic) NSArray *endDescList; // @synthesize endDescList=_endDescList;
@property(retain, nonatomic) NSArray *livingDescList; // @synthesize livingDescList=_livingDescList;
@property(retain, nonatomic) NSArray *pendingDescList; // @synthesize pendingDescList=_pendingDescList;
@property(retain, nonatomic) NSString *finderLiveId; // @synthesize finderLiveId=_finderLiveId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *liveParams; // @synthesize liveParams=_liveParams;
@property(nonatomic) int liveType; // @synthesize liveType=_liveType;
- (_Bool)isLiveQueryInfoValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

