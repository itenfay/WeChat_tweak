//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface EmoticonFinderDesignerDataSource : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct EmoticonFinderDesignerDataSourceCppCover cpp_cover;
    struct weak_ptr<emoticon::EmoticonFinderDesignerDataSourceDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onDisplayEnded:(int)arg1;
- (_Bool)didFinishFirstFetch:(int)arg1;
- (int)totalEmojiCount:(int)arg1;
- (int)totalEmoticonCount:(int)arg1;
- (_Bool)hasCache:(int)arg1;
- (_Bool)isTypeHasMore:(int)arg1 emoticonType:(int)arg2;
- (id)getStorePackList:(int)arg1;
- (id)getIpSetList:(int)arg1;
- (id)getEmojiInfoList:(int)arg1;
- (void)fetchMoreDataFor:(int)arg1 emoticonType:(int)arg2 cleanReq:(_Bool)arg3;
- (void)startFirstFetch:(int)arg1 needStatics:(_Bool)arg2;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_01425a44)getDispatcher;

@end

