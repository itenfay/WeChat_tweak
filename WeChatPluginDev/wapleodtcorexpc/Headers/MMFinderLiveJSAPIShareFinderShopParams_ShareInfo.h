//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveJSAPIShareFinderShopParams_ShareInfo : NSObject
{
    _Bool _showQRCodeEntrance;
    _Bool _showCopyLinkEntrance;
    _Bool _useShopWindowCardV2;
    _Bool _showComplaintEntrance;
    NSString *_finderUsername;
    NSString *_entranceGMsgID;
    unsigned long long _showShareType;
    NSString *_qrCodeEntranceText;
    NSString *_linkContent;
    NSString *_liteQuery;
    NSString *_liteAppId;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *liteAppId; // @synthesize liteAppId=_liteAppId;
@property(copy, nonatomic) NSString *liteQuery; // @synthesize liteQuery=_liteQuery;
@property(nonatomic) _Bool showComplaintEntrance; // @synthesize showComplaintEntrance=_showComplaintEntrance;
@property(copy, nonatomic) NSString *linkContent; // @synthesize linkContent=_linkContent;
@property(nonatomic) _Bool useShopWindowCardV2; // @synthesize useShopWindowCardV2=_useShopWindowCardV2;
@property(nonatomic) _Bool showCopyLinkEntrance; // @synthesize showCopyLinkEntrance=_showCopyLinkEntrance;
@property(copy, nonatomic) NSString *qrCodeEntranceText; // @synthesize qrCodeEntranceText=_qrCodeEntranceText;
@property(nonatomic) _Bool showQRCodeEntrance; // @synthesize showQRCodeEntrance=_showQRCodeEntrance;
@property(nonatomic) unsigned long long showShareType; // @synthesize showShareType=_showShareType;
@property(copy, nonatomic) NSString *entranceGMsgID; // @synthesize entranceGMsgID=_entranceGMsgID;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;

@end

