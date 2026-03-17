//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BlueIDPool : NSObject
{
}

+ (long long)getDIDByType:(long long)arg1 AndMACString:(id)arg2;
+ (long long)getDIDByType:(long long)arg1 AndMACData:(id)arg2;
+ (int)getDeviceTypeByID:(long long)arg1;
+ (int)getAdapterIndex:(long long)arg1;
+ (long long)getDIDByType:(long long)arg1 AndUuid:(struct __CFUUID *)arg2;
+ (long long)getDIDByType:(long long)arg1 AndIDString:(id)arg2;
+ (long long)getNewSessionIdByType:(long long)arg1;

@end

