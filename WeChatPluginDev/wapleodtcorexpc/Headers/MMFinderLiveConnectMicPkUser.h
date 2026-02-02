//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact;

@interface MMFinderLiveConnectMicPkUser : NSObject
{
    _Bool _isAccept;
    _Bool _isApplicant;
    unsigned int _winningStreakCount;
    unsigned int _boardType;
    unsigned int _seatId;
    NSString *_sdkUserId;
    NSString *_finderUsername;
    WCFinderContact *_contact;
    NSString *_boardKey;
    unsigned long long _genericScore;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int seatId; // @synthesize seatId=_seatId;
@property(nonatomic) unsigned long long genericScore; // @synthesize genericScore=_genericScore;
@property(nonatomic) _Bool isApplicant; // @synthesize isApplicant=_isApplicant;
@property(nonatomic) unsigned int boardType; // @synthesize boardType=_boardType;
@property(retain, nonatomic) NSString *boardKey; // @synthesize boardKey=_boardKey;
@property(nonatomic) unsigned int winningStreakCount; // @synthesize winningStreakCount=_winningStreakCount;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *sdkUserId; // @synthesize sdkUserId=_sdkUserId;
@property(nonatomic) _Bool isAccept; // @synthesize isAccept=_isAccept;
@property(readonly, nonatomic) _Bool isEmptyUser;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

