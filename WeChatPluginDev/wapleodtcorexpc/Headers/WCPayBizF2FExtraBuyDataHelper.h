//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ExtraBuyInfo;

@interface WCPayBizF2FExtraBuyDataHelper : NSObject
{
    _Bool _isGetFavorRequesting;
    ExtraBuyInfo *_data;
    ExtraBuyInfo *_getFavorRespData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ExtraBuyInfo *getFavorRespData; // @synthesize getFavorRespData=_getFavorRespData;
@property(retain, nonatomic) ExtraBuyInfo *data; // @synthesize data=_data;
@property(nonatomic) _Bool isGetFavorRequesting; // @synthesize isGetFavorRequesting=_isGetFavorRequesting;
- (unsigned long long)availableItemsCount;
- (void)clearGetFavorResponseInfo;
- (void)onGetFavorResponded:(id)arg1;
- (id)currentData;
- (unsigned int)selectedItemsAmount;
- (id)unavailableReason;
- (void)setSelectItems:(id)arg1;
@property(nonatomic) _Bool itemSelected;
- (id)favorSubTitle;
- (id)favorSubtitleColor;
- (_Bool)hasMultiItems;
- (_Bool)shouldShowFavorItem;
- (_Bool)shouldEnableFavorItem;
- (id)initWithData:(id)arg1;

@end

