//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol WCAccountRegisterViewControllerDelegate <NSObject>
- (unsigned long long)onRegStatus;
- (void)onRegNextWith:(NSString *)arg1 headImage:(UIImage *)arg2;
- (void)onRegNextWith:(NSString *)arg1 countryIsoCode:(NSString *)arg2 phoneNum:(NSString *)arg3 pwd:(NSString *)arg4;
- (_Bool)onRegNextWithISO:(NSString *)arg1 isDefault:(_Bool)arg2;
- (void)onRegBack;
@end

