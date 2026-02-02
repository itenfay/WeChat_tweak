//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonStoreReportInfo, NSString, PersonalDesigner;

@interface MMEmoticonDesignerProfilePageContext
{
    _Bool _needLeftNavReturn;
    _Bool _needJmp2SingleEmoji;
    unsigned int _designerUin;
    NSString *_designerId;
    NSString *_oldRedirectUrl;
    PersonalDesigner *_personalDesigner;
    NSString *_sdkRequestID;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _addNewPackageBlock;
    CDUnknownBlockType _viewDetailBlock;
    EmoticonStoreReportInfo *_reportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(copy, nonatomic) CDUnknownBlockType viewDetailBlock; // @synthesize viewDetailBlock=_viewDetailBlock;
@property(copy, nonatomic) CDUnknownBlockType addNewPackageBlock; // @synthesize addNewPackageBlock=_addNewPackageBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) NSString *sdkRequestID; // @synthesize sdkRequestID=_sdkRequestID;
@property(retain, nonatomic) PersonalDesigner *personalDesigner; // @synthesize personalDesigner=_personalDesigner;
@property(retain, nonatomic) NSString *oldRedirectUrl; // @synthesize oldRedirectUrl=_oldRedirectUrl;
@property(nonatomic) _Bool needJmp2SingleEmoji; // @synthesize needJmp2SingleEmoji=_needJmp2SingleEmoji;
@property(nonatomic) _Bool needLeftNavReturn; // @synthesize needLeftNavReturn=_needLeftNavReturn;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
@property(retain, nonatomic) NSString *designerId; // @synthesize designerId=_designerId;
- (_Bool)allowsInEmoticonLimited;
- (id)pageCreator;
- (_Bool)isValid;

@end

