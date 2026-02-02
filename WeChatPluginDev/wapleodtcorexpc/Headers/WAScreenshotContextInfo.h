//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WAScreenshotContextInfo : NSObject
{
    unsigned int _showSourceView;
    unsigned int _versionType;
    NSString *_assetId;
    NSString *_appId;
    NSString *_nickname;
    NSString *_iconUrl;
    NSString *_enterPath;
    NSString *_forwardSceneNote;
    unsigned long long _timestamp;
    NSData *_imageData;
    NSString *_imageKey;
    id _weakUserInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_versionType;
+ (void)PBArrayAdd_showSourceView;
+ (void)PBArrayAdd_timestamp;
+ (void)PBArrayAdd_forwardSceneNote;
+ (void)PBArrayAdd_enterPath;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_assetId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int versionType; // @synthesize versionType=_versionType;
@property(nonatomic) __weak id weakUserInfo; // @synthesize weakUserInfo=_weakUserInfo;
@property(copy, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned int showSourceView; // @synthesize showSourceView=_showSourceView;
@property(copy, nonatomic) NSString *forwardSceneNote; // @synthesize forwardSceneNote=_forwardSceneNote;
@property(copy, nonatomic) NSString *enterPath; // @synthesize enterPath=_enterPath;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *assetId; // @synthesize assetId=_assetId;
@property(readonly, copy) NSString *description;
- (id)toXML;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

