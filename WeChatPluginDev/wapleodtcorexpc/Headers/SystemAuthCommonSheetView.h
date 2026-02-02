//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SystemAuthBizInfo, _TtC6WeChat24SystemAuthCapabilityInfo;

@interface SystemAuthCommonSheetView
{
    _Bool _isComplete;
    CDUnknownBlockType _aggreeBlock;
    CDUnknownBlockType _rejectBlock;
    CDUnknownBlockType _ignoreBlock;
    _TtC6WeChat24SystemAuthCapabilityInfo *_capabilityInfo;
    SystemAuthBizInfo *_bizInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(retain, nonatomic) SystemAuthBizInfo *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) _TtC6WeChat24SystemAuthCapabilityInfo *capabilityInfo; // @synthesize capabilityInfo=_capabilityInfo;
@property(copy, nonatomic) CDUnknownBlockType ignoreBlock; // @synthesize ignoreBlock=_ignoreBlock;
@property(copy, nonatomic) CDUnknownBlockType rejectBlock; // @synthesize rejectBlock=_rejectBlock;
@property(copy, nonatomic) CDUnknownBlockType aggreeBlock; // @synthesize aggreeBlock=_aggreeBlock;
- (void)pageSheetDidAppear;
- (void)pageSheetDidClose:(_Bool)arg1;
- (id)initWithAuthCapability:(unsigned int)arg1 scene:(unsigned long long)arg2;

@end

