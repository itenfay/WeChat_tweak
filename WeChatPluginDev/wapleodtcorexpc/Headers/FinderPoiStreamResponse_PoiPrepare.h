//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderPoiStreamResponse_PoiPrepare : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int enablePoiBind; // @dynamic enablePoiBind;
@property(nonatomic) unsigned int enablePoiErrReport; // @dynamic enablePoiErrReport;
@property(nonatomic) unsigned int hasCompanyVerify; // @dynamic hasCompanyVerify;
@property(nonatomic) unsigned int hasFinderAcct; // @dynamic hasFinderAcct;
@property(nonatomic) unsigned int isBrandMerchant; // @dynamic isBrandMerchant;
@property(retain, nonatomic) NSString *poiBindUrl; // @dynamic poiBindUrl;
@property(retain, nonatomic) NSString *poiErrReportUrl; // @dynamic poiErrReportUrl;

@end

