//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportSkylineOpConfigItem
{
    unsigned int _exptGroupId;
    unsigned int _hitSrcType;
    unsigned int _appUin;
    unsigned int _jsDataType;
    NSString *_libVersion;
    NSString *_libUpdateTime;
    NSString *_exptParam;
}

+ (id)createWithAppId:(id)arg1 appVersion:(unsigned long long)arg2 appState:(unsigned long long)arg3 libVersion:(id)arg4 libUpdateTime:(id)arg5 exptGroupId:(unsigned int)arg6 exptParam:(id)arg7 hitSrcType:(unsigned int)arg8 appUin:(unsigned int)arg9 jsDataType:(unsigned int)arg10;
- (void).cxx_destruct;
@property(nonatomic) unsigned int jsDataType; // @synthesize jsDataType=_jsDataType;
@property(nonatomic) unsigned int appUin; // @synthesize appUin=_appUin;
@property(nonatomic) unsigned int hitSrcType; // @synthesize hitSrcType=_hitSrcType;
@property(retain, nonatomic) NSString *exptParam; // @synthesize exptParam=_exptParam;
@property(nonatomic) unsigned int exptGroupId; // @synthesize exptGroupId=_exptGroupId;
@property(retain, nonatomic) NSString *libUpdateTime; // @synthesize libUpdateTime=_libUpdateTime;
@property(retain, nonatomic) NSString *libVersion; // @synthesize libVersion=_libVersion;
- (id)reportString;
- (int)reportID;

@end

