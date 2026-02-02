//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EntranceExposeContent_ExposeRecord;

@interface EntranceExposeContent : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) EntranceExposeContent_ExposeRecord *finderRecord; // @dynamic finderRecord;
@property(retain, nonatomic) EntranceExposeContent_ExposeRecord *friendRecord; // @dynamic friendRecord;
@property(retain, nonatomic) EntranceExposeContent_ExposeRecord *liveRecord; // @dynamic liveRecord;
@property(nonatomic) unsigned int reportTime; // @dynamic reportTime;

@end

