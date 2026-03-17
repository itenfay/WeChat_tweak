//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface BizBoxMrg : NSObject
{
    struct BizBoxMrgBridge *bridge_;
    struct BizBoxMrgCallbackBridge *callback_;
}

- (void)loadHistoryWordingAsync:(unsigned int)arg1;
- (void)getDataAsync:(unsigned int)arg1 sceneType:(unsigned int)arg2 lastLocalId:(unsigned long long)arg3;
- (void)onExposeAsync:(unsigned int)arg1 localId:(unsigned long long)arg2 validExpose:(_Bool)arg3;
- (void)loadFoldBoxCardDataAsync:(unsigned int)arg1;
- (struct BizBoxMrgBridge *)bridge;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)initWithHandle:(struct BizBoxMrgBridge *)arg1;

@end

