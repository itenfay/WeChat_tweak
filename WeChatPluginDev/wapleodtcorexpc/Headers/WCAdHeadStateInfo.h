//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdHeadStateInfo : NSObject
{
    NSString *_unreadStateImageUrl;
    NSString *_readStateImageUrl;
    NSString *_unreadStateDarkImageUrl;
    NSString *_readStateDarkImageUrl;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *readStateDarkImageUrl; // @synthesize readStateDarkImageUrl=_readStateDarkImageUrl;
@property(copy, nonatomic) NSString *unreadStateDarkImageUrl; // @synthesize unreadStateDarkImageUrl=_unreadStateDarkImageUrl;
@property(copy, nonatomic) NSString *readStateImageUrl; // @synthesize readStateImageUrl=_readStateImageUrl;
@property(copy, nonatomic) NSString *unreadStateImageUrl; // @synthesize unreadStateImageUrl=_unreadStateImageUrl;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

