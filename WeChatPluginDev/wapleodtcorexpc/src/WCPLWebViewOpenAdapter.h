#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT BOOL WCPLWebViewOpenAdapterPresentChoiceIfPossible(id _Nullable source,
                                                                     id _Nullable rawURL);
FOUNDATION_EXPORT BOOL WCPLWebViewOpenAdapterPresentChoiceWithNativeActionIfPossible(id _Nullable source,
                                                                                     id _Nullable rawURL,
                                                                                     dispatch_block_t _Nullable nativeOpenAction);

NS_ASSUME_NONNULL_END
