//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ScanProductItem : NSObject
{
    int _type;
    int _asyncFlag;
    NSString *_productID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_source;
    NSString *_headerBackgroundUrl;
    NSString *_headerMask;
    NSString *_certification;
    NSString *_certificationUrl;
    NSString *_detailUrl;
    NSString *_thumbUrl;
    NSString *_shareUrl;
    NSString *_playUrl;
    NSString *_feedBackUrl;
    NSString *_introTitle;
    NSString *_introLink;
    NSMutableArray *_actionLists;
    NSMutableArray *_detailList;
    NSMutableArray *_bannerList;
    NSString *_extInfo;
    NSString *_exposeUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *exposeUrl; // @synthesize exposeUrl=_exposeUrl;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSMutableArray *bannerList; // @synthesize bannerList=_bannerList;
@property(retain, nonatomic) NSMutableArray *detailList; // @synthesize detailList=_detailList;
@property(retain, nonatomic) NSMutableArray *actionLists; // @synthesize actionLists=_actionLists;
@property(retain, nonatomic) NSString *introLink; // @synthesize introLink=_introLink;
@property(retain, nonatomic) NSString *introTitle; // @synthesize introTitle=_introTitle;
@property(retain, nonatomic) NSString *feedBackUrl; // @synthesize feedBackUrl=_feedBackUrl;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSString *certificationUrl; // @synthesize certificationUrl=_certificationUrl;
@property(retain, nonatomic) NSString *certification; // @synthesize certification=_certification;
@property(retain, nonatomic) NSString *headerMask; // @synthesize headerMask=_headerMask;
@property(retain, nonatomic) NSString *headerBackgroundUrl; // @synthesize headerBackgroundUrl=_headerBackgroundUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int asyncFlag; // @synthesize asyncFlag=_asyncFlag;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (id)toXml:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

