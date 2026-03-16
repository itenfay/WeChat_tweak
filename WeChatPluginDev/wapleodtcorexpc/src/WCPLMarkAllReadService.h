//
// WCPLMarkAllReadService.h
//
// “一键已读”服务：供右上角菜单 Hook 调用。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const kWCPLTopRightMenuMarkAllReadID;

FOUNDATION_EXPORT BOOL WCPLMarkAllReadTopRightMenuEnabled(void);
FOUNDATION_EXPORT void WCPLMarkAllReadPresentConfirmAlert(void);

FOUNDATION_EXPORT NSString * _Nullable WCPLTopRightMenuSafeItemIDFromSender(id _Nullable sender);
FOUNDATION_EXPORT UIImage * _Nullable WCPLTopRightMenuMarkAllReadIconImage(void);
FOUNDATION_EXPORT void WCPLTopRightMenuSyncMarkAllReadMenuItem(id _Nullable menuBtn);
FOUNDATION_EXPORT BOOL WCPLTopRightMenuResolveShowIDResult(id _Nullable itemID, BOOL origResult);

NS_ASSUME_NONNULL_END

