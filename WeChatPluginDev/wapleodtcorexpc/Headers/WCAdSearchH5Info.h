//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdSearchH5Info : NSObject
{
    NSString *_searchQuery;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

