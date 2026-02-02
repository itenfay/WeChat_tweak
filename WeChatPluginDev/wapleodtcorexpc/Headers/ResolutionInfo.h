//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface ResolutionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int frameGapTime; // @dynamic frameGapTime;
@property(retain, nonatomic) NSMutableArray *resolutionNodeList; // @dynamic resolutionNodeList;
@property(nonatomic) unsigned int videoHeight; // @dynamic videoHeight;
@property(nonatomic) unsigned int videoWidth; // @dynamic videoWidth;

@end

