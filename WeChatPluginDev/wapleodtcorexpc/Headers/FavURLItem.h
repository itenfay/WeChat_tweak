//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavAppMsgShareItem, NSArray, NSString;

@interface FavURLItem
{
    unsigned int _forwardFlag;
    NSString *_pageTitle;
    NSString *_pageDesc;
    NSString *_thumbUrl;
    NSString *_canvasPageXml;
    NSString *_wsVideoFlowXml;
    FavAppMsgShareItem *_appMsgShareItem;
    NSArray *_excerptList;
    NSString *_extraparam;
    NSString *_link;
}

+ (id)urlItemToXML:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *extraparam; // @synthesize extraparam=_extraparam;
@property(retain, nonatomic) NSArray *excerptList; // @synthesize excerptList=_excerptList;
@property(nonatomic) unsigned int forwardFlag; // @synthesize forwardFlag=_forwardFlag;
@property(retain, nonatomic) FavAppMsgShareItem *appMsgShareItem; // @synthesize appMsgShareItem=_appMsgShareItem;
@property(retain, nonatomic) NSString *wsVideoFlowXml; // @synthesize wsVideoFlowXml=_wsVideoFlowXml;
@property(retain, nonatomic) NSString *canvasPageXml; // @synthesize canvasPageXml=_canvasPageXml;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *pageDesc; // @synthesize pageDesc=_pageDesc;
@property(retain, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;

@end

