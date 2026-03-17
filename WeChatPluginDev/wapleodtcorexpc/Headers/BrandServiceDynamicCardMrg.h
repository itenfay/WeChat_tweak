//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandServiceDynamicCardMrg : NSObject
{
    struct BrandServiceDynamicCardMrgCallbackBridge *callback_;
}

+ (id)shareInstance;
- (_Bool)deleteDynamicCard:(unsigned long long)arg1 dynamicCardType:(unsigned int)arg2;
- (_Bool)setAdCardRequestInfo:(unsigned long long)arg1 adInfo:(id)arg2;
- (_Bool)setFeedsAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (_Bool)setAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (id)getAllDynamicCardInfo:(unsigned int)arg1;
- (void)callOnDynamicCardInfo:(unsigned int)arg1 msgId:(unsigned long long)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4;
- (void)callOnRecFeedsAdServerInfo:(id)arg1;
- (void)callOnAdServerInfo:(id)arg1;
- (void)mockInsertCanvas:(unsigned int)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (struct BrandServiceDynamicCardMrgBridge *)bridge;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end

