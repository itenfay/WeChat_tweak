//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonStoreReportInfo, NSString, PersonalDesigner;

@interface StoreEmoticonDesignerProfileJumpConfig : NSObject
{
    _Bool _isPush;
    _Bool _needLeftNavReturn;
    _Bool _needJmp2SingleEmoji;
    _Bool _needJmp2EmoticonTab;
    unsigned int _designerUin;
    PersonalDesigner *_persnalDesigner;
    NSString *_designerId;
    NSString *_extContent;
    long long _extraceScene;
    EmoticonStoreReportInfo *_reportInfo;
    NSString *_oldRedirectUrl;
    NSString *_sdkRequestID;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _addNewPackageBlock;
    CDUnknownBlockType _viewDetailBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType viewDetailBlock; // @synthesize viewDetailBlock=_viewDetailBlock;
@property(copy, nonatomic) CDUnknownBlockType addNewPackageBlock; // @synthesize addNewPackageBlock=_addNewPackageBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(retain, nonatomic) NSString *sdkRequestID; // @synthesize sdkRequestID=_sdkRequestID;
@property(nonatomic) _Bool needJmp2EmoticonTab; // @synthesize needJmp2EmoticonTab=_needJmp2EmoticonTab;
@property(retain, nonatomic) NSString *oldRedirectUrl; // @synthesize oldRedirectUrl=_oldRedirectUrl;
@property(nonatomic) _Bool needJmp2SingleEmoji; // @synthesize needJmp2SingleEmoji=_needJmp2SingleEmoji;
@property(nonatomic) _Bool needLeftNavReturn; // @synthesize needLeftNavReturn=_needLeftNavReturn;
@property(retain, nonatomic) EmoticonStoreReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(nonatomic) long long extraceScene; // @synthesize extraceScene=_extraceScene;
@property(retain, nonatomic) NSString *extContent; // @synthesize extContent=_extContent;
@property(retain, nonatomic) NSString *designerId; // @synthesize designerId=_designerId;
@property(nonatomic) unsigned int designerUin; // @synthesize designerUin=_designerUin;
@property(retain, nonatomic) PersonalDesigner *persnalDesigner; // @synthesize persnalDesigner=_persnalDesigner;
- (id)init;

@end

