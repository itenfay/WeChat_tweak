//
// ServiceCenter.h
//

#import <Foundation/Foundation.h>

@interface ServiceCenter : NSObject

+ (instancetype)sharedInstance;
+ (instancetype)sharedCenter;
+ (instancetype)defaultCenter;
+ (instancetype)defaultServiceCenter;
+ (instancetype)sharedServiceCenter;

- (id)getService:(Class)serviceClass;

@end
