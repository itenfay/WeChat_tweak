//
// WCPLViewTraversalHelpers.h
//
// View 层级遍历相关 helper：统一查找 tableView / cell 与递归收集子 view。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT UITableView * _Nullable WCPLFindContainingTableView(UIView * _Nullable view);
FOUNDATION_EXPORT UITableViewCell * _Nullable WCPLFindContainingTableViewCell(UIView * _Nullable view);

/// 递归收集 root 下满足 targetClass 的 view；若 targetClass 为 nil，则收集所有 UIView。
FOUNDATION_EXPORT void WCPLCollectViewsOfClassOrAllIfNil(UIView * _Nullable root,
                                                        Class _Nullable targetClass,
                                                        NSMutableArray<UIView *> * _Nullable storage);

NS_ASSUME_NONNULL_END

