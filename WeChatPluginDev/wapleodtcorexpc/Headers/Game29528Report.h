//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GameLaunchReportInfo, NSMutableDictionary, NSString;

@interface Game29528Report : NSObject
{
    _Bool _needReport;
    _Bool _isLaunchApp;
    int _reportStage;
    int _reportResult;
    NSString *_appId;
    NSMutableDictionary *_errorInfoDict;
    NSMutableDictionary *_externInfoDict;
    NSString *_currentUrl;
    NSString *_appStoreUrl;
    GameLaunchReportInfo *_reportInfo;
}

+ (id)reportModelWithAppId:(id)arg1 reportStage:(int)arg2 reportResult:(int)arg3 errorInfoDict:(id)arg4 externInfoDict:(id)arg5 needReport:(_Bool)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) GameLaunchReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) _Bool isLaunchApp; // @synthesize isLaunchApp=_isLaunchApp;
@property(retain, nonatomic) NSString *appStoreUrl; // @synthesize appStoreUrl=_appStoreUrl;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(nonatomic) _Bool needReport; // @synthesize needReport=_needReport;
@property(retain, nonatomic) NSMutableDictionary *externInfoDict; // @synthesize externInfoDict=_externInfoDict;
@property(retain, nonatomic) NSMutableDictionary *errorInfoDict; // @synthesize errorInfoDict=_errorInfoDict;
@property(nonatomic) int reportResult; // @synthesize reportResult=_reportResult;
@property(nonatomic) int reportStage; // @synthesize reportStage=_reportStage;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)toString;
- (void)addErrorInfo:(id)arg1;
- (void)addExternInfo:(id)arg1;
- (void)report;
- (id)init;

@end

