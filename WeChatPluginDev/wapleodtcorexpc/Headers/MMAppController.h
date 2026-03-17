//
// MMAppController.h
//

#import <Foundation/Foundation.h>

@interface MMAppController : NSObject

+ (instancetype)sharedInstance;
+ (instancetype)sharedContext;
+ (instancetype)defaultContext;
+ (instancetype)currentContext;
+ (instancetype)mainContext;
+ (instancetype)defaultInstance;

@end
