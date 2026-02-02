//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface KSLyricDecoder : NSObject
{
}

+ (id)decodeDes:(const char *)arg1 size:(long long)arg2;
+ (long long)hexStringToString:(const char *)arg1 stringLength:(long long)arg2 toString:(char *)arg3;
+ (id)decodeQrcFileWithContent:(id)arg1;

@end

