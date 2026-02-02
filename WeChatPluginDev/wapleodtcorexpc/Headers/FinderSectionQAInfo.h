//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiteAppParam, NSMutableArray;

@interface FinderSectionQAInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *answerContentList; // @dynamic answerContentList;
@property(retain, nonatomic) FinderLiteAppParam *qaTabLiteApp; // @dynamic qaTabLiteApp;
@property(nonatomic) unsigned int qaTotalCount; // @dynamic qaTotalCount;

@end

