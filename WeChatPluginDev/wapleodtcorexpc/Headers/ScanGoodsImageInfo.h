//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CLLocation, CameraScanGoodsAdInfo, CameraScanGoodsJSAPIInfo, CameraScanGoodsSearchInfo, GoodsObject, NSData, NSMutableArray, NSString, UIImage;

@interface ScanGoodsImageInfo : NSObject
{
    _Bool _isAiCrop;
    _Bool _isUseAi;
    _Bool _forceJump;
    _Bool _needLocation;
    unsigned int _frameID;
    unsigned int _cameraImgW;
    unsigned int _cameraImgH;
    unsigned int _jumpType;
    unsigned int _eventID;
    long long _imageSource;
    long long _businessType;
    long long _businessSubType;
    long long _onlyAcceptResultAction;
    NSData *_imageData;
    unsigned long long _sessionID;
    GoodsObject *_cropObj;
    CameraScanGoodsAdInfo *_adInfo;
    CameraScanGoodsSearchInfo *_searchInfo;
    CameraScanGoodsJSAPIInfo *_jsapiInfo;
    CLLocation *_location;
    NSString *_reuploadFilePath;
    NSMutableArray *_imageInfoList;
    GoodsObject *_matchObj;
    NSString *_reqKey;
    long long _respResultAction;
    NSString *_jumpKeyword;
    NSData *_respBizBuffer;
    NSString *_messageUUID;
    UIImage *_albumImage;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
@property(retain, nonatomic) UIImage *albumImage; // @synthesize albumImage=_albumImage;
@property(copy, nonatomic) NSString *messageUUID; // @synthesize messageUUID=_messageUUID;
@property(retain, nonatomic) NSData *respBizBuffer; // @synthesize respBizBuffer=_respBizBuffer;
@property(nonatomic) _Bool needLocation; // @synthesize needLocation=_needLocation;
@property(retain, nonatomic) NSString *jumpKeyword; // @synthesize jumpKeyword=_jumpKeyword;
@property(nonatomic) unsigned int jumpType; // @synthesize jumpType=_jumpType;
@property(nonatomic) long long respResultAction; // @synthesize respResultAction=_respResultAction;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(retain, nonatomic) GoodsObject *matchObj; // @synthesize matchObj=_matchObj;
@property(nonatomic) _Bool forceJump; // @synthesize forceJump=_forceJump;
@property(retain, nonatomic) NSMutableArray *imageInfoList; // @synthesize imageInfoList=_imageInfoList;
@property(retain, nonatomic) NSString *reuploadFilePath; // @synthesize reuploadFilePath=_reuploadFilePath;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CameraScanGoodsJSAPIInfo *jsapiInfo; // @synthesize jsapiInfo=_jsapiInfo;
@property(retain, nonatomic) CameraScanGoodsSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) CameraScanGoodsAdInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(nonatomic) unsigned int cameraImgH; // @synthesize cameraImgH=_cameraImgH;
@property(nonatomic) unsigned int cameraImgW; // @synthesize cameraImgW=_cameraImgW;
@property(retain, nonatomic) GoodsObject *cropObj; // @synthesize cropObj=_cropObj;
@property(nonatomic) _Bool isUseAi; // @synthesize isUseAi=_isUseAi;
@property(nonatomic) _Bool isAiCrop; // @synthesize isAiCrop=_isAiCrop;
@property(nonatomic) unsigned int frameID; // @synthesize frameID=_frameID;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) long long onlyAcceptResultAction; // @synthesize onlyAcceptResultAction=_onlyAcceptResultAction;
@property(nonatomic) long long businessSubType; // @synthesize businessSubType=_businessSubType;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
@property(nonatomic) long long imageSource; // @synthesize imageSource=_imageSource;
- (unsigned int)getSvrMode;

@end

