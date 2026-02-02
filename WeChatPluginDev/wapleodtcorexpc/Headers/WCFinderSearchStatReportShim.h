//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSearchStatReportShim : NSObject
{
    struct list<InfoItem, std::allocator<InfoItem>> _recards;
    struct __list_iterator<InfoItem, void *> {
        void *__ptr_;
    } _cursor;
    struct map<NSString *, std::__list_iterator<InfoItem, void *>, RecardEqualID, std::allocator<std::pair<NSString *const, std::__list_iterator<InfoItem, void *>>>> _iterMap;
    NSString *_currentTid;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentTid; // @synthesize currentTid=_currentTid;
- (void)updateCurrentTid:(id)arg1;
- (void)reset;
- (id)collectReadInfoJsonString;
- (_Bool)filterShouldRecardStatMetaModel:(id)arg1;
- (void)onUpdateStatMetaModel:(id)arg1;
- (void *)iterMap;
- (void *)cursor;
- (void *)recards;
- (id)initWithCount:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

