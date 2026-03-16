//
// WCPLIconImageHelpers.h
//
// 统一 SVG/系统图标构建模板（WAThemeProxy + systemImageNamed fallback）。
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT UIImage * _Nullable WCPLIconImageFromSVGOrSystemSymbols(NSString * _Nullable svg,
                                                                          NSArray<NSString *> * _Nullable fallbackSymbols,
                                                                          CGFloat pointSize);

NS_ASSUME_NONNULL_END

