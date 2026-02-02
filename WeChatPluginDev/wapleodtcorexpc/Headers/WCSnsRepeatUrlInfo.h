//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCSnsMenuItem;

@interface WCSnsRepeatUrlInfo
{
    _Bool _isShowMenuItem;
    _Bool _isMpUrl;
    unsigned int _invalidTime;
    NSString *_layerId;
    NSString *_expId;
    WCSnsMenuItem *_menuItem;
    NSString *_docId;
    NSString *_extData;
}

+ (void)initialize;
+ (void)PBArrayAdd_isMpUrl;
+ (void)PBArrayAdd_invalidTime;
+ (void)PBArrayAdd_isShowMenuItem;
+ (void)PBArrayAdd_extData;
+ (void)PBArrayAdd_docId;
+ (void)PBArrayAdd_menuItem;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_layerId;
- (void).cxx_destruct;
@property(nonatomic) _Bool isMpUrl; // @synthesize isMpUrl=_isMpUrl;
@property(nonatomic) unsigned int invalidTime; // @synthesize invalidTime=_invalidTime;
@property(nonatomic) _Bool isShowMenuItem; // @synthesize isShowMenuItem=_isShowMenuItem;
@property(retain, nonatomic) NSString *extData; // @synthesize extData=_extData;
@property(retain, nonatomic) NSString *docId; // @synthesize docId=_docId;
@property(retain, nonatomic) WCSnsMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(retain, nonatomic) NSString *expId; // @synthesize expId=_expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId=_layerId;
- (_Bool)shouldClientHideUrlAfterConfirm;
- (_Bool)parseRepeatUrlInfo:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

