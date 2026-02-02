//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface ShakeMsgItem
{
    _Bool _bIsRead;
    unsigned int _uiType;
    unsigned int _uiCreateTime;
    unsigned long long _ui64SvrMsgId;
    NSString *_nsThumbUrl;
    NSString *_nsTitle;
    NSString *_nsDesc;
    NSString *_nsJumpLink;
    NSString *_nsPid;
}

+ (void)initialize;
+ (void)PBArrayAdd_nsPid;
+ (void)PBArrayAdd_nsJumpLink;
+ (void)PBArrayAdd_nsDesc;
+ (void)PBArrayAdd_nsTitle;
+ (void)PBArrayAdd_nsThumbUrl;
+ (void)PBArrayAdd_bIsRead;
+ (void)PBArrayAdd_uiCreateTime;
+ (void)PBArrayAdd_uiType;
+ (void)PBArrayAdd_ui64SvrMsgId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsPid; // @synthesize nsPid=_nsPid;
@property(retain, nonatomic) NSString *nsJumpLink; // @synthesize nsJumpLink=_nsJumpLink;
@property(retain, nonatomic) NSString *nsDesc; // @synthesize nsDesc=_nsDesc;
@property(retain, nonatomic) NSString *nsTitle; // @synthesize nsTitle=_nsTitle;
@property(retain, nonatomic) NSString *nsThumbUrl; // @synthesize nsThumbUrl=_nsThumbUrl;
@property(nonatomic) unsigned int uiCreateTime; // @synthesize uiCreateTime=_uiCreateTime;
@property(nonatomic) _Bool bIsRead; // @synthesize bIsRead=_bIsRead;
@property(nonatomic) unsigned int uiType; // @synthesize uiType=_uiType;
@property(nonatomic) unsigned long long ui64SvrMsgId; // @synthesize ui64SvrMsgId=_ui64SvrMsgId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

