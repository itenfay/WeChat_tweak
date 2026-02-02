//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAAppBrandPluginNotifyInfo : NSObject
{
    _Bool _isAlreadyDownload;
    unsigned int _debugDevKey;
    NSString *_appid;
    NSString *_versionDesc;
}

+ (void)initialize;
+ (void)PBArrayAdd_versionDesc;
+ (void)PBArrayAdd_debugDevKey;
+ (void)PBArrayAdd_isAlreadyDownload;
+ (void)PBArrayAdd_appid;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *versionDesc; // @synthesize versionDesc=_versionDesc;
@property(nonatomic) unsigned int debugDevKey; // @synthesize debugDevKey=_debugDevKey;
@property(nonatomic) _Bool isAlreadyDownload; // @synthesize isAlreadyDownload=_isAlreadyDownload;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

