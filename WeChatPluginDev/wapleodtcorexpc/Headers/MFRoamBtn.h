//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSString;

@interface MFRoamBtn
{
    unsigned long long m_notifyCode;
    NSString *_lastImageName;
    NSString *_lastBannerString;
    MMTimer *_roamTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *roamTimer; // @synthesize roamTimer=_roamTimer;
@property(copy, nonatomic) NSString *lastBannerString; // @synthesize lastBannerString=_lastBannerString;
@property(copy, nonatomic) NSString *lastImageName; // @synthesize lastImageName=_lastImageName;
- (void)onRoamServiceTerminateRoamBanner;
- (void)onRoamServiceNotifyCode:(unsigned long long)arg1;
- (void)setRoamBannerIcon:(id)arg1 title:(id)arg2;
- (void)setupImage:(id)arg1;
- (void)setupFlowTextView:(id)arg1;
- (void)onGetTransferStat;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

