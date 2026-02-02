//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MFBackupBtn
{
    unsigned long long _notifyCode;
    unsigned long long _currentSessionCount;
    unsigned long long _totalSessionCount;
    NSString *_lastImageName;
    NSString *_speedString;
    NSString *_leftTimeString;
}

- (void).cxx_destruct;
- (void)setLeftTime:(id)arg1;
- (void)setSpeed:(float)arg1;
- (void)setCurrentSessionCount:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)setNotifyCode:(unsigned long long)arg1;
- (void)setupImage;
- (void)setupFlowTextView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

