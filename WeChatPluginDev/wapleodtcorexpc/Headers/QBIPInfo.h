//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface QBIPInfo : NSObject
{
    int _eIPType;
    int _iTotalPollNum;
    int _currPollNum;
    int _currIpIndex;
    double _lifeTimeSince1970;
    NSArray *_ipArrays;
}

@property(nonatomic) int currIpIndex; // @synthesize currIpIndex=_currIpIndex;
@property(retain, nonatomic) NSArray *ipArrays; // @synthesize ipArrays=_ipArrays;
@property(nonatomic) double lifeTimeSince1970; // @synthesize lifeTimeSince1970=_lifeTimeSince1970;
@property(nonatomic) int currPollNum; // @synthesize currPollNum=_currPollNum;
@property(nonatomic) int iTotalPollNum; // @synthesize iTotalPollNum=_iTotalPollNum;
@property(nonatomic) int eIPType; // @synthesize eIPType=_eIPType;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

