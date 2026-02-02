//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface FinderLiveShortcutWordingInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int spamFlag; // @dynamic spamFlag;
@property(retain, nonatomic) NSString *spamWording; // @dynamic spamWording;
@property(retain, nonatomic) NSMutableArray *wordingList; // @dynamic wordingList;
@property(retain, nonatomic) NSMutableArray *wordingTypeList; // @dynamic wordingTypeList;

@end

