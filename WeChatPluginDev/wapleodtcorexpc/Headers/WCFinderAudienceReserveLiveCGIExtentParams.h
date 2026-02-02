//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSData, NSString, WCFinderAudienceReserveLiveClientInfo;

@interface WCFinderAudienceReserveLiveCGIExtentParams : NSObject
{
    NSString *_clientInfoStr;
    WCFinderAudienceReserveLiveClientInfo *_clientInfoModel;
    NSString *_qrCodeURL;
    MMFinderLiveTaskId *_liveTaskId;
    NSData *_liveCookies;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(copy, nonatomic) NSString *qrCodeURL; // @synthesize qrCodeURL=_qrCodeURL;
@property(retain, nonatomic) WCFinderAudienceReserveLiveClientInfo *clientInfoModel; // @synthesize clientInfoModel=_clientInfoModel;
@property(copy, nonatomic) NSString *clientInfoStr; // @synthesize clientInfoStr=_clientInfoStr;
- (id)getClientInfo;

@end

