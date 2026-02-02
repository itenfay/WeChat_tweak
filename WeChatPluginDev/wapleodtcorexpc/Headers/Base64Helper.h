//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface Base64Helper : NSObject
{
}

+ (_Bool)isValidedBase64EncodedData:(id)arg1;
+ (_Bool)isValidedBase64EncodedChar:(unsigned short)arg1;
+ (id)decode_data_to_data:(id)arg1;
+ (id)decode_str_to_data:(id)arg1;
+ (id)decode_data_to_str:(id)arg1;
+ (id)decode_str_to_str:(id)arg1;
+ (id)encode_data_to_data:(id)arg1;
+ (id)encode_str_to_data:(id)arg1;
+ (id)encode_data_to_str:(id)arg1;
+ (id)encode_str_to_str:(id)arg1;

@end

