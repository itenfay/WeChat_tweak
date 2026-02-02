//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCGameShareAppBrandExtInfo, WCGameShareLiteAppExtInfo;

@interface WCGameShareCardInfo : NSObject
{
    unsigned int _isVideo;
    unsigned int _duration;
    WCGameShareLiteAppExtInfo *_liteAppExtInfo;
    WCGameShareAppBrandExtInfo *_appBrandExtInfo;
    NSString *_gameShareId;
    NSString *_gameShareData;
    NSString *_readText;
}

+ (void)initialize;
+ (void)PBArrayAdd_appBrandExtInfo;
+ (void)PBArrayAdd_readText;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_isVideo;
+ (void)PBArrayAdd_gameShareData;
+ (void)PBArrayAdd_gameShareId;
+ (void)PBArrayAdd_liteAppExtInfo;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *readText; // @synthesize readText=_readText;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) NSString *gameShareData; // @synthesize gameShareData=_gameShareData;
@property(copy, nonatomic) NSString *gameShareId; // @synthesize gameShareId=_gameShareId;
@property(retain, nonatomic) WCGameShareAppBrandExtInfo *appBrandExtInfo; // @synthesize appBrandExtInfo=_appBrandExtInfo;
@property(retain, nonatomic) WCGameShareLiteAppExtInfo *liteAppExtInfo; // @synthesize liteAppExtInfo=_liteAppExtInfo;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

