//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, RTEGeneratedContentSectionList, RTEGeneratedSectionChangeInfo, RTERange;

@interface RTEGeneratedEditResultInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RTEGeneratedSectionChangeInfo *changeInfo; // @dynamic changeInfo;
@property(retain, nonatomic) NSMutableArray *idList; // @dynamic idList;
@property(retain, nonatomic) NSMutableArray *indexList; // @dynamic indexList;
@property(retain, nonatomic) RTEGeneratedContentSectionList *sectionList; // @dynamic sectionList;
@property(retain, nonatomic) RTERange *selectedRange; // @dynamic selectedRange;

@end

