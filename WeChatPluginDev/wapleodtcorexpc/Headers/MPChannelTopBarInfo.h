//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MPChannelTopBarInfo : NSObject
{
    _Bool _isDotNotice;
    _Bool _showGreenDot;
    _Bool _showSmallIcon;
    unsigned int _funcVersion;
    unsigned int _iconType;
    unsigned int _titleType;
    NSString *_title;
    NSString *_appId;
    NSString *_logoUrl;
    unsigned long long _appDebugModeType;
    NSString *_defaultLogoUrl;
    NSString *_dataBuffer;
    NSString *_syncBuffer;
    NSString *_defaultTitle;
    NSString *_informMsgCnt;
    NSString *_smallIconUrl;
    NSString *_appPath;
    NSString *_dmLogoUrl;
    NSString *_dmDefaultLogoUrl;
}

+ (void)initialize;
+ (void)PBArrayAdd_dmDefaultLogoUrl;
+ (void)PBArrayAdd_dmLogoUrl;
+ (void)PBArrayAdd_smallIconUrl;
+ (void)PBArrayAdd_showSmallIcon;
+ (void)PBArrayAdd_informMsgCnt;
+ (void)PBArrayAdd_showGreenDot;
+ (void)PBArrayAdd_appPath;
+ (void)PBArrayAdd_titleType;
+ (void)PBArrayAdd_defaultTitle;
+ (void)PBArrayAdd_iconType;
+ (void)PBArrayAdd_syncBuffer;
+ (void)PBArrayAdd_dataBuffer;
+ (void)PBArrayAdd_defaultLogoUrl;
+ (void)PBArrayAdd_isDotNotice;
+ (void)PBArrayAdd_funcVersion;
+ (void)PBArrayAdd_appDebugModeType;
+ (void)PBArrayAdd_logoUrl;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_title;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *dmDefaultLogoUrl; // @synthesize dmDefaultLogoUrl=_dmDefaultLogoUrl;
@property(copy, nonatomic) NSString *dmLogoUrl; // @synthesize dmLogoUrl=_dmLogoUrl;
@property(copy, nonatomic) NSString *appPath; // @synthesize appPath=_appPath;
@property(copy, nonatomic) NSString *smallIconUrl; // @synthesize smallIconUrl=_smallIconUrl;
@property(nonatomic) _Bool showSmallIcon; // @synthesize showSmallIcon=_showSmallIcon;
@property(copy, nonatomic) NSString *informMsgCnt; // @synthesize informMsgCnt=_informMsgCnt;
@property(nonatomic) _Bool showGreenDot; // @synthesize showGreenDot=_showGreenDot;
@property(nonatomic) unsigned int titleType; // @synthesize titleType=_titleType;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;
@property(copy, nonatomic) NSString *syncBuffer; // @synthesize syncBuffer=_syncBuffer;
@property(copy, nonatomic) NSString *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(copy, nonatomic) NSString *defaultLogoUrl; // @synthesize defaultLogoUrl=_defaultLogoUrl;
@property(nonatomic) _Bool isDotNotice; // @synthesize isDotNotice=_isDotNotice;
@property(nonatomic) unsigned int funcVersion; // @synthesize funcVersion=_funcVersion;
@property(nonatomic) unsigned long long appDebugModeType; // @synthesize appDebugModeType=_appDebugModeType;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSString *description;
- (_Bool)isValid;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

