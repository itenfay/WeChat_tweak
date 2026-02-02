//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WAMediaCastingUpnpService;

@protocol WAMediaCastingUpnpServiceDelegate <NSObject>

@optional
- (void)onMediaCastingUpnpService:(WAMediaCastingUpnpService *)arg1 positionInfoDidChange:(double)arg2 duration:(double)arg3;
- (void)onMediaCastingUpnpService:(WAMediaCastingUpnpService *)arg1 videoPlayerStateDidChange:(unsigned long long)arg2;
- (void)onMediaCastingUpnpService:(WAMediaCastingUpnpService *)arg1 devicesListDidUpdate:(NSArray *)arg2;
- (void)onMediaCastingUpnpServiceDidFinishSearch:(WAMediaCastingUpnpService *)arg1 devicesList:(NSArray *)arg2;
- (void)onMediaCastingUpnpServiceDidStartSearch:(WAMediaCastingUpnpService *)arg1;
@end

