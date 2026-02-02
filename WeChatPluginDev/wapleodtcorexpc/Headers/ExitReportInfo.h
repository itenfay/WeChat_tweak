//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ExitReportInfo
{
    unsigned long long _exitTimeMs;
    NSString *_topVcName;
    unsigned long long _topVcPageId;
    NSString *_clickShellKey;
    unsigned long long _entrySwitch;
    unsigned long long _reddotEnabled;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long reddotEnabled; // @synthesize reddotEnabled=_reddotEnabled;
@property(nonatomic) unsigned long long entrySwitch; // @synthesize entrySwitch=_entrySwitch;
@property(retain, nonatomic) NSString *clickShellKey; // @synthesize clickShellKey=_clickShellKey;
@property(nonatomic) unsigned long long topVcPageId; // @synthesize topVcPageId=_topVcPageId;
@property(retain, nonatomic) NSString *topVcName; // @synthesize topVcName=_topVcName;
@property(nonatomic) unsigned long long exitTimeMs; // @synthesize exitTimeMs=_exitTimeMs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

