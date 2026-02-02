//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderWindowProductInfo, MMFinderLiveShopSelfOpenParams, NSMutableDictionary;

@interface MMLiveEnterRoomActionModel : NSObject
{
    unsigned long long _type;
    long long _action;
    FinderWindowProductInfo *_productInfo;
    MMFinderLiveShopSelfOpenParams *_openShopSelfParams;
    NSMutableDictionary *_extraInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) MMFinderLiveShopSelfOpenParams *openShopSelfParams; // @synthesize openShopSelfParams=_openShopSelfParams;
@property(retain, nonatomic) FinderWindowProductInfo *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)init;

@end

