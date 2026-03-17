//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface CContactExtendCode : NSObject
{
}

+ (void)decodeKeyContactFieldPurePB:(char *)arg1 size:(unsigned int)arg2 contact:(id)arg3;
+ (void)decodeKeyContactField:(struct XmlReaderNode_t *)arg1 contact:(id)arg2;
+ (void)decodeContactField:(struct XmlReaderNode_t *)arg1 contact:(id)arg2;
+ (void)codeContactField:(struct CFastStr *)arg1 contact:(id)arg2;
+ (_Bool)decodeKeyExtentField:(id)arg1 contact:(id)arg2;
+ (_Bool)decodeExtentField:(id)arg1 contact:(id)arg2;
+ (id)codeExtentField:(id)arg1;
+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t *)arg1 attribute:(const char *)arg2;
+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (unsigned long long)decodeToInteger64:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (id)decodeToString:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (id)decodeToChatRoomDetail:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 ChatRoomDetail:(id)arg3;
+ (id)decodeToPhoneList:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 PhoneList:(id)arg3;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 integer:(unsigned int)arg3;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 string:(id)arg3;

@end

