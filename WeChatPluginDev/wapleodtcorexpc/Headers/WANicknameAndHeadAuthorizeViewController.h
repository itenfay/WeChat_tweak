//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITableView, WAAuthorizeResultInfo, WANickNameAndHeaderAuthViewModel, WANicknameAndHeadAuthorizeSheetInfo;
@protocol IWAAuthorizeAddAvatarService, WAAuthorizePageDelegate;

@interface WANicknameAndHeadAuthorizeViewController
{
    unsigned int _selectedAvatarId;
    unsigned int _sessionId;
    WANickNameAndHeaderAuthViewModel *_nhaViewModel;
    NSString *_appId;
    id <IWAAuthorizeAddAvatarService> _authorizeAddAvatarProxyService;
    UITableView *_tableView;
}

+ (id)convertAvatarInfoListFromProto:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <IWAAuthorizeAddAvatarService> authorizeAddAvatarProxyService; // @synthesize authorizeAddAvatarProxyService=_authorizeAddAvatarProxyService;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) WANickNameAndHeaderAuthViewModel *nhaViewModel; // @synthesize nhaViewModel=_nhaViewModel;
@property(readonly, nonatomic) unsigned int selectedAvatarId; // @synthesize selectedAvatarId=_selectedAvatarId;
- (id)avatarInfo;
- (id)subViewModel;
- (id)customSubviewClassList;
- (void)onIWAAuthorizeModAvatarSuccess:(id)arg1;
- (void)onIWAAuthorizeAddAvatarSuccess:(id)arg1;
- (void)handleDelAvatarResp:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)deleteAvatar:(id)arg1;
- (void)scrollToCurrentIndex;
- (void)markAvartarIdSelected:(unsigned int)arg1;
- (void)editAvatar:(id)arg1;
- (void)tryAddAvatar;
- (void)reloadData;
- (id)initWithInfo:(id)arg1 appId:(id)arg2;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType acceptAction;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(nonatomic) __weak id <WAAuthorizePageDelegate> authDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<WAAuthorizePageDelegate>",?,W,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) WANicknameAndHeadAuthorizeSheetInfo *info; // @dynamic info;
@property(copy, nonatomic) CDUnknownBlockType rejectAction;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"WAAuthorizeResultInfo",?,R,N

@property(readonly) Class superclass;

@end

