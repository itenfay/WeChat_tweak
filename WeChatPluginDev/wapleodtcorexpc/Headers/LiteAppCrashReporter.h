//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LiteAppCrashReporter : NSObject
{
    NSMutableArray *_datas;
    CDUnknownBlockType _currentLiteAppChangedBlock;
    CDUnknownBlockType _crashReportExtraInfoChangedBlock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType crashReportExtraInfoChangedBlock; // @synthesize crashReportExtraInfoChangedBlock=_crashReportExtraInfoChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType currentLiteAppChangedBlock; // @synthesize currentLiteAppChangedBlock=_currentLiteAppChangedBlock;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
- (void)setCrashReportExtraInfoChangedNotificationBlock:(CDUnknownBlockType)arg1;
- (void)setCurrentLiteAppChangedNotificationBlock:(CDUnknownBlockType)arg1;
- (id)currentLiteApp;
- (id)crashReportExtraInfo;
- (void)removeLiteApp:(id)arg1;
- (void)addLiteApp:(id)arg1;
- (id)init;

@end

