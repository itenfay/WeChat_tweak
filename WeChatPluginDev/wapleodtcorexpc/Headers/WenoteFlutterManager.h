//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WenoteFlutterManager : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct WenoteFlutterManagerCppCover cpp_cover;
    struct weak_ptr<wenote::WenoteFlutterManagerDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
+ (id)shareInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)destoryWeNoteFlutterInstanceAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)destoryWeNoteFlutterInstanceAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getWeNoteFlutterInstanceAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getWeNoteFlutterInstanceAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createWeNoteFlutterInstanceAsync:(id)arg1 delegate:(id)arg2 on:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createWeNoteFlutterInstanceAsync:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)zidlObjToHolder;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_9af8a427)getDispatcher;

@end

