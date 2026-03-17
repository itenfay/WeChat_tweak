//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UINavigationController, UIViewController, WAPOIInfo;
@protocol WALocationServiceDelegate;

@protocol IWALocationService <NSObject>
+ (void)clearLBSCacheIfNeeded;
+ (struct CLLocationCoordinate2D)getLastUserLocation;
+ (NSString *)getWAQMapAPIKey;
+ (void)initLocationService;
+ (id)createLocationService;
@property(nonatomic) __weak id <WALocationServiceDelegate> delegate;
- (void)getRegionData;
- (void)choosePoiViewController:(UIViewController *)arg1 buttonTitle:(NSString *)arg2;
- (void)chooseLocation:(struct CLLocationCoordinate2D)arg1 viewController:(UIViewController *)arg2 buttonTitle:(NSString *)arg3;
- (void)openLocation:(WAPOIInfo *)arg1 navigationController:(UINavigationController *)arg2;
@end

