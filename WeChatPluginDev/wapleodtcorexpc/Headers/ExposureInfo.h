//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BtnInfo, DrawLotteryInfo, FollowCardBDMchInfo, LayerInfo, NSMutableArray, NSString;

@interface ExposureInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *backgroundImgWhole; // @dynamic backgroundImgWhole;
@property(retain, nonatomic) BtnInfo *btnInfo; // @dynamic btnInfo;
@property(retain, nonatomic) DrawLotteryInfo *drawLotteryInfo; // @dynamic drawLotteryInfo;
@property(retain, nonatomic) NSString *drawLotteryParams; // @dynamic drawLotteryParams;
@property(retain, nonatomic) NSString *exposureInfoModifyParams; // @dynamic exposureInfoModifyParams;
@property(retain, nonatomic) FollowCardBDMchInfo *followCardbdMchInfo; // @dynamic followCardbdMchInfo;
@property(nonatomic) unsigned int isQueryOthers; // @dynamic isQueryOthers;
@property(nonatomic) unsigned int isShowBtn; // @dynamic isShowBtn;
@property(nonatomic) unsigned int isShowLayer; // @dynamic isShowLayer;
@property(retain, nonatomic) LayerInfo *layerInfo; // @dynamic layerInfo;
@property(retain, nonatomic) NSMutableArray *singleExposureInfoList; // @dynamic singleExposureInfoList;
@property(nonatomic) unsigned int userOpertaionType; // @dynamic userOpertaionType;

@end

