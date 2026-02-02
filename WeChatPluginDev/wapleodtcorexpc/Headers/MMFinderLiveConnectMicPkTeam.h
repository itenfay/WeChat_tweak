//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveConnectMicPkTeam : NSObject
{
    NSMutableArray *_users;
    long long _pkResult;
    unsigned long long _rank;
    unsigned long long _genericScore;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long genericScore; // @synthesize genericScore=_genericScore;
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(nonatomic) long long pkResult; // @synthesize pkResult=_pkResult;
@property(retain, nonatomic) NSMutableArray *users; // @synthesize users=_users;
@property(readonly, nonatomic) _Bool isEmptyTeam;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

