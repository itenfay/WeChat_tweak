//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface YtSDKKitHelper : NSObject
{
}

+ (id)getMD5WithData:(id)arg1;
+ (id)getmd5WithString:(id)arg1;
+ (id)AES128Decrypt:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)AES128Encrypt:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)parseResStr:(id)arg1;
+ (id)generateEncReq:(id)arg1 requestContent:(id)arg2 appId:(id)arg3 sessionId:(id)arg4 config:(id)arg5;
+ (id)randomStringWithLength:(long long)arg1;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>>)nsstrToSt:(id)arg1;
+ (id)strToNSSt:(struct basic_string<char, std::char_traits<char>, std::allocator<char>>)arg1;
+ (id)yt_getUIBundlePath;
+ (id)yt_imageNamed:(id)arg1;

@end

