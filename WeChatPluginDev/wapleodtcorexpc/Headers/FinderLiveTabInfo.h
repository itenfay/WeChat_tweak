//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveTabInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(retain, nonatomic) NSString *iconWording; // @dynamic iconWording;
@property(retain, nonatomic) NSString *liveSquareIconUrl; // @dynamic liveSquareIconUrl;
@property(retain, nonatomic) NSMutableArray *liveSquareWordingColor; // @dynamic liveSquareWordingColor;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) _Bool playVoice; // @dynamic playVoice;
@property(nonatomic) _Bool prefechNextTab; // @dynamic prefechNextTab;
@property(nonatomic) _Bool prefechPreTab; // @dynamic prefechPreTab;
@property(nonatomic) _Bool prefechThisTab; // @dynamic prefechThisTab;
@property(retain, nonatomic) NSMutableArray *subTabList; // @dynamic subTabList;
@property(nonatomic) unsigned int tabId; // @dynamic tabId;
@property(retain, nonatomic) NSString *tabName; // @dynamic tabName;
@property(nonatomic) unsigned int tabScene; // @dynamic tabScene;

@end

