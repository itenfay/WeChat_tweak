//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdTimelineAdInfo : NSObject
{
    _Bool _isExpired;
    unsigned int _exposeCnt;
    int _adPosAbs;
    unsigned int _adPosRelative;
    NSString *_traceId;
    NSString *_aid;
    NSString *_snsId;
    unsigned long long _createTime;
    NSString *_tid;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) _Bool isExpired; // @synthesize isExpired=_isExpired;
@property(nonatomic) unsigned int adPosRelative; // @synthesize adPosRelative=_adPosRelative;
@property(nonatomic) int adPosAbs; // @synthesize adPosAbs=_adPosAbs;
@property(nonatomic) unsigned int exposeCnt; // @synthesize exposeCnt=_exposeCnt;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *snsId; // @synthesize snsId=_snsId;
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
- (id)description;
- (id)init;

@end

