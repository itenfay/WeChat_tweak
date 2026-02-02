//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface FlutterAccountPlugin : NSObject
{
    NSMutableDictionary *_m_map;
    NSMutableDictionary *_m_user_name_map;
    NSMutableDictionary *_headImgDownloadMap;
    NSMutableDictionary *_m_loadInfoMap;
    NSMutableArray *_m_contacts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_contacts; // @synthesize m_contacts=_m_contacts;
@property(readonly, nonatomic) NSMutableDictionary *m_loadInfoMap; // @synthesize m_loadInfoMap=_m_loadInfoMap;
@property(retain, nonatomic) NSMutableDictionary *headImgDownloadMap; // @synthesize headImgDownloadMap=_headImgDownloadMap;
@property(readonly, nonatomic) NSMutableDictionary *m_user_name_map; // @synthesize m_user_name_map=_m_user_name_map;
@property(readonly, nonatomic) NSMutableDictionary *m_map; // @synthesize m_map=_m_map;
- (void)p_report31836ContextAction:(unsigned int)arg1;
- (id)isOverseaUserWithError:(id *)arg1;
- (id)isTeenModeWithError:(id *)arg1;
- (void)onHeadImageChange:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)getUserInfoUsername:(id)arg1 hd:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getSelfUsernameWithError:(id *)arg1;
- (id)getDisplayNameUsername:(id)arg1 error:(id *)arg2;
- (void)getRecentForwardUserInfoMaxCount:(long long)arg1 ignoreChatRoom:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeForwardUserInfo:(id)arg1 error:(id *)arg2;
- (void)getAvatarInfoUsername:(id)arg1 hd:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getUinWithError:(id *)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

