//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface TLRecFinderCardWrapper : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(retain, nonatomic) NSMutableArray *finderCardDatas; // @dynamic finderCardDatas;
@property(nonatomic) int finderShowType; // @dynamic finderShowType;
@property(retain, nonatomic) NSString *fromSessionIdInfo; // @dynamic fromSessionIdInfo;
@property(retain, nonatomic) NSString *recSummary; // @dynamic recSummary;
@property(nonatomic) int subType; // @dynamic subType;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

