//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BizPersonalCenterCellList_WeappInfo, NSString;

@interface BizPersonalCenterCellList_CellInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) NSString *cellContent; // @dynamic cellContent;
@property(nonatomic) int cellName; // @dynamic cellName;
@property(nonatomic) int cellType; // @dynamic cellType;
@property(nonatomic) _Bool h5TypeShowMenu; // @dynamic h5TypeShowMenu;
@property(retain, nonatomic) NSString *h5Url; // @dynamic h5Url;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) BizPersonalCenterCellList_WeappInfo *weappInfo; // @dynamic weappInfo;

@end

