//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface RTEAttachmentNativeItem : NSObject
{
    struct TaskIdConvertor task_id_convertor;
    struct RTEAttachmentNativeItemCppCover cpp_cover;
    struct weak_ptr<wcrte::RTEAttachmentNativeItemDispatcher> cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)getDataType;
- (_Bool)isRecording;
- (float)getVoiceDuration;
- (id)getDisplayThumbPath;
- (id)getAttachmentId;
- (int)getAttachmentType;
- (id)getDesc;
- (id)getTitle;
- (id)zidlObjToHolder;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)initWithZidlImpl:(id)arg1;
- (id)initForZidlPrivate;
- (void)setDispatcher:(const void *)arg1;
- (shared_ptr_c61edfa8)getDispatcher;

@end

