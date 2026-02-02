//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FeedRecord, NSMutableArray, NSString;

@interface FinderModFeedInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *buttonTipsWording; // @dynamic buttonTipsWording;
@property(retain, nonatomic) NSString *commentTipsWording; // @dynamic commentTipsWording;
@property(retain, nonatomic) NSMutableArray *history; // @dynamic history;
@property(retain, nonatomic) FeedRecord *initialInfo; // @dynamic initialInfo;
@property(nonatomic) unsigned int modifyButtonStatus; // @dynamic modifyButtonStatus;

@end

