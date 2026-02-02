//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface EmbedExcerptReportItem : NSObject
{
    unsigned int _bizUin;
    unsigned int _appMsgId;
    unsigned int _itemIdx;
    unsigned int _beginOffset;
    unsigned int _endOffset;
    unsigned int _scene;
    unsigned int _opType;
    NSString *_contentMd5;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int opType; // @synthesize opType=_opType;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *contentMd5; // @synthesize contentMd5=_contentMd5;
@property(nonatomic) unsigned int endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) unsigned int beginOffset; // @synthesize beginOffset=_beginOffset;
@property(nonatomic) unsigned int itemIdx; // @synthesize itemIdx=_itemIdx;
@property(nonatomic) unsigned int appMsgId; // @synthesize appMsgId=_appMsgId;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin=_bizUin;
- (void)report;

@end

