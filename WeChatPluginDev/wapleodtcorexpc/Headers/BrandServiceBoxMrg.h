//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BrandServiceBoxMrg : NSObject
{
    struct BrandServiceBoxMrgBridge *bridge_;
    struct BrandServiceBoxMrgCallbackBridge *callback_;
}

- (void)loadHistoryWordingAsync:(unsigned long long)arg1;
- (void)getHistoryDataAsync:(unsigned long long)arg1 lastLocalId:(unsigned long long)arg2 fetchSize:(unsigned int)arg3;
- (void)getDataAsync:(unsigned long long)arg1 sceneType:(unsigned int)arg2 lastLocalId:(unsigned long long)arg3;
- (void)onExposeAsync:(unsigned long long)arg1 localId:(unsigned long long)arg2 validExpose:(_Bool)arg3;
- (void)loadFoldBoxCardDataAsync:(unsigned long long)arg1;
- (struct BrandServiceBoxMrgBridge *)bridge;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)initWithHandle:(struct BrandServiceBoxMrgBridge *)arg1;

@end

