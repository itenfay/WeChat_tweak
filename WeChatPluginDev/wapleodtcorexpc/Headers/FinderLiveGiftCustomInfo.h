//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveGiftCustomInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)textCustomizable;
- (_Bool)colorCustomizable;

// Remaining properties
@property(retain, nonatomic) NSString *colorText; // @dynamic colorText;
@property(retain, nonatomic) NSString *decalText; // @dynamic decalText;
@property(nonatomic) unsigned int flag; // @dynamic flag;
@property(retain, nonatomic) NSString *landscapePreviewPagMd5; // @dynamic landscapePreviewPagMd5;
@property(retain, nonatomic) NSString *landscapePreviewPagUrl; // @dynamic landscapePreviewPagUrl;
@property(retain, nonatomic) NSString *previewPagMd5; // @dynamic previewPagMd5;
@property(retain, nonatomic) NSString *previewPagUrl; // @dynamic previewPagUrl;

@end

