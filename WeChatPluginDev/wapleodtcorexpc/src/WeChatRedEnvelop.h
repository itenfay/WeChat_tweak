//
// WeChatRedEnvelop.h
//
// Created by dyf on 17/4/6.
// Copyright © 2017 dyf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark - MMObject

@interface MMObject : NSObject

@end

#pragma mark - MMService

@interface MMService : NSObject

@end

#pragma mark - MMUIView

@interface MMUIView : UIView

@end

#pragma mark - MMTableView

@interface MMTableView : UITableView

@end

#pragma mark - MMUIViewController

@interface MMUIViewController : UIViewController

- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)startLoadingWithText:(NSString *)text;
- (void)stopLoading;
- (void)stopLoadingWithFailText:(NSString *)text;
- (void)stopLoadingWithOKText:(NSString *)text;

// Added Method.
- (void)wcpl_handleIgnoreChatRoom:(UISwitch *)sender;

@end

#pragma mark - MMUINavigationController

@interface MMUINavigationController : UINavigationController

@end

#pragma mark - MMUIViewControllerDelegate

@protocol MMUIViewControllerDelegate <NSObject>

- (MMUIViewController *)getViewController;

@end

#pragma mark - BaseScanLogicController

@interface BaseScanLogicController : MMObject

@end

#pragma mark - CShareResourceProvider

@interface CShareResourceProvider : NSObject

+ (id)GetBackGroundView;
+ (id)GetButtonWithTitle:(id)arg1 normalImage:(id)arg2 highlightImage:(id)arg3 andRect:(struct CGRect)arg4;
+ (id)GetContactIndexTitleColor;
+ (id)GetFailReceiverImageWithTriangle:(_Bool)arg1;
+ (id)GetGrayBlueColor;
+ (id)GetLinkBtnWithTitle:(id)arg1;
+ (id)GetLoginLinkColor;
+ (id)GetMessageListTimeColor;
+ (id)GetMessageNodeTimeColor;
+ (id)GetMessageReceiverCoverImage;
+ (id)GetMessageSenderCoverImage;
+ (id)GetNavigationBarTintColor;
+ (id)GetSendMsgDisabledColor;
+ (id)GetShadowLogoImage;
+ (double)GetTableViewSeperatorLineHeight;
+ (id)GetTableViewValueColor;
+ (id)selfCreateImagePath;
+ (id)sharedCShareResourceProvider;

@end

#pragma mark - WXPBGeneratedMessage

@interface WXPBGeneratedMessage : NSObject

@end

#pragma mark - SKBuiltinBuffer_t

@interface SKBuiltinBuffer_t : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *buffer; // @dynamic buffer;

@end

#pragma mark - WCBizUtil

@interface WCBizUtil : NSObject

+ (id)dictionaryWithDecodedComponets:(id)arg1 separator:(id)arg2;

@end

#pragma mark - WCPayInfoItem

@interface WCPayInfoItem : NSObject

@property (retain, nonatomic) NSString *m_c2cNativeUrl; // @synthesize m_c2cNativeUrl;

@end

#pragma mark - CMessageMgr

@class CMessageWrap;

@interface CMessageMgr : MMService

- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4;
// iOS/微信不同版本可能存在 Unique 重载，用于避免重复插入
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4 Unique:(_Bool)arg5;
- (void)AddUniqueLocalMsg:(id)arg1 MsgWrap:(id)arg2;

// 通过会话与服务端 ID 查询消息（用于撤回提示展示原消息摘要）
- (id)GetMsg:(id)arg1 n64SvrID:(long long)arg2;
// 正确的微信原生方法签名 (来自微信逆向头文件)
- (void)DelMsg:(NSString *)chatName MsgWrap:(CMessageWrap *)msgWrap;
- (void)RevokeMsg:(NSString *)chatName MsgWrap:(CMessageWrap *)msgWrap Counter:(unsigned int)counter;
// 表情包消息发送
- (void)AddEmoticonMsg:(NSString *)toUserName MsgWrap:(CMessageWrap *)msgWrap;

@end

