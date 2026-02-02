//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventInfo_TemplateVersionInfo, NSString;

@interface FinderEventInfo_VideoTemplateInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cameraPosition; // @dynamic cameraPosition;
@property(retain, nonatomic) NSString *cameraTmplId; // @dynamic cameraTmplId;
@property(nonatomic) unsigned int disableShowFromAlbum; // @dynamic disableShowFromAlbum;
@property(nonatomic) unsigned int disableShowMoreTmpl; // @dynamic disableShowMoreTmpl;
@property(nonatomic) unsigned int disableShowNoTmpl; // @dynamic disableShowNoTmpl;
@property(nonatomic) unsigned int permittedPublishMethodFlag; // @dynamic permittedPublishMethodFlag;
@property(nonatomic) unsigned int tmplType; // @dynamic tmplType;
@property(retain, nonatomic) FinderEventInfo_TemplateVersionInfo *tmplVersionInfo; // @dynamic tmplVersionInfo;

@end

