//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EmoticonDesignerPortfolioPackDataSource : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct EmoticonDesignerPortfolioPackDataSourceCppCover cpp_cover;
    struct weak_ptr<emoticon::EmoticonDesignerPortfolioPackDataSourceDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onDisplayEnded:(int)arg1;
- (_Bool)isPackListHasMore:(int)arg1;
- (id)getStorePackList:(int)arg1;
- (void)fetchPackList:(int)arg1 cleanReq:(_Bool)arg2 needStaticsInfo:(_Bool)arg3 needExposeEmoji:(_Bool)arg4;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_df1580d1)getDispatcher;

@end

