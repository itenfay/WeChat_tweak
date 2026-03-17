//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FastStrUtil : NSObject
{
}

+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t *)arg1 attribute:(const char *)arg2;
+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (id)decodeToString:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 integer:(unsigned int)arg3;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 string:(id)arg3;

@end

