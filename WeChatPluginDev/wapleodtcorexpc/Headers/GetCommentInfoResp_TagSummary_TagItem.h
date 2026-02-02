//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface GetCommentInfoResp_TagSummary_TagItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (unsigned long long)hash;
- (_Bool)isEqualToTagItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned int tagCnt; // @dynamic tagCnt;
@property(retain, nonatomic) NSString *tagDesc; // @dynamic tagDesc;
@property(retain, nonatomic) NSString *tagId; // @dynamic tagId;

@end

