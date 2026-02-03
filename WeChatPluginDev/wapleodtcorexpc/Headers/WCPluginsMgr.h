//
// WCPluginsMgr.h
//

#import <Foundation/Foundation.h>

@interface WCPluginsMgr : NSObject

+ (instancetype)sharedInstance;
- (void)registerControllerWithTitle:(NSString *)title
                             version:(NSString *)version
                          controller:(id)controller;

@end
