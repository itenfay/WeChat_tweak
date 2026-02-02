//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMFinderLiveWinterOlympicTorchInfo : NSObject
{
    _Bool _isTorcher;
    _Bool _isLightTorch;
    _Bool _isStarted;
    _Bool _isJoinRunWith;
    _Bool _isAutoAdd;
    unsigned int _remainingTime;
    unsigned int _startRemainingDay;
    unsigned long long _torcherTotal;
    unsigned long long _certId;
    unsigned long long _joinRunWithTotal;
    NSMutableArray *_bgmUrls;
    NSString *_fromWxUsername;
    NSString *_fromFinderUsername;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAutoAdd; // @synthesize isAutoAdd=_isAutoAdd;
@property(retain, nonatomic) NSString *fromFinderUsername; // @synthesize fromFinderUsername=_fromFinderUsername;
@property(retain, nonatomic) NSString *fromWxUsername; // @synthesize fromWxUsername=_fromWxUsername;
@property(retain, nonatomic) NSMutableArray *bgmUrls; // @synthesize bgmUrls=_bgmUrls;
@property(nonatomic) unsigned int startRemainingDay; // @synthesize startRemainingDay=_startRemainingDay;
@property(nonatomic) unsigned long long joinRunWithTotal; // @synthesize joinRunWithTotal=_joinRunWithTotal;
@property(nonatomic) _Bool isJoinRunWith; // @synthesize isJoinRunWith=_isJoinRunWith;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(nonatomic) _Bool isLightTorch; // @synthesize isLightTorch=_isLightTorch;
@property(nonatomic) unsigned long long certId; // @synthesize certId=_certId;
@property(nonatomic) unsigned long long torcherTotal; // @synthesize torcherTotal=_torcherTotal;
@property(nonatomic) _Bool isTorcher; // @synthesize isTorcher=_isTorcher;
@property(nonatomic) unsigned int remainingTime; // @synthesize remainingTime=_remainingTime;
- (void)updateWithInitTorchLiveResponse:(id)arg1;
@property(readonly, nonatomic) unsigned long long nextCertificateOperation;

@end

