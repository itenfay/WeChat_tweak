//
// MMCore.h
//

#import <Foundation/Foundation.h>

@interface MMCore : NSObject

+ (instancetype)sharedInstance;
+ (instancetype)sharedContext;
+ (instancetype)defaultContext;
+ (instancetype)currentContext;
+ (instancetype)mainContext;
+ (instancetype)defaultInstance;

@end
