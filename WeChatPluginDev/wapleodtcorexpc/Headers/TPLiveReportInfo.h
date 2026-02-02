//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TPLiveReportInfo
{
    _Bool _isUserPay;
    _Bool _isLookBack;
    long long _adPlayLength;
    long long _programId;
    long long _streamId;
    long long _contentId;
    long long _playTime;
    long long _liveType;
    NSString *_cdnServer;
    long long _liveDelay;
}

- (void).cxx_destruct;
@property(nonatomic) long long liveDelay; // @synthesize liveDelay=_liveDelay;
@property(nonatomic) _Bool isLookBack; // @synthesize isLookBack=_isLookBack;
@property(retain, nonatomic) NSString *cdnServer; // @synthesize cdnServer=_cdnServer;
@property(nonatomic) long long liveType; // @synthesize liveType=_liveType;
@property(nonatomic) _Bool isUserPay; // @synthesize isUserPay=_isUserPay;
@property(nonatomic) long long playTime; // @synthesize playTime=_playTime;
@property(nonatomic) long long contentId; // @synthesize contentId=_contentId;
@property(nonatomic) long long streamId; // @synthesize streamId=_streamId;
@property(nonatomic) long long programId; // @synthesize programId=_programId;
@property(nonatomic) long long adPlayLength; // @synthesize adPlayLength=_adPlayLength;
- (long long)playType;

@end

