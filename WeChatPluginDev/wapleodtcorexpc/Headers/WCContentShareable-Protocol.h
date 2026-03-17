//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"
#import "PBCoding-Protocol.h"

@class NSString;
@protocol WCContentShareable;

@protocol WCContentShareable <NSObject, NSCoding, PBCoding>
+ (NSString *)xmlTag;
+ (id <WCContentShareable>)fromXML:(struct XmlReaderNode_t *)arg1;
+ (_Bool)isSupport:(struct XmlReaderNode_t *)arg1;
- (NSString *)toXML;

@optional
- (NSString *)tailDisplayContent;
- (unsigned long long)tailType;
- (_Bool)checkData;
@end

