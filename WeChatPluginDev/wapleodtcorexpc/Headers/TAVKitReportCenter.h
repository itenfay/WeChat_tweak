//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TAVKitReportCenter : NSObject
{
    NSString *_appID;
    NSString *_directory;
    NSObject<OS_dispatch_queue> *_queue;
    long long _uploadingCount;
    NSString *_appName;
    NSString *_deviceID;
    NSString *_deviceType;
    NSString *_systemVersion;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) long long uploadingCount; // @synthesize uploadingCount=_uploadingCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *directory; // @synthesize directory=_directory;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void)report:(CDUnknownBlockType)arg1;
- (void)reportFile:(id)arg1 commonFields:(id)arg2 isLast:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (id)makeHttpBodyForReportFile:(id)arg1 commonFields:(id)arg2;
- (id)makeCommonReportFields;
- (id)fetchDeviceType;
- (id)init;

@end

