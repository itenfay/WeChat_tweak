//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderStreamCardActionInfo, FinderStreamTxtCard, NSData, NSMutableArray, NSString;

@interface FinderStreamCard : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *cardBuffer; // @dynamic cardBuffer;
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(nonatomic) _Bool continueAtTheEnd; // @dynamic continueAtTheEnd;
@property(retain, nonatomic) FinderStreamCardActionInfo *continueAtTheEndActionInfo; // @dynamic continueAtTheEndActionInfo;
@property(nonatomic) unsigned int endAction; // @dynamic endAction;
@property(retain, nonatomic) FinderStreamCardActionInfo *endActionInfo; // @dynamic endActionInfo;
@property(retain, nonatomic) NSString *endWording; // @dynamic endWording;
@property(retain, nonatomic) FinderStreamCardActionInfo *fetchContentActionInfo; // @dynamic fetchContentActionInfo;
@property(nonatomic) unsigned int getRelatedListScene; // @dynamic getRelatedListScene;
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(retain, nonatomic) FinderStreamTxtCard *innerStreamEndTxtCard; // @dynamic innerStreamEndTxtCard;
@property(nonatomic) unsigned long long layoutId; // @dynamic layoutId;
@property(nonatomic) unsigned int linkAction; // @dynamic linkAction;
@property(retain, nonatomic) FinderStreamCardActionInfo *linkActionInfo; // @dynamic linkActionInfo;
@property(retain, nonatomic) NSString *linkWording; // @dynamic linkWording;
@property(retain, nonatomic) NSMutableArray *object; // @dynamic object;
@property(retain, nonatomic) NSMutableArray *objectAction; // @dynamic objectAction;
@property(retain, nonatomic) NSMutableArray *objectActionInfo; // @dynamic objectActionInfo;
@property(retain, nonatomic) FinderStreamCardActionInfo *refreshActionInfo; // @dynamic refreshActionInfo;
@property(retain, nonatomic) NSString *refreshWording; // @dynamic refreshWording;
@property(retain, nonatomic) NSString *sessionBuffer; // @dynamic sessionBuffer;
@property(retain, nonatomic) NSString *subTitleWording; // @dynamic subTitleWording;
@property(retain, nonatomic) NSString *titleWording; // @dynamic titleWording;
@property(nonatomic) unsigned int totalObjectCount; // @dynamic totalObjectCount;
@property(nonatomic) _Bool withoutLink; // @dynamic withoutLink;

@end

