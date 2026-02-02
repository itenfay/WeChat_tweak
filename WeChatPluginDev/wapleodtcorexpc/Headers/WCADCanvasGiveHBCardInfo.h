//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCADCanvasGiveHBCardInfo : NSObject
{
    int _subCardType;
    unsigned int _shareTime;
    NSString *_twistCardId;
    NSString *_giveCardId;
    NSString *_senderUserName;
    NSString *_senderNickName;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int shareTime; // @synthesize shareTime=_shareTime;
@property(retain, nonatomic) NSString *senderNickName; // @synthesize senderNickName=_senderNickName;
@property(retain, nonatomic) NSString *senderUserName; // @synthesize senderUserName=_senderUserName;
@property(nonatomic) int subCardType; // @synthesize subCardType=_subCardType;
@property(retain, nonatomic) NSString *giveCardId; // @synthesize giveCardId=_giveCardId;
@property(retain, nonatomic) NSString *twistCardId; // @synthesize twistCardId=_twistCardId;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

