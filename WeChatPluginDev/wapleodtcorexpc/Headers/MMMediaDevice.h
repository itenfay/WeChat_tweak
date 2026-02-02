//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface MMMediaDevice
{
}

+ (void)showMediaAuthorizedAlert:(id)arg1 content:(id)arg2;
+ (void)deviceHasMediaPrivilege:(id)arg1 shouldRequestAccessForMedia:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)isLocationAvailable:(CDUnknownBlockType)arg1;
+ (void)isMicroPhoneAvailable:(CDUnknownBlockType)arg1 shouldRequestAccessForMedia:(_Bool)arg2;
+ (void)isAlbumAvailable:(CDUnknownBlockType)arg1;
+ (void)isCameraAvailable:(CDUnknownBlockType)arg1 shouldRequestAccessForMedia:(_Bool)arg2;
+ (void)isMediaDeviceAvailable:(int)arg1 shouldRequestAccessForMedia:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)isMediaDeviceAvailable:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

