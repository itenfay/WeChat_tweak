//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class HbEnvelopSourceLocal, NSString, RedEnvelopesLiteappJumpInfo;

@interface HbEnvelopSource : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *corpName; // @dynamic corpName;
@property(retain, nonatomic) RedEnvelopesLiteappJumpInfo *coverSetLiteappInfo; // @dynamic coverSetLiteappInfo;
@property(retain, nonatomic) NSString *detailLinkAppname; // @dynamic detailLinkAppname;
@property(retain, nonatomic) NSString *detailLinkTitle; // @dynamic detailLinkTitle;
@property(nonatomic) unsigned int detailLinkType; // @dynamic detailLinkType;
@property(retain, nonatomic) NSString *detailLinkUrl; // @dynamic detailLinkUrl;
@property(nonatomic) unsigned int disable; // @dynamic disable;
@property(retain, nonatomic) NSString *disableText; // @dynamic disableText;
@property(retain, nonatomic) NSString *exchangeTitle; // @dynamic exchangeTitle;
@property(retain, nonatomic) NSString *exchangeUrl; // @dynamic exchangeUrl;
@property(nonatomic) unsigned int hasSource; // @dynamic hasSource;
@property(nonatomic) unsigned int isExpired; // @dynamic isExpired;
@property(nonatomic) unsigned int isSelected; // @dynamic isSelected;
@property(nonatomic) unsigned long long lastOptainTime; // @dynamic lastOptainTime;
@property(retain, nonatomic) NSString *leaveText; // @dynamic leaveText;
@property(nonatomic) unsigned int materialFlag; // @dynamic materialFlag;
@property(retain, nonatomic) NSString *materialId; // @dynamic materialId;
@property(nonatomic) unsigned long long obtainTime; // @dynamic obtainTime;
@property(retain, nonatomic) NSString *overtimeLabel; // @dynamic overtimeLabel;
@property(retain, nonatomic) HbEnvelopSourceLocal *sourceObject; // @dynamic sourceObject;
@property(nonatomic) unsigned int subType; // @dynamic subType;
@property(retain, nonatomic) NSString *tempText; // @dynamic tempText;
@property(retain, nonatomic) NSString *timelimitPromoSignature; // @dynamic timelimitPromoSignature;
@property(retain, nonatomic) NSString *timelimitPromoText; // @dynamic timelimitPromoText;
@property(nonatomic) unsigned int userFlag; // @dynamic userFlag;

@end

