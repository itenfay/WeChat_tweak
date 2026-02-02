//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCBlockMonitorConfiguration;
@protocol WCCrashBlockMonitorDelegate;

@interface WCCrashBlockMonitorConfig
{
    _Bool _enableCrash;
    _Bool _enableBlockMonitor;
    _Bool _enableCorruptCrashUpload;
    NSString *_appVersion;
    NSString *_appShortVersion;
    id <WCCrashBlockMonitorDelegate> _blockMonitorDelegate;
    CDUnknownFunctionPointerType _onHandleSignalCallBack;
    CDUnknownFunctionPointerType _onAppendAdditionalInfoCallBack;
    WCBlockMonitorConfiguration *_blockMonitorConfiguration;
    unsigned long long _reportStrategy;
    NSArray *_customStrategy;
}

+ (id)defaultConfiguration;
- (void).cxx_destruct;
@property(nonatomic) _Bool enableCorruptCrashUpload; // @synthesize enableCorruptCrashUpload=_enableCorruptCrashUpload;
@property(retain, nonatomic) NSArray *customStrategy; // @synthesize customStrategy=_customStrategy;
@property(nonatomic) unsigned long long reportStrategy; // @synthesize reportStrategy=_reportStrategy;
@property(retain, nonatomic) WCBlockMonitorConfiguration *blockMonitorConfiguration; // @synthesize blockMonitorConfiguration=_blockMonitorConfiguration;
@property(nonatomic) CDUnknownFunctionPointerType onAppendAdditionalInfoCallBack; // @synthesize onAppendAdditionalInfoCallBack=_onAppendAdditionalInfoCallBack;
@property(nonatomic) CDUnknownFunctionPointerType onHandleSignalCallBack; // @synthesize onHandleSignalCallBack=_onHandleSignalCallBack;
@property(nonatomic) __weak id <WCCrashBlockMonitorDelegate> blockMonitorDelegate; // @synthesize blockMonitorDelegate=_blockMonitorDelegate;
@property(nonatomic) _Bool enableBlockMonitor; // @synthesize enableBlockMonitor=_enableBlockMonitor;
@property(nonatomic) _Bool enableCrash; // @synthesize enableCrash=_enableCrash;
@property(copy, nonatomic) NSString *appShortVersion; // @synthesize appShortVersion=_appShortVersion;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
- (id)description;
- (id)init;

@end

