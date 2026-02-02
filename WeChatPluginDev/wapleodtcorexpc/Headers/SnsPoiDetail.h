//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class PoiDetailInfo;

@interface SnsPoiDetail : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (id)getDisplayAddressNameWithOnlyShowPoiName:(_Bool)arg1;
- (unsigned int)getScaleWithDefaultValueIfSvrNotFilled;
- (id)phoneString;
- (id)removeNewline:(id)arg1;
- (id)businessHourString;
- (id)priceTipsString;
- (id)categoryTipsString;
- (id)detailAddressNameWithOnlyShowPoiName:(_Bool)arg1 addressSubType:(int)arg2;
- (id)mainAddressName;

// Remaining properties
@property(nonatomic) int idcredirect; // @dynamic idcredirect;
@property(retain, nonatomic) PoiDetailInfo *poiDetailInfo; // @dynamic poiDetailInfo;
@property(nonatomic) unsigned int realTimeData; // @dynamic realTimeData;
@property(nonatomic) unsigned int scale; // @dynamic scale;
@property(nonatomic) unsigned int sourceFlag; // @dynamic sourceFlag;

@end

