//
// WeChatRedEnvelop.h
// Auto-generated from WeChat 8.0.55 headers
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

// ============ Import WeChat 8.0.55 Headers ============

#import "AppEmoticonMessageCellView.h"
#import "AppMessageCellView.h"
#import "BaseMsgContentLogicController.h"
#import "BaseMsgContentViewController.h"
#import "ChatRoomContentViewController.h"
#import "BaseScanLogicController.h"
#import "CBaseContact.h"
#import "CContact.h"
#import "CContactMgr.h"
#import "CEmoticonMgr.h"
#import "CEmoticonWrap.h"
#import "CMessageMgr.h"
#import "CMessageWrap.h"
#import "CShareResourceProvider.h"
#import "CommonMessageCellView.h"
#import "CommonMessageViewModel.h"
#import "ContactInfoViewController.h"
#import "ContactSelectView.h"
#import "ContactSettingViewController.h"
#import "ContactsDataLogic.h"
#import "EmojiInfoObj.h"
#import "EmoticonMessageCellView.h"
#import "HongBaoReq.h"
#import "HongBaoRes.h"
#import "ImageMessageCellView.h"
#import "MMLanguageMgr.h"
#import "MMLoadingView.h"
#import "MMInputToolView.h"
#import "MMObject.h"
#import "MMServiceCenter.h"
#import "MMAppContext.h"
#import "MMCore.h"
#import "MMAppController.h"
#import "MMTableView.h"
#import "MMTableViewInfo.h"
#import "MMUICommonUtil.h"
#import "MMUINavigationController.h"
#import "MMUIView.h"
#import "MMUIViewController.h"
#import "MMWebViewController.h"
#import "MultiSelectContactsViewController.h"
#import "NewQRCodeScanner.h"
#import "NewSettingViewController.h"
#import "SKBuiltinBuffer_t.h"
#import "ScanQRCodeLogicController.h"
#import "TextMessageCellView.h"
#import "TextMessageViewModel.h"
#import "VideoMessageCellView.h"
#import "VoiceMessageCellView.h"
#import "WCBizUtil.h"
#import "WCPluginsMgr.h"
#import "ServiceCenter.h"
#import "WCPayInfoItem.h"
#import "WCRedEnvelopesControlData.h"
#import "WCRedEnvelopesLogicMgr.h"
#import "WCTableViewCellManager.h"
#import "WCTableViewManager.h"
#import "WCTableViewNormalCellManager.h"
#import "WCTableViewSectionManager.h"

// ============ Classes not in 8.0.55 dump ============

@interface MMService : NSObject
@end

// ============ Custom Category Extensions ============

@interface MMUIViewController (WCPLAddition)
- (void)wcpl_handleIgnoreChatRoom:(UISwitch *)sender;
@end

@interface CMessageWrap (WCPLAddition)
- (BOOL)wcpl_isFromSelf;
@end

@interface NSDictionary (WCPLAddition)
- (NSString *)stringForKey:(NSString *)key;
@end

@interface NSString (WCPLAddition)
- (NSDictionary *)JSONDictionary;
@end

@protocol MMUIViewControllerDelegate <NSObject>
- (UIViewController *)getViewController;
@end

@protocol ContactSelectViewDelegate <MMUIViewControllerDelegate>
@end
