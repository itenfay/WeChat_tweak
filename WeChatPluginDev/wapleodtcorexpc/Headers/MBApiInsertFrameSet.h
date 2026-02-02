//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MBFrameSetPosition, NSString;

@interface MBApiInsertFrameSet : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *containerTag; // @dynamic containerTag;
@property(retain, nonatomic) NSString *frameSetName; // @dynamic frameSetName;
@property(nonatomic) _Bool hide; // @dynamic hide;
@property(retain, nonatomic) MBFrameSetPosition *position; // @dynamic position;
@property(retain, nonatomic) NSString *rootId; // @dynamic rootId;
@property(nonatomic) int viewId; // @dynamic viewId;

@end

