//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TencentLBSDataHandler : NSObject
{
}

+ (id)createCLLocWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 origin:(id)arg8;
+ (id)md5:(id)arg1;
+ (struct CLLocationCoordinate2D)WGS84TOGCJ02:(struct CLLocationCoordinate2D)arg1;
+ (id)confuseData:(id)arg1;
+ (id)confuseData:(id)arg1 random:(int)arg2 flag:(_Bool)arg3;
+ (id)ungzipData:(id)arg1;
+ (id)gzipData:(id)arg1;
+ (id)AES256DecryptWithKey:(id)arg1 withData:(id)arg2;
+ (id)AES256EncryptWithKey:(id)arg1 withData:(id)arg2;
+ (id)zlibUncompressData:(id)arg1;
+ (id)zlibCompressData:(id)arg1;

@end

