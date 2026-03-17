//
// MMAppContext.h
//

#import <Foundation/Foundation.h>

@interface MMAppContext : NSObject

+ (instancetype)sharedInstance;
+ (instancetype)sharedContext;
+ (instancetype)defaultContext;
+ (instancetype)currentContext;
+ (instancetype)mainContext;
+ (instancetype)defaultInstance;

@end
