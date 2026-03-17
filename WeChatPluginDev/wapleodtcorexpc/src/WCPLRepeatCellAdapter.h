//
// WCPLRepeatCellAdapter.h
//
// 复读按钮 Cell 布局适配层，统一锚点与菜单矩形解析。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT UIView * _Nullable WCPLRepeatCellAdapterDisplayAnchorView(id _Nullable cell);
FOUNDATION_EXPORT UIView * _Nullable WCPLRepeatCellAdapterBubbleAnchorView(id _Nullable cell);
FOUNDATION_EXPORT CGRect WCPLRepeatCellAdapterMenuRect(id _Nullable cell);

NS_ASSUME_NONNULL_END
