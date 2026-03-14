//
// WCPLWeChatCompatibilityHeaders.h
//
// Compatibility declarations layered on top of dumped WeChat headers.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "CMessageWrap.h"
#import "MMUIViewController.h"

@interface MMService : NSObject
@end

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
