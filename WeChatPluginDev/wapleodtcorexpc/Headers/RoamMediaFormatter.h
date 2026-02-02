//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RoamMediaFormatter : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct RoamMediaFormatterCppCover cpp_cover;
    struct weak_ptr<affroam::RoamMediaFormatterDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getHistoryMediaID:(long long)arg1 suffix:(id)arg2;
- (id)getHistoryThumbMediaID:(long long)arg1 suffix:(id)arg2;
- (id)getFavMediaID:(long long)arg1 suffix:(id)arg2;
- (id)getFavThumbMediaID:(long long)arg1 suffix:(id)arg2;
- (id)getGNDataMediaID:(long long)arg1 index:(int)arg2;
- (id)getGNThumbMediaID:(long long)arg1 index:(int)arg2;
- (id)getThumbMediaID:(long long)arg1;
- (id)getMediaID:(long long)arg1;
- (id)getHDMediaID:(long long)arg1;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_5413576b)getDispatcher;

@end

