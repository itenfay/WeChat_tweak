//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EnterReportInfo
{
    unsigned long long _enterTimeMs;
    NSString *_topVcName;
    unsigned long long _topVcPageId;
    NSString *_lastClickShellKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastClickShellKey; // @synthesize lastClickShellKey=_lastClickShellKey;
@property(nonatomic) unsigned long long topVcPageId; // @synthesize topVcPageId=_topVcPageId;
@property(retain, nonatomic) NSString *topVcName; // @synthesize topVcName=_topVcName;
@property(nonatomic) unsigned long long enterTimeMs; // @synthesize enterTimeMs=_enterTimeMs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

