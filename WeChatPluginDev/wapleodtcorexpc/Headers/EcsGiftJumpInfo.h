//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EcsJumpHtml5Info, EcsJumpLiteAppInfo, EcsJumpMiniAppInfo, EcsJumpNativeInfo;

@interface EcsGiftJumpInfo
{
    unsigned int _jumpBizType;
    EcsJumpMiniAppInfo *_miniAppInfo;
    EcsJumpLiteAppInfo *_liteAppInfo;
    EcsJumpHtml5Info *_html5Info;
    EcsJumpNativeInfo *_nativeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EcsJumpNativeInfo *nativeInfo; // @synthesize nativeInfo=_nativeInfo;
@property(retain, nonatomic) EcsJumpHtml5Info *html5Info; // @synthesize html5Info=_html5Info;
@property(retain, nonatomic) EcsJumpLiteAppInfo *liteAppInfo; // @synthesize liteAppInfo=_liteAppInfo;
@property(retain, nonatomic) EcsJumpMiniAppInfo *miniAppInfo; // @synthesize miniAppInfo=_miniAppInfo;
@property(nonatomic) unsigned int jumpBizType; // @synthesize jumpBizType=_jumpBizType;
- (id)toXML;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