#pragma mark - CMessageWrap

@interface CMessageWrap : MMObject

@property (retain, nonatomic) WCPayInfoItem *m_oWCPayInfoItem; // @dynamic m_oWCPayInfoItem;

// 发信人，可能是群或个人
@property (retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
// 收信人
@property (retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
// 消息内容
@property (retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
// 群消息的发信人，具体是群里的哪个人
@property (retain, nonatomic) NSString *m_nsRealChatUsr; // @synthesize m_nsRealChatUsr;

@property (nonatomic) unsigned int m_uiMesLocalID; // @synthesize m_uiMesLocalID;
@property (nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property (nonatomic) unsigned int m_uiMessageType; // @synthesize m_uiMessageType;
@property (nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property (nonatomic) unsigned int m_uiAppDataSize; // @dynamic m_uiAppDataSize;
@property (nonatomic) unsigned int m_uiAppMsgInnerType; // @dynamic m_uiAppMsgInnerType;

@property (nonatomic) long long m_n64MesSvrID; // @synthesize m_n64MesSvrID;

@property (retain, nonatomic) NSString *m_nsDesc; // @dynamic m_nsDesc;
@property (retain, nonatomic) NSString *m_nsAppExtInfo; // @dynamic m_nsAppExtInfo;
@property (retain, nonatomic) NSString *m_nsShareOpenUrl; // @dynamic m_nsShareOpenUrl;
@property (retain, nonatomic) NSString *m_nsShareOriginUrl; // @dynamic m_nsShareOriginUrl;

@property (retain, nonatomic) NSString *m_nsJsAppId; // @dynamic m_nsJsAppId;
@property (retain, nonatomic) NSString *m_nsAppID; // @dynamic m_nsAppID;
@property (retain, nonatomic) NSString *m_nsAppName; // @dynamic m_nsAppName;
@property (retain, nonatomic) NSString *m_nsThumbUrl; // @dynamic m_nsThumbUrl;
@property (retain, nonatomic) NSString *m_nsAppMediaUrl; // @dynamic m_nsAppMediaUrl;
@property (retain, nonatomic) NSString *m_nsTitle; // @dynamic m_nsTitle;
@property (retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;

@property (retain, nonatomic) NSData *m_dtThumbnail; // @synthesize m_dtThumbnail;

// 表情包相关属性
@property (retain, nonatomic) NSString *m_nsEmoticonMD5; // @dynamic m_nsEmoticonMD5;

- (id)initWithMsgType:(long long)arg1;
+ (_Bool)isSenderFromMsgWrap:(id)arg1;

@end

#pragma mark - EmojiInfoObj

@interface EmojiInfoObj : NSObject

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *encryptUrl;
@property (retain, nonatomic) NSString *aesKey;
@property (retain, nonatomic) NSString *designerId;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *externUrl;
@property (retain, nonatomic) NSString *attachedText;
@property (retain, nonatomic) NSString *externMd5;

@end

#pragma mark - CEmoticonWrap

@interface CEmoticonWrap : NSObject

@property (nonatomic) unsigned int m_uiType;
@property (nonatomic) unsigned int m_uiGameType;
@property (nonatomic) unsigned int m_extFlag;
@property (retain, nonatomic) NSString *m_nsAppID;
@property (retain, nonatomic) NSString *m_nsThumbImgPath;
@property (retain, nonatomic) NSData *m_imageData;
@property (retain, nonatomic) EmojiInfoObj *m_emojiInfo;

@end

#pragma mark - CEmoticonMgr

@interface CEmoticonMgr : NSObject

- (CEmoticonWrap *)getEmoticonWrapByMd5:(NSString *)md5;

@end

#pragma mark - MMServiceCenter

@interface MMServiceCenter : NSObject

+ (id)defaultCenter;
- (id)getService:(Class)service;

@end

#pragma mark - MMLanguageMgr

@interface MMLanguageMgr: NSObject

- (id)getStringForCurLanguage:(id)arg1;

@end

#pragma mark - WCRedEnvelopesControlData

@interface WCRedEnvelopesControlData : NSObject

@property (retain, nonatomic) CMessageWrap *m_oSelectedMessageWrap; // @synthesize m_oSelectedMessageWrap;

@end

#pragma mark - WCRedEnvelopesLogicMgr

@interface WCRedEnvelopesLogicMgr : MMService

- (void)GetHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
- (void)OpenRedEnvelopesRequest:(id)params;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;

// Added Method.
- (unsigned int)wcpl_calculateDelaySeconds;

@end

#pragma mark - HongBaoRes

@interface HongBaoRes : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinBuffer_t *retText; // @dynamic retText;
@property (nonatomic) int cgiCmdid; // @dynamic cgiCmdid;

@end

#pragma mark - HongBaoReq

@interface HongBaoReq : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinBuffer_t *reqText; // @dynamic reqText;

@end

#pragma mark - CBaseContact

@interface CBaseContact : NSObject

@end

#pragma mark - Contact

@interface CContact : CBaseContact <NSCoding>

@property (retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property (retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property (retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;

- (id)getContactDisplayName;

@end

#pragma mark - CContactMgr

@interface CContactMgr : MMService

- (id)getSelfContact;
- (id)getContactByName:(id)arg1;
- (id)getContactForSearchByName:(id)arg1;
- (_Bool)getContactsFromServer:(id)arg1;
- (_Bool)isInContactList:(id)arg1;
- (_Bool)addLocalContact:(id)arg1 listType:(unsigned int)arg2;

@end

#pragma mark - WCPluginsMgr

@interface WCPluginsMgr : NSObject

+ (instancetype)sharedInstance;
- (void)registerControllerWithTitle:(NSString *)title version:(NSString *)version controller:(NSString *)controllerClassName;

@end

#pragma mark - ScanQRCodeLogicController

@interface ScanQRCodeLogicController : BaseScanLogicController

@property (nonatomic) unsigned int fromScene; // @synthesize fromScene;

- (id)initWithViewController:(id)arg1 CodeType:(int)arg2;
- (void)tryScanOnePicture:(id)arg1;
- (void)doScanQRCode:(id)arg1;
- (void)showScanResult;

@end

#pragma mark - NewQRCodeScanner

@interface NewQRCodeScanner : MMUIView

- (id)initWithDelegate:(id)arg1 CodeType:(int)arg2;
- (void)notifyResult:(id)arg1 type:(id)arg2 version:(int)arg3 rawData:(id)arg4;

@end

#pragma mark - WCTableViewManager

@interface WCTableViewManager : NSObject

- (void)addSection:(id)arg1;
- (void)clearAllSection;
- (id)getTableView;
- (id)getSectionAt:(unsigned long long)arg1;
- (void)insertSection:(id)arg1 At:(unsigned int)arg2;

@end

#pragma mark - MMTableViewInfo

@interface MMTableViewInfo : WCTableViewManager

+ (double)labelHeight:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;

@end

#pragma mark - WCTableViewSectionManager

@interface WCTableViewSectionManager : NSObject

+ (id)sectionInfoDefaut;
+ (id)sectionInfoHeader:(id)arg1;
+ (id)sectionInfoHeader:(id)arg1 Footer:(id)arg2;
- (void)addCell:(id)arg1;

@end

#pragma mark - WCTableViewCellManager

@interface WCTableViewCellManager : NSObject

+ (id)switchCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 on:(_Bool)arg4;

@end

#pragma mark - WCTableViewNormalCellManager

@interface WCTableViewNormalCellManager : WCTableViewCellManager

+ (id)editorCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 tip:(id)arg4 focus:(_Bool)arg5 autoCorrect:(_Bool)arg6 text:(id)arg7;

+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 accessoryType:(long long)arg4;
+ (id)normalCellForSel:(SEL)arg1 target:(id)arg2 title:(id)arg3 rightValue:(id)arg4 accessoryType:(long long)arg5;
+ (id)normalCellForTitle:(id)arg1 rightValue:(id)arg2;

+ (id)urlInnerBlueCellForTitle:(id)arg1 rightValue:(id)arg2 url:(id)arg3;
+ (id)urlInnerCellForTitle:(id)arg1 url:(id)arg2;

@end

#pragma mark - MMUICommonUtil

@interface MMUICommonUtil : NSObject

+ (id)getBarButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 accessibility:(id)arg5 color:(id)arg6;
+ (id)getBarButtonWithImage:(id)arg1 withHighlightedImage:(id)arg2 withDisabledImage:(id)arg3 withBackGroundImage:(id)arg4 withBackGroundImageHL:(id)arg5 withBackGroundImageDisable:(id)arg6 target:(id)arg7 action:(SEL)arg8 style:(unsigned long long)arg9 accessibilityStr:(id)arg10;
+ (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 accessibility:(id)arg5;
+ (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 accessibility:(id)arg5 color:(id)arg6;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 color:(id)arg5;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4 maxWidth:(double)arg5 color:(id)arg6;
+ (id)getBottomBarButtonWithTitle:(id)arg1 backgroundImageName:(id)arg2 widthMargin:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)getBottomBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4;
+ (void)setBottomBarButtonTitleColor:(id)arg1 withStyle:(unsigned long long)arg2;

@end

#pragma mark - MMLoadingView

@interface MMLoadingView : UIView

@property (retain, nonatomic) UILabel *m_label; // @synthesize m_label;
@property (assign, nonatomic) BOOL m_bIgnoringInteractionEventsWhenLoading; // @synthesize m_bIgnoringInteractionEventsWhenLoading;

- (void)setFitFrame:(long long)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1;

@end

#pragma mark - MMWebViewController

@interface MMWebViewController : MMUIViewController

- (id)initWithURL:(id)arg1 presentModal:(_Bool)arg2 extraInfo:(id)arg3;

@end

#pragma mark - ContactSelectViewDelegate

@protocol ContactSelectViewDelegate <MMUIViewControllerDelegate>

- (void)onSelectContact:(CContact *)arg1;

@end

#pragma mark - ContactSelectView

@interface ContactSelectView : UIView

@property (nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
@property (nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect;
@property (retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;

- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)initData:(unsigned int)arg1;
- (void)initView;
- (void)addSelect:(id)arg1;

@end

#pragma mark - ContactsDataLogic

@interface ContactsDataLogic : MMObject

@property (nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;

@end

#pragma mark - NewSettingViewController

@interface NewSettingViewController : MMUIViewController

- (void)reloadTableData;

// Added Methods.
- (void)wcpl_setting;
- (void)wcpl_handleStepCount:(UITextField *)sender;

//- (void)wcpl_followMyOfficalAccount;

@end

#pragma mark - BaseMsgContentViewController

@interface BaseMsgContentViewController : MMUIViewController

- (id)GetContact;
- (id)m_contact;
- (void)AsyncSendMessage:(id)arg1 replyingMsg:(id)arg2 isPasted:(_Bool)arg3;
- (void)onSendTextMsg:(id)arg1;

@end

#pragma mark - BaseMsgContentLogicController

@interface BaseMsgContentLogicController : NSObject

- (void)SendTextMessage:(id)arg1;
- (void)SendTextMessage:(id)arg1 replyingMessage:(id)arg2 isPasted:(_Bool)arg3;

@end

#pragma mark - CommonMessageViewModel

@interface CommonMessageViewModel : NSObject

@property(readonly, nonatomic) CMessageWrap *messageWrap;

@end

#pragma mark - TextMessageViewModel

@interface TextMessageViewModel : CommonMessageViewModel

@property(readonly, nonatomic) NSString *contentText;

@end

#pragma mark - CommonMessageCellView

@interface CommonMessageCellView : UIView

@property(readonly, nonatomic) CommonMessageViewModel *viewModel;

// WCHook swipe gesture properties (injected via %property)
@property(nonatomic, strong) UIPanGestureRecognizer *wchook_swipeGesture;
@property(nonatomic, strong) UIImpactFeedbackGenerator *wchook_feedbackGenerator;
@property(nonatomic, assign) BOOL wchook_feedbackTriggered;

// WCHook methods
- (void)wchook_setupSwipeGestureIfNeeded;
- (void)wchook_resetSwipeAnimated:(BOOL)animated;
- (void)wchook_handleSwipe:(UIPanGestureRecognizer *)gesture;
- (void)wchook_triggerActionForDirection:(NSInteger)direction;
- (void)wchook_triggerQuoteReply;
- (void)wchook_showSwipeActionMenuForDirection:(NSInteger)direction;
- (void)wchook_performRepeatMessage:(CMessageWrap *)msgWrap;
- (void)wchook_performQuoteReply;
- (void)wchook_performDeleteMessage:(CMessageWrap *)msgWrap;
- (void)wchook_performRevokeMessage:(CMessageWrap *)msgWrap;
- (UIViewController *)wchook_findTopViewController;
- (BaseMsgContentViewController *)wchook_findChatViewController;
- (void)onShowMsgReplyMenuItem:(id)sender;
// 正确的微信原生方法名称 (来自微信逆向头文件)
- (void)onDelete:(id)sender;
- (void)onRevokeMsg:(id)sender;

@end

#pragma mark - TextMessageCellView

@interface TextMessageCellView : CommonMessageCellView

@property(readonly, nonatomic) TextMessageViewModel *viewModel;

@end

#pragma mark - AppMessageCellView

@interface AppMessageCellView : CommonMessageCellView

@property(readonly, nonatomic) CommonMessageViewModel *viewModel;

@end

#pragma mark - ImageMessageCellView

@interface ImageMessageCellView : CommonMessageCellView

@property(readonly, nonatomic) CommonMessageViewModel *viewModel;

@end

#pragma mark - AppEmoticonMessageCellView

@interface AppEmoticonMessageCellView : CommonMessageCellView

@property(readonly, nonatomic) CommonMessageViewModel *viewModel;

@end

#pragma mark - EmoticonMessageCellView

@interface EmoticonMessageCellView : CommonMessageCellView

@property(readonly, nonatomic) CommonMessageViewModel *viewModel;

@end

#pragma mark - VideoMessageCellView

@interface VideoMessageCellView : CommonMessageCellView

@property(readonly, nonatomic) CommonMessageViewModel *viewModel;

@end

#pragma mark - ContactInfoViewController

@interface ContactInfoViewController : MMUIViewController

@property (retain, nonatomic) CContact *m_contact; // @synthesize m_contact;

@end

#pragma mark - ContactSettingViewController

@interface ContactSettingViewController : MMUIViewController

@end

#pragma mark - MultiSelectContactsViewControllerDelegate

@protocol MultiSelectContactsViewControllerDelegate <NSObject>
- (void)onMultiSelectContactReturn:(NSArray *)arg1;

@optional
- (int)getFTSCommonScene;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturnForSns:(NSArray *)arg1;

@end

#pragma mark - MultiSelectContactsViewController

@interface MultiSelectContactsViewController : MMUIViewController

@property (nonatomic) _Bool m_bKeepCurViewAfterSelect; // @synthesize m_bKeepCurViewAfterSelect=_m_bKeepCurViewAfterSelect;
@property (nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
@property (nonatomic) __weak id <MultiSelectContactsViewControllerDelegate> m_delegate; // @synthesize m_delegate;

@end

#pragma mark - NSMutableDictionary-SafeInsert

@interface NSMutableDictionary (SafeInsert)

- (void)safeSetObject:(id)arg1 forKey:(id)arg2;

@end

#pragma mark - NSDictionary_SafeJSON

@interface NSDictionary (NSDictionary_SafeJSON)

- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)int64ForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringForKey:(id)arg1;

@end

#pragma mark - NSString_SBJSON

@interface NSString (NSString_SBJSON)

- (id)JSONArray;
- (id)JSONDictionary;
- (id)JSONValue;

@end

#pragma mark - UINavigationController-LogicController

@interface UINavigationController (LogicController)

- (void)PushViewController:(id)arg1 animated:(_Bool)arg2;

@end
