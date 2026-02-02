//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeNoteCPPInstance : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct WeNoteCPPInstanceCppCover cpp_cover;
    struct weak_ptr<wenote::WeNoteCPPInstanceDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endEditAttachment:(id)arg1;
- (void)beginEditAttachment:(id)arg1;
- (_Bool)isEmpty;
- (_Bool)hasEdited;
- (void)saveNoteAsync:(id)arg1 on:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveNoteAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)getResidualAvailableAttachmentCount;
- (id)getAllContentSectionList;
- (int)getTranslateState;
- (_Bool)isSmallImageMode;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initWithZidlImpl:(id)arg1;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_01c9df31)getDispatcher;

@end

