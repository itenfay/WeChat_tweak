//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAReportOpenMaterialItem, WAWxMaterialOpenInfo;

@interface MMImageActionOpenWeAppListItem
{
    WAReportOpenMaterialItem *_materialItem;
    WAWxMaterialOpenInfo *_openInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAWxMaterialOpenInfo *openInfo; // @synthesize openInfo=_openInfo;
@property(retain, nonatomic) WAReportOpenMaterialItem *materialItem; // @synthesize materialItem=_materialItem;
- (void)handleWithImage;
- (id)init;

@end

