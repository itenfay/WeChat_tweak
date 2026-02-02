//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCFinderRedDotFrequencyInfo;

@interface WCFinderRedDotBusinessReportModel : NSObject
{
    _Bool _isClick;
    _Bool _isClickWithRedDot;
    NSString *_path;
    unsigned long long _businessType;
    NSString *_redDotId;
    long long _accRedDotExpStartTime;
    long long _accRedDotExpCnt;
    long long _accRedDotBanCnt;
    long long _stayTimeMs;
    long long _backStayTimeMs;
    WCFinderRedDotFrequencyInfo *_frequencyInfo;
    long long _cleanAccNType;
    NSMutableDictionary *_extInfoDic;
}

+ (long long)calcRemainPunishMValueFromBanCnt:(long long)arg1 punishStage:(long long)arg2;
+ (long long)calcRemainAccNValueFromExptCnt:(long long)arg1 accStage:(long long)arg2;
+ (_Bool)enableReportLimitInfoFromPath:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extInfoDic; // @synthesize extInfoDic=_extInfoDic;
@property(nonatomic) long long cleanAccNType; // @synthesize cleanAccNType=_cleanAccNType;
@property(retain, nonatomic) WCFinderRedDotFrequencyInfo *frequencyInfo; // @synthesize frequencyInfo=_frequencyInfo;
@property(nonatomic) long long backStayTimeMs; // @synthesize backStayTimeMs=_backStayTimeMs;
@property(nonatomic) long long stayTimeMs; // @synthesize stayTimeMs=_stayTimeMs;
@property(nonatomic) _Bool isClickWithRedDot; // @synthesize isClickWithRedDot=_isClickWithRedDot;
@property(nonatomic) _Bool isClick; // @synthesize isClick=_isClick;
@property(nonatomic) long long accRedDotBanCnt; // @synthesize accRedDotBanCnt=_accRedDotBanCnt;
@property(nonatomic) long long accRedDotExpCnt; // @synthesize accRedDotExpCnt=_accRedDotExpCnt;
@property(nonatomic) long long accRedDotExpStartTime; // @synthesize accRedDotExpStartTime=_accRedDotExpStartTime;
@property(copy, nonatomic) NSString *redDotId; // @synthesize redDotId=_redDotId;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) _Bool hasRedDot;
- (id)genReportInfo;
- (id)initWithPath:(id)arg1 businessType:(unsigned long long)arg2;

@end

