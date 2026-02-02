//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface AffRoamBackupRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *conversationList; // @dynamic conversationList;
@property(nonatomic) unsigned long long estimatedSize; // @dynamic estimatedSize;
@property(nonatomic) _Bool isAutoBackup; // @dynamic isAutoBackup;

@end

