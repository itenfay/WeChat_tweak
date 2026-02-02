//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WAAppAuthRespData, WAContact;

@interface WAAuthManagerViewController
{
    _Bool _isEditMode;
    WAContact *_contact;
    WAAppAuthRespData *_authData;
    NSMutableArray *_editList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *editList; // @synthesize editList=_editList;
@property(nonatomic) _Bool isEditMode; // @synthesize isEditMode=_isEditMode;
@property(readonly, nonatomic) WAAppAuthRespData *authData; // @synthesize authData=_authData;
@property(readonly, nonatomic) WAContact *contact; // @synthesize contact=_contact;
- (_Bool)isSetNormalToBlackStyle;
- (id)normalTintColor;
- (id)editedItemByDeleteList:(id)arg1;
- (void)onDeleteAppUseUserInfo:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onGetAppAuthInfo:(id)arg1 appid:(id)arg2 errorCode:(int)arg3;
- (void)deleteUserInfo:(id)arg1;
- (void)reloadUI;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContact:(id)arg1 authData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

