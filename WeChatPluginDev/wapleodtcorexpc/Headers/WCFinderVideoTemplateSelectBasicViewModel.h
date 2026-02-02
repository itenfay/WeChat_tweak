//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJTemplateListParams, NSData, NSMutableArray;

@interface WCFinderVideoTemplateSelectBasicViewModel : NSObject
{
    _Bool _isFetchingData;
    _Bool _hasFetchData;
    _Bool _continueFlag;
    NSData *_pageBuf;
    NSMutableArray *_videoTemplatesData;
    MJTemplateListParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJTemplateListParams *params; // @synthesize params=_params;
@property(retain, nonatomic) NSMutableArray *videoTemplatesData; // @synthesize videoTemplatesData=_videoTemplatesData;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *pageBuf; // @synthesize pageBuf=_pageBuf;
@property(nonatomic) _Bool hasFetchData; // @synthesize hasFetchData=_hasFetchData;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
- (id)localFirstTemplate;
- (_Bool)hasLocalFirstTemplate;
- (id)mmkvKey;
- (id)getMusicLyricsWording:(id)arg1;
- (void)saveCachedDataWithTemplates:(id)arg1;
- (id)getCachedData;
- (id)videoUrlAtIndex:(long long)arg1;
- (id)descAtIndex:(long long)arg1;
- (id)titleAtIndex:(long long)arg1;
- (id)videoTemplateAtIndex:(long long)arg1;
- (long long)dataCount;
- (_Bool)hasMoreData;
- (void)fetchDataWithPageBuf:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reFetchDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchLocalData;
- (id)initWithParams:(id)arg1;

@end

