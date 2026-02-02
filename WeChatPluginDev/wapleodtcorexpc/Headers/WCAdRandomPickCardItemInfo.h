//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdRandomPickCardItemInfo : NSObject
{
    NSString *_imageUrl;
    NSString *_title;
    NSString *_cardId;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

