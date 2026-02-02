//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSDictionary;

@protocol AbstractQTCJSONModelProtocol <NSCopying, NSCoding>
- (NSDictionary *)toDictionaryWithKeys:(NSArray *)arg1;
- (NSDictionary *)toDictionary;
- (id)initWithData:(NSData *)arg1 error:(id *)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1 error:(id *)arg2;
@end

