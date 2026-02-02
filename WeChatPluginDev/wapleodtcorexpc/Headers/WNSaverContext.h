//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItem, NSDate, NSString, RTESectionMgr, WNContentStorage, WNHtmlStringBuilder;

@interface WNSaverContext
{
    _Bool _inList;
    NSDate *_modifyTime;
    FavoritesItem *_favItem;
    NSString *_remianHTML;
    NSString *_title;
    WNContentStorage *_wnContent;
    RTESectionMgr *_sectionMgr;
    WNHtmlStringBuilder *_htmlBuilder;
    CDUnknownBlockType _saveHandler;
    CDUnknownBlockType _openHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType openHandler; // @synthesize openHandler=_openHandler;
@property(copy, nonatomic) CDUnknownBlockType saveHandler; // @synthesize saveHandler=_saveHandler;
@property(retain, nonatomic) WNHtmlStringBuilder *htmlBuilder; // @synthesize htmlBuilder=_htmlBuilder;
@property(retain, nonatomic) RTESectionMgr *sectionMgr; // @synthesize sectionMgr=_sectionMgr;
@property(retain, nonatomic) WNContentStorage *wnContent; // @synthesize wnContent=_wnContent;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool inList; // @synthesize inList=_inList;
@property(retain, nonatomic) NSString *remianHTML; // @synthesize remianHTML=_remianHTML;
@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) NSDate *modifyTime; // @synthesize modifyTime=_modifyTime;

@end

