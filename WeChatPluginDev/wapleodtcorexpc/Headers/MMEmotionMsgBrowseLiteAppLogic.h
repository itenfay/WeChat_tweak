//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CEmoticonWrap, CMessageWrap, EmoticonCustomAddLogicController, EmoticonStoreItem, MMLiteAppViewController, MMScrollActionSheet, NSMutableDictionary, NSString, PersonalDesigner;

@interface MMEmotionMsgBrowseLiteAppLogic : NSObject
{
    long long _emotionScene;
    NSString *_sessionID;
    EmoticonCustomAddLogicController *_emoticonAddLogicController;
    NSString *_feedId;
    NSString *_finderUserName;
    EmoticonStoreItem *_storeItem;
    PersonalDesigner *_designer;
    NSString *_currentDesignerId;
    NSMutableDictionary *_downloadLogicDict;
    CMessageWrap *_messageWrap;
    CEmoticonWrap *_emoticonWrap;
    CEmoticonWrap *_currentPageEmoticonWrap;
    NSString *_appid;
    MMLiteAppViewController *_viewController;
    MMScrollActionSheet *_scrollActionSheet;
    NSString *_operatingMd5;
    CEmoticonWrap *_operatingEmoticonWrap;
}

+ (id)createLogicWithEmoticonWrap:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
+ (id)createLogicWithMessageWrap:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) CEmoticonWrap *operatingEmoticonWrap; // @synthesize operatingEmoticonWrap=_operatingEmoticonWrap;
@property(retain, nonatomic) NSString *operatingMd5; // @synthesize operatingMd5=_operatingMd5;
@property(retain, nonatomic) MMScrollActionSheet *scrollActionSheet; // @synthesize scrollActionSheet=_scrollActionSheet;
@property(nonatomic) __weak MMLiteAppViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) CEmoticonWrap *currentPageEmoticonWrap; // @synthesize currentPageEmoticonWrap=_currentPageEmoticonWrap;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap=_emoticonWrap;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(retain, nonatomic) NSMutableDictionary *downloadLogicDict; // @synthesize downloadLogicDict=_downloadLogicDict;
@property(retain, nonatomic) NSString *currentDesignerId; // @synthesize currentDesignerId=_currentDesignerId;
@property(retain, nonatomic) PersonalDesigner *designer; // @synthesize designer=_designer;
@property(retain, nonatomic) EmoticonStoreItem *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) EmoticonCustomAddLogicController *emoticonAddLogicController; // @synthesize emoticonAddLogicController=_emoticonAddLogicController;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) long long emotionScene; // @synthesize emotionScene=_emotionScene;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)getViewController;
- (_Bool)getEmoticonDesigner:(id)arg1 instanceId:(unsigned long long)arg2 callbackId:(int)arg3;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void)OnEmoticonStoreItemChanged:(id)arg1;
- (void)tryGetAdditionalInfoForFirstEnter;
- (_Bool)getEmoticonDetail:(id)arg1 instanceId:(unsigned long long)arg2 callbackId:(int)arg3;
- (_Bool)getEmoticonImagePathInfo:(id)arg1 instanceId:(unsigned long long)arg2 callbackId:(int)arg3;
- (_Bool)onUpdateEmojiInfo:(id)arg1;
- (_Bool)onUpdateReportInfo:(id)arg1;
- (void)createStore;
- (_Bool)shouldGetDescFromMsgWrap;
- (id)getDesc:(id)arg1;
- (id)getReportFromUsr;
- (id)emoticonWrapForAdd;
- (id)msgWrapForOperation;
- (void)reportBottomCellAction:(unsigned long long)arg1;
- (id)getChatName;
- (void)dealloc;
- (id)initWithEmoticonWrap:(id)arg1 appId:(id)arg2 attachedLiteAppVC:(id)arg3;
- (id)extraDataForExpose;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onFollowEmoticonCamera;
- (void)onSaveEmoticon;
- (void)handleClickActionSheetItemShareFriend:(id)arg1;
- (void)addActionSheetItem:(unsigned long long)arg1 iconImage:(id)arg2 title:(id)arg3 toArray:(id)arg4;
- (void)configRowItems;
- (_Bool)onOpenScrollActionSheet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

